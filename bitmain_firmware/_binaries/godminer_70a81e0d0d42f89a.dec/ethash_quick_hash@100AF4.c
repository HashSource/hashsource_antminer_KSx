int __fastcall ethash_quick_hash(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // d17
  int v6; // r1
  char *v7; // r3
  unsigned __int64 v8; // r10
  char v10; // t1
  unsigned int v11; // r3
  unsigned __int64 v12; // r4
  _BYTE *v13; // r12
  int v14; // r2
  unsigned int v15; // t1
  unsigned int v16; // r10
  int v17; // r11
  __int64 *v18; // r4
  int *v19; // r5
  int v20; // r3
  int v21; // t1
  int v22; // r1
  __int64 v23; // r2
  int v24; // r1
  double v25; // r2
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int result; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  _BYTE v33[6]; // [sp+5h] [bp-8Fh] BYREF
  char v34; // [sp+Bh] [bp-89h] BYREF
  int v35; // [sp+Ch] [bp-88h]
  int v36; // [sp+10h] [bp-84h]
  int v37; // [sp+14h] [bp-80h]
  int v38; // [sp+18h] [bp-7Ch]
  int v39; // [sp+1Ch] [bp-78h]
  int v40; // [sp+20h] [bp-74h]
  int v41; // [sp+24h] [bp-70h]
  int v42; // [sp+28h] [bp-6Ch] BYREF
  int v43; // [sp+2Ch] [bp-68h] BYREF
  int v44; // [sp+30h] [bp-64h]
  int v45; // [sp+34h] [bp-60h]
  int v46; // [sp+38h] [bp-5Ch]
  int v47; // [sp+3Ch] [bp-58h]
  int v48; // [sp+40h] [bp-54h]
  int v49; // [sp+44h] [bp-50h]
  int v50; // [sp+48h] [bp-4Ch]
  unsigned int v51; // [sp+4Ch] [bp-48h]
  int v52; // [sp+50h] [bp-44h]
  __int64 v53; // [sp+54h] [bp-40h] BYREF
  __int64 v54; // [sp+5Ch] [bp-38h]
  double v55; // [sp+64h] [bp-30h]
  __int64 v56; // [sp+6Ch] [bp-28h]
  __int64 v57; // [sp+74h] [bp-20h]
  __int64 v58; // [sp+7Ch] [bp-18h]
  _BYTE v59[12]; // [sp+84h] [bp-10h] BYREF
  char v60; // [sp+90h] [bp-4h] BYREF

  HIDWORD(v8) = a4;
  v6 = a2 - 1;
  v7 = &v34;
  LODWORD(v8) = a3;
  do
  {
    v10 = *(_BYTE *)++v6;
    *++v7 = v10;
  }
  while ( (char *)&v42 + 3 != v7 );
  v33[3] = HIBYTE(a3);
  v11 = BYTE6(v8);
  v33[4] = BYTE2(a3);
  v12 = v8 & 0xFF00000000000000LL;
  v13 = v33;
  v33[2] = BYTE4(v8);
  v34 = a3;
  v14 = 48;
  v33[0] = BYTE6(v8);
  v33[1] = v8 >> 8 >> 32;
  v33[5] = BYTE1(v8);
  while ( 1 )
  {
    LODWORD(v5) = v14;
    v14 -= 8;
    v12 |= vshld_u64(vshrd_n_u64(vdup_n_s8(v11).n64_u64[0], 0x38u), v5);
    if ( !v14 )
      break;
    v15 = (unsigned __int8)*++v13;
    v11 = v15;
  }
  v53 = 0;
  v54 = 0;
  v16 = (unsigned __int8)v8 | (unsigned int)v12;
  v17 = HIDWORD(v12);
  v55 = 0.0;
  v18 = &v53;
  v43 = v35;
  v44 = v36;
  v45 = v37;
  v46 = v38;
  memset(v59, 0, sizeof(v59));
  v19 = (int *)&unk_295954;
  v56 = 0;
  v47 = v39;
  v48 = v40;
  v49 = v41;
  v50 = v42;
  v20 = 114;
  v57 = 0;
  v51 = v16;
  v58 = 0;
  v52 = v17;
  while ( 1 )
  {
    *(_DWORD *)v18 = v20;
    v18 = (__int64 *)((char *)v18 + 4);
    if ( v18 == (__int64 *)&v60 )
      break;
    v21 = *v19++;
    v20 = v21;
  }
  ethash_keccakf800(&v43);
  v22 = *(_DWORD *)(a5 + 4);
  v23 = *(_QWORD *)(a5 + 8);
  v51 = *(_DWORD *)a5;
  v52 = v22;
  v53 = v23;
  v24 = *(_DWORD *)(a5 + 20);
  v25 = *(double *)(a5 + 24);
  LODWORD(v54) = *(_DWORD *)(a5 + 16);
  HIDWORD(v54) = v24;
  v55 = v25;
  v58 = 0x430000004ELL;
  *(_DWORD *)&v59[8] = 78;
  *(_QWORD *)v59 = 0x490000004FLL;
  v56 = 0x4100000072LL;
  v57 = 0x4500000056LL;
  ethash_keccakf800(&v43);
  v26 = v44;
  v27 = v45;
  v28 = v46;
  *a1 = v43;
  a1[1] = v26;
  a1[2] = v27;
  a1[3] = v28;
  result = v47;
  v30 = v48;
  v31 = v49;
  v32 = v50;
  a1[4] = v47;
  a1[5] = v30;
  a1[6] = v31;
  a1[7] = v32;
  return result;
}
