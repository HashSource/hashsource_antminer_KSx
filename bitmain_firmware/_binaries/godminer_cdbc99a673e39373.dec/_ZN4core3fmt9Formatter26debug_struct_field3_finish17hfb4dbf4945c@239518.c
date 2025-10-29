int __fastcall core::fmt::Formatter::debug_struct_field3_finish(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        int a15)
{
  _BYTE *v17; // r0
  _BYTE *v18; // r0
  int result; // r0
  int v20; // r0
  _DWORD *v21; // [sp+8h] [bp-8h] BYREF
  unsigned __int8 v22; // [sp+Ch] [bp-4h]
  char v23; // [sp+Dh] [bp-3h]

  v22 = (*(int (__fastcall **)(_DWORD))(a1[1] + 12))(*a1);
  v23 = 0;
  v21 = a1;
  v17 = core::fmt::builders::DebugStruct::field(&v21, a4, a5, a6, a7);
  v18 = core::fmt::builders::DebugStruct::field(v17, a8, a9, a10, a11);
  core::fmt::builders::DebugStruct::field(v18, a12, a13, a14, a15);
  if ( v23 )
  {
    if ( v22 )
    {
      return 1;
    }
    else
    {
      if ( (v21[6] & 4) != 0 )
        v20 = (*(int (__fastcall **)(_DWORD, const char *, int))(v21[1] + 12))(*v21, asc_2A06DC, 1);
      else
        v20 = (*(int (__fastcall **)(_DWORD, const char *, int))(v21[1] + 12))(*v21, asc_2A06EA, 2);
      return v20 != 0;
    }
  }
  else
  {
    result = v22;
    if ( v22 )
      return 1;
  }
  return result;
}
