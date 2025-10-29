int __fastcall <miniz_oxide::inflate::TINFLStatus as core::fmt::Debug>::fmt(_BYTE *a1, _DWORD *a2)
{
  return <core::fmt::Formatter as core::fmt::Write>::write_str(
           a2,
           *(&off_2EE668 + (char)(*a1 + 4)),
           dword_2BD740[(char)(*a1 + 4)]);
}
