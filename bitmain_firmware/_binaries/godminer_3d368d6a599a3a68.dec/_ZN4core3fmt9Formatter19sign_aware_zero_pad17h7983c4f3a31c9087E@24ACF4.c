int __fastcall core::fmt::Formatter::sign_aware_zero_pad(int a1)
{
  return (*(unsigned __int8 *)(a1 + 24) >> 3) & 1;
}
