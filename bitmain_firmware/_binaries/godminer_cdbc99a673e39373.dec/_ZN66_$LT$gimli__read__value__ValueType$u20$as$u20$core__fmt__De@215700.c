int __fastcall <gimli::read::value::ValueType as core::fmt::Debug>::fmt(unsigned __int8 *a1, int a2)
{
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, *(&off_2CE900 + *a1), dword_29D0C4[*a1]);
}
