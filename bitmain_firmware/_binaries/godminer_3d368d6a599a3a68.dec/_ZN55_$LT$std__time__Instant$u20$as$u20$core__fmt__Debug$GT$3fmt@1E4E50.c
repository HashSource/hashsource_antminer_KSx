// Alternative name is '_ZN73_$LT$std..sys..unix..time..inner..Instant$u20$as$u20$core..fmt..Debug$GT$3fmt17h049c00305a5353f7E'
int __fastcall <std::time::Instant as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  _BYTE v6[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct(v6, a2, aInstant, 7);
  v3 = core::fmt::builders::DebugStruct::field(v6, aTvSec, 6, a1, &off_2DFBE0);
  v4 = core::fmt::builders::DebugStruct::field(v3, aTvNsec, 7, a1 + 8, &off_2DF4C0);
  return core::fmt::builders::DebugStruct::finish(v4);
}
