int __fastcall core::fmt::Formatter::debug_struct_field4_finish(
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
        int a15,
        int a16,
        unsigned int a17,
        int a18,
        int a19)
{
  _BYTE *v21; // r0
  _BYTE *v22; // r0
  _BYTE *v23; // r0
  int result; // r0
  int v25; // r0
  _DWORD *v26; // [sp+8h] [bp-8h] BYREF
  unsigned __int8 v27; // [sp+Ch] [bp-4h]
  char v28; // [sp+Dh] [bp-3h]

  v27 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v28 = 0;
  v26 = a1;
  v21 = core::fmt::builders::DebugStruct::field(&v26, a4, a5, a6, a7);
  v22 = core::fmt::builders::DebugStruct::field(v21, a8, a9, a10, a11);
  v23 = core::fmt::builders::DebugStruct::field(v22, a12, a13, a14, a15);
  core::fmt::builders::DebugStruct::field(v23, a16, a17, a18, a19);
  if ( v28 )
  {
    if ( v27 )
    {
      return 1;
    }
    else
    {
      if ( (v26[6] & 4) != 0 )
        v25 = (*(int (__fastcall **)(_DWORD, const char *, int))(v26[1] + 12))(*v26, asc_2B487C, 1);
      else
        v25 = (*(int (__fastcall **)(_DWORD, const char *, int))(v26[1] + 12))(*v26, asc_2B488A, 2);
      return v25 != 0;
    }
  }
  else
  {
    result = v27;
    if ( v27 )
      return 1;
  }
  return result;
}
