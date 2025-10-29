// Alternative name is '_ZN63_$LT$std..ffi..os_str..OsString$u20$as$u20$core..fmt..Debug$GT$3fmt17hf3778261d0290953E'
// Alternative name is '_ZN55_$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$3fmt17h60cdc3776b290b97E'
int __fastcall <std::sys::unix::os_str::Buf as core::fmt::Debug>::fmt(int a1, int a2)
{
  __int64 v4; // [sp+0h] [bp-10h] BYREF
  __int64 v5; // [sp+8h] [bp-8h] BYREF

  v5 = core::str::lossy::Utf8Chunks::new(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8));
  v4 = core::str::lossy::Utf8Chunks::debug(&v5);
  return <core::str::lossy::Debug as core::fmt::Debug>::fmt(&v4, a2);
}
