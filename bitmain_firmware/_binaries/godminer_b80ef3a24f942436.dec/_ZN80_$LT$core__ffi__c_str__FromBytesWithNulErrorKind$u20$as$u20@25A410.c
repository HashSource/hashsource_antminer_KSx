int __fastcall <core::ffi::c_str::FromBytesWithNulErrorKind as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v4; // r4
  _DWORD *v5; // r5
  _DWORD *v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v8; // [sp+8h] [bp-8h]
  unsigned __int8 v9; // [sp+Ch] [bp-4h]
  char v10; // [sp+Dh] [bp-3h]

  if ( *a1 )
    return (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aNotnulterminat, 16);
  v6 = a1 + 1;
  v9 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aInteriornul_0, 11);
  v10 = 0;
  v7 = 0;
  v8 = a2;
  core::fmt::builders::DebugTuple::field(&v7, (int)&v6, (int)&off_2EF908);
  if ( v7 )
  {
    v4 = 1;
    if ( !v9 )
    {
      v5 = v8;
      if ( v7 != 1
        || !v10
        || (v8[6] & 4) != 0
        || (v4 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v8[1] + 12))(*v8, asc_2BF6EF, 1)) )
      {
        v4 = (*(int (__fastcall **)(_DWORD, const char *, int))(v5[1] + 12))(*v5, asc_2BF1F9, 1);
      }
    }
  }
  else
  {
    v4 = v9;
  }
  return v4 != 0;
}
