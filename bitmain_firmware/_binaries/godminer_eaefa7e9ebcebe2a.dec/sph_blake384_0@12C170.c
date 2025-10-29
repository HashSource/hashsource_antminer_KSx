int __fastcall sph_blake384_0(int a1, char *a2, size_t a3)
{
  int v3; // r4
  int v4; // r10
  size_t v5; // r3
  __int64 v6; // r6
  __int64 v7; // r0
  void *v8; // r0
  const void *v9; // r1
  unsigned int v10; // r0
  bool v11; // cc
  unsigned int v12; // lr
  unsigned __int64 v13; // r10
  unsigned int v14; // r1
  unsigned int v15; // r0
  unsigned int v16; // r12
  unsigned int v17; // lr
  unsigned int v18; // r3
  __int64 v19; // r0
  int v20; // r2
  int v21; // r3
  int v22; // r7
  int v23; // r6
  int v24; // r12
  int v25; // r5
  int v26; // r4
  int v27; // lr
  __int64 v28; // r0
  int v29; // r2
  int v30; // lr
  int v31; // r3
  unsigned __int64 v32; // r4
  __int64 v33; // r6
  unsigned __int64 v34; // r10
  __int64 v35; // r8
  unsigned __int64 v36; // r2
  __int64 v37; // r6
  signed __int64 v38; // r0
  __int64 v39; // r6
  signed __int64 v40; // r6
  __int64 v41; // r2
  __int64 v42; // r4
  __int64 v43; // r10
  __int64 v44; // r8
  unsigned __int64 v45; // r6
  __int64 v46; // r0
  unsigned __int64 v47; // r2
  __int64 v48; // r10
  __int64 v49; // r4
  unsigned __int64 v51; // [sp+0h] [bp-34Ch]
  _DWORD *v52; // [sp+0h] [bp-34Ch]
  unsigned __int64 v53; // [sp+8h] [bp-344h]
  __int64 v54; // [sp+8h] [bp-344h]
  __int64 v55; // [sp+10h] [bp-33Ch]
  __int64 v56; // [sp+18h] [bp-334h]
  __int64 v57; // [sp+20h] [bp-32Ch]
  __int64 v58; // [sp+28h] [bp-324h]
  unsigned __int64 v59; // [sp+30h] [bp-31Ch]
  __int64 v60; // [sp+38h] [bp-314h]
  unsigned __int64 v61; // [sp+40h] [bp-30Ch]
  __int64 v62; // [sp+48h] [bp-304h]
  __int64 v63; // [sp+50h] [bp-2FCh]
  __int64 v64; // [sp+58h] [bp-2F4h]
  unsigned __int64 v65; // [sp+60h] [bp-2ECh]
  __int64 v66; // [sp+68h] [bp-2E4h]
  unsigned __int64 v67; // [sp+70h] [bp-2DCh]
  __int64 v68; // [sp+78h] [bp-2D4h]
  __int64 v69; // [sp+80h] [bp-2CCh]
  __int64 v70; // [sp+88h] [bp-2C4h]
  __int64 v71; // [sp+90h] [bp-2BCh]
  __int64 v72; // [sp+98h] [bp-2B4h]
  __int64 v73; // [sp+A0h] [bp-2ACh]
  __int64 v74; // [sp+B0h] [bp-29Ch]
  __int64 v75; // [sp+B8h] [bp-294h]
  __int64 v76; // [sp+C0h] [bp-28Ch]
  __int64 v77; // [sp+D0h] [bp-27Ch]
  __int64 v78; // [sp+E0h] [bp-26Ch]
  __int64 v79; // [sp+F0h] [bp-25Ch]
  __int64 v80; // [sp+100h] [bp-24Ch]
  unsigned __int64 v81; // [sp+108h] [bp-244h]
  __int64 v82; // [sp+108h] [bp-244h]
  unsigned __int64 v83; // [sp+108h] [bp-244h]
  __int64 v84; // [sp+110h] [bp-23Ch]
  unsigned __int64 v85; // [sp+118h] [bp-234h]
  __int64 v86; // [sp+118h] [bp-234h]
  unsigned __int64 v87; // [sp+120h] [bp-22Ch]
  __int64 v88; // [sp+120h] [bp-22Ch]
  __int64 v89; // [sp+128h] [bp-224h]
  unsigned __int64 v90; // [sp+130h] [bp-21Ch]
  unsigned __int64 v91; // [sp+130h] [bp-21Ch]
  unsigned __int64 v92; // [sp+130h] [bp-21Ch]
  unsigned __int64 v93; // [sp+138h] [bp-214h]
  unsigned __int64 v94; // [sp+140h] [bp-20Ch]
  __int64 v95; // [sp+140h] [bp-20Ch]
  __int64 v96; // [sp+148h] [bp-204h]
  __int64 v97; // [sp+148h] [bp-204h]
  unsigned __int64 v98; // [sp+150h] [bp-1FCh]
  __int64 v99; // [sp+150h] [bp-1FCh]
  unsigned __int64 v100; // [sp+158h] [bp-1F4h]
  unsigned __int64 v101; // [sp+158h] [bp-1F4h]
  unsigned __int64 v102; // [sp+160h] [bp-1ECh]
  __int64 v103; // [sp+160h] [bp-1ECh]
  unsigned __int64 v104; // [sp+168h] [bp-1E4h]
  unsigned __int64 v105; // [sp+170h] [bp-1DCh]
  unsigned __int64 v106; // [sp+178h] [bp-1D4h]
  unsigned __int64 v107; // [sp+180h] [bp-1CCh]
  unsigned __int64 v108; // [sp+188h] [bp-1C4h]
  __int64 v109; // [sp+190h] [bp-1BCh]
  unsigned __int64 v110; // [sp+190h] [bp-1BCh]
  __int64 v111; // [sp+198h] [bp-1B4h]
  unsigned __int64 v112; // [sp+198h] [bp-1B4h]
  __int64 v113; // [sp+1A0h] [bp-1ACh]
  unsigned __int64 v114; // [sp+1A0h] [bp-1ACh]
  __int64 v115; // [sp+1A8h] [bp-1A4h]
  __int64 v116; // [sp+1B0h] [bp-19Ch]
  __int64 v117; // [sp+1B8h] [bp-194h]
  __int64 v118; // [sp+1C0h] [bp-18Ch]
  unsigned __int64 v119; // [sp+1C0h] [bp-18Ch]
  __int64 v120; // [sp+1C8h] [bp-184h]
  unsigned __int64 v121; // [sp+1C8h] [bp-184h]
  __int64 v122; // [sp+1D0h] [bp-17Ch]
  unsigned __int64 v123; // [sp+1D8h] [bp-174h]
  unsigned __int64 v124; // [sp+1E0h] [bp-16Ch]
  __int64 v125; // [sp+1E8h] [bp-164h]
  __int64 v126; // [sp+1F0h] [bp-15Ch]
  unsigned __int64 v127; // [sp+1F8h] [bp-154h]
  unsigned __int64 v128; // [sp+200h] [bp-14Ch]
  unsigned __int64 v129; // [sp+208h] [bp-144h]
  unsigned __int64 v130; // [sp+210h] [bp-13Ch]
  __int64 v131; // [sp+218h] [bp-134h]
  __int64 v132; // [sp+220h] [bp-12Ch]
  unsigned __int64 v133; // [sp+228h] [bp-124h]
  __int64 v134; // [sp+230h] [bp-11Ch]
  __int64 v135; // [sp+238h] [bp-114h]
  size_t n; // [sp+244h] [bp-108h]
  int v137; // [sp+248h] [bp-104h]
  char *src; // [sp+24Ch] [bp-100h]
  __int64 v139; // [sp+250h] [bp-FCh]
  __int64 v140; // [sp+258h] [bp-F4h]
  __int64 v141; // [sp+260h] [bp-ECh]
  __int64 v142; // [sp+268h] [bp-E4h]
  __int64 v143; // [sp+270h] [bp-DCh]
  __int64 v144; // [sp+278h] [bp-D4h]
  __int64 v145; // [sp+280h] [bp-CCh]
  __int64 v146; // [sp+288h] [bp-C4h]
  __int64 v147; // [sp+290h] [bp-BCh]
  __int64 v148; // [sp+298h] [bp-B4h]
  __int64 v149; // [sp+2A0h] [bp-ACh]
  __int64 v150; // [sp+2A8h] [bp-A4h]
  __int64 v151; // [sp+2B0h] [bp-9Ch]
  __int64 v152; // [sp+2B8h] [bp-94h]
  __int64 v153; // [sp+2C0h] [bp-8Ch]
  _QWORD v154[16]; // [sp+2C8h] [bp-84h]

  v3 = *(_DWORD *)(a1 + 128);
  v4 = a1;
  n = a3;
  v5 = 128 - v3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    LODWORD(v7) = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(v4 + 128) = v3 + n;
    return v7;
  }
  v6 = *(_QWORD *)(a1 + 200);
  v140 = *(_QWORD *)(a1 + 136);
  v152 = v6;
  v139 = *(_QWORD *)(a1 + 144);
  v149 = *(_QWORD *)(a1 + 152);
  v148 = *(_QWORD *)(a1 + 160);
  v147 = *(_QWORD *)(a1 + 168);
  v146 = *(_QWORD *)(a1 + 176);
  v145 = *(_QWORD *)(a1 + 184);
  v144 = *(_QWORD *)(a1 + 192);
  v151 = *(_QWORD *)(a1 + 208);
  v141 = *(_QWORD *)(a1 + 216);
  v142 = *(_QWORD *)(a1 + 224);
  v143 = *(_QWORD *)(a1 + 232);
  v7 = *(_QWORD *)(a1 + 240);
  v150 = *(_QWORD *)(v4 + 240);
  if ( !a3 )
    goto LABEL_18;
  v137 = v4;
  v153 = v6 ^ 0x243F6A8885A308D3LL;
  while ( 1 )
  {
    if ( v5 >= n )
      v5 = n;
    v8 = (void *)(v137 + v3);
    v3 += v5;
    n -= v5;
    v9 = src;
    src += v5;
    LODWORD(v7) = memcpy(v8, v9, v5);
    if ( v3 == 128 )
      break;
    if ( !n )
      goto LABEL_17;
LABEL_5:
    v5 = 128 - v3;
  }
  v10 = v143 + 1024;
  v11 = (unsigned __int64)(v143 + 1024) >> 32 != 0;
  v143 += 1024;
  if ( !HIDWORD(v143) )
    v11 = v10 > 0x3FF;
  if ( !v11 )
    ++v150;
  v116 = v153;
  v113 = v142 ^ 0x82EFA98EC4E6C89LL;
  v57 = v143 ^ 0x452821E638D01377LL;
  v59 = v143 ^ 0xBE5466CF34E90C6CLL;
  v60 = v144;
  v58 = v145;
  v56 = v146;
  v62 = v147;
  v84 = v148;
  v118 = 0x13198A2E03707344LL;
  v111 = v139;
  v109 = v140;
  v115 = v149;
  v81 = v141 ^ 0xA4093822299F31D0LL;
  v117 = v151 ^ 0x13198A2E03707344LL;
  v125 = 0x452821E638D01377LL;
  v53 = __PAIR64__(bswap32(*(_DWORD *)v137), bswap32(*(_DWORD *)(v137 + 4)));
  v85 = _byteswap_uint64(*(_QWORD *)(v137 + 8));
  v87 = __PAIR64__(bswap32(*(_DWORD *)(v137 + 16)), bswap32(*(_DWORD *)(v137 + 20)));
  v90 = _byteswap_uint64(*(_QWORD *)(v137 + 24));
  v93 = _byteswap_uint64(*(_QWORD *)(v137 + 32));
  v94 = _byteswap_uint64(*(_QWORD *)(v137 + 40));
  v51 = _byteswap_uint64(*(_QWORD *)(v137 + 48));
  LODWORD(v96) = bswap32(*(_DWORD *)(v137 + 60));
  v98 = _byteswap_uint64(*(_QWORD *)(v137 + 64));
  v130 = 0xB8E1AFED6A267E96LL;
  v100 = _byteswap_uint64(*(_QWORD *)(v137 + 72));
  v102 = _byteswap_uint64(*(_QWORD *)(v137 + 80));
  v129 = 0x9216D5D98979FB1BLL;
  v135 = 0x801F2E2858EFC16LL;
  v128 = 0xD1310BA698DFB5ACLL;
  v134 = 0x636920D871574E69LL;
  v133 = 0xBA7C9045F12C7F99LL;
  v132 = 0x24A19947B3916CF7LL;
  v131 = 0x2FFD72DBD01ADFB7LL;
  v124 = 0xBE5466CF34E90C6CLL;
  v12 = bswap32(*(_DWORD *)(v137 + 56));
  v123 = 0xA4093822299F31D0LL;
  v122 = 0x82EFA98EC4E6C89LL;
  v154[1] = v85;
  v120 = 0x243F6A8885A308D3LL;
  HIDWORD(v96) = v12;
  v154[0] = v53;
  v55 = v150 ^ 0x3F84D5B5B5470917LL;
  v127 = 0xC0AC29B7C97C50DDLL;
  v154[4] = v93;
  v61 = v150 ^ 0xC0AC29B7C97C50DDLL;
  v154[5] = v94;
  v13 = v51;
  v154[3] = v90;
  v126 = 0x3F84D5B5B5470917LL;
  v154[2] = v87;
  v154[6] = v51;
  v154[7] = v96;
  v154[8] = v98;
  v14 = *(_DWORD *)(v137 + 96);
  v15 = *(_DWORD *)(v137 + 104);
  v154[9] = v100;
  v16 = *(_DWORD *)(v137 + 112);
  v17 = *(_DWORD *)(v137 + 120);
  v154[10] = v102;
  v104 = _byteswap_uint64(*(_QWORD *)(v137 + 88));
  v105 = _byteswap_uint64(__PAIR64__(*(_DWORD *)(v137 + 100), v14));
  v106 = _byteswap_uint64(__PAIR64__(*(_DWORD *)(v137 + 108), v15));
  v107 = _byteswap_uint64(__PAIR64__(*(_DWORD *)(v137 + 116), v16));
  v18 = *(_DWORD *)(v137 + 124);
  v154[11] = v104;
  v108 = _byteswap_uint64(__PAIR64__(v18, v17));
  v52 = &unk_29A948;
  v154[12] = v105;
  v154[13] = v106;
  v154[14] = v107;
  v154[15] = v108;
  while ( 1 )
  {
    v32 = v53 ^ v118;
    v33 = v111 + v56 + (v87 ^ v122);
    v112 = v85 ^ v120;
    v119 = v94 ^ v125;
    v121 = v98 ^ v128;
    v34 = v84 + v60 + (v126 ^ v13);
    v86 = v109 + v62 + v32;
    v67 = __PAIR64__((unsigned int)v59 ^ (unsigned int)v33, (v59 ^ v33) >> 32);
    v110 = v100 ^ v129;
    v35 = (v90 ^ v123) + v33;
    v36 = __PAIR64__((unsigned int)v59 ^ (unsigned int)v33, (v59 ^ v33) >> 32);
    v37 = (v93 ^ v124) + v58 + v115;
    LODWORD(v63) = HIDWORD(v57) ^ HIDWORD(v86);
    v91 = (v96 ^ v127) + v34;
    LODWORD(v71) = HIDWORD(v61) ^ HIDWORD(v37);
    HIDWORD(v68) = ((HIDWORD(v56) ^ ((v36 + v117) >> 32)) >> 25)
                 | (((unsigned int)v56 ^ ((_DWORD)v36 + (_DWORD)v117)) << 7);
    LODWORD(v68) = (__int64)(v56 ^ (v36 + v117)) >> 25;
    HIDWORD(v63) = v57 ^ v86;
    HIDWORD(v71) = v61 ^ v37;
    v101 = __PAIR64__((unsigned int)v55 ^ (unsigned int)v34, (v55 ^ v34) >> 32) + v113;
    v97 = v68 + v35;
    v38 = v60 ^ (__PAIR64__((unsigned int)v55 ^ (unsigned int)v34, (v55 ^ v34) >> 32) + v113);
    v99 = v71 + v81;
    v114 = v102 ^ v130;
    v39 = v58 ^ (v71 + v81);
    v82 = v62 ^ (v63 + v116);
    LODWORD(v74) = v38 >> 25;
    LODWORD(v69) = (__int64)(v67 ^ (v68 + v35)) >> 16;
    HIDWORD(v69) = ((unsigned int)((v67 ^ (v68 + v35)) >> 32) >> 16)
                 | (((unsigned int)v67 ^ ((_DWORD)v68 + (_DWORD)v35)) << 16);
    LODWORD(v64) = v82 >> 25;
    HIDWORD(v74) = (HIDWORD(v38) >> 25) | ((_DWORD)v38 << 7);
    LODWORD(v72) = v39 >> 25;
    HIDWORD(v64) = (HIDWORD(v82) >> 25) | (((unsigned int)v62 ^ ((HIDWORD(v57) ^ HIDWORD(v86)) + (_DWORD)v116)) << 7);
    v95 = v69 + v36 + v117;
    HIDWORD(v72) = (HIDWORD(v39) >> 25) | ((_DWORD)v39 << 7);
    v103 = v74 + v91;
    LODWORD(v70) = (v68 ^ v95) >> 11;
    v40 = __PAIR64__((unsigned int)v55 ^ (unsigned int)v34, (v55 ^ v34) >> 32) ^ (v74 + v91);
    HIDWORD(v70) = ((unsigned int)(HIDWORD(v68) ^ HIDWORD(v95)) >> 11) | (((unsigned int)v68 ^ (unsigned int)v95) << 21);
    v41 = v72 + v119 + (v93 ^ v124) + v58 + v115;
    LODWORD(v75) = v40 >> 16;
    HIDWORD(v75) = HIWORD(HIDWORD(v40)) | ((_DWORD)v40 << 16);
    LODWORD(v73) = (v71 ^ v41) >> 16;
    v42 = v70 + v121 + v64 + v112 + v86;
    HIDWORD(v73) = ((unsigned int)(HIDWORD(v71) ^ HIDWORD(v41)) >> 16) | (((unsigned int)v71 ^ (unsigned int)v41) << 16);
    v43 = v75 ^ v42;
    LODWORD(v65) = (__int64)(v63 ^ (v64 + v112 + v86)) >> 16;
    v83 = __PAIR64__((unsigned int)v75 ^ (unsigned int)v42, HIDWORD(v75) ^ HIDWORD(v42)) + v73 + v99;
    v44 = v72 ^ (v73 + v99);
    HIDWORD(v65) = ((unsigned int)((v63 ^ (v64 + v112 + v86)) >> 32) >> 16)
                 | ((HIDWORD(v57) ^ HIDWORD(v86) ^ ((_DWORD)v64 + (_DWORD)v112 + (_DWORD)v86)) << 16);
    LODWORD(v89) = v44 >> 11;
    HIDWORD(v77) = ((unsigned int)((v70 ^ v83) >> 32) >> 25) | (((unsigned int)v70 ^ (unsigned int)v83) << 7);
    HIDWORD(v89) = (HIDWORD(v44) >> 11) | ((_DWORD)v44 << 21);
    LODWORD(v77) = (__int64)(v70 ^ v83) >> 25;
    v45 = v65 + v63 + v116;
    v88 = v89 + v114 + v97;
    v46 = v74 ^ (v75 + v101);
    v109 = v77 + v110 + v42;
    LODWORD(v76) = v46 >> 11;
    LODWORD(v55) = (__int64)(__PAIR64__(v43, HIDWORD(v43)) ^ v109) >> 16;
    HIDWORD(v55) = (((unsigned int)v43 ^ HIDWORD(v109)) >> 16) | ((HIDWORD(v43) ^ (unsigned int)v109) << 16);
    HIDWORD(v76) = (HIDWORD(v46) >> 11) | ((_DWORD)v46 << 21);
    v81 = v55 + v83;
    LODWORD(v66) = (__int64)(v64 ^ v45) >> 11;
    HIDWORD(v66) = ((unsigned int)(HIDWORD(v64) ^ HIDWORD(v45)) >> 11) | (((unsigned int)v64 ^ (unsigned int)v45) << 21);
    v92 = __PAIR64__((unsigned int)v88 ^ (unsigned int)v65, (v88 ^ v65) >> 32) + v75 + v101;
    v47 = v76 + v41 + (v105 ^ v132);
    v54 = v66 + v103 + (v107 ^ v134);
    LODWORD(v78) = (__int64)(v89 ^ v92) >> 25;
    HIDWORD(v78) = ((unsigned int)((v89 ^ v92) >> 32) >> 25) | (((unsigned int)v89 ^ (unsigned int)v92) << 7);
    v111 = v78 + v88 + (v104 ^ v131);
    LODWORD(v79) = (__int64)(v76 ^ (__PAIR64__((unsigned int)v69 ^ (unsigned int)v47, (v69 ^ v47) >> 32) + v45)) >> 25;
    HIDWORD(v80) = ((HIDWORD(v66)
                   ^ ((__PAIR64__((unsigned int)v73 ^ (unsigned int)v54, HIDWORD(v73) ^ HIDWORD(v54)) + v95) >> 32)) >> 25)
                 | (((unsigned int)v66 ^ ((HIDWORD(v73) ^ HIDWORD(v54)) + (_DWORD)v95)) << 7);
    HIDWORD(v79) = ((HIDWORD(v76) ^ ((__PAIR64__((unsigned int)v69 ^ (unsigned int)v47, (v69 ^ v47) >> 32) + v45) >> 32)) >> 25)
                 | (((unsigned int)v76 ^ (unsigned int)(((v69 ^ v47) >> 32) + v45)) << 7);
    v52 += 16;
    LODWORD(v80) = (__int64)(v66 ^ (__PAIR64__((unsigned int)v73 ^ (unsigned int)v54, HIDWORD(v73) ^ HIDWORD(v54)) + v95)) >> 25;
    LODWORD(v56) = (__int64)(v77 ^ v81) >> 11;
    v115 = v79 + (v106 ^ v133) + v47;
    v84 = v80 + (v108 ^ v135) + v54;
    LODWORD(v57) = (__int64)(__PAIR64__((unsigned int)v88 ^ (unsigned int)v65, (v88 ^ v65) >> 32) ^ v111) >> 16;
    HIDWORD(v57) = (((unsigned int)v88 ^ (unsigned int)v65 ^ HIDWORD(v111)) >> 16)
                 | ((((v88 ^ v65) >> 32) ^ (unsigned int)v111) << 16);
    LODWORD(v59) = (__int64)(__PAIR64__((unsigned int)v69 ^ (unsigned int)v47, (v69 ^ v47) >> 32) ^ v115) >> 16;
    LODWORD(v61) = (__int64)(__PAIR64__((unsigned int)v73 ^ (unsigned int)v54, HIDWORD(v73) ^ HIDWORD(v54)) ^ v84) >> 16;
    HIDWORD(v59) = (((unsigned int)v69 ^ (unsigned int)v47 ^ HIDWORD(v115)) >> 16)
                 | ((((v69 ^ v47) >> 32) ^ (unsigned int)v115) << 16);
    HIDWORD(v61) = (((unsigned int)v73 ^ (unsigned int)v54 ^ HIDWORD(v84)) >> 16)
                 | ((HIDWORD(v73) ^ HIDWORD(v54) ^ (unsigned int)v84) << 16);
    v113 = v57 + v92;
    HIDWORD(v56) = ((unsigned int)(HIDWORD(v77) ^ HIDWORD(v81)) >> 11) | (((unsigned int)v77 ^ (unsigned int)v81) << 21);
    v116 = v59 + __PAIR64__((unsigned int)v69 ^ (unsigned int)v47, (v69 ^ v47) >> 32) + v45;
    v48 = v61 + __PAIR64__((unsigned int)v73 ^ (unsigned int)v54, HIDWORD(v73) ^ HIDWORD(v54)) + v95;
    v49 = v78 ^ (v57 + v92);
    v117 = v48;
    HIDWORD(v48) = (v80 ^ (unsigned __int64)v48) >> 32;
    LODWORD(v58) = v49 >> 11;
    LODWORD(v60) = (v79 ^ v116) >> 11;
    LODWORD(v62) = (((unsigned int)v80 ^ (unsigned int)v48) >> 11) | (HIDWORD(v48) << 21);
    HIDWORD(v58) = (HIDWORD(v49) >> 11) | ((_DWORD)v49 << 21);
    HIDWORD(v62) = (HIDWORD(v48) >> 11) | (((unsigned int)v80 ^ (unsigned int)v48) << 21);
    HIDWORD(v60) = ((unsigned int)((v79 ^ (unsigned __int64)v116) >> 32) >> 11)
                 | (((unsigned int)v79 ^ (unsigned int)v116) << 21);
    if ( &unk_29AD48 == (_UNKNOWN *)v52 )
      break;
    v19 = *(_QWORD *)(v52 - 15);
    LODWORD(v19) = 8 * v19;
    HIDWORD(v19) *= 8;
    v20 = *(v52 - 13);
    v21 = *(v52 - 12);
    v22 = *(v52 - 11);
    v23 = *(v52 - 10);
    v24 = *(v52 - 6);
    v25 = *(v52 - 9);
    v26 = *(v52 - 8);
    v27 = *(v52 - 7);
    v53 = v154[*(v52 - 16)];
    v120 = qword_29AD08[*(v52 - 16)];
    v118 = *(_QWORD *)((char *)qword_29AD08 + v19);
    v85 = *(_QWORD *)((char *)v154 + v19);
    v87 = *(_QWORD *)((char *)v154 + HIDWORD(v19));
    v123 = *(_QWORD *)((char *)qword_29AD08 + HIDWORD(v19));
    v122 = qword_29AD08[v20];
    v90 = v154[v20];
    v93 = v154[v21];
    v125 = qword_29AD08[v21];
    v124 = qword_29AD08[v22];
    v94 = v154[v22];
    v13 = v154[v23];
    v127 = qword_29AD08[v23];
    v126 = qword_29AD08[v25];
    v96 = v154[v25];
    v98 = v154[v26];
    v129 = qword_29AD08[v26];
    v128 = qword_29AD08[v27];
    v100 = v154[v27];
    v102 = v154[v24];
    v28 = *(_QWORD *)(v52 - 5);
    LODWORD(v28) = 8 * v28;
    HIDWORD(v28) *= 8;
    v29 = *(v52 - 3);
    v30 = *(v52 - 2);
    v31 = *(v52 - 1);
    v131 = qword_29AD08[v24];
    v130 = *(_QWORD *)((char *)qword_29AD08 + v28);
    v104 = *(_QWORD *)((char *)v154 + v28);
    v133 = *(_QWORD *)((char *)qword_29AD08 + HIDWORD(v28));
    v132 = qword_29AD08[v29];
    v105 = *(_QWORD *)((char *)v154 + HIDWORD(v28));
    v106 = v154[v29];
    v107 = v154[v30];
    v135 = qword_29AD08[v30];
    v134 = qword_29AD08[v31];
    v108 = v154[v31];
  }
  v140 ^= v109 ^ v116 ^ v152;
  v139 ^= v151 ^ v117 ^ v111;
  v149 ^= v81 ^ v141 ^ v115;
  v148 ^= v113 ^ v84 ^ v142;
  v3 = 0;
  LODWORD(v7) = v62 ^ v152 ^ v147 ^ v57;
  v147 ^= v62 ^ v152 ^ v57;
  v146 ^= v59 ^ v151 ^ v56;
  v145 ^= v58 ^ v61 ^ v141;
  v144 ^= v55 ^ v60 ^ v142;
  if ( n )
    goto LABEL_5;
LABEL_17:
  v4 = v137;
LABEL_18:
  *(_DWORD *)(v4 + 128) = v3;
  *(_QWORD *)(v4 + 136) = v140;
  *(_QWORD *)(v4 + 144) = v139;
  *(_QWORD *)(v4 + 152) = v149;
  *(_QWORD *)(v4 + 160) = v148;
  *(_QWORD *)(v4 + 168) = v147;
  *(_QWORD *)(v4 + 176) = v146;
  *(_QWORD *)(v4 + 184) = v145;
  *(_QWORD *)(v4 + 192) = v144;
  *(_QWORD *)(v4 + 200) = v152;
  *(_QWORD *)(v4 + 208) = v151;
  *(_QWORD *)(v4 + 216) = v141;
  *(_QWORD *)(v4 + 224) = v142;
  *(_QWORD *)(v4 + 232) = v143;
  *(_QWORD *)(v4 + 240) = v150;
  return v7;
}
