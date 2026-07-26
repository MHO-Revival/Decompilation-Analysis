#!/usr/bin/env python3
"""Static map of which CS commands the shipped MHO client actually CONSUMES.

Reads CryGame.dll straight off disk (no Ghidra / no project lock needed) and reconstructs both
inbound dispatch mechanisms:

  (A) RB-tree handler map  -- `RegisterHandler(cmd, handlerObj)` @0x11223630 (the `call_handler`
      dispatcher's map). Each call site builds `handlerObj{vtbl, ctx, handlerFn, 0}` then passes
      the cmd as an immediate. 979 static registrations.

  (B) Notify listener lists -- inbound packet -> notify router `NetMsgNotifyDispatch_grp0`
      @0x1065ede0 -> per-cmd broadcast stub -> intrusive list at mgr+<per-cmd offset> ->
      `listener->Invoke(cmd, body)`. Listeners are 3-slot delegates {Invoke, GetCtx, GetCmdId}
      with `Invoke` = one fixed 28-byte thunk (`cb(ctx, body)`), so every listener class in the
      image can be enumerated by byte-matching that thunk and reading slot 2 (GetCmdId, always a
      `mov eax,<cmd>; ret`).
      Two flavours show up:
        GEN  -- the generated per-cmd Flash/UI bridge (Invoke inside 0x10610000..0x10616000).
                Its callback only fires `_root.handleLogicNotification(<cmd>)` -- id only, NO
                payload -- so a GEN-only command's fields are parsed and then dropped.
        GAME -- a hand-written game-logic listener (anything else). This is a real consumer.

A command is only acted upon by the client if it has a GAME listener or an (A) handler.

Usage:  python3 cs_consumer_map.py [path/to/CryGame.dll] > cs_consumer_map.tsv
"""
import collections
import struct
import sys

DEFAULT_DLL = ("/home/fallen/Projets/MHO/TencentGame/Monster Hunter Online/"
               "Bin/Client/Bin32/CryGame.dll")
REGISTER_HANDLER = 0x11223630          # RegisterHandler(cmd, handlerObj)
GEN_LISTENER_LO, GEN_LISTENER_HI = 0x10610000, 0x10616000   # generated Flash/UI bridge band
# the one and only listener Invoke thunk: cb = this->fn; if (ctx && fn) fn(ctx, body)
INVOKE_THUNK = bytes.fromhex("558bec8b410485c0740e8b510885d27407ff750c8bc8ffd25dc20800")


def load(path):
    d = open(path, "rb").read()
    pe = struct.unpack_from("<I", d, 0x3C)[0]
    nsec = struct.unpack_from("<H", d, pe + 6)[0]
    optsz = struct.unpack_from("<H", d, pe + 20)[0]
    imgbase = struct.unpack_from("<I", d, pe + 24 + 28)[0]
    secs, off = [], pe + 24 + optsz
    for _ in range(nsec):
        name = d[off:off + 8].rstrip(b"\0").decode("latin1")
        vsz, va, rawsz, rawoff = struct.unpack_from("<IIII", d, off + 8)
        secs.append((name, imgbase + va, min(vsz, rawsz) or vsz, rawoff))
        off += 40
    return d, secs


class Image:
    def __init__(self, path):
        self.raw, self.secs = load(path)
        self.text_name, self.text_va, self.text_sz, self.text_off = \
            next(s for s in self.secs if s[0] == ".text")
        self.text = self.raw[self.text_off:self.text_off + self.text_sz]

    def in_text(self, va):
        return self.text_va <= va < self.text_va + len(self.text)

    def tb(self, va, n):
        o = va - self.text_va
        return self.text[o:o + n]

    def dword(self, va):
        for _n, base, vsz, ro in self.secs:
            if base <= va < base + vsz:
                return struct.unpack_from("<I", self.raw, ro + (va - base))[0]
        return None

    def find_data(self, pattern, sections=(".rdata", ".data")):
        """yield VAs in the given sections whose bytes equal `pattern`"""
        for name, base, vsz, ro in self.secs:
            if name not in sections:
                continue
            blob = self.raw[ro:ro + vsz]
            i = 0
            while True:
                j = blob.find(pattern, i)
                if j < 0:
                    break
                yield base + j
                i = j + 1

    def find_text(self, pattern):
        i = 0
        while True:
            j = self.text.find(pattern, i)
            if j < 0:
                break
            yield self.text_va + j
            i = j + 1

    def rel32_sites(self, target):
        """every CALL/JMP rel32 in .text whose target is `target` (works without disassembly)"""
        out = []
        buf = self.text
        for i in range(len(buf) - 5):
            if buf[i] not in (0xE8, 0xE9):
                continue
            rel = struct.unpack_from("<i", buf, i + 1)[0]
            site = self.text_va + i
            if site + 5 + rel == target:
                out.append(site)
        return out

    def const_ret(self, fn):
        """`mov eax, imm32; ret[n]` -> imm32, else None"""
        if fn is None or not self.in_text(fn):
            return None
        b = self.tb(fn, 8)
        if len(b) >= 6 and b[0] == 0xB8 and b[5] in (0xC3, 0xC2):
            return struct.unpack_from("<I", b, 1)[0]
        return None


