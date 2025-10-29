int __fastcall <core::ops::index_range::IndexRange as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _BYTE *v3; // r0
  int result; // r0
  int v5; // r0
  int v6; // [sp+8h] [bp-10h] BYREF
  int v7; // [sp+Ch] [bp-Ch] BYREF
  _DWORD *v8; // [sp+10h] [bp-8h] BYREF
  unsigned __int8 v9; // [sp+14h] [bp-4h]
  char v10; // [sp+15h] [bp-3h]

  v6 = a1;
  v7 = a1 + 4;
  v9 = (*(int (__fastcall **)(_DWORD, void *, int))(a2[1] + 12))(*a2, &unk_2B774F, 10);
  v10 = 0;
  v8 = a2;
  v3 = core::fmt::builders::DebugStruct::field(&v8, (int)&unk_2B43AE, 5u, (int)&v6, (int)&off_2E4908);
  core::fmt::builders::DebugStruct::field(v3, (int)aEnd_2, 3u, (int)&v7, (int)&off_2E4908);
  if ( v10 )
  {
    if ( v9 )
    {
      return 1;
    }
    else
    {
      if ( (v8[6] & 4) != 0 )
        v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v8[1] + 12))(*v8, asc_2B3DDC, 1);
      else
        v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v8[1] + 12))(*v8, asc_2B3DEA, 2);
      return v5 != 0;
    }
  }
  else
  {
    result = v9;
    if ( v9 )
      return 1;
  }
  return result;
}
