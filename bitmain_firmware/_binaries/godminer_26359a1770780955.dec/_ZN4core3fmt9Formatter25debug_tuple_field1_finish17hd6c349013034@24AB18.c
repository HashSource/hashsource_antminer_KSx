bool __fastcall core::fmt::Formatter::debug_tuple_field1_finish(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v8; // r4
  _DWORD *v9; // r5
  int v11; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v12; // [sp+8h] [bp-8h]
  unsigned __int8 v13; // [sp+Ch] [bp-4h]
  bool v14; // [sp+Dh] [bp-3h]

  v13 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v12 = a1;
  v14 = a3 == 0;
  v11 = 0;
  core::fmt::builders::DebugTuple::field(&v11, a4, a5);
  if ( v11 )
  {
    v8 = 1;
    if ( !v13 )
    {
      v9 = v12;
      if ( v11 != 1
        || !v14
        || (v12[6] & 4) != 0
        || (v8 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v12[1] + 12))(*v12, asc_2B3DEF, 1)) )
      {
        v8 = (*(int (__fastcall **)(_DWORD, const char *, int))(v9[1] + 12))(*v9, asc_2B38F9, 1);
      }
    }
  }
  else
  {
    v8 = v13;
  }
  return v8 != 0;
}
