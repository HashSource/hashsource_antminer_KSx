bool __fastcall core::fmt::Formatter::debug_tuple_field4_finish(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int *v14; // r0
  int *v15; // r0
  int *v16; // r0
  int v17; // r4
  _DWORD *v18; // r5
  int v20; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v21; // [sp+8h] [bp-8h]
  unsigned __int8 v22; // [sp+Ch] [bp-4h]
  bool v23; // [sp+Dh] [bp-3h]

  v22 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v21 = a1;
  v23 = a3 == 0;
  v20 = 0;
  v14 = core::fmt::builders::DebugTuple::field(&v20, a4, a5);
  v15 = core::fmt::builders::DebugTuple::field(v14, a6, a7);
  v16 = core::fmt::builders::DebugTuple::field(v15, a8, a9);
  core::fmt::builders::DebugTuple::field(v16, a10, a11);
  if ( v20 )
  {
    v17 = 1;
    if ( !v22 )
    {
      v18 = v21;
      if ( v20 != 1
        || !v23
        || (v21[6] & 4) != 0
        || (v17 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v21[1] + 12))(*v21, asc_2BF6EF, 1)) )
      {
        v17 = (*(int (__fastcall **)(_DWORD, const char *, int))(v18[1] + 12))(*v18, asc_2BF1F9, 1);
      }
    }
  }
  else
  {
    v17 = v22;
  }
  return v17 != 0;
}
