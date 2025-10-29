// Alternative name is '_ZN60_$LT$std..ffi..os_str..OsStr$u20$as$u20$core..fmt..Debug$GT$3fmt17h4fa8c934a1eae98aE'
// Alternative name is '_ZN52_$LT$std..path..Path$u20$as$u20$core..fmt..Debug$GT$3fmt17h8f2eded9d7483991E'
int __fastcall <std::sys::unix::os_str::Slice as core::fmt::Debug>::fmt(int a1, int a2, int a3)
{
  __int64 v5; // [sp+0h] [bp-10h] BYREF
  __int64 v6; // [sp+8h] [bp-8h] BYREF

  v6 = core::str::lossy::Utf8Chunks::new(a1, a2);
  v5 = core::str::lossy::Utf8Chunks::debug(&v6);
  return <core::str::lossy::Debug as core::fmt::Debug>::fmt(&v5, a3);
}
