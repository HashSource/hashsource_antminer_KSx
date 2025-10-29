int __fastcall <core::char::convert::CharErrorKind as core::fmt::Debug>::fmt(_BYTE *a1, _DWORD *a2)
{
  if ( *a1 )
    return (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aToomanychars, 12);
  else
    return (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aEmptystring, 11);
}
