int __fastcall <miniz_oxide::inflate::TINFLStatus as core::fmt::Debug>::fmt(_BYTE *a1, int a2)
{
  return <core::fmt::Formatter as core::fmt::Write>::write_str(
           a2,
           *(&off_2CF668 + (char)(*a1 + 4)),
           dword_29E740[(char)(*a1 + 4)]);
}
