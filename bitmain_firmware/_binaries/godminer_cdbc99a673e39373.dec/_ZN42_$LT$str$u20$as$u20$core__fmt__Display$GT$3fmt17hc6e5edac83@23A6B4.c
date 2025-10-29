int __fastcall <str as core::fmt::Display>::fmt(char *a1, unsigned int a2, int *a3)
{
  return core::fmt::Formatter::pad(a3, a1, a2);
}
