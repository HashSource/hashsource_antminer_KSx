int __fastcall sub_17CBBC(int a1, char a2, char a3, void *a4, size_t n)
{
  unsigned int v5; // r6
  __int64 v6; // r4
  size_t v7; // r6
  __int64 v8; // r4
  int v9; // r10
  char *v10; // r3
  __int64 v11; // r2
  _QWORD *v12; // r12
  _QWORD *v13; // lr
  __int64 v14; // r0
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r0
  __int64 v18; // r2
  int v19; // r4
  _QWORD *v20; // lr
  __int64 v21; // r6
  __int64 v22; // r10
  __int64 v23; // r0
  __int64 v24; // r6
  __int64 v25; // r10
  __int64 v26; // r0
  __int64 v27; // r8
  __int64 v28; // r6
  __int64 v29; // r4
  __int64 v30; // r0
  __int64 v31; // r0
  __int64 v32; // r6
  __int64 *v33; // r2
  int *v34; // r3
  __int64 v35; // t1
  __int64 v36; // t1
  __int64 *v37; // lr
  char *v38; // r12
  __int64 v39; // t1
  int v40; // r3
  int v41; // r2
  int v42; // r3
  int v43; // r12
  __int64 v45; // [sp+10h] [bp-3CCh]
  __int64 v46; // [sp+18h] [bp-3C4h]
  __int64 v47; // [sp+18h] [bp-3C4h]
  __int64 v48; // [sp+18h] [bp-3C4h]
  __int64 v49; // [sp+20h] [bp-3BCh]
  __int64 v50; // [sp+20h] [bp-3BCh]
  __int64 v51; // [sp+20h] [bp-3BCh]
  __int64 v52; // [sp+28h] [bp-3B4h]
  __int64 v53; // [sp+28h] [bp-3B4h]
  __int64 v54; // [sp+28h] [bp-3B4h]
  __int64 v55; // [sp+30h] [bp-3ACh]
  __int64 v56; // [sp+30h] [bp-3ACh]
  __int64 v57; // [sp+30h] [bp-3ACh]
  __int64 v58; // [sp+38h] [bp-3A4h]
  __int64 v59; // [sp+38h] [bp-3A4h]
  __int64 v60; // [sp+38h] [bp-3A4h]
  __int64 v61; // [sp+40h] [bp-39Ch]
  __int64 v62; // [sp+40h] [bp-39Ch]
  __int64 v63; // [sp+40h] [bp-39Ch]
  __int64 v64; // [sp+48h] [bp-394h]
  __int64 v65; // [sp+48h] [bp-394h]
  __int64 v66; // [sp+48h] [bp-394h]
  __int64 v67; // [sp+50h] [bp-38Ch]
  __int64 v68; // [sp+50h] [bp-38Ch]
  __int64 v69; // [sp+50h] [bp-38Ch]
  __int64 v70; // [sp+50h] [bp-38Ch]
  __int64 v71; // [sp+58h] [bp-384h]
  __int64 v72; // [sp+58h] [bp-384h]
  __int64 v73; // [sp+58h] [bp-384h]
  __int64 v74; // [sp+60h] [bp-37Ch]
  __int64 v75; // [sp+60h] [bp-37Ch]
  __int64 v76; // [sp+68h] [bp-374h]
  __int64 v77; // [sp+68h] [bp-374h]
  __int64 v78; // [sp+70h] [bp-36Ch]
  __int64 v79; // [sp+70h] [bp-36Ch]
  __int64 v80; // [sp+70h] [bp-36Ch]
  __int64 v81; // [sp+78h] [bp-364h]
  __int64 v82; // [sp+78h] [bp-364h]
  __int64 v83; // [sp+78h] [bp-364h]
  __int64 v84; // [sp+80h] [bp-35Ch]
  __int64 v85; // [sp+80h] [bp-35Ch]
  __int64 v86; // [sp+88h] [bp-354h]
  __int64 v87; // [sp+88h] [bp-354h]
  __int64 v88; // [sp+88h] [bp-354h]
  __int64 v89; // [sp+90h] [bp-34Ch]
  __int64 v90; // [sp+90h] [bp-34Ch]
  __int64 v91; // [sp+90h] [bp-34Ch]
  __int64 v92; // [sp+98h] [bp-344h]
  __int64 v93; // [sp+A0h] [bp-33Ch]
  __int64 v94; // [sp+A0h] [bp-33Ch]
  __int64 v95; // [sp+A8h] [bp-334h]
  __int64 v96; // [sp+A8h] [bp-334h]
  __int64 v97; // [sp+B0h] [bp-32Ch]
  __int64 v98; // [sp+B0h] [bp-32Ch]
  __int64 v99; // [sp+B8h] [bp-324h]
  __int64 v100; // [sp+C0h] [bp-31Ch]
  __int64 v101; // [sp+D0h] [bp-30Ch]
  _QWORD *v102; // [sp+D8h] [bp-304h]
  int v103; // [sp+D8h] [bp-304h]
  int v104; // [sp+E0h] [bp-2FCh]
  __int64 *v105; // [sp+E0h] [bp-2FCh]
  _QWORD *v106; // [sp+E0h] [bp-2FCh]
  _QWORD *v107; // [sp+F0h] [bp-2ECh]
  _QWORD *v108; // [sp+100h] [bp-2DCh]
  _DWORD *v109; // [sp+100h] [bp-2DCh]
  _QWORD *v110; // [sp+108h] [bp-2D4h]
  _QWORD *v111; // [sp+110h] [bp-2CCh]
  _QWORD *v112; // [sp+110h] [bp-2CCh]
  _QWORD *v113; // [sp+120h] [bp-2BCh]
  _QWORD *v114; // [sp+128h] [bp-2B4h]
  _QWORD *v115; // [sp+128h] [bp-2B4h]
  _QWORD *v116; // [sp+130h] [bp-2ACh]
  _QWORD *v117; // [sp+130h] [bp-2ACh]
  _QWORD *v118; // [sp+138h] [bp-2A4h]
  _QWORD *v119; // [sp+138h] [bp-2A4h]
  _QWORD *v120; // [sp+140h] [bp-29Ch]
  _QWORD *v121; // [sp+140h] [bp-29Ch]
  _QWORD *v122; // [sp+148h] [bp-294h]
  _QWORD *v123; // [sp+148h] [bp-294h]
  _QWORD *v124; // [sp+150h] [bp-28Ch]
  _QWORD *v125; // [sp+158h] [bp-284h]
  _QWORD *v126; // [sp+158h] [bp-284h]
  _QWORD *v127; // [sp+160h] [bp-27Ch]
  _QWORD *v128; // [sp+168h] [bp-274h]
  _QWORD *v129; // [sp+168h] [bp-274h]
  _QWORD *v130; // [sp+170h] [bp-26Ch]
  _QWORD *v131; // [sp+178h] [bp-264h]
  _QWORD *v132; // [sp+180h] [bp-25Ch]
  _QWORD *v133; // [sp+180h] [bp-25Ch]
  _QWORD *v134; // [sp+188h] [bp-254h]
  _QWORD *v135; // [sp+190h] [bp-24Ch]
  _QWORD *v136; // [sp+190h] [bp-24Ch]
  _QWORD *v137; // [sp+190h] [bp-24Ch]
  _QWORD *v138; // [sp+198h] [bp-244h]
  _QWORD *v139; // [sp+198h] [bp-244h]
  _QWORD *v140; // [sp+1A0h] [bp-23Ch]
  _QWORD *v141; // [sp+1A8h] [bp-234h]
  _QWORD *v142; // [sp+1B0h] [bp-22Ch]
  _QWORD *v143; // [sp+1B8h] [bp-224h]
  _QWORD *v144; // [sp+1B8h] [bp-224h]
  _QWORD *v145; // [sp+1C8h] [bp-214h]
  _QWORD *v146; // [sp+1D0h] [bp-20Ch]
  _QWORD *v147; // [sp+1D0h] [bp-20Ch]
  _QWORD *v148; // [sp+1D8h] [bp-204h]
  _QWORD *v149; // [sp+1D8h] [bp-204h]
  _QWORD *v150; // [sp+1E4h] [bp-1F8h]
  _QWORD *v151; // [sp+1E8h] [bp-1F4h]
  _QWORD *v152; // [sp+1ECh] [bp-1F0h]
  _QWORD *v153; // [sp+1F0h] [bp-1ECh]
  _QWORD *v154; // [sp+1F4h] [bp-1E8h]
  _DWORD *v155; // [sp+204h] [bp-1D8h]
  _QWORD *v156; // [sp+208h] [bp-1D4h]
  _QWORD *v157; // [sp+208h] [bp-1D4h]
  _QWORD *v158; // [sp+214h] [bp-1C8h]
  _QWORD *v159; // [sp+218h] [bp-1C4h]
  _QWORD *v160; // [sp+218h] [bp-1C4h]
  _QWORD *v161; // [sp+21Ch] [bp-1C0h]
  _QWORD *v162; // [sp+21Ch] [bp-1C0h]
  _QWORD *v163; // [sp+220h] [bp-1BCh]
  _QWORD *v164; // [sp+220h] [bp-1BCh]
  _QWORD *v165; // [sp+224h] [bp-1B8h]
  _QWORD *v166; // [sp+224h] [bp-1B8h]
  _QWORD *v167; // [sp+22Ch] [bp-1B0h]
  _QWORD *v168; // [sp+230h] [bp-1ACh]
  _QWORD *v169; // [sp+230h] [bp-1ACh]
  _QWORD *v170; // [sp+234h] [bp-1A8h]
  _QWORD *v171; // [sp+234h] [bp-1A8h]
  _QWORD *v172; // [sp+238h] [bp-1A4h]
  _QWORD *v173; // [sp+238h] [bp-1A4h]
  _QWORD *v174; // [sp+23Ch] [bp-1A0h]
  _QWORD *v175; // [sp+244h] [bp-198h]
  int v176; // [sp+248h] [bp-194h] BYREF
  void *v177; // [sp+24Ch] [bp-190h]
  _BYTE dest[128]; // [sp+250h] [bp-18Ch] BYREF
  _QWORD v179[16]; // [sp+2D0h] [bp-10Ch] BYREF
  char v180[140]; // [sp+350h] [bp-8Ch] BYREF

  v5 = *(_DWORD *)(a1 + 128);
  v177 = a4;
  v176 = a1;
  v180[0] = (128 >> a3) | a2 & -(128 >> a3);
  v6 = *(_QWORD *)(a1 + 264);
  if ( v5 > 0x77 )
  {
    v7 = 256 - v5;
    v8 = v6 + 2;
  }
  else
  {
    v7 = 128 - v5;
    v8 = v6 + 1;
  }
  memset(&v180[1], 0, v7 - 9);
  v9 = v176;
  v10 = &v180[v7 - 8];
  *v10 = HIBYTE(v8);
  v10[7] = v8;
  v10[3] = BYTE4(v8);
  v10[1] = BYTE6(v8);
  v10[2] = BYTE5(v8);
  v10[4] = BYTE3(v8);
  v10[5] = BYTE2(v8);
  v10[6] = BYTE1(v8);
  sph_groestl384_0(v9, v180, v7);
  memcpy(dest, (const void *)(v9 + 136), sizeof(dest));
  memcpy(v179, dest, sizeof(v179));
  v89 = v179[0];
  v45 = 0;
  v74 = v179[1];
  v76 = v179[2];
  v78 = v179[3];
  v52 = v179[4];
  v55 = v179[5];
  v58 = v179[6];
  v61 = v179[7];
  v64 = v179[8];
  v67 = v179[9];
  v71 = v179[10];
  v81 = v179[11];
  v84 = v179[14];
  v86 = v179[12];
  v93 = v179[13];
  v97 = v179[15];
  do
  {
    v46 = v89 ^ v45;
    v90 = v74 ^ (v45 + 16);
    v49 = v76 ^ (v45 + 32);
    v92 = v78 ^ (v45 + 48);
    v53 = v52 ^ (v45 + 64);
    v56 = v55 ^ (v45 + 80);
    v95 = v58 ^ (v45 + 96);
    v59 = v61 ^ (v45 + 112);
    v62 = v64 ^ (v45 + 128);
    v65 = v67 ^ (v45 + 144);
    v68 = v71 ^ (v45 + 160);
    v72 = v81 ^ (v45 + 176);
    v100 = v86 ^ (v45 + 192);
    v75 = (v45 + 208) ^ v93;
    v77 = v84 ^ (v45 + 224);
    v79 = (v45 + 240) ^ v97;
    v156 = &qword_29FA30[((unsigned int)v81 ^ ((_DWORD)v45 + 176)) >> 24];
    v82 = qword_29FA30[BYTE3(v92) + 1]
        ^ qword_29EA40[BYTE1(v90) - 1]
        ^ (v45 + 1)
        ^ qword_29DA38[(unsigned __int8)v46]
        ^ qword_29E238[HIBYTE(HIDWORD(v72))]
        ^ qword_29F240[BYTE2(v49) - 1]
        ^ qword_2A0240[BYTE4(v53) - 1]
        ^ qword_2A0A38[BYTE5(v56)]
        ^ qword_2A1238[BYTE6(v95)];
    v102 = &qword_29FA30[((unsigned int)v86 ^ ((_DWORD)v45 + 192)) >> 24];
    v159 = &qword_2A1238[BYTE6(v79)];
    v161 = &qword_29EA40[BYTE1(v72)];
    v163 = &qword_29F240[BYTE2(v100)];
    v98 = (v45 + 17)
        ^ qword_29DA38[(unsigned __int8)v90]
        ^ qword_29E238[HIBYTE(HIDWORD(v100))]
        ^ qword_29EA40[BYTE1(v49) - 1]
        ^ qword_29F240[BYTE2(v92) - 1]
        ^ qword_29FA30[BYTE3(v53) + 1]
        ^ qword_2A0240[BYTE4(v56) - 1]
        ^ qword_2A0A38[BYTE5(v95)]
        ^ qword_2A1238[BYTE6(v59)];
    v165 = &qword_29FA30[(((_DWORD)v45 + 208) ^ (unsigned int)v93) >> 24];
    v116 = &qword_29FA30[((unsigned int)v84 ^ ((_DWORD)v45 + 224)) >> 24];
    v85 = (v45 + 33)
        ^ qword_29DA38[(unsigned __int8)v49]
        ^ qword_29E238[HIBYTE(HIDWORD(v75))]
        ^ qword_29EA40[BYTE1(v92) - 1]
        ^ qword_29F240[BYTE2(v53) - 1]
        ^ qword_29FA30[BYTE3(v56) + 1]
        ^ qword_2A0240[BYTE4(v95) - 1]
        ^ qword_2A0A38[BYTE5(v59)]
        ^ qword_2A1238[BYTE6(v62)];
    v118 = &qword_2A1238[BYTE6(v90)];
    v168 = &qword_29EA40[BYTE1(v75)];
    v170 = &qword_29F240[BYTE2(v77)];
    v87 = qword_29F240[BYTE2(v56) - 1]
        ^ (v45 + 49)
        ^ qword_29DA38[(unsigned __int8)v92]
        ^ qword_29E238[HIBYTE(HIDWORD(v77))]
        ^ qword_29EA40[BYTE1(v53) - 1]
        ^ qword_29FA30[BYTE3(v95) + 1]
        ^ qword_2A0240[BYTE4(v59) - 1]
        ^ qword_2A0A38[BYTE5(v62)]
        ^ qword_2A1238[BYTE6(v65)];
    v172 = &qword_29FA30[BYTE3(v79)];
    v127 = &qword_2A0A38[BYTE5(v90)];
    v128 = &qword_2A1238[BYTE6(v49)];
    v94 = qword_29FA30[BYTE3(v59) + 1]
        ^ (v45 + 65)
        ^ qword_29DA38[(unsigned __int8)v53]
        ^ qword_29E238[HIBYTE(HIDWORD(v79))]
        ^ qword_29EA40[BYTE1(v56) - 1]
        ^ qword_29F240[BYTE2(v95) - 1]
        ^ qword_2A0240[BYTE4(v62) - 1]
        ^ qword_2A0A38[BYTE5(v65)]
        ^ qword_2A1238[BYTE6(v68)];
    v114 = &qword_29E238[HIBYTE(HIDWORD(v95))];
    v11 = qword_29DA38[(unsigned __int8)v95];
    v96 = qword_29F240[BYTE2(v59) - 1]
        ^ qword_29EA40[BYTE1(v95) - 1]
        ^ (v45 + 81)
        ^ qword_29E238[HIBYTE(HIDWORD(v46))]
        ^ qword_29DA38[(unsigned __int8)v56]
        ^ qword_29FA30[BYTE3(v62) + 1]
        ^ qword_2A0240[BYTE4(v65) - 1]
        ^ qword_2A0A38[BYTE5(v68)]
        ^ qword_2A1238[BYTE6(v72)];
    v125 = &qword_29E238[HIBYTE(HIDWORD(v59))];
    v135 = &qword_29F240[BYTE2(v79)];
    v99 = (v45 + 97)
        ^ v11
        ^ qword_29E238[HIBYTE(HIDWORD(v90))]
        ^ qword_29EA40[BYTE1(v59) - 1]
        ^ qword_29F240[BYTE2(v62) - 1]
        ^ qword_29FA30[BYTE3(v65) + 1]
        ^ qword_2A0240[BYTE4(v68) - 1]
        ^ qword_2A0A38[BYTE5(v72)]
        ^ qword_2A1238[BYTE6(v100)];
    v145 = &qword_29EA40[BYTE1(v46)];
    v120 = &qword_2A0240[BYTE4(v46)];
    v122 = &qword_29DA38[(unsigned __int8)v100];
    v60 = (v45 + 113)
        ^ qword_29DA38[(unsigned __int8)v59]
        ^ qword_29E238[HIBYTE(HIDWORD(v49))]
        ^ qword_29EA40[BYTE1(v62) - 1]
        ^ qword_29F240[BYTE2(v65) - 1]
        ^ qword_29FA30[BYTE3(v68) + 1]
        ^ qword_2A0240[BYTE4(v72) - 1]
        ^ qword_2A0A38[BYTE5(v100)]
        ^ qword_2A1238[BYTE6(v75)];
    v12 = &qword_29E238[HIBYTE(HIDWORD(v56))];
    v108 = &qword_2A0240[BYTE4(v77)];
    v146 = &qword_29DA38[(unsigned __int8)v79];
    v151 = &qword_2A1238[BYTE6(v56)];
    v142 = &qword_29EA40[BYTE1(v79)];
    v148 = &qword_29F240[BYTE2(v90)];
    v143 = &qword_29FA30[BYTE3(v90)];
    v138 = &qword_2A0240[BYTE4(v90)];
    v150 = &qword_29FA30[BYTE3(v49)];
    v57 = v156[1]
        ^ (v45 + 129)
        ^ qword_29DA38[(unsigned __int8)v62]
        ^ qword_29E238[HIBYTE(HIDWORD(v92))]
        ^ qword_29EA40[BYTE1(v65) - 1]
        ^ qword_29F240[BYTE2(v68) - 1]
        ^ qword_2A0240[BYTE4(v100) - 1]
        ^ qword_2A0A38[BYTE5(v75)]
        ^ qword_2A1238[BYTE6(v77)];
    v111 = &qword_2A0A38[BYTE5(v49)];
    v101 = qword_2A0240[BYTE4(v79) - 1];
    v13 = &qword_2A0A38[BYTE5(v53)];
    v80 = qword_2A0A38[BYTE5(v79)];
    v110 = &qword_2A1238[BYTE6(v53)];
    v91 = v116[1]
        ^ qword_29F240[BYTE2(v75) - 1]
        ^ qword_29DA38[(unsigned __int8)v72]
        ^ qword_2A0A38[BYTE5(v46)]
        ^ (v45 + 177)
        ^ *v114
        ^ qword_29EA40[BYTE1(v100) - 1];
    v14 = *v12 ^ (v45 + 161) ^ qword_2A1238[BYTE6(v46)] ^ qword_29DA38[(unsigned __int8)v68];
    v15 = (v45 + 209)
        ^ qword_29FA30[BYTE3(v46) + 1]
        ^ qword_29DA38[(unsigned __int8)v75]
        ^ qword_29E238[HIBYTE(HIDWORD(v62))];
    v16 = qword_2A0240[BYTE4(v49) - 1]
        ^ v143[1]
        ^ *(v142 - 1)
        ^ qword_29E238[HIBYTE(HIDWORD(v65))]
        ^ (v45 + 225)
        ^ qword_29F240[BYTE2(v46) - 1]
        ^ qword_29DA38[(unsigned __int8)v77];
    v47 = *v159
        ^ qword_2A0A38[BYTE5(v77)]
        ^ qword_2A0240[BYTE4(v75) - 1]
        ^ v102[1]
        ^ (v45 + 145)
        ^ qword_29DA38[(unsigned __int8)v65]
        ^ qword_29E238[HIBYTE(HIDWORD(v53))]
        ^ qword_29EA40[BYTE1(v68) - 1]
        ^ qword_29F240[BYTE2(v72) - 1];
    v54 = *v118 ^ v101 ^ v91;
    v50 = v80 ^ *(v108 - 1) ^ v165[1] ^ *(v163 - 1) ^ *(v161 - 1) ^ v14;
    v63 = *v127 ^ v172[1] ^ *(v170 - 1) ^ *(v168 - 1) ^ (v45 + 193) ^ *(v120 - 1) ^ *v122 ^ *v125 ^ *v128;
    v66 = *(v138 - 1) ^ *(v135 - 1) ^ qword_29EA40[BYTE1(v77) - 1] ^ v15 ^ *v111 ^ qword_2A1238[BYTE6(v92)];
    v73 = *v151
        ^ *v13
        ^ qword_2A0240[BYTE4(v92) - 1]
        ^ v150[1]
        ^ *(v148 - 1)
        ^ qword_29E238[HIBYTE(HIDWORD(v68))]
        ^ *v146
        ^ *(v145 - 1)
        ^ (v45 + 241);
    v69 = *v110 ^ qword_2A0A38[BYTE5(v92)] ^ v16;
    v132 = &qword_2A1238[BYTE6(v54)];
    v136 = &qword_29F240[BYTE2(v57)];
    v140 = &qword_2A0A38[BYTE5(v54)];
    v141 = &qword_29EA40[BYTE1(v57)];
    v144 = &qword_29FA30[((unsigned int)v80
                        ^ *((_DWORD *)v108 - 2)
                        ^ *((_DWORD *)v165 + 2)
                        ^ *((_DWORD *)v163 - 2)
                        ^ *((_DWORD *)v161 - 2)
                        ^ (unsigned int)v14) >> 24];
    v147 = &qword_29EA40[BYTE1(v47)];
    v149 = &qword_29FA30[(*(_DWORD *)v118 ^ (unsigned int)v101 ^ (unsigned int)v91) >> 24];
    v152 = &qword_29EA40[BYTE1(v50)];
    v153 = &qword_29F240[BYTE2(v54)];
    v154 = &qword_29FA30[(*(_DWORD *)v127
                        ^ *((_DWORD *)v172 + 2)
                        ^ *((_DWORD *)v170 - 2)
                        ^ *((_DWORD *)v168 - 2)
                        ^ ((_DWORD)v45 + 193)
                        ^ (unsigned int)(*((_DWORD *)v120 - 2) ^ *(_DWORD *)v122)
                        ^ *(_DWORD *)v125
                        ^ *(_DWORD *)v128) >> 24];
    v157 = &qword_29EA40[BYTE1(v54)];
    v45 += 2;
    v155 = &qword_2A1238[BYTE6(v82)];
    v158 = &qword_2A0A38[BYTE5(v73)];
    v162 = &qword_29EA40[BYTE1(v63)];
    v160 = &qword_2A0A38[BYTE5(v82)];
    v164 = &qword_29F240[BYTE2(v66)];
    v89 = qword_2A0A38[BYTE5(v96)]
        ^ qword_29E238[HIBYTE(HIDWORD(v54))]
        ^ qword_29DA38[(unsigned __int8)v82]
        ^ qword_29EA40[BYTE1(v98) - 1]
        ^ qword_29F240[BYTE2(v85) - 1]
        ^ qword_29FA30[BYTE3(v87) + 1]
        ^ qword_2A0240[BYTE4(v94) - 1]
        ^ qword_2A1238[BYTE6(v99)];
    v166 = &qword_29FA30[(*(_DWORD *)v110 ^ LODWORD(qword_2A0A38[BYTE5(v92)]) ^ (unsigned int)v16) >> 24];
    v167 = &qword_29FA30[BYTE3(v82)];
    v169 = &qword_29F240[BYTE2(v82)];
    v173 = &qword_29EA40[BYTE1(v82)];
    v74 = qword_29FA30[BYTE3(v94) + 1]
        ^ qword_29EA40[BYTE1(v85) - 1]
        ^ qword_29DA38[(unsigned __int8)v98]
        ^ qword_2A0240[BYTE4(v96) - 1]
        ^ qword_29E238[HIBYTE(HIDWORD(v63))]
        ^ qword_29F240[BYTE2(v87) - 1]
        ^ qword_2A0A38[BYTE5(v99)]
        ^ qword_2A1238[BYTE6(v60)];
    v76 = qword_29EA40[BYTE1(v87) - 1]
        ^ qword_29E238[HIBYTE(HIDWORD(v66))]
        ^ qword_29DA38[(unsigned __int8)v85]
        ^ qword_29FA30[BYTE3(v96) + 1]
        ^ qword_29F240[BYTE2(v94) - 1]
        ^ qword_2A0240[BYTE4(v99) - 1]
        ^ qword_2A0A38[BYTE5(v60)]
        ^ qword_2A1238[BYTE6(v57)];
    v113 = &qword_2A0240[BYTE4(v82)];
    v78 = qword_29E238[HIBYTE(HIDWORD(v69))]
        ^ qword_29DA38[(unsigned __int8)v87]
        ^ qword_29F240[BYTE2(v96) - 1]
        ^ qword_29EA40[BYTE1(v94) - 1]
        ^ qword_29FA30[BYTE3(v99) + 1]
        ^ qword_2A0240[BYTE4(v60) - 1]
        ^ qword_2A0A38[BYTE5(v57)]
        ^ qword_2A1238[BYTE6(v47)];
    v17 = qword_29EA40[BYTE1(v96) - 1]
        ^ qword_29DA38[(unsigned __int8)v94]
        ^ qword_29E238[HIBYTE(HIDWORD(v73))]
        ^ qword_29F240[BYTE2(v99) - 1]
        ^ qword_29FA30[BYTE3(v60) + 1];
    v18 = qword_2A0240[BYTE4(v57) - 1];
    v117 = &qword_29E238[HIBYTE(HIDWORD(v60))];
    v104 = (unsigned __int8)v54;
    v19 = v17 ^ v18;
    LODWORD(v17) = &qword_2A0240[BYTE4(v54)];
    LODWORD(v54) = v19;
    HIDWORD(v54) = HIDWORD(v17) ^ HIDWORD(v18);
    v103 = v17;
    v112 = &qword_29DA38[v104];
    v105 = &qword_29DA38[(unsigned __int8)v57];
    v123 = &qword_29E238[HIBYTE(HIDWORD(v57))];
    v52 = v54 ^ qword_2A0A38[BYTE5(v47)] ^ qword_2A1238[BYTE6(v50)];
    v115 = &qword_29DA38[(unsigned __int8)v63];
    v20 = &qword_29DA38[(unsigned __int8)v47];
    v171 = &qword_29E238[HIBYTE(HIDWORD(v47))];
    v109 = &qword_29DA38[(unsigned __int8)v50];
    v175 = &qword_29E238[HIBYTE(HIDWORD(v50))];
    LODWORD(v100) = &qword_2A0240[BYTE4(v73)];
    v121 = &qword_29DA38[(unsigned __int8)v66];
    v130 = &qword_29DA38[(unsigned __int8)v69];
    v174 = &qword_29DA38[(unsigned __int8)v73];
    v55 = qword_29E238[HIBYTE(HIDWORD(v82))]
        ^ qword_29DA38[(unsigned __int8)v96]
        ^ qword_29EA40[BYTE1(v99) - 1]
        ^ qword_29F240[BYTE2(v60) - 1]
        ^ qword_29FA30[BYTE3(v57) + 1]
        ^ qword_2A0240[BYTE4(v47) - 1]
        ^ qword_2A0A38[BYTE5(v50)]
        ^ *v132;
    v119 = &qword_29EA40[BYTE1(v66)];
    v21 = qword_29DA38[(unsigned __int8)v99] ^ qword_29E238[HIBYTE(HIDWORD(v98))];
    LODWORD(v99) = &qword_29F240[BYTE2(v69)];
    v124 = &qword_29EA40[BYTE1(v69)];
    v131 = &qword_29EA40[BYTE1(v73)];
    v126 = &qword_29F240[BYTE2(v73)];
    LOBYTE(v47) = BYTE3(v98);
    LOBYTE(v17) = BYTE2(v98);
    LODWORD(v98) = &qword_29FA30[BYTE3(v73)];
    v22 = qword_29FA30[BYTE3(v47) + 1] ^ qword_29EA40[BYTE1(v60) - 1] ^ v21 ^ *(v136 - 1);
    v133 = &qword_29FA30[(unsigned __int8)v47];
    v134 = &qword_29F240[(unsigned __int8)v17];
    v137 = &qword_29FA30[BYTE3(v85)];
    v23 = qword_29DA38[(unsigned __int8)v60];
    v58 = v22 ^ qword_2A0240[BYTE4(v50) - 1] ^ *v140 ^ qword_2A1238[BYTE6(v63)];
    v129 = &qword_2A0A38[BYTE5(v85)];
    v24 = *v105;
    v106 = &qword_2A0A38[BYTE5(v87)];
    v48 = *(_QWORD *)(v103 - 8)
        ^ *(v141 - 1)
        ^ v23
        ^ qword_29E238[HIBYTE(HIDWORD(v85))]
        ^ qword_29F240[BYTE2(v47) - 1]
        ^ v144[1]
        ^ qword_2A0A38[BYTE5(v63)];
    v139 = &qword_2A0240[vshrd_n_u64(vdup_n_s8(HIDWORD(v87)).n64_u64[0], 0x38u)];
    v83 = qword_2A1238[BYTE6(v69)];
    v51 = qword_29F240[BYTE2(v50) - 1] ^ qword_29E238[HIBYTE(HIDWORD(v87))] ^ v24 ^ *(v147 - 1);
    LODWORD(v94) = &qword_2A1238[BYTE6(v87)];
    v107 = &qword_2A0A38[BYTE5(v94)];
    v88 = qword_2A1238[BYTE6(v73)];
    v25 = *(v157 - 1);
    v26 = qword_29E238[HIBYTE(HIDWORD(v96))];
    v27 = qword_2A0240[(unsigned int)vshrd_n_u64(vdup_n_s8(HIDWORD(v63)).n64_u64[0], 0x38u) - 1] ^ v51 ^ v149[1];
    v28 = qword_29F240[BYTE2(v63) - 1];
    HIDWORD(v25) ^= HIDWORD(v28) ^ v155[1] ^ v109[1] ^ HIDWORD(v26);
    LODWORD(v18) = *v155 ^ *v109 ^ v26;
    v29 = qword_29FA30[BYTE3(v66) + 1];
    v30 = qword_2A0240[BYTE4(v69) - 1];
    v70 = qword_2A0A38[BYTE5(v69)]
        ^ *(v152 - 1)
        ^ qword_29E238[HIBYTE(HIDWORD(v94))]
        ^ *v20
        ^ *(v153 - 1)
        ^ v154[1]
        ^ qword_2A0240[BYTE4(v66) - 1];
    LODWORD(v73) = v29 ^ v28 ^ v18 ^ v25 ^ v30;
    HIDWORD(v73) = HIDWORD(v29) ^ HIDWORD(v25) ^ HIDWORD(v30);
    v61 = qword_2A1238[BYTE6(v66)] ^ v48;
    v64 = v83 ^ qword_2A0A38[BYTE5(v66)] ^ v27;
    v67 = v88 ^ v70;
    v71 = *v158 ^ v73;
    v81 = qword_2A1238[BYTE6(v98)]
        ^ *(v162 - 1)
        ^ *v160
        ^ *v112
        ^ qword_29E238[HIBYTE(HIDWORD(v99))]
        ^ *(v164 - 1)
        ^ v166[1]
        ^ *(_QWORD *)(v100 - 8);
    v86 = *(_QWORD *)(v98 + 8)
        ^ *(v119 - 1)
        ^ *(v113 - 1)
        ^ *v115
        ^ *v117
        ^ *(_QWORD *)(v99 - 8)
        ^ qword_2A0A38[BYTE5(v98)]
        ^ qword_2A1238[BYTE6(v85)];
    v84 = qword_2A1238[BYTE6(v94)]
        ^ *v106
        ^ v133[1]
        ^ *(v131 - 1)
        ^ *v130
        ^ *(v169 - 1)
        ^ *v171
        ^ qword_2A0240[BYTE4(v85) - 1];
    v93 = qword_2A0240[BYTE4(v98) - 1] ^ *(v124 - 1) ^ *v121 ^ v167[1] ^ *v123 ^ *(v126 - 1) ^ *v129 ^ *(_QWORD *)v94;
    v31 = *(v139 - 1) ^ v137[1] ^ *(v134 - 1) ^ *v175 ^ *v174 ^ *(v173 - 1) ^ qword_2A1238[BYTE6(v96)] ^ *v107;
    v97 = v31;
  }
  while ( v45 != 14 );
  v179[2] = v76;
  v32 = v89;
  v179[3] = v78;
  v179[1] = v74;
  v179[0] = v89;
  v179[4] = v52;
  v179[12] = v86;
  v179[13] = v93;
  v179[5] = v55;
  v179[15] = v31;
  v179[6] = v58;
  v179[7] = v61;
  v179[8] = v64;
  v179[9] = v67;
  v179[10] = v71;
  v179[11] = v81;
  v179[14] = v84;
  v33 = &v179[1];
  v34 = &v176;
  while ( 1 )
  {
    v36 = *((_QWORD *)v34 + 1);
    v34 += 2;
    *(_QWORD *)v34 = v36 ^ v32;
    if ( &dest[120] == (_BYTE *)v34 )
      break;
    v35 = *v33++;
    v32 = v35;
  }
  v37 = (__int64 *)&dest[64];
  v38 = v180;
  do
  {
    v39 = *v37++;
    v38 += 8;
    *((_QWORD *)v38 - 1) = v39;
  }
  while ( v179 != v37 );
  memcpy(v177, &v180[64 - n], n);
  v40 = v176;
  v41 = v176 + 248;
  *(_DWORD *)(v176 + 128) = 0;
  v42 = v40 + 128;
  do
  {
    *(_QWORD *)(v42 + 8) = 0;
    v42 += 8;
  }
  while ( v41 != v42 );
  v43 = v176;
  *(_QWORD *)(v176 + 264) = 0;
  *(_DWORD *)(v43 + 256) = 0;
  *(_DWORD *)(v43 + 260) = (n << 11) & 0xFF0000 | (n << 27);
  return 0;
}
