bool __fastcall <core::core_arch::arm_shared::neon::uint8x8_t as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int *v3; // r0
  int *v4; // r0
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  int v10; // r4
  _DWORD *v11; // r5
  _DWORD v13[2]; // [sp+4h] [bp-6Ch] BYREF
  _DWORD v14[2]; // [sp+Ch] [bp-64h] BYREF
  _DWORD v15[2]; // [sp+14h] [bp-5Ch] BYREF
  _DWORD v16[2]; // [sp+1Ch] [bp-54h] BYREF
  _DWORD v17[2]; // [sp+24h] [bp-4Ch] BYREF
  _DWORD v18[2]; // [sp+2Ch] [bp-44h] BYREF
  _DWORD v19[2]; // [sp+34h] [bp-3Ch] BYREF
  _DWORD v20[2]; // [sp+3Ch] [bp-34h] BYREF
  int v21; // [sp+44h] [bp-2Ch] BYREF
  int v22; // [sp+48h] [bp-28h] BYREF
  int v23; // [sp+4Ch] [bp-24h] BYREF
  int v24; // [sp+50h] [bp-20h] BYREF
  int v25; // [sp+54h] [bp-1Ch] BYREF
  int v26; // [sp+58h] [bp-18h] BYREF
  int v27; // [sp+5Ch] [bp-14h] BYREF
  int v28; // [sp+60h] [bp-10h] BYREF
  int v29; // [sp+64h] [bp-Ch] BYREF
  _DWORD *v30; // [sp+68h] [bp-8h]
  unsigned __int8 v31; // [sp+6Ch] [bp-4h]
  char v32; // [sp+6Dh] [bp-3h]

  v20[0] = &v28;
  v19[0] = &v27;
  v22 = a1 + 1;
  v18[0] = &v26;
  v23 = a1 + 2;
  v17[0] = &v25;
  v24 = a1 + 3;
  v16[0] = &v24;
  v25 = a1 + 4;
  v15[0] = &v23;
  v26 = a1 + 5;
  v14[0] = &v22;
  v21 = a1;
  v27 = a1 + 6;
  v13[0] = &v21;
  v20[1] = &off_2D01A4;
  v19[1] = &off_2D01A4;
  v18[1] = &off_2D01A4;
  v17[1] = &off_2D01A4;
  v16[1] = &off_2D01A4;
  v15[1] = &off_2D01A4;
  v14[1] = &off_2D01A4;
  v13[1] = &off_2D01A4;
  v28 = a1 + 7;
  v31 = (*(int (__fastcall **)(_DWORD, void *, int))(a2[1] + 12))(*a2, &unk_2B15F2, 9);
  v30 = a2;
  v32 = 0;
  v29 = 0;
  v3 = core::fmt::builders::DebugTuple::field(&v29, (int)v13, (int)&off_2D0268);
  v4 = core::fmt::builders::DebugTuple::field(v3, (int)v14, (int)&off_2D0268);
  v5 = core::fmt::builders::DebugTuple::field(v4, (int)v15, (int)&off_2D0268);
  v6 = core::fmt::builders::DebugTuple::field(v5, (int)v16, (int)&off_2D0268);
  v7 = core::fmt::builders::DebugTuple::field(v6, (int)v17, (int)&off_2D0268);
  v8 = core::fmt::builders::DebugTuple::field(v7, (int)v18, (int)&off_2D0268);
  v9 = core::fmt::builders::DebugTuple::field(v8, (int)v19, (int)&off_2D0268);
  core::fmt::builders::DebugTuple::field(v9, (int)v20, (int)&off_2D0268);
  if ( v29 )
  {
    v10 = 1;
    if ( !v31 )
    {
      v11 = v30;
      if ( v29 != 1
        || !v32
        || (v30[6] & 4) != 0
        || (v10 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v30[1] + 12))(*v30, asc_2A06EF, 1)) )
      {
        v10 = (*(int (__fastcall **)(_DWORD, const char *, int))(v11[1] + 12))(*v11, asc_2A01F9, 1);
      }
    }
  }
  else
  {
    v10 = v31;
  }
  return v10 != 0;
}
