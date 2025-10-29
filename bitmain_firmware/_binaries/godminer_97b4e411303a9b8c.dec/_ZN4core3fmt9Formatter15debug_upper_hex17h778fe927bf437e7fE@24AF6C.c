int __fastcall core::fmt::Formatter::debug_upper_hex(int a1)
{
  return (*(unsigned __int8 *)(a1 + 24) >> 5) & 1;
}
