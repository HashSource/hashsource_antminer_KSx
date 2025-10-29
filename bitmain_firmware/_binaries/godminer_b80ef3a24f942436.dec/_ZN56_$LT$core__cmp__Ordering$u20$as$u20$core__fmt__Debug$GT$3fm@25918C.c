int __fastcall <core::cmp::Ordering as core::fmt::Debug>::fmt(_BYTE *a1, _DWORD *a2)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(a2[1] + 12))(
           *a2,
           *(&off_2EFE58 + (char)(*a1 + 1)),
           dword_2D0B48[(char)(*a1 + 1)]);
}
