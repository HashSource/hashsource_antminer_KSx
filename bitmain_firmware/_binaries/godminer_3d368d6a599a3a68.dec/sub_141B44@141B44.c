int __fastcall sub_141B44(int a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // r10
  __int64 v5; // r2
  __int64 v6; // r6
  __int64 v7; // r10
  __int64 v8; // r6
  __int64 v9; // r10
  __int64 v10; // r6
  __int64 v11; // r10
  __int64 v12; // r6
  __int64 v13; // r6
  __int64 v14; // r10
  __int64 v15; // r6
  __int64 v16; // r6
  __int64 v17; // r10
  __int64 v18; // r6
  __int64 v19; // r6
  __int64 v20; // r10
  __int64 v21; // r6
  __int64 v22; // r10
  __int64 v23; // r6
  __int64 v24; // r10
  __int64 v25; // r4
  __int64 *v27; // r7
  __int64 *v28; // lr
  _QWORD *i; // r6
  __int64 v30; // t1
  _QWORD *v31; // r3
  __int64 *v32; // r2
  __int64 v33; // t1
  __int64 v34; // r10
  __int64 v35; // r4
  __int64 v36; // r0
  __int64 v37; // r10
  __int64 v38; // t1
  __int64 v39; // r0
  int v40; // r10
  int v41; // r2
  int v42; // r7
  unsigned int v43; // r9
  __int64 v44; // r4
  int v45; // r6
  int v46; // r3
  unsigned int v47; // r7
  int v48; // r9
  int v49; // r11
  int v50; // r8
  int v51; // r3
  unsigned int v52; // r9
  int v53; // r7
  unsigned int v54; // r11
  int v55; // r6
  unsigned int v56; // r10
  unsigned int v57; // r3
  unsigned int v58; // r2
  unsigned int v59; // r6
  int v60; // r7
  int v61; // r2
  int v62; // r9
  int v63; // r3
  int v64; // r6
  unsigned int v65; // r2
  int v66; // r3
  int v67; // r2
  unsigned int v68; // r7
  int v69; // r2
  unsigned int v70; // r2
  int v71; // r3
  int v72; // r8
  int v73; // r8
  int v74; // r2
  int v75; // r8
  unsigned int v76; // r9
  __int64 v77; // r8
  __int64 v78; // r10
  __int64 v79; // r0
  __int64 v80; // r6
  __int64 v81; // r2
  __int64 v82; // r0
  __int64 j; // [sp+0h] [bp-F4h]
  unsigned int v85; // [sp+0h] [bp-F4h]
  __int64 *v86; // [sp+30h] [bp-C4h]
  __int64 v87; // [sp+34h] [bp-C0h]
  __int64 v88; // [sp+3Ch] [bp-B8h]
  __int64 v89; // [sp+44h] [bp-B0h]
  __int64 v90; // [sp+4Ch] [bp-A8h]
  __int64 v91; // [sp+54h] [bp-A0h]
  int v92; // [sp+5Ch] [bp-98h]
  unsigned int v93; // [sp+5Ch] [bp-98h]
  __int64 v94; // [sp+60h] [bp-94h]
  __int64 v95; // [sp+68h] [bp-8Ch]
  unsigned int v96; // [sp+74h] [bp-80h]
  unsigned int v97; // [sp+78h] [bp-7Ch]
  int v98; // [sp+7Ch] [bp-78h]
  int v99; // [sp+80h] [bp-74h]
  int v100; // [sp+80h] [bp-74h]
  int v101; // [sp+84h] [bp-70h]
  int v102; // [sp+88h] [bp-6Ch]
  _QWORD *v103; // [sp+8Ch] [bp-68h]
  __int64 v104; // [sp+90h] [bp-64h]
  _QWORD *v105; // [sp+98h] [bp-5Ch]
  _QWORD *v106; // [sp+9Ch] [bp-58h]
  __int64 v107; // [sp+A0h] [bp-54h] BYREF
  __int64 v108; // [sp+A8h] [bp-4Ch]
  __int64 v109; // [sp+B0h] [bp-44h]
  __int64 v110; // [sp+B8h] [bp-3Ch]
  __int64 v111; // [sp+C0h] [bp-34h]
  __int64 v112; // [sp+C8h] [bp-2Ch]
  _DWORD v113[9]; // [sp+D0h] [bp-24h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *a2 ^ *(_QWORD *)a1;
  *(_QWORD *)a1 = v5;
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = a2[1] ^ v4;
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = a2[2] ^ v6;
  v8 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = a2[3] ^ v7;
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = a2[4] ^ v8;
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 40) = a2[5] ^ v9;
  v11 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 48) = a2[6] ^ v10;
  v12 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 56) = a2[7] ^ v11;
  *(_QWORD *)(a1 + 64) = a2[8] ^ v12;
  if ( a3 > 0x48 )
  {
    v13 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 72) ^= a2[9];
    v14 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = a2[10] ^ v13;
    v15 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 88) = a2[11] ^ v14;
    *(_QWORD *)(a1 + 96) = a2[12] ^ v15;
    if ( a3 > 0x68 )
    {
      v16 = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 104) ^= a2[13];
      v17 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 112) = a2[14] ^ v16;
      v18 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = a2[15] ^ v17;
      *(_QWORD *)(a1 + 128) = a2[16] ^ v18;
      if ( a3 > 0x88 )
      {
        *(_QWORD *)(a1 + 136) ^= a2[17];
        if ( a3 > 0x90 )
        {
          v19 = *(_QWORD *)(a1 + 152);
          *(_QWORD *)(a1 + 144) ^= a2[18];
          v20 = *(_QWORD *)(a1 + 160);
          *(_QWORD *)(a1 + 152) = a2[19] ^ v19;
          v21 = *(_QWORD *)(a1 + 168);
          *(_QWORD *)(a1 + 160) = a2[20] ^ v20;
          v22 = *(_QWORD *)(a1 + 176);
          *(_QWORD *)(a1 + 168) = a2[21] ^ v21;
          v23 = *(_QWORD *)(a1 + 184);
          *(_QWORD *)(a1 + 176) = a2[22] ^ v22;
          v24 = *(_QWORD *)(a1 + 192);
          *(_QWORD *)(a1 + 184) = a2[23] ^ v23;
          *(_QWORD *)(a1 + 192) = a2[24] ^ v24;
        }
      }
    }
  }
  v25 = v5;
  v103 = &unk_29BB90;
  v104 = 1;
  v105 = (_QWORD *)(a1 - 8);
  v86 = (__int64 *)(a1 + 200);
  v106 = (_QWORD *)(a1 + 32);
  while ( 1 )
  {
    v27 = &v107;
    v28 = (__int64 *)a1;
    for ( i = (_QWORD *)a1; ; ++i )
    {
      *v27++ = i[15] ^ i[5] ^ i[10] ^ i[20] ^ v25;
      if ( v106 == i )
        break;
      v30 = i[1];
      v25 = v30;
    }
    v31 = v105;
    v113[4] = ((2 * v111) | (HIDWORD(v111) >> 31)) ^ v109;
    v113[5] = (v111 >> 31) ^ HIDWORD(v109);
    LODWORD(v112) = ((2 * v108) | (HIDWORD(v108) >> 31)) ^ v111;
    HIDWORD(v112) = (v108 >> 31) ^ HIDWORD(v111);
    v113[0] = ((2 * v109) | (HIDWORD(v109) >> 31)) ^ v107;
    v113[1] = (v109 >> 31) ^ HIDWORD(v107);
    v32 = (__int64 *)v113;
    v113[6] = ((2 * v107) | (HIDWORD(v107) >> 31)) ^ v110;
    v113[7] = (v107 >> 31) ^ HIDWORD(v110);
    v113[2] = ((2 * v110) | (HIDWORD(v110) >> 31)) ^ v108;
    v113[3] = (v110 >> 31) ^ HIDWORD(v108);
    for ( j = v112; ; j = v38 )
    {
      v33 = v31[1];
      *++v31 = j ^ v33;
      v34 = v31[10];
      v35 = v31[15];
      v31[5] ^= j;
      v36 = j ^ v34;
      v37 = v31[20];
      v31[10] = v36;
      v31[15] = j ^ v35;
      v31[20] = j ^ v37;
      if ( i == v31 )
        break;
      v38 = *v32++;
    }
    LODWORD(v39) = *(_DWORD *)(a1 + 36);
    v40 = *(__int64 *)(a1 + 16) >> 2;
    v98 = (2 * *(_DWORD *)(a1 + 8)) | (*(_DWORD *)(a1 + 12) >> 31);
    HIDWORD(v39) = *(_DWORD *)(a1 + 32);
    v41 = (*(_DWORD *)(a1 + 20) >> 2) | (*(_DWORD *)(a1 + 16) << 30);
    v99 = *(__int64 *)(a1 + 8) >> 31;
    v42 = *(__int64 *)(a1 + 24) >> 4;
    v43 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = (*(_DWORD *)(a1 + 24) << 28) | (*(_DWORD *)(a1 + 28) >> 4);
    v102 = ((_DWORD)v39 << 27) | (HIDWORD(v39) >> 5);
    v87 = *(_QWORD *)(a1 + 80);
    LODWORD(v44) = *(_DWORD *)(a1 + 100);
    v88 = *(_QWORD *)(a1 + 88);
    HIDWORD(v44) = *(_DWORD *)(a1 + 96);
    v101 = v39 >> 5;
    HIDWORD(v39) = *(_DWORD *)(a1 + 104);
    v45 = (*(_DWORD *)(a1 + 72) << 20) | (*(_DWORD *)(a1 + 76) >> 12);
    v46 = v44 >> 21;
    HIDWORD(v44) = *(__int64 *)(a1 + 96) >> 21;
    v97 = *(_DWORD *)(a1 + 44);
    v85 = v43;
    v92 = *(__int64 *)(a1 + 72) >> 12;
    *(_DWORD *)(a1 + 44) = v42;
    v47 = *(_DWORD *)(a1 + 108);
    v48 = *(_DWORD *)(a1 + 124);
    v49 = *(_DWORD *)(a1 + 132);
    HIDWORD(v89) = *(_DWORD *)(a1 + 120);
    v50 = (v47 << 25) | (HIDWORD(v39) >> 7);
    LODWORD(v44) = *(_DWORD *)(a1 + 128);
    *(_DWORD *)(a1 + 16) = HIDWORD(v44);
    HIDWORD(v44) = *(_DWORD *)(a1 + 148);
    HIDWORD(v90) = v44;
    LODWORD(v44) = HIDWORD(v39) << 25;
    HIDWORD(v39) = *(_DWORD *)(a1 + 136);
    LODWORD(v44) = v44 | (v47 >> 7);
    *(_DWORD *)(a1 + 20) = v46;
    v51 = *(_DWORD *)(a1 + 112);
    LODWORD(v91) = HIDWORD(v39);
    HIDWORD(v39) = *(_DWORD *)(a1 + 140);
    LODWORD(v39) = *(_DWORD *)(a1 + 116);
    LODWORD(v89) = v48;
    LODWORD(v90) = v49;
    v52 = *(_DWORD *)(a1 + 48);
    v53 = *(__int64 *)(a1 + 112) >> 25;
    v54 = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 48) = v45;
    LODWORD(v39) = ((unsigned int)v39 >> 25) | (v51 << 7);
    v55 = v92;
    v93 = HIDWORD(v44);
    HIDWORD(v44) = *(_DWORD *)(a1 + 168);
    HIDWORD(v91) = HIDWORD(v39);
    HIDWORD(v39) = *(_DWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 160) = v40;
    v56 = *(_DWORD *)(a1 + 176);
    v57 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 164) = v41;
    *(_DWORD *)(a1 + 52) = v55;
    v58 = *(_DWORD *)(a1 + 180);
    v59 = *(_DWORD *)(a1 + 156);
    LODWORD(v94) = HIDWORD(v44);
    *(_DWORD *)(a1 + 180) = v39;
    LODWORD(v39) = (v54 << 18) | (HIDWORD(v39) >> 14);
    *(_DWORD *)(a1 + 112) = (HIDWORD(v39) << 18) | (v54 >> 14);
    *(_DWORD *)(a1 + 176) = v53;
    HIDWORD(v39) = (v56 >> 3) | (v58 << 29);
    *(_DWORD *)(a1 + 76) = (v58 >> 3) | (v56 << 29);
    v60 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 8) = (v52 >> 20) | (v57 << 12);
    v61 = *(_DWORD *)(a1 + 152);
    v62 = (v57 >> 20) | (v52 << 12);
    v63 = v59 << 8;
    *(_DWORD *)(a1 + 116) = v39;
    LODWORD(v39) = *(_DWORD *)(a1 + 196);
    v64 = (v61 << 8) | HIBYTE(v59);
    v65 = *(_DWORD *)(a1 + 152);
    HIDWORD(v44) = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 12) = v62;
    v66 = v63 | HIBYTE(v65);
    v67 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 100) = v50;
    *(_DWORD *)(a1 + 96) = v44;
    LODWORD(v44) = *(_DWORD *)(a1 + 188);
    HIDWORD(v95) = v60;
    v96 = v39;
    LODWORD(v39) = v67 << 6;
    v68 = *(_DWORD *)(a1 + 192);
    v69 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 108) = v66;
    HIDWORD(v94) = HIDWORD(v44);
    LODWORD(v95) = v44;
    *(_DWORD *)(a1 + 72) = HIDWORD(v39);
    HIDWORD(v39) = v69 << 6;
    *(_DWORD *)(a1 + 104) = v64;
    v70 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 84) = v99;
    v71 = *(_DWORD *)(a1 + 68) >> 9;
    *(_DWORD *)(a1 + 80) = v98;
    *(_DWORD *)(a1 + 124) = v102;
    LODWORD(v39) = v39 | (*(_DWORD *)(a1 + 56) >> 26);
    HIDWORD(v39) |= *(_DWORD *)(a1 + 60) >> 26;
    v72 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 120) = v101;
    v100 = v72 << 21;
    v73 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 128) = (v85 >> 28) | (16 * v97);
    v74 = (v70 >> 9) | (v73 << 23);
    *(_DWORD *)(a1 + 132) = (v97 >> 28) | (16 * v85);
    *(_DWORD *)(a1 + 92) = v39;
    *(_DWORD *)(a1 + 88) = HIDWORD(v39);
    v75 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 168) = v74;
    *(_DWORD *)(a1 + 172) = v71 | (v75 << 23);
    *(_DWORD *)(a1 + 60) = v87 >> 29;
    *(_DWORD *)(a1 + 140) = v88 >> 22;
    *(_DWORD *)(a1 + 56) = (8 * v87) | (HIDWORD(v87) >> 29);
    *(_DWORD *)(a1 + 136) = ((_DWORD)v88 << 10) | (HIDWORD(v88) >> 22);
    *(_DWORD *)(a1 + 184) = (HIDWORD(v89) >> 23) | ((_DWORD)v89 << 9);
    *(_DWORD *)(a1 + 64) = (HIDWORD(v90) >> 19) | ((_DWORD)v90 << 13);
    *(_DWORD *)(a1 + 188) = v89 >> 23;
    *(_DWORD *)(a1 + 148) = v91 >> 17;
    v76 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 68) = v90 >> 19;
    *(_DWORD *)(a1 + 144) = ((_DWORD)v91 << 15) | (HIDWORD(v91) >> 17);
    *(_DWORD *)(a1 + 28) = (v93 << 21) | (v76 >> 11);
    *(_DWORD *)(a1 + 196) = v94 >> 30;
    *(_DWORD *)(a1 + 152) = (HIDWORD(v95) >> 8) | ((_DWORD)v44 << 24);
    *(_DWORD *)(a1 + 192) = (4 * v94) | (HIDWORD(v44) >> 30);
    *(_DWORD *)(a1 + 36) = __SPAIR64__(v96, v68) >> 18;
    *(_DWORD *)(a1 + 156) = v95 >> 8;
    *(_DWORD *)(a1 + 24) = v100 | (v93 >> 11);
    *(_DWORD *)(a1 + 32) = (v68 << 14) | (v96 >> 18);
    do
    {
      v77 = *v28;
      v28 += 5;
      v78 = *(v28 - 1);
      v79 = *(v28 - 2);
      v80 = *(v28 - 3);
      v81 = *(v28 - 4);
      *(v28 - 2) = v77 & ~v78 ^ v79;
      *(v28 - 1) = v81 & ~v77 ^ v78;
      *(v28 - 3) = v78 & ~v79 ^ v80;
      *(v28 - 4) = v79 & ~v80 ^ v81;
      *(v28 - 5) = v80 & ~v81 ^ v77;
    }
    while ( v86 != v28 );
    v82 = v104 ^ *(_QWORD *)a1;
    v25 = v82;
    *(_QWORD *)a1 = v82;
    if ( &unk_29BC48 == (_UNKNOWN *)v103 )
      break;
    v104 = v103[1];
    ++v103;
  }
  return v82;
}