def handler_map(img):
    """(A) cmd -> [(handlerFn, siteVA)] from the RegisterHandler call sites"""
    out = collections.defaultdict(list)
    for site in img.rel32_sites(REGISTER_HANDLER):
        win = img.tb(site - 0x70, 0x70)
        cmd = None
        for k in range(len(win) - 5, -1, -1):           # last `push imm32` before the call
            if win[k] == 0x68:
                v = struct.unpack_from("<I", win, k + 1)[0]
                if 0 < v < 0x10000:
                    cmd = v
                    break
        fn = None
        for k in range(len(win) - 7, -1, -1):           # last `mov [reg+8], imm32` (handlerFn slot)
            if win[k] == 0xC7 and (win[k + 1] & 0xF8) == 0x40 and win[k + 2] == 0x08:
                v = struct.unpack_from("<I", win, k + 3)[0]
                if img.in_text(v):
                    fn = v
                    break
        if cmd is not None:
            out[cmd].append((fn, site))
    return out


def notify_listeners(img):
    """(B) cmd -> [(kind, invokeVA, vtblVA, cbVA)] for every listener class in the image"""
    out = collections.defaultdict(list)
    for invoke in img.find_text(INVOKE_THUNK):
        for vtbl in img.find_data(struct.pack("<I", invoke)):
            cmd = img.const_ret(img.dword(vtbl + 8))    # slot 2 = GetCmdId
            if cmd is None:
                continue
            kind = "GEN" if GEN_LISTENER_LO <= invoke < GEN_LISTENER_HI else "GAME"
            out[cmd].append((kind, invoke, vtbl, construction_cb(img, vtbl)))
    return out


def construction_cb(img, vtbl):
    """the callback a listener of this class is built with: `mov [reg], vtbl` then `mov [reg+8], cb`"""
    for site in img.find_text(struct.pack("<I", vtbl)):
        win = img.tb(site - 4, 0x20)
        for k in range(len(win) - 7):
            if win[k] == 0xC7 and win[k + 1] in (0x40, 0x41, 0x43, 0x46, 0x47) and win[k + 2] == 0x08:
                v = struct.unpack_from("<I", win, k + 3)[0]
                if img.in_text(v):
                    return v
    return None


def main():
    img = Image(sys.argv[1] if len(sys.argv) > 1 else DEFAULT_DLL)
    hm = handler_map(img)
    nl = notify_listeners(img)
    print("#cmd\thex\tconsumed\thandlerMapFn\tgameListenerCb\tgameListenerInvoke\tgenListener")
    for cmd in sorted(set(hm) | set(nl)):
        hfns = [hex(f) for f, _ in hm.get(cmd, []) if f]
        game = [(cb, inv) for kind, inv, _vt, cb in nl.get(cmd, []) if kind == "GAME"]
        gen = [inv for kind, inv, _vt, _cb in nl.get(cmd, []) if kind == "GEN"]
        consumed = "YES" if (cmd in hm or game) else "NO(ui-ping-only)" if gen else "NO"
        print("\t".join([
            str(cmd), hex(cmd), consumed,
            ",".join(hfns) or "-",
            ",".join(hex(cb) for cb, _ in game if cb) or "-",
            ",".join(hex(i) for _, i in game) or "-",
            ",".join(hex(i) for i in gen) or "-",
        ]))


if __name__ == "__main__":
    main()
