int __fastcall <std::path::Display as core::fmt::Display>::fmt(int *a1, int *a2)
{
  return <std::sys::unix::os_str::Slice as core::fmt::Display>::fmt(*a1, a1[1], a2);
}
