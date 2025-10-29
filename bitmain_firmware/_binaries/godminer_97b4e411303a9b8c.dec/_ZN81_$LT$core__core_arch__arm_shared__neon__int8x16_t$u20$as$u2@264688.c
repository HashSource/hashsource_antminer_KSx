bool __fastcall <core::core_arch::arm_shared::neon::int8x16_t as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int *v3; // r0
  int *v4; // r0
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  int *v10; // r0
  int *v11; // r0
  int *v12; // r0
  int *v13; // r0
  int *v14; // r0
  int *v15; // r0
  int *v16; // r0
  int *v17; // r0
  int v18; // r4
  _DWORD *v19; // r5
  _DWORD v21[2]; // [sp+4h] [bp-CCh] BYREF
  _DWORD v22[2]; // [sp+Ch] [bp-C4h] BYREF
  _DWORD v23[2]; // [sp+14h] [bp-BCh] BYREF
  _DWORD v24[2]; // [sp+1Ch] [bp-B4h] BYREF
  _DWORD v25[2]; // [sp+24h] [bp-ACh] BYREF
  _DWORD v26[2]; // [sp+2Ch] [bp-A4h] BYREF
  _DWORD v27[2]; // [sp+34h] [bp-9Ch] BYREF
  _DWORD v28[2]; // [sp+3Ch] [bp-94h] BYREF
  _DWORD v29[2]; // [sp+44h] [bp-8Ch] BYREF
  _DWORD v30[2]; // [sp+4Ch] [bp-84h] BYREF
  _DWORD v31[2]; // [sp+54h] [bp-7Ch] BYREF
  _DWORD v32[2]; // [sp+5Ch] [bp-74h] BYREF
  _DWORD v33[2]; // [sp+64h] [bp-6Ch] BYREF
  _DWORD v34[2]; // [sp+6Ch] [bp-64h] BYREF
  _DWORD v35[2]; // [sp+74h] [bp-5Ch] BYREF
  _DWORD v36[2]; // [sp+7Ch] [bp-54h] BYREF
  int v37; // [sp+84h] [bp-4Ch] BYREF
  int v38; // [sp+88h] [bp-48h] BYREF
  int v39; // [sp+8Ch] [bp-44h] BYREF
  int v40; // [sp+90h] [bp-40h] BYREF
  int v41; // [sp+94h] [bp-3Ch] BYREF
  int v42; // [sp+98h] [bp-38h] BYREF
  int v43; // [sp+9Ch] [bp-34h] BYREF
  int v44; // [sp+A0h] [bp-30h] BYREF
  int v45; // [sp+A4h] [bp-2Ch] BYREF
  int v46; // [sp+A8h] [bp-28h] BYREF
  int v47; // [sp+ACh] [bp-24h] BYREF
  int v48; // [sp+B0h] [bp-20h] BYREF
  int v49; // [sp+B4h] [bp-1Ch] BYREF
  int v50; // [sp+B8h] [bp-18h] BYREF
  int v51; // [sp+BCh] [bp-14h] BYREF
  int v52; // [sp+C0h] [bp-10h] BYREF
  int v53; // [sp+C4h] [bp-Ch] BYREF
  _DWORD *v54; // [sp+C8h] [bp-8h]
  unsigned __int8 v55; // [sp+CCh] [bp-4h]
  char v56; // [sp+CDh] [bp-3h]

  v38 = a1 + 1;
  v39 = a1 + 2;
  v40 = a1 + 3;
  v41 = a1 + 4;
  v42 = a1 + 5;
  v43 = a1 + 6;
  v44 = a1 + 7;
  v45 = a1 + 8;
  v46 = a1 + 9;
  v47 = a1 + 10;
  v48 = a1 + 11;
  v49 = a1 + 12;
  v50 = a1 + 13;
  v37 = a1;
  v52 = a1 + 15;
  v36[0] = &v52;
  v35[0] = &v51;
  v34[0] = &v50;
  v33[0] = &v49;
  v32[0] = &v48;
  v31[0] = &v47;
  v30[0] = &v46;
  v29[0] = &v45;
  v28[0] = &v44;
  v27[0] = &v43;
  v26[0] = &v42;
  v25[0] = &v41;
  v24[0] = &v40;
  v23[0] = &v39;
  v22[0] = &v38;
  v51 = a1 + 14;
  v36[1] = &off_2E5C80;
  v35[1] = &off_2E5C80;
  v34[1] = &off_2E5C80;
  v33[1] = &off_2E5C80;
  v32[1] = &off_2E5C80;
  v31[1] = &off_2E5C80;
  v30[1] = &off_2E5C80;
  v29[1] = &off_2E5C80;
  v28[1] = &off_2E5C80;
  v27[1] = &off_2E5C80;
  v26[1] = &off_2E5C80;
  v25[1] = &off_2E5C80;
  v24[1] = &off_2E5C80;
  v23[1] = &off_2E5C80;
  v22[1] = &off_2E5C80;
  v21[1] = &off_2E5C80;
  v21[0] = &v37;
  v55 = (*(int (__fastcall **)(_DWORD, void *, int))(a2[1] + 12))(*a2, &unk_2C5A5C, 9);
  v54 = a2;
  v56 = 0;
  v53 = 0;
  v3 = core::fmt::builders::DebugTuple::field(&v53, (int)v21, (int)&off_2E5268);
  v4 = core::fmt::builders::DebugTuple::field(v3, (int)v22, (int)&off_2E5268);
  v5 = core::fmt::builders::DebugTuple::field(v4, (int)v23, (int)&off_2E5268);
  v6 = core::fmt::builders::DebugTuple::field(v5, (int)v24, (int)&off_2E5268);
  v7 = core::fmt::builders::DebugTuple::field(v6, (int)v25, (int)&off_2E5268);
  v8 = core::fmt::builders::DebugTuple::field(v7, (int)v26, (int)&off_2E5268);
  v9 = core::fmt::builders::DebugTuple::field(v8, (int)v27, (int)&off_2E5268);
  v10 = core::fmt::builders::DebugTuple::field(v9, (int)v28, (int)&off_2E5268);
  v11 = core::fmt::builders::DebugTuple::field(v10, (int)v29, (int)&off_2E5268);
  v12 = core::fmt::builders::DebugTuple::field(v11, (int)v30, (int)&off_2E5268);
  v13 = core::fmt::builders::DebugTuple::field(v12, (int)v31, (int)&off_2E5268);
  v14 = core::fmt::builders::DebugTuple::field(v13, (int)v32, (int)&off_2E5268);
  v15 = core::fmt::builders::DebugTuple::field(v14, (int)v33, (int)&off_2E5268);
  v16 = core::fmt::builders::DebugTuple::field(v15, (int)v34, (int)&off_2E5268);
  v17 = core::fmt::builders::DebugTuple::field(v16, (int)v35, (int)&off_2E5268);
  core::fmt::builders::DebugTuple::field(v17, (int)v36, (int)&off_2E5268);
  if ( v53 )
  {
    v18 = 1;
    if ( !v55 )
    {
      v19 = v54;
      if ( v53 != 1
        || !v56
        || (v54[6] & 4) != 0
        || (v18 = 1, !(*(int (__fastcall **)(_DWORD, const char *, int))(v54[1] + 12))(*v54, asc_2B4AEF, 1)) )
      {
        v18 = (*(int (__fastcall **)(_DWORD, const char *, int))(v19[1] + 12))(*v19, asc_2B45F9, 1);
      }
    }
  }
  else
  {
    v18 = v55;
  }
  return v18 != 0;
}
