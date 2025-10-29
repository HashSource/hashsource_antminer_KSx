int __fastcall <core::num::error::ParseIntError as core::fmt::Display>::fmt(unsigned __int8 *a1, int *a2)
{
  return core::fmt::Formatter::pad(a2, (char *)*(&off_2CFE30 + *a1), *((_DWORD *)&unk_2B05D0 + *a1));
}
