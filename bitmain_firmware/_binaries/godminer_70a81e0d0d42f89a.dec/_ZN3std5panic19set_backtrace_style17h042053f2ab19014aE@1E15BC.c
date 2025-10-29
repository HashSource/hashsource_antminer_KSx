int __fastcall std::panic::set_backtrace_style(unsigned __int8 a1)
{
  int result; // r0

  result = a1 + 1;
  __dmb(0xBu);
  dword_30DF8C = result;
  return result;
}
