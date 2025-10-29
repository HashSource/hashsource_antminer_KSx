bool __fastcall <core::num::dec2flt::common::BiasedFp as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  unsigned __int8 v3; // r0
  int v4; // r4
  _BYTE *v5; // r0
  int v6; // r0
  int v8; // [sp+8h] [bp-10h] BYREF
  int v9; // [sp+Ch] [bp-Ch] BYREF
  _DWORD *v10; // [sp+10h] [bp-8h] BYREF
  unsigned __int8 v11; // [sp+14h] [bp-4h]
  char v12; // [sp+15h] [bp-3h]

  v8 = a1;
  v9 = a1 + 8;
  v3 = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aBiasedfp, 8);
  v12 = 0;
  v11 = v3;
  v10 = a2;
  v4 = 1;
  v5 = core::fmt::builders::DebugStruct::field(&v10, (int)&unk_2B57ED, 1u, (int)&v8, (int)&off_2E410C);
  core::fmt::builders::DebugStruct::field(v5, (int)aE, 1u, (int)&v9, (int)&off_2E4638);
  v6 = v11;
  if ( !v12 )
    goto LABEL_6;
  if ( !v11 )
  {
    if ( (v10[6] & 4) != 0 )
      v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v10[1] + 12))(*v10, asc_2B487C, 1);
    else
      v6 = (*(int (__fastcall **)(_DWORD, const char *, int))(v10[1] + 12))(*v10, asc_2B488A, 2);
LABEL_6:
    v4 = v6;
  }
  return v4 != 0;
}
