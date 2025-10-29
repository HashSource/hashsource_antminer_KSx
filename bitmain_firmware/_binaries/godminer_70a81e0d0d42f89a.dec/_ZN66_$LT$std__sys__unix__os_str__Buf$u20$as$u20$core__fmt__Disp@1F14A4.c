int __fastcall <std::sys::unix::os_str::Buf as core::fmt::Display>::fmt(int a1, int a2)
{
  return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), a2);
}
