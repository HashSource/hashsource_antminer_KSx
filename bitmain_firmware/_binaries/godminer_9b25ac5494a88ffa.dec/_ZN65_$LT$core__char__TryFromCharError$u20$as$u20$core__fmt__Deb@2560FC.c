bool __fastcall <core::char::TryFromCharError as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // r4
  _DWORD *v4; // r5
  int v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v8; // [sp+8h] [bp-8h]
  unsigned __int8 v9; // [sp+Ch] [bp-4h]
  char v10; // [sp+Dh] [bp-3h]

  v6 = a1;
  v9 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aTryfromcharerr, 16);
  v10 = 0;
  v7 = 0;
  v8 = a2;
  core::fmt::builders::DebugTuple::field(&v7, (int)&v6, (int)&off_2E36A8);
  if ( v7 )
  {
    v3 = 1;
    if ( !v9 )
    {
      v4 = v8;
      if ( v7 != 1
        || !v10
        || (v8[6] & 4) != 0
        || (v3 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v8[1] + 12))(*v8, asc_2B394F, 1)) )
      {
        v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(v4[1] + 12))(*v4, asc_2B3459, 1);
      }
    }
  }
  else
  {
    v3 = v9;
  }
  return v3 != 0;
}
