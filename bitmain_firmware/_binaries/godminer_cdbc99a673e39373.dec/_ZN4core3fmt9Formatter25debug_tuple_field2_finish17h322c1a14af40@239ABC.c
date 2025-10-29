bool __fastcall core::fmt::Formatter::debug_tuple_field2_finish(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int *v10; // r0
  int v11; // r4
  _DWORD *v12; // r5
  int v14; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v15; // [sp+8h] [bp-8h]
  unsigned __int8 v16; // [sp+Ch] [bp-4h]
  bool v17; // [sp+Dh] [bp-3h]

  v16 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v17 = a3 == 0;
  v14 = 0;
  v15 = a1;
  v10 = core::fmt::builders::DebugTuple::field(&v14, a4, a5);
  core::fmt::builders::DebugTuple::field(v10, a6, a7);
  if ( v14 )
  {
    v11 = 1;
    if ( !v16 )
    {
      v12 = v15;
      if ( v14 != 1
        || !v17
        || (v15[6] & 4) != 0
        || (v11 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v15[1] + 12))(*v15, asc_2A06EF, 1)) )
      {
        v11 = (*(int (__fastcall **)(_DWORD, const char *, int))(v12[1] + 12))(*v12, asc_2A01F9, 1);
      }
    }
  }
  else
  {
    v11 = v16;
  }
  return v11 != 0;
}
