int __fastcall <core::ffi::VaList as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  unsigned __int8 v3; // r0
  _BYTE *v4; // r0
  int result; // r0
  int v6; // r0
  int v7; // [sp+8h] [bp-10h] BYREF
  int v8; // [sp+Ch] [bp-Ch] BYREF
  _DWORD *v9; // [sp+10h] [bp-8h] BYREF
  unsigned __int8 v10; // [sp+14h] [bp-4h]
  char v11; // [sp+15h] [bp-3h]

  v7 = a1;
  v8 = a1;
  v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aValist, 6);
  v11 = 0;
  v10 = v3;
  v9 = a2;
  v4 = core::fmt::builders::DebugStruct::field(&v9, (int)&unk_2B3D24, 5u, (int)&v7, (int)&off_2E4778);
  core::fmt::builders::DebugStruct::field(v4, (int)aMarker, 7u, (int)&v8, (int)&off_2E4788);
  if ( v11 )
  {
    if ( v10 )
    {
      return 1;
    }
    else
    {
      if ( (v9[6] & 4) != 0 )
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v9[1] + 12))(*v9, asc_2B3DDC, 1);
      else
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v9[1] + 12))(*v9, asc_2B3DEA, 2);
      return v6 != 0;
    }
  }
  else
  {
    result = v10;
    if ( v10 )
      return 1;
  }
  return result;
}
