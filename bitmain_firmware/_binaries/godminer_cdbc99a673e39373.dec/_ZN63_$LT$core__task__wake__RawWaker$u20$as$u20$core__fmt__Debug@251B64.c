int __fastcall <core::task::wake::RawWaker as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
  v8 = a1 + 4;
  v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aRawwaker, 8);
  v11 = 0;
  v10 = v3;
  v9 = a2;
  v4 = core::fmt::builders::DebugStruct::field(&v9, (int)aData_0, 4u, (int)&v7, (int)&off_2D0C40);
  core::fmt::builders::DebugStruct::field(v4, (int)aVtable, 6u, (int)&v8, (int)&off_2D0C50);
  if ( v11 )
  {
    if ( v10 )
    {
      return 1;
    }
    else
    {
      if ( (v9[6] & 4) != 0 )
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v9[1] + 12))(*v9, asc_2A06DC, 1);
      else
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v9[1] + 12))(*v9, asc_2A06EA, 2);
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
