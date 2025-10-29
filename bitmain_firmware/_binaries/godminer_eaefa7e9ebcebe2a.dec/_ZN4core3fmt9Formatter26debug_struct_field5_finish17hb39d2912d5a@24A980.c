int __fastcall core::fmt::Formatter::debug_struct_field5_finish(
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
        int a19,
        int a20,
        unsigned int a21,
        int a22,
        int a23)
{
  _BYTE *v25; // r0
  _BYTE *v26; // r0
  _BYTE *v27; // r0
  _BYTE *v28; // r0
  int result; // r0
  int v30; // r0
  _DWORD *v31; // [sp+8h] [bp-8h] BYREF
  unsigned __int8 v32; // [sp+Ch] [bp-4h]
  char v33; // [sp+Dh] [bp-3h]

  v32 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v33 = 0;
  v31 = a1;
  v25 = core::fmt::builders::DebugStruct::field(&v31, a4, a5, a6, a7);
  v26 = core::fmt::builders::DebugStruct::field(v25, a8, a9, a10, a11);
  v27 = core::fmt::builders::DebugStruct::field(v26, a12, a13, a14, a15);
  v28 = core::fmt::builders::DebugStruct::field(v27, a16, a17, a18, a19);
  core::fmt::builders::DebugStruct::field(v28, a20, a21, a22, a23);
  if ( v33 )
  {
    if ( v32 )
    {
      return 1;
    }
    else
    {
      if ( (v31[6] & 4) != 0 )
        v30 = (*(int (__fastcall **)(_DWORD, const char *, int))(v31[1] + 12))(*v31, asc_2B3F6C, 1);
      else
        v30 = (*(int (__fastcall **)(_DWORD, const char *, int))(v31[1] + 12))(*v31, asc_2B3F7A, 2);
      return v30 != 0;
    }
  }
  else
  {
    result = v32;
    if ( v32 )
      return 1;
  }
  return result;
}
