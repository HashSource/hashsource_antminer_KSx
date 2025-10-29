bool __fastcall core::fmt::Formatter::debug_tuple_field3_finish(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int *v12; // r0
  int *v13; // r0
  int v14; // r4
  _DWORD *v15; // r5
  int v17; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v18; // [sp+8h] [bp-8h]
  unsigned __int8 v19; // [sp+Ch] [bp-4h]
  bool v20; // [sp+Dh] [bp-3h]

  v19 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v20 = a3 == 0;
  v17 = 0;
  v18 = a1;
  v12 = core::fmt::builders::DebugTuple::field(&v17, a4, a5);
  v13 = core::fmt::builders::DebugTuple::field(v12, a6, a7);
  core::fmt::builders::DebugTuple::field(v13, a8, a9);
  if ( v17 )
  {
    v14 = 1;
    if ( !v19 )
    {
      v15 = v18;
      if ( v17 != 1
        || !v20
        || (v18[6] & 4) != 0
        || (v14 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v18[1] + 12))(*v18, asc_2A06EF, 1)) )
      {
        v14 = (*(int (__fastcall **)(_DWORD, const char *, int))(v15[1] + 12))(*v15, asc_2A01F9, 1);
      }
    }
  }
  else
  {
    v14 = v19;
  }
  return v14 != 0;
}
