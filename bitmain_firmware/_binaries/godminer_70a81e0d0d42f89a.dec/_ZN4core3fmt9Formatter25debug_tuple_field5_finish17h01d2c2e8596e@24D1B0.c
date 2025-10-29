bool __fastcall core::fmt::Formatter::debug_tuple_field5_finish(
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
        int a11,
        int a12,
        int a13)
{
  int *v16; // r0
  int *v17; // r0
  int *v18; // r0
  int *v19; // r0
  int v20; // r4
  _DWORD *v21; // r5
  int v23; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v24; // [sp+8h] [bp-8h]
  unsigned __int8 v25; // [sp+Ch] [bp-4h]
  bool v26; // [sp+Dh] [bp-3h]

  v25 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v24 = a1;
  v26 = a3 == 0;
  v23 = 0;
  v16 = core::fmt::builders::DebugTuple::field(&v23, a4, a5);
  v17 = core::fmt::builders::DebugTuple::field(v16, a6, a7);
  v18 = core::fmt::builders::DebugTuple::field(v17, a8, a9);
  v19 = core::fmt::builders::DebugTuple::field(v18, a10, a11);
  core::fmt::builders::DebugTuple::field(v19, a12, a13);
  if ( v23 )
  {
    v20 = 1;
    if ( !v25 )
    {
      v21 = v24;
      if ( v23 != 1
        || !v26
        || (v24[6] & 4) != 0
        || (v20 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v24[1] + 12))(*v24, asc_2B63AF, 1)) )
      {
        v20 = (*(int (__fastcall **)(_DWORD, const char *, int))(v21[1] + 12))(*v21, asc_2B5EB9, 1);
      }
    }
  }
  else
  {
    v20 = v25;
  }
  return v20 != 0;
}
