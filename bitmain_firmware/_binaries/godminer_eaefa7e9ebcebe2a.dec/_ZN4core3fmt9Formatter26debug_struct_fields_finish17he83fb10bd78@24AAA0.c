int __fastcall core::fmt::Formatter::debug_struct_fields_finish(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v8; // r6
  int v10; // r0
  unsigned int *v11; // r5
  _BYTE *v13; // r0
  int result; // r0
  int v15; // r0
  int v16; // [sp+8h] [bp-20h] BYREF
  int v17; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD *v18; // [sp+10h] [bp-18h] BYREF
  unsigned __int8 v19; // [sp+14h] [bp-14h]
  char v20; // [sp+15h] [bp-13h]
  int v21; // [sp+18h] [bp-10h]

  v8 = a5;
  v16 = a5;
  v17 = a7;
  if ( a5 != a7 )
  {
    v21 = 0;
    sub_7DA90((int)&v16, (int)&v17, &v18);
  }
  v10 = (*(int (__fastcall **)(_DWORD, int, int))(a1[1] + 12))(*a1, a2, a3);
  v20 = 0;
  v19 = v10;
  v18 = a1;
  if ( !a5 )
    return v10 != 0;
  v11 = (unsigned int *)(a4 + 4);
  v13 = &v18;
  do
  {
    v13 = core::fmt::builders::DebugStruct::field(v13, *(v11 - 1), *v11, a6, (int)&off_2E4268);
    a6 += 8;
    v11 += 2;
    --v8;
  }
  while ( v8 );
  if ( v20 )
  {
    v10 = 1;
    if ( v19 )
      return v10 != 0;
    if ( (v18[6] & 4) != 0 )
      v15 = (*(int (__fastcall **)(_DWORD, const char *, int))(v18[1] + 12))(*v18, asc_2B3F6C, 1);
    else
      v15 = (*(int (__fastcall **)(_DWORD, const char *, int))(v18[1] + 12))(*v18, asc_2B3F7A, 2);
    return v15 != 0;
  }
  else
  {
    result = v19;
    if ( v19 )
      return 1;
  }
  return result;
}
