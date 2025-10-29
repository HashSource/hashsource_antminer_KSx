int __fastcall core::fmt::Formatter::sign_minus(int a1)
{
  return (*(unsigned __int8 *)(a1 + 24) >> 1) & 1;
}
