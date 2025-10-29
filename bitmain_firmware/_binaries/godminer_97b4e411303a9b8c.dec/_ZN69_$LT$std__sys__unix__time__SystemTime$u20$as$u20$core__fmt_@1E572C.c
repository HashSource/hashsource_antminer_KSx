// Alternative name is '_ZN58_$LT$std..time..SystemTime$u20$as$u20$core..fmt..Debug$GT$3fmt17h90206586cbac51c0E'
int __fastcall <std::sys::unix::time::SystemTime as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  _BYTE v6[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct(v6, a2, aSystemtime, 10);
  v3 = core::fmt::builders::DebugStruct::field(v6, aTvSec, 6, a1, &off_2E0BE0);
  v4 = core::fmt::builders::DebugStruct::field(v3, aTvNsec, 7, a1 + 8, &off_2E04C0);
  return core::fmt::builders::DebugStruct::finish(v4);
}
