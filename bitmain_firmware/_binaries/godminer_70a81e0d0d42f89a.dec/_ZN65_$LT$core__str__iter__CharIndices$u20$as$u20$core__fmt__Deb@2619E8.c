int __fastcall <core::str::iter::CharIndices as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  unsigned __int8 v3; // r0
  _BYTE *v4; // r0
  int result; // r0
  int v6; // r0
  int v7; // [sp+8h] [bp-10h] BYREF
  int v8; // [sp+Ch] [bp-Ch] BYREF
  _DWORD *v9; // [sp+10h] [bp-8h] BYREF
  unsigned __int8 v10; // [sp+14h] [bp-4h]
  char v11; // [sp+15h] [bp-3h]

  v7 = a1 + 8;
  v8 = a1;
  v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aCharindices, 11);
  v11 = 0;
  v10 = v3;
  v9 = a2;
  v4 = core::fmt::builders::DebugStruct::field(&v9, (int)aFrontOffset, 0xCu, (int)&v7, (int)&off_2E6908);
  core::fmt::builders::DebugStruct::field(v4, (int)&unk_2B6285, 4u, (int)&v8, (int)&off_2E6A40);
  if ( v11 )
  {
    if ( v10 )
    {
      return 1;
    }
    else
    {
      if ( (v9[6] & 4) != 0 )
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v9[1] + 12))(*v9, asc_2B639C, 1);
      else
        v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v9[1] + 12))(*v9, asc_2B63AA, 2);
      return v6 != 0;
    }
  }
  else
  {
    result = v10;
    if ( v10 )
      return 1;
  }
  return result;
}
