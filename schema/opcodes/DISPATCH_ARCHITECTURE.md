# MHO client message-dispatch architecture (verified)

## What was verified
- `NetMsgNotifyDispatch_grp0_1065ede0` (@1065ede0): a real command dispatcher. Reads the 16-bit
  cmd id (`*param_1`), and for id < 0x202 does `switch((&DAT_106639eb)[id])` -> calls a per-event
  **notifier stub** (contiguous block at 0x1061c520+). Each notifier walks a linked list of
  registered listeners and calls `listener->vtbl[3](eventId, arg)` (eventId = 1,2,3...).

## Architecture
    opcode  ->  group dispatcher (switch on cmd id)
            ->  per-event notifier stub  (fan-out, ~40-64 bytes each)
            ->  runtime-registered listener callbacks  <-- actual per-command logic

The terminal handlers (business logic) are **subscribers registered dynamically at runtime**;
they are NOT statically bound to an opcode in any table. So there is no static
opcode -> business-handler map to extract (unlike the 120 RMIs, which ARE statically bound).

## Practical guidance for the server rebuild
- Protocol routing = the opcode map (schema/opcodes/) + RMI map (schema/rmi/) + TLV payloads.
- Per-command server behavior: reimplement from the recovered game-logic rounds
  (C*Info schema, combat, economy, skills, etc.), not from a client handler table.

## Caution (why no bulk rename)
A tinyFrac/notifier heuristic over-selects: many switch functions with small-function cases are
Behavior-Tree fact dispatchers, math helpers, or accessors (verified: FUN_10c44370=clamp,
FUN_1025dfb0=BT fact cast, FUN_1134aee0=field accessor). Candidate list kept in dispatchers2.tsv
for manual, per-function verification — not auto-renamed.
