int __fastcall <core::str::lossy::Utf8Chunks as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v4; // r2
  int result; // r0
  int v6; // r0
  _DWORD *v7; // [sp+8h] [bp-10h] BYREF
  unsigned __int8 v8; // [sp+Ch] [bp-Ch]
  char v9; // [sp+Dh] [bp-Bh]
  _DWORD v10[2]; // [sp+10h] [bp-8h] BYREF

  v8 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aUtf8chunks, 10);
  v9 = 0;
  v7 = a2;
  v4 = a1[1];
  v10[0] = *a1;
  v10[1] = v4;
  core::fmt::builders::DebugStruct::field(&v7, (int)aSource, 6u, (int)v10, (int)&off_2E4478);
  if ( v9 )
  {
    if ( v8 )
    {
      return 1;
    }
    else
    {
      if ( (v7[6] & 4) != 0 )
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v7[1] + 12))(*v7, asc_2B3F6C, 1);
      else
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v7[1] + 12))(*v7, asc_2B3F7A, 2);
      return v6 != 0;
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
