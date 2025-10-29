int __fastcall <core::cmp::Ordering as core::fmt::Debug>::fmt(_BYTE *a1, _DWORD *a2)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(a2[1] + 12))(
           *a2,
           *(&off_2CFE58 + (char)(*a1 + 1)),
           dword_2B05F8[(char)(*a1 + 1)]);
}
