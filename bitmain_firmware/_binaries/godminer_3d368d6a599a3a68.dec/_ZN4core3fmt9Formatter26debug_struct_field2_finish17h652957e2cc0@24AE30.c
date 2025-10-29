int core::fmt::Formatter::debug_struct_field2_finish(
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
        ...)
{
  _BYTE *v13; // r0
  int result; // r0
  int v15; // r0
  _DWORD *v16; // [sp+8h] [bp-8h] BYREF
  unsigned __int8 v17; // [sp+Ch] [bp-4h]
  char v18; // [sp+Dh] [bp-3h]

  v17 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v18 = 0;
  v16 = a1;
  v13 = core::fmt::builders::DebugStruct::field(&v16, a4, a5, a6, a7);
  core::fmt::builders::DebugStruct::field(v13, a8, a9, a10, a11);
  if ( v18 )
  {
    if ( v17 )
    {
      return 1;
    }
    else
    {
      if ( (v16[6] & 4) != 0 )
        v15 = (*(int (__fastcall **)(_DWORD, const char *, int))(v16[1] + 12))(*v16, asc_2B487C, 1);
      else
        v15 = (*(int (__fastcall **)(_DWORD, const char *, int))(v16[1] + 12))(*v16, asc_2B488A, 2);
      return v15 != 0;
    }
  }
  else
  {
    result = v17;
    if ( v17 )
      return 1;
  }
  return result;
}
