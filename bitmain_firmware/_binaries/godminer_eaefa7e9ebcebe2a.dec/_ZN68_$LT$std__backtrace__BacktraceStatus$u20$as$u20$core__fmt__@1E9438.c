int __fastcall <std::backtrace::BacktraceStatus as core::fmt::Debug>::fmt(unsigned __int8 *a1, int a2)
{
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, *(&off_2DFF0C + *a1), dword_2A7450[*a1]);
}
