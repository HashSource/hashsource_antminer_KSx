int __fastcall sub_144010(int *a1, int a2, int *a3)
{
  int *v3; // r8
  int v4; // r4
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int *v8; // r7
  unsigned int v9; // r4
  int *v10; // r6
  int *v11; // r8
  int *v12; // r12
  int v13; // t1
  unsigned int v14; // r0
  int *v15; // r2
  unsigned int v16; // r12
  unsigned int v17; // r3
  _DWORD *v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // t1
  int v21; // t1
  int v22; // r8
  int *v23; // r9
  int *v24; // r2
  int *v25; // r1
  unsigned int v26; // t1
  unsigned int v27; // r5
  int v28; // r7
  int *v29; // r5
  int v30; // r12
  int *v31; // r12
  int v32; // lr
  char *v33; // r8
  int *v34; // r5
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int *v38; // r4
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r3
  char *v43; // r9
  int v44; // t1
  int v45; // t1
  int *v49; // [sp+8h] [bp-21Ch]
  int v50; // [sp+20h] [bp-204h] BYREF
  int v51; // [sp+24h] [bp-200h]
  int v52; // [sp+28h] [bp-1FCh]
  int v53; // [sp+2Ch] [bp-1F8h]
  int v54; // [sp+30h] [bp-1F4h]
  int v55; // [sp+34h] [bp-1F0h]
  int v56; // [sp+38h] [bp-1ECh]
  _DWORD v57[8]; // [sp+3Ch] [bp-1E8h] BYREF
  int v58; // [sp+5Ch] [bp-1C8h] BYREF
  int v59; // [sp+60h] [bp-1C4h] BYREF
  int v60; // [sp+64h] [bp-1C0h]
  int v61; // [sp+68h] [bp-1BCh]
  int v62; // [sp+6Ch] [bp-1B8h]
  int v63; // [sp+70h] [bp-1B4h]
  int v64; // [sp+74h] [bp-1B0h]
  int v65; // [sp+78h] [bp-1ACh]
  int v66; // [sp+7Ch] [bp-1A8h] BYREF
  int v67[7]; // [sp+80h] [bp-1A4h] BYREF
  int v68; // [sp+9Ch] [bp-188h] BYREF
  int v69; // [sp+A0h] [bp-184h] BYREF
  int v70; // [sp+A4h] [bp-180h]
  int v71; // [sp+A8h] [bp-17Ch]
  int v72; // [sp+ACh] [bp-178h]
  int v73; // [sp+B0h] [bp-174h]
  int v74; // [sp+B4h] [bp-170h]
  int v75; // [sp+B8h] [bp-16Ch]
  int v76; // [sp+BCh] [bp-168h]
  _DWORD v77[8]; // [sp+C0h] [bp-164h] BYREF
  int v78; // [sp+E0h] [bp-144h] BYREF
  int v79; // [sp+E4h] [bp-140h]
  int v80; // [sp+E8h] [bp-13Ch]
  int v81; // [sp+ECh] [bp-138h]
  int v82; // [sp+F0h] [bp-134h]
  int v83; // [sp+F4h] [bp-130h]
  int v84; // [sp+F8h] [bp-12Ch]
  int v85; // [sp+FCh] [bp-128h] BYREF
  int v86[4]; // [sp+100h] [bp-124h] BYREF
  int v87; // [sp+110h] [bp-114h] BYREF
  char v88; // [sp+13Ch] [bp-E8h] BYREF
  int v89; // [sp+140h] [bp-E4h] BYREF
  int v90; // [sp+144h] [bp-E0h]
  int v91; // [sp+148h] [bp-DCh]
  int v92; // [sp+14Ch] [bp-D8h]
  int v93; // [sp+150h] [bp-D4h]
  int v94; // [sp+154h] [bp-D0h]
  int v95; // [sp+158h] [bp-CCh]
  int v96; // [sp+15Ch] [bp-C8h]
  int v97[16]; // [sp+160h] [bp-C4h] BYREF
  int v98[32]; // [sp+1A0h] [bp-84h] BYREF
  char v99; // [sp+220h] [bp-4h] BYREF

  v3 = a1 + 16;
  v4 = a2 + 63;
  v49 = a1 + 16;
  v50 = 1779033703;
  v51 = -1150833019;
  v52 = 1013904242;
  v53 = -1521486534;
  v54 = 1359893119;
  v55 = -1694144372;
  v56 = 528734635;
  v57[0] = 1541459225;
  sub_14279C(&v50, a1, 1);
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  v8 = v57;
  v9 = v4 & 0xFFFFFFC0;
  v69 = *v3;
  v70 = v5;
  v71 = v6;
  v72 = v7;
  v10 = v57;
  v11 = &v68;
  v73 = 128;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  memset(v77, 0, 28);
  v77[7] = -2147352576;
  sub_14279C(&v50, &v69, 1);
  v78 = 1779033703;
  v82 = 1359893119;
  v79 = -1150833019;
  v57[1] = v50;
  v57[2] = v51;
  v57[3] = v52;
  v57[4] = v53;
  v83 = -1694144372;
  v84 = 528734635;
  v80 = 1013904242;
  v81 = -1521486534;
  v12 = &v68;
  v85 = 1541459225;
  v57[5] = v54;
  v57[6] = v55;
  v57[7] = v56;
  v58 = v57[0];
  do
  {
    v13 = v10[1];
    ++v10;
    v12[1] = v13 ^ 0x36363636;
    ++v12;
  }
  while ( v10 != &v58 );
  memset(v77, 54, sizeof(v77));
  sub_14279C(&v78, &v69, 0);
  sub_14279C(&v78, a1, 1);
  v14 = a1[17];
  v15 = &v87;
  v86[0] = bswap32(a1[16]);
  v16 = a1[18];
  v86[1] = bswap32(v14);
  v17 = 0x80000000;
  v18 = &unk_29B1E0;
  v19 = bswap32(a1[19]);
  v86[2] = bswap32(v16);
  v86[3] = v19;
  while ( 1 )
  {
    v15[1] = v17;
    if ( ++v15 == (int *)&v88 )
      break;
    v20 = v18[1];
    ++v18;
    v17 = bswap32(v20);
  }
  v89 = 1779033703;
  v90 = -1150833019;
  v91 = 1013904242;
  v92 = -1521486534;
  v93 = 1359893119;
  v94 = -1694144372;
  v95 = 528734635;
  v96 = 1541459225;
  do
  {
    v21 = v8[1];
    ++v8;
    v11[1] = v21 ^ 0x5C5C5C5C;
    ++v11;
  }
  while ( v8 != v10 );
  memset(v77, 92, sizeof(v77));
  v22 = 0;
  v23 = v98;
  sub_14279C(&v89, &v69, 0);
  v97[8] = 0x80000000;
  memset(&v97[9], 0, 24);
  v97[15] = 768;
  do
  {
    ++v22;
    v59 = v78;
    v60 = v79;
    v61 = v80;
    v62 = v81;
    v87 = v22;
    v63 = v82;
    v64 = v83;
    v65 = v84;
    v66 = v85;
    sub_14279C(&v59, v86, 0);
    v97[0] = v59;
    v97[1] = v60;
    v97[2] = v61;
    v97[3] = v62;
    v97[4] = v63;
    v97[5] = v64;
    v97[6] = v65;
    v97[7] = v66;
    v67[0] = v89;
    v67[1] = v90;
    v67[2] = v91;
    v67[3] = v92;
    v67[4] = v93;
    v67[5] = v94;
    v67[6] = v95;
    v68 = v96;
    sub_14279C(v67, v97, 0);
    v24 = &v66;
    v25 = v23;
    do
    {
      v26 = v24[1];
      ++v24;
      *v25++ = bswap32(v26);
    }
    while ( &v68 != v24 );
    v23 += 8;
  }
  while ( v22 != 4 );
  v27 = v9;
  do
  {
    memcpy((void *)v27, v98, 0x80u);
    sub_14238C(v98, &v98[16]);
    sub_14238C(&v98[16], v98);
    memcpy((void *)(v27 + 128), v98, 0x80u);
    v27 += 256;
    sub_14238C(v98, &v98[16]);
    sub_14238C(&v98[16], v98);
  }
  while ( v9 + 0x20000 != v27 );
  v28 = 512;
  do
  {
    v29 = v98;
    v30 = ((v98[16] & 0x3FF) << 7) - (_DWORD)v98;
    do
    {
      *(_QWORD *)v29 ^= *(_QWORD *)((char *)v29 + v9 + v30);
      v29 += 2;
    }
    while ( &v99 != (char *)v29 );
    sub_14238C(v98, &v98[16]);
    sub_14238C(&v98[16], v98);
    v31 = v98;
    v32 = ((v98[16] & 0x3FF) << 7) - (_DWORD)v98;
    do
    {
      *(_QWORD *)v31 ^= *(_QWORD *)((char *)v31 + v9 + v32);
      v31 += 2;
    }
    while ( v29 != v31 );
    sub_14238C(v98, &v98[16]);
    sub_14238C(&v98[16], v98);
    --v28;
  }
  while ( v28 );
  v69 = 1779033703;
  v70 = -1150833019;
  v71 = 1013904242;
  v72 = -1521486534;
  v73 = 1359893119;
  v74 = -1694144372;
  v75 = 528734635;
  v76 = 1541459225;
  sub_14279C(&v69, a1, 1);
  v33 = &v88;
  v34 = &v77[7];
  v35 = v49[1];
  v36 = v49[2];
  v37 = v49[3];
  v89 = *v49;
  v90 = v35;
  v91 = v36;
  v92 = v37;
  v38 = &v77[7];
  v93 = 128;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  memset(v97, 0, 28);
  v97[7] = -2147352576;
  sub_14279C(&v69, &v89, 1);
  v78 = v69;
  v79 = v70;
  v80 = v71;
  v81 = v72;
  *a3 = 1779033703;
  v39 = v73;
  v40 = v74;
  v41 = v75;
  v42 = v76;
  a3[1] = -1150833019;
  a3[3] = -1521486534;
  a3[2] = 1013904242;
  a3[7] = 1541459225;
  a3[4] = 1359893119;
  v82 = v39;
  v83 = v40;
  v84 = v41;
  v85 = v42;
  a3[5] = -1694144372;
  a3[6] = 528734635;
  v43 = &v88;
  do
  {
    v44 = v38[1];
    ++v38;
    *((_DWORD *)v43 + 1) = v44 ^ 0x5C5C5C5C;
    v43 += 4;
  }
  while ( &v85 != v38 );
  memset(v97, 92, 32);
  sub_14279C(a3, &v89, 0);
  v69 = 1779033703;
  v70 = -1150833019;
  v71 = 1013904242;
  v72 = -1521486534;
  v73 = 1359893119;
  v74 = -1694144372;
  v75 = 528734635;
  v76 = 1541459225;
  do
  {
    v45 = v34[1];
    ++v34;
    *((_DWORD *)v33 + 1) = v45 ^ 0x36363636;
    v33 += 4;
  }
  while ( v34 != v38 );
  memset(v97, 54, 32);
  sub_14279C(&v69, &v89, 0);
  sub_14279C(&v69, v98, 1);
  sub_14279C(&v69, &v98[16], 1);
  sub_14279C(&v69, dword_29B22C, 0);
  v89 = v69;
  v90 = v70;
  v91 = v71;
  v92 = v72;
  v93 = v73;
  v94 = v74;
  v95 = v75;
  v96 = v76;
  v97[0] = 0x80000000;
  memset(&v97[1], 0, 24);
  v97[7] = 768;
  return sub_14279C(a3, &v89, 0);
}
