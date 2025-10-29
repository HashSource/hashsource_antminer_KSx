int __fastcall <core::num::flt2dec::Sign as core::fmt::Debug>::fmt(_BYTE *a1, _DWORD *a2)
{
  if ( *a1 )
    return (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aMinusplus, 9);
  else
    return (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aMinus, 5);
}
