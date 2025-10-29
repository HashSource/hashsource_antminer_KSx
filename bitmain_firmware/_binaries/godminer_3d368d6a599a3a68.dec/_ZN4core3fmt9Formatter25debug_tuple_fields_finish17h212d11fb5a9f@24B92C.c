bool __fastcall core::fmt::Formatter::debug_tuple_fields_finish(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v8; // r5
  int v9; // r6
  int *v10; // r0
  _DWORD *v11; // r4
  int v13; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v14; // [sp+8h] [bp-8h]
  unsigned __int8 v15; // [sp+Ch] [bp-4h]
  bool v16; // [sp+Dh] [bp-3h]

  v8 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v15 = v8;
  v16 = a3 == 0;
  v14 = a1;
  v13 = 0;
  if ( a5 )
  {
    v9 = 8 * a5;
    v10 = &v13;
    do
    {
      v10 = core::fmt::builders::DebugTuple::field(v10, a4, (int)&off_2E4268);
      v9 -= 8;
      a4 += 8;
    }
    while ( v9 );
    if ( v13 )
    {
      v8 = 1;
      if ( !v15 )
      {
        v11 = v14;
        if ( v13 != 1
          || !v16
          || (v14[6] & 4) != 0
          || (v8 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v14[1] + 12))(*v14, asc_2B488F, 1)) )
        {
          v8 = (*(int (__fastcall **)(_DWORD, const char *, int))(v11[1] + 12))(*v11, asc_2B4399, 1);
        }
      }
    }
    else
    {
      v8 = v15;
    }
  }
  return v8 != 0;
}
