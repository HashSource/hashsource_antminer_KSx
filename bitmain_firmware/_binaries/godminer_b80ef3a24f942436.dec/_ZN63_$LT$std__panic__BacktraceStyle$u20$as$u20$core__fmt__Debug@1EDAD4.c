int __fastcall <std::panic::BacktraceStyle as core::fmt::Debug>::fmt(unsigned __int8 *a1, _DWORD *a2)
{
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, *(&off_2EAFFC + *a1), 5 - *a1);
}
