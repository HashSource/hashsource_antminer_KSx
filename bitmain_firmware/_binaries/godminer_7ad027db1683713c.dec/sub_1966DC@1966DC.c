int __fastcall sub_1966DC(int a1, int a2, int *a3, int a4, __int64 a5)
{
  char v7; // r5
  unsigned int v8; // r10
  int v9; // r0
  int v10; // r6
  __int64 v11; // kr00_8
  int v12; // r3
  int v13; // r4
  int v14; // r7
  unsigned int v15; // r1
  int *v16; // r12
  unsigned int v17; // r4
  _DWORD *v18; // r0
  int v19; // r3
  bool v20; // nf
  int v21; // r6
  int v22; // r4
  unsigned int v23; // r2
  char v24; // r3
  int v25; // r2
  int v26; // r3
  int v27; // r4
  int v28; // r6
  int v29; // r7
  int v30; // lr
  int v31; // r1
  int v32; // r11
  int v33; // r2
  unsigned int v34; // r9
  _DWORD *v36; // r0
  _DWORD *v37; // r9
  int v39; // [sp+4h] [bp-4078h]
  int v40; // [sp+10h] [bp-406Ch]
  int v41; // [sp+1Ch] [bp-4060h]
  int v42; // [sp+24h] [bp-4058h]
  int v43; // [sp+28h] [bp-4054h]
  __int64 v45; // [sp+30h] [bp-404Ch]
  __int64 v46; // [sp+38h] [bp-4044h]
  __int64 v47; // [sp+40h] [bp-403Ch]
  __int64 v48; // [sp+48h] [bp-4034h]
  _DWORD src[2048]; // [sp+50h] [bp-402Ch] BYREF
  _DWORD v50[2]; // [sp+2050h] [bp-202Ch] BYREF
  int v51; // [sp+2058h] [bp-2024h]
  int v52; // [sp+205Ch] [bp-2020h]
  int v53; // [sp+2060h] [bp-201Ch]
  int v54; // [sp+2064h] [bp-2018h]
  int v55; // [sp+2068h] [bp-2014h]
  int v56; // [sp+206Ch] [bp-2010h]
  _QWORD v57[1024]; // [sp+2070h] [bp-200Ch] BYREF
  int *v58; // [sp+4070h] [bp-Ch] BYREF
  int v59; // [sp+4074h] [bp-8h] BYREF

  memset(v57, 0, 32);
  num_traits::float::integer_decode_f32((int)src);
  v7 = LOBYTE(src[2]) - 48;
  v8 = (unsigned __int16)(LOWORD(src[2]) + 208);
  v9 = (__int16)(LOWORD(src[2]) + 208) >> 6;
  if ( v8 > 0xFF )
    core::panicking::panic_bounds_check(v9, 4, (int)&off_2C8F40);
  v10 = v7 & 0x3F;
  v11 = 0xFFFFLL * src[0];
  v41 = a2;
  v12 = v10 - 32;
  v13 = (_DWORD)v11 << (v7 & 0x3F);
  if ( v12 >= 0 )
    v13 = 0;
  v14 = 0xFFFF * src[1];
  LODWORD(v57[v9]) = v13;
  v15 = HIDWORD(v11) + v14;
  v16 = a3 + 2;
  v17 = ((unsigned int)v11 >> (32 - v10)) | ((HIDWORD(v11) + v14) << v10);
  v18 = &v57[v9];
  if ( v12 >= 0 )
    v17 = (_DWORD)v11 << v12;
  v18[1] = v17;
  if ( v8 < 0xC0 )
  {
    v19 = -v10 & 0x3F;
    v21 = v19 - 32;
    v20 = v19 - 32 < 0;
    v22 = HIDWORD(v11) >> v19;
    v23 = (unsigned int)v11 >> v19;
    v24 = 32 - v19;
    if ( !v20 )
      v22 = 0;
    v25 = v23 | (v15 << v24);
    if ( v21 >= 0 )
      v25 = v15 >> v21;
    v18[2] = v25;
    v18[3] = v22;
  }
  v45 = v57[0];
  v46 = v57[1];
  v47 = v57[2];
  v48 = v57[3];
  v26 = a3[3];
  v27 = a3[4];
  v28 = a3[5];
  v29 = a3[6];
  v30 = *a3;
  v31 = a3[1];
  v51 = *v16;
  v32 = v51;
  v52 = v26;
  v40 = v26;
  v50[0] = v30;
  v43 = v30;
  v53 = v27;
  v54 = v28;
  v55 = v29;
  v33 = v16[5];
  v50[1] = v31;
  v34 = 0;
  v39 = v33;
  v56 = v33;
  v42 = v31;
  do
  {
    v58 = v50;
    v59 = 0;
    sub_25BEE0(v57, &v58, &v59);
    memcpy(src, v57, sizeof(src));
    if ( sub_25B130((int)src) == 64 )
      break;
  }
  while ( v34++ < 0x400 );
  v36 = (_DWORD *)_rust_alloc(0x2008u);
  if ( !v36 )
    alloc::alloc::handle_alloc_error();
  v37 = v36;
  *v36 = 1;
  v36[1] = 1;
  memcpy(v36 + 2, src, 0x2000u);
  *(_QWORD *)a1 = v45;
  *(_QWORD *)(a1 + 8) = v46;
  *(_QWORD *)(a1 + 16) = v47;
  *(_QWORD *)(a1 + 24) = v48;
  *(_QWORD *)(a1 + 72) = a5 ^ 0x7B2FAFCA875E2D65LL;
  *(_DWORD *)(a1 + 40) = v43 ^ 0xA1F6D83D;
  *(_DWORD *)(a1 + 44) = v42 ^ 0x113CFF0D;
  *(_DWORD *)(a1 + 48) = v32 ^ 0xB7027E3C;
  *(_DWORD *)(a1 + 52) = v40 ^ 0x29BF8855;
  *(_DWORD *)(a1 + 56) = v27 ^ 0xEFB44D2;
  *(_DWORD *)(a1 + 60) = v28 ^ 0x1E5F2E72;
  *(_DWORD *)(a1 + 64) = v29 ^ 0xF59869A0;
  *(_DWORD *)(a1 + 68) = v39 ^ 0x1BA5A4A3;
  memcpy((void *)(a1 + 80), &unk_28F330, 0xA0u);
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 240) = v41;
  *(_DWORD *)(a1 + 244) = v37;
  return v41;
}
