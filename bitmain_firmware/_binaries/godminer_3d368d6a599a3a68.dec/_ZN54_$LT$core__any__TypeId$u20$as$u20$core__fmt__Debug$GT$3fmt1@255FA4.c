bool __fastcall <core::any::TypeId as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  unsigned __int8 v3; // r0
  int v4; // r4
  int v5; // r0
  int v7; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v8; // [sp+8h] [bp-8h] BYREF
  unsigned __int8 v9; // [sp+Ch] [bp-4h]
  char v10; // [sp+Dh] [bp-3h]

  v7 = a1;
  v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aTypeid, 6);
  v10 = 0;
  v9 = v3;
  v8 = a2;
  v4 = 1;
  core::fmt::builders::DebugStruct::field(&v8, (int)&unk_2B81FF, 1u, (int)&v7, (int)&off_2E410C);
  v5 = v9;
  if ( !v10 )
    goto LABEL_6;
  if ( !v9 )
  {
    if ( (v8[6] & 4) != 0 )
      v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v8[1] + 12))(*v8, asc_2B487C, 1);
    else
      v5 = (*(int (__fastcall **)(_DWORD, const char *, int))(v8[1] + 12))(*v8, asc_2B488A, 2);
LABEL_6:
    v4 = v5;
  }
  return v4 != 0;
}
