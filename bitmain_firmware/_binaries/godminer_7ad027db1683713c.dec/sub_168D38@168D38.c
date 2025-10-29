int __fastcall sub_168D38(int a1, char a2, char a3, void *a4, size_t n)
{
  unsigned int v5; // r6
  __int64 v6; // r4
  size_t v7; // r6
  __int64 v8; // r10
  char *v9; // r3
  int *v10; // r12
  __int64 *v11; // r4
  int v12; // r0
  int v13; // r1
  __int64 *v14; // lr
  int v15; // r2
  int v16; // r3
  __int64 v17; // r10
  __int64 v18; // r6
  int v19; // r4
  int v20; // r8
  __int64 v21; // r8
  __int64 v22; // r4
  __int64 v23; // r0
  __int64 v24; // r4
  __int64 v25; // r2
  __int64 v26; // r8
  __int64 v27; // r4
  __int64 v28; // r6
  __int64 v29; // r4
  int v30; // d16.s[0]
  __int64 v31; // r10
  _QWORD *v32; // r12
  __int64 v33; // r8
  __int64 v34; // r2
  __int64 v35; // r0
  __int64 v36; // r0
  __int64 v37; // r2
  __int64 v38; // r10
  __int64 v39; // r6
  __int64 v40; // r4
  __int64 v41; // r0
  __int64 v42; // r10
  __int64 v43; // r6
  __int64 v44; // r10
  void **p_dest; // r3
  __int64 *v46; // r2
  __int64 i; // r6
  __int64 v48; // t1
  __int64 v49; // t1
  __int64 *v50; // lr
  char *v51; // r12
  __int64 v52; // t1
  _QWORD *v53; // r3
  __int64 v54; // r0
  unsigned __int64 v56; // [sp+8h] [bp-1BCh]
  __int64 v57; // [sp+10h] [bp-1B4h]
  __int64 v58; // [sp+10h] [bp-1B4h]
  __int64 v59; // [sp+10h] [bp-1B4h]
  __int64 v60; // [sp+10h] [bp-1B4h]
  __int64 v61; // [sp+18h] [bp-1ACh]
  __int64 v62; // [sp+18h] [bp-1ACh]
  __int64 v63; // [sp+18h] [bp-1ACh]
  __int64 v64; // [sp+20h] [bp-1A4h]
  __int64 v65; // [sp+20h] [bp-1A4h]
  __int64 v66; // [sp+28h] [bp-19Ch]
  __int64 v67; // [sp+28h] [bp-19Ch]
  __int64 v68; // [sp+28h] [bp-19Ch]
  __int64 v69; // [sp+30h] [bp-194h]
  __int64 v70; // [sp+30h] [bp-194h]
  __int64 v71; // [sp+30h] [bp-194h]
  __int64 v72; // [sp+38h] [bp-18Ch]
  __int64 v73; // [sp+38h] [bp-18Ch]
  __int64 v74; // [sp+38h] [bp-18Ch]
  __int64 v75; // [sp+38h] [bp-18Ch]
  __int64 v76; // [sp+38h] [bp-18Ch]
  __int64 v77; // [sp+40h] [bp-184h]
  __int64 v78; // [sp+40h] [bp-184h]
  __int64 v79; // [sp+48h] [bp-17Ch]
  __int64 v80; // [sp+48h] [bp-17Ch]
  __int64 v81; // [sp+50h] [bp-174h]
  __int64 v82; // [sp+50h] [bp-174h]
  __int64 v83; // [sp+58h] [bp-16Ch]
  __int64 v84; // [sp+58h] [bp-16Ch]
  __int64 v85; // [sp+58h] [bp-16Ch]
  _QWORD *v86; // [sp+60h] [bp-164h]
  __int64 v87; // [sp+60h] [bp-164h]
  int v88; // [sp+68h] [bp-15Ch]
  _QWORD *v89; // [sp+68h] [bp-15Ch]
  _QWORD *v90; // [sp+78h] [bp-14Ch]
  _QWORD *v91; // [sp+78h] [bp-14Ch]
  __int64 *v92; // [sp+78h] [bp-14Ch]
  _QWORD *v93; // [sp+78h] [bp-14Ch]
  _QWORD *v94; // [sp+80h] [bp-144h]
  _QWORD *v95; // [sp+94h] [bp-130h]
  _QWORD *v96; // [sp+98h] [bp-12Ch]
  _QWORD *v97; // [sp+98h] [bp-12Ch]
  _QWORD *v98; // [sp+A0h] [bp-124h]
  _QWORD *v99; // [sp+A0h] [bp-124h]
  _QWORD *v100; // [sp+A8h] [bp-11Ch]
  _QWORD *v101; // [sp+A8h] [bp-11Ch]
  _QWORD *v102; // [sp+B0h] [bp-114h]
  _QWORD *v103; // [sp+B4h] [bp-110h]
  _QWORD *v104; // [sp+B8h] [bp-10Ch]
  _QWORD *v105; // [sp+BCh] [bp-108h]
  _QWORD *v106; // [sp+BCh] [bp-108h]
  __int64 *v107; // [sp+C0h] [bp-104h]
  _QWORD *v108; // [sp+C8h] [bp-FCh]
  _QWORD *v109; // [sp+C8h] [bp-FCh]
  _QWORD *v110; // [sp+CCh] [bp-F8h]
  _QWORD *v111; // [sp+D0h] [bp-F4h]
  _QWORD *v112; // [sp+DCh] [bp-E8h]
  _QWORD *v113; // [sp+E0h] [bp-E4h]
  _QWORD *v114; // [sp+E0h] [bp-E4h]
  _QWORD *v115; // [sp+E4h] [bp-E0h]
  _QWORD *v116; // [sp+E8h] [bp-DCh]
  void *dest; // [sp+F0h] [bp-D4h] BYREF
  _QWORD *v119; // [sp+F4h] [bp-D0h]
  __int64 v120; // [sp+F8h] [bp-CCh] BYREF
  __int64 v121; // [sp+100h] [bp-C4h]
  __int64 v122; // [sp+108h] [bp-BCh]
  __int64 v123; // [sp+110h] [bp-B4h]
  __int64 v124; // [sp+118h] [bp-ACh] BYREF
  __int64 v125; // [sp+120h] [bp-A4h]
  __int64 v126; // [sp+128h] [bp-9Ch]
  __int64 v127; // [sp+130h] [bp-94h] BYREF
  __int64 v128; // [sp+138h] [bp-8Ch] BYREF
  __int64 v129; // [sp+140h] [bp-84h] BYREF
  __int64 v130; // [sp+148h] [bp-7Ch]
  __int64 v131; // [sp+150h] [bp-74h]
  __int64 v132; // [sp+158h] [bp-6Ch]
  __int64 v133; // [sp+160h] [bp-64h]
  __int64 v134; // [sp+168h] [bp-5Ch]
  __int64 v135; // [sp+170h] [bp-54h]
  char v136[76]; // [sp+178h] [bp-4Ch] BYREF

  v5 = *(_DWORD *)(a1 + 64);
  dest = a4;
  v136[0] = (128 >> a3) | a2 & -(128 >> a3);
  v6 = *(_QWORD *)(a1 + 136);
  if ( v5 > 0x37 )
  {
    v7 = 128 - v5;
    v8 = v6 + 2;
  }
  else
  {
    v7 = 64 - v5;
    v8 = v6 + 1;
  }
  memset(&v136[1], 0, v7 - 9);
  v9 = &v136[v7 - 8];
  *v9 = HIBYTE(v8);
  v9[4] = BYTE3(v8);
  v9[6] = BYTE1(v8);
  v9[2] = BYTE5(v8);
  v9[3] = BYTE4(v8);
  v9[7] = v8;
  v9[1] = BYTE6(v8);
  v9[5] = BYTE2(v8);
  v119 = (_QWORD *)(a1 + 72);
  sph_groestl224_0((_DWORD *)a1, v136, v7);
  v10 = (int *)(a1 + 72);
  v11 = &v120;
  do
  {
    v12 = *v10;
    v10 += 4;
    v13 = *(v10 - 3);
    v14 = v11;
    v15 = *(v10 - 2);
    v11 += 2;
    v16 = *(v10 - 1);
    *(_DWORD *)v14 = v12;
    *((_DWORD *)v14 + 1) = v13;
    *((_DWORD *)v14 + 2) = v15;
    *((_DWORD *)v14 + 3) = v16;
  }
  while ( v10 != (int *)(a1 + 136) );
  v56 = 0;
  v128 = v120;
  v129 = v121;
  v130 = v122;
  v131 = v123;
  v132 = v124;
  v133 = v125;
  v134 = v126;
  v135 = v127;
  v77 = v120;
  v64 = v125;
  v83 = v127;
  v81 = v121;
  v79 = v122;
  v69 = v123;
  v61 = v124;
  v72 = v126;
  do
  {
    v66 = v77 ^ v56;
    v57 = v81 ^ (v56 + 16);
    v70 = v69 ^ (v56 + 48);
    v62 = (v56 + 64) ^ v61;
    v17 = v64 ^ (v56 + 80);
    v73 = (v56 + 96) ^ v72;
    v82 = v79 ^ (v56 + 32);
    v84 = v83 ^ (v56 + 112);
    v105 = &qword_28BC58[(unsigned __int8)((unsigned __int16)((v77 ^ v56) >> 32) >> 8)];
    v78 = qword_289C60[BYTE1(v57) - 1]
        ^ (v56 + 1)
        ^ qword_288C58[(unsigned __int8)(v77 ^ v56)]
        ^ qword_289458[HIBYTE(HIDWORD(v84))]
        ^ qword_28A460[(unsigned __int8)(((unsigned int)v79 ^ ((_DWORD)v56 + 32)) >> 16) - 1]
        ^ qword_28AC50[BYTE3(v70) + 1]
        ^ qword_28B460[BYTE4(v62) - 1]
        ^ qword_28BC58[BYTE5(v17)]
        ^ qword_28C458[BYTE6(v73)];
    v18 = qword_28A460[BYTE2(v70) - 1];
    v113 = &qword_28AC50[BYTE3(v66)];
    v19 = BYTE2(v66);
    v20 = LODWORD(qword_289C60[BYTE1(v82) - 1])
        ^ LODWORD(qword_288C58[(unsigned __int8)v57])
        ^ (v56 + 17)
        ^ LODWORD(qword_289458[HIBYTE(HIDWORD(v66))])
        ^ v18;
    LOBYTE(v18) = BYTE1(v66);
    LODWORD(v66) = v20;
    v21 = qword_28AC50[BYTE3(v62) + 1];
    v115 = &qword_28A460[v19];
    v90 = &qword_28B460[BYTE4(v66)];
    v116 = &qword_289C60[(unsigned __int8)v18];
    v22 = qword_28B460[BYTE4(v17) - 1];
    LODWORD(v23) = v66 ^ v21 ^ v22;
    HIDWORD(v23) = ((qword_289C60[BYTE1(v82) - 1]
                   ^ qword_288C58[(unsigned __int8)v57]
                   ^ (v56 + 17)
                   ^ qword_289458[HIBYTE(HIDWORD(v66))]) >> 32)
                 ^ HIDWORD(v18)
                 ^ HIDWORD(v21)
                 ^ HIDWORD(v22);
    v24 = qword_288C58[(unsigned __int8)v82];
    v25 = qword_28C458[BYTE6(v66)];
    v80 = v23 ^ qword_28BC58[BYTE5(v73)] ^ qword_28C458[BYTE6(v84)];
    LODWORD(v23) = v25 ^ v24;
    HIDWORD(v25) ^= ((v56 + 33) >> 32) ^ HIDWORD(v24);
    v26 = qword_289C60[BYTE1(v70) - 1];
    v27 = qword_289458[HIBYTE(HIDWORD(v57))];
    HIDWORD(v25) ^= HIDWORD(v27) ^ HIDWORD(v26);
    LODWORD(v25) = (v56 + 33) ^ v23 ^ v27 ^ v26;
    v67 = v25
        ^ qword_28A460[BYTE2(v62) - 1]
        ^ qword_28AC50[(((unsigned int)v64 ^ ((_DWORD)v56 + 80)) >> 24) + 1]
        ^ qword_28B460[BYTE4(v73) - 1]
        ^ qword_28BC58[BYTE5(v84)];
    v100 = &qword_288C58[(unsigned __int8)v84];
    v98 = &qword_289458[HIBYTE(HIDWORD(v17))];
    v102 = &qword_289C60[BYTE1(v84)];
    v108 = &qword_28C458[BYTE6(v17)];
    v65 = qword_28AC50[BYTE3(v73) + 1]
        ^ qword_289458[HIBYTE(HIDWORD(v82))]
        ^ (v56 + 49)
        ^ *v105
        ^ qword_288C58[(unsigned __int8)v70]
        ^ qword_289C60[BYTE1(v62) - 1]
        ^ qword_28A460[BYTE2(v17) - 1]
        ^ qword_28B460[BYTE4(v84) - 1]
        ^ qword_28C458[BYTE6(v57)];
    v104 = &qword_28A460[BYTE2(v57)];
    HIDWORD(v17) = &qword_28A460[BYTE2(v84)];
    HIDWORD(v23) = &qword_28AC50[BYTE3(v84)];
    v85 = qword_288C58[(unsigned __int8)v17];
    v88 = HIDWORD(v17);
    v28 = qword_28A460[BYTE2(v73) - 1];
    v29 = (v56 + 65) ^ *(v90 - 1) ^ qword_288C58[(unsigned __int8)v62] ^ qword_289458[HIBYTE(HIDWORD(v70))];
    v30 = vshrd_n_u64(vdup_n_s8(HIDWORD(v57)).n64_u64[0], 0x38u);
    v31 = qword_289C60[BYTE1(v17) - 1];
    v91 = &qword_28AC50[BYTE3(v57)];
    v32 = &qword_28BC58[BYTE5(v57)];
    v58 = v28 ^ v31 ^ v29;
    v33 = *(_QWORD *)(HIDWORD(v23) + 8);
    LODWORD(v58) = v28 ^ v31 ^ v29 ^ v33;
    HIDWORD(v58) ^= HIDWORD(v33);
    v59 = v58 ^ *v32 ^ qword_28C458[BYTE6(v82)];
    v96 = &qword_28C458[BYTE6(v62)];
    v34 = *v98 ^ qword_288C58[(unsigned __int8)v73] ^ *(v115 - 1) ^ (v56 + 97) ^ *(v102 - 1);
    v35 = v91[1];
    HIDWORD(v34) ^= HIDWORD(v35);
    v36 = v34 ^ (unsigned int)v35 ^ qword_28B460[BYTE4(v82) - 1];
    v37 = qword_28BC58[BYTE5(v70)];
    v38 = v85
        ^ v113[1]
        ^ (v56 + 81)
        ^ qword_289458[HIBYTE(HIDWORD(v62))]
        ^ qword_289C60[BYTE1(v73) - 1]
        ^ *(_QWORD *)(v88 - 8)
        ^ qword_28B460[v30 - 1]
        ^ qword_28BC58[BYTE5(v82)];
    v39 = qword_28C458[BYTE6(v70)];
    v74 = qword_28BC58[BYTE5(v62)]
        ^ qword_289458[HIBYTE(HIDWORD(v73))]
        ^ *v100
        ^ *(v116 - 1)
        ^ (v56 + 113)
        ^ *(v104 - 1)
        ^ qword_28AC50[BYTE3(v82) + 1]
        ^ qword_28B460[BYTE4(v70) - 1];
    v71 = v38 ^ v39;
    v40 = v74 ^ *v108;
    v75 = v37 ^ v36 ^ *v96;
    v86 = &qword_28BC58[(unsigned __int8)((unsigned __int16)(WORD2(v38) ^ WORD2(v39)) >> 8)];
    v89 = &qword_28BC58[(unsigned __int8)((unsigned __int16)(WORD2(v37) ^ WORD2(v36) ^ *((_DWORD *)v96 + 1)) >> 8)];
    v92 = &qword_28C458[BYTE6(v78)];
    v103 = &qword_28C458[BYTE6(v80)];
    v101 = &qword_28BC58[BYTE5(v78)];
    v56 += 2LL;
    v110 = &qword_28AC50[BYTE3(v78)];
    v112 = &qword_28A460[BYTE2(v78)];
    v114 = &qword_289C60[BYTE1(v78)];
    HIDWORD(v39) = HIDWORD(v78);
    v109 = &qword_28B460[BYTE4(v78)];
    v77 = qword_28A460[BYTE2(v67) - 1]
        ^ qword_289458[HIBYTE(HIDWORD(v40))]
        ^ qword_289C60[BYTE1(v80) - 1]
        ^ qword_288C58[(unsigned __int8)v78]
        ^ qword_28AC50[BYTE3(v65) + 1]
        ^ qword_28B460[BYTE4(v59) - 1]
        ^ *v86
        ^ qword_28C458[BYTE6(v75)];
    v41 = *v92;
    v81 = qword_288C58[(unsigned __int8)v80]
        ^ qword_289458[HIBYTE(HIDWORD(v39))]
        ^ qword_289C60[BYTE1(v67) - 1]
        ^ qword_28A460[BYTE2(v65) - 1]
        ^ qword_28AC50[BYTE3(v59) + 1]
        ^ qword_28B460[BYTE4(v71) - 1]
        ^ *v89
        ^ qword_28C458[BYTE6(v40)];
    v93 = &qword_28BC58[BYTE5(v80)];
    v94 = &qword_288C58[(unsigned __int8)v71];
    v97 = &qword_28AC50[BYTE3(v80)];
    v111 = &qword_28A460[BYTE2(v80)];
    LODWORD(v85) = &qword_28B460[BYTE4(v80)];
    v79 = qword_288C58[(unsigned __int8)v67]
        ^ v41
        ^ qword_289458[HIBYTE(HIDWORD(v80))]
        ^ qword_289C60[BYTE1(v65) - 1]
        ^ qword_28A460[BYTE2(v59) - 1]
        ^ qword_28AC50[BYTE3(v71) + 1]
        ^ qword_28B460[BYTE4(v75) - 1]
        ^ qword_28BC58[BYTE5(v40)];
    HIDWORD(v37) = &qword_289C60[BYTE1(v71)];
    v95 = &qword_289458[HIBYTE(HIDWORD(v71))];
    v107 = &qword_28C458[BYTE6(v71)];
    v69 = qword_289C60[BYTE1(v59) - 1]
        ^ *v101
        ^ qword_288C58[(unsigned __int8)v65]
        ^ *v103
        ^ qword_289458[HIBYTE(HIDWORD(v67))]
        ^ qword_28A460[BYTE2(v71) - 1]
        ^ qword_28AC50[BYTE3(v75) + 1]
        ^ qword_28B460[BYTE4(v40) - 1];
    v99 = &qword_28BC58[BYTE5(v65)];
    v63 = qword_28A460[BYTE2(v75) - 1]
        ^ *(_QWORD *)(HIDWORD(v37) - 8)
        ^ *(v109 - 1)
        ^ qword_288C58[(unsigned __int8)v59]
        ^ *v93
        ^ qword_289458[HIBYTE(HIDWORD(v65))]
        ^ qword_28AC50[BYTE3(v40) + 1];
    v106 = &qword_28BC58[BYTE5(v59)];
    HIDWORD(v41) = &qword_28C458[BYTE6(v59)];
    v60 = qword_289C60[BYTE1(v75) - 1] ^ v110[1] ^ *v94 ^ *(_QWORD *)(v85 - 8) ^ qword_289458[HIBYTE(HIDWORD(v59))];
    v42 = qword_28AC50[BYTE3(v67) + 1]
        ^ qword_289458[HIBYTE(HIDWORD(v75))]
        ^ qword_288C58[(unsigned __int8)v40]
        ^ *(v114 - 1)
        ^ *(v111 - 1);
    v43 = qword_28B460[BYTE4(v67) - 1]
        ^ *(v112 - 1)
        ^ qword_288C58[(unsigned __int8)v75]
        ^ v97[1]
        ^ *v95
        ^ qword_289C60[BYTE1(v40) - 1];
    v76 = qword_28BC58[BYTE5(v67)];
    v87 = qword_28C458[BYTE6(v67)];
    v68 = qword_28B460[BYTE4(v65) - 1] ^ v42 ^ *v106;
    v44 = *v107;
    v61 = v63 ^ v87;
    v64 = qword_28C458[BYTE6(v65)] ^ v76 ^ v60 ^ qword_28A460[BYTE2(v40) - 1];
    v72 = *v99 ^ v43 ^ *(_QWORD *)HIDWORD(v41);
    v83 = v68 ^ *v107;
  }
  while ( v56 != 10 );
  p_dest = &dest;
  v130 = v79;
  v46 = &v129;
  v129 = v81;
  v131 = v69;
  v128 = v77;
  v133 = v64;
  v132 = v61;
  v135 = v68 ^ v44;
  v134 = v72;
  for ( i = v77; ; i = v48 )
  {
    v49 = *((_QWORD *)p_dest + 1);
    p_dest += 2;
    *(_QWORD *)p_dest = v49 ^ i;
    if ( &v127 == (__int64 *)p_dest )
      break;
    v48 = *v46++;
  }
  v50 = &v124;
  v51 = v136;
  do
  {
    v52 = *v50++;
    v51 += 8;
    *((_QWORD *)v51 - 1) = v52;
  }
  while ( &v128 != v50 );
  memcpy(dest, &v136[32 - n], n);
  v53 = v119;
  *(_DWORD *)(a1 + 64) = 0;
  do
    *v53++ = 0;
  while ( (_QWORD *)(a1 + 128) != v53 );
  HIDWORD(v54) = (n << 11) & 0xFF0000 | (n << 27);
  LODWORD(v54) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = v54;
  return v54;
}
