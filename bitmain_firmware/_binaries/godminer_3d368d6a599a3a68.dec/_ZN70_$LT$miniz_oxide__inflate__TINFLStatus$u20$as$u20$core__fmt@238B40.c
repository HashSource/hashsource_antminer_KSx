int __fastcall <miniz_oxide::inflate::TINFLStatus as core::fmt::Debug>::fmt(_BYTE *a1, int a2)
{
  return <core::fmt::Formatter as core::fmt::Write>::write_str(
           a2,
           *(&off_2E3668 + (char)(*a1 + 4)),
           dword_2B28E0[(char)(*a1 + 4)]);
}
