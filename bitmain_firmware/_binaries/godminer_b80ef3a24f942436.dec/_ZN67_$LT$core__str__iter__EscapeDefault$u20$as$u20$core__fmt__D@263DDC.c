int __fastcall <core::str::iter::EscapeDefault as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  unsigned __int8 v3; // r0
  int result; // r0
  int v5; // r0
  int v6; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v7; // [sp+8h] [bp-8h] BYREF
  unsigned __int8 v8; // [sp+Ch] [bp-4h]
  char v9; // [sp+Dh] [bp-3h]

  v6 = a1;
  v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aEscapedefault, 13);
  v9 = 0;
  v8 = v3;
  v7 = a2;
  core::fmt::builders::DebugStruct::field(&v7, (int)&unk_2BF624, 5u, (int)&v6, (int)&off_2EFAD0);
  if ( v9 )
  {
    if ( v8 )
    {
      return 1;
    }
    else
    {
      if ( (v7[6] & 4) != 0 )
        v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v7[1] + 12))(*v7, asc_2BF6DC, 1);
      else
        v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v7[1] + 12))(*v7, asc_2BF6EA, 2);
      return v5 != 0;
    }
  }
  else
  {
    result = v8;
    if ( v8 )
      return 1;
  }
  return result;
}
