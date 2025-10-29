bool __fastcall <core::num::fmt::Part as core::fmt::Debug>::fmt(_WORD *a1, _DWORD *a2)
{
  int (**v3)(); // r2
  int v4; // r4
  _DWORD *v5; // r5
  _WORD *v7; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v9; // [sp+8h] [bp-8h]
  unsigned __int8 v10; // [sp+Ch] [bp-4h]
  char v11; // [sp+Dh] [bp-3h]

  if ( *a1 )
  {
    if ( *a1 == 1 )
    {
      v7 = a1 + 1;
      v10 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aNum, 3);
      v3 = &off_2CF698;
    }
    else
    {
      v7 = a1 + 2;
      v10 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aCopy, 4);
      v3 = &off_2CF628;
    }
  }
  else
  {
    v7 = a1 + 2;
    v10 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aZero, 4);
    v3 = &off_2CF908;
  }
  v11 = 0;
  v8 = 0;
  v9 = a2;
  core::fmt::builders::DebugTuple::field(&v8, (int)&v7, (int)v3);
  if ( v8 )
  {
    v4 = 1;
    if ( !v10 )
    {
      v5 = v9;
      if ( v8 != 1
        || !v11
        || (v9[6] & 4) != 0
        || (v4 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v9[1] + 12))(*v9, asc_29F19F, 1)) )
      {
        v4 = (*(int (__fastcall **)(_DWORD, const char *, int))(v5[1] + 12))(*v5, asc_29ECA9, 1);
      }
    }
  }
  else
  {
    v4 = v10;
  }
  return v4 != 0;
}
