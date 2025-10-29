// Alternative name is '_ZN73_$LT$std..sys..unix..time..inner..Instant$u20$as$u20$core..fmt..Debug$GT$3fmt17h049c00305a5353f7E'
int __fastcall <std::time::Instant as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _BYTE *v3; // r0
  unsigned __int8 *v4; // r0
  _BYTE v6[8]; // [sp+8h] [bp-8h] BYREF

  core::fmt::Formatter::debug_struct((int)v6, a2, (int)aInstant, 7);
  v3 = core::fmt::builders::DebugStruct::field(v6, (int)aTvSec, 6u, a1, (int)&off_2CABE0);
  v4 = core::fmt::builders::DebugStruct::field(v3, (int)aTvNsec, 7u, a1 + 8, (int)&off_2CA4C0);
  return core::fmt::builders::DebugStruct::finish(v4);
}
