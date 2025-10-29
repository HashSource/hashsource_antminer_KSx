int __fastcall core::fmt::Formatter::sign_plus(int a1)
{
  return *(_DWORD *)(a1 + 24) & 1;
}
