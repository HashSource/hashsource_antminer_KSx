int __fastcall core::fmt::Formatter::debug_struct_field1_finish(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  int result; // r0
  int v10; // r0
  _DWORD *v11; // [sp+8h] [bp-8h] BYREF
  unsigned __int8 v12; // [sp+Ch] [bp-4h]
  char v13; // [sp+Dh] [bp-3h]

  v12 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v13 = 0;
  v11 = a1;
  core::fmt::builders::DebugStruct::field(&v11, a4, a5, a6, a7);
  if ( v13 )
  {
    if ( v12 )
    {
      return 1;
    }
    else
    {
      if ( (v11[6] & 4) != 0 )
        v10 = (*(int (__fastcall **)(_DWORD, const char *, int))(v11[1] + 12))(*v11, asc_2B4ADC, 1);
      else
        v10 = (*(int (__fastcall **)(_DWORD, const char *, int))(v11[1] + 12))(*v11, asc_2B4AEA, 2);
      return v10 != 0;
    }
  }
  else
  {
    result = v12;
    if ( v12 )
      return 1;
  }
  return result;
}
