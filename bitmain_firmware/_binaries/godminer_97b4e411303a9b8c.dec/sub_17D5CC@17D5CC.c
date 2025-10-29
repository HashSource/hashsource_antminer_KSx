int __fastcall sub_17D5CC(int a1, char a2, char a3, void *a4, size_t n)
{
  unsigned int v5; // r6
  __int64 v6; // r4
  size_t v7; // r6
  __int64 v8; // r4
  int v9; // r10
  char *v10; // r3
  __int64 v11; // r2
  _QWORD *v12; // r12
  _QWORD *v13; // r5
  _QWORD *v14; // lr
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
  __int64 v80; // [sp+78h] [bp-364h]
  __int64 v81; // [sp+78h] [bp-364h]
  __int64 v82; // [sp+78h] [bp-364h]
  __int64 v83; // [sp+80h] [bp-35Ch]
  __int64 v84; // [sp+80h] [bp-35Ch]
  __int64 v85; // [sp+88h] [bp-354h]
  __int64 v86; // [sp+88h] [bp-354h]
  __int64 v87; // [sp+88h] [bp-354h]
  __int64 v88; // [sp+90h] [bp-34Ch]
  __int64 v89; // [sp+90h] [bp-34Ch]
  __int64 v90; // [sp+98h] [bp-344h]
  __int64 v91; // [sp+A0h] [bp-33Ch]
  __int64 v92; // [sp+A0h] [bp-33Ch]
  __int64 v93; // [sp+A8h] [bp-334h]
  __int64 v94; // [sp+A8h] [bp-334h]
  __int64 v95; // [sp+B0h] [bp-32Ch]
  __int64 v96; // [sp+B0h] [bp-32Ch]
  __int64 v97; // [sp+B8h] [bp-324h]
  __int64 v98; // [sp+C0h] [bp-31Ch]
  _QWORD *v99; // [sp+D8h] [bp-304h]
  int v100; // [sp+D8h] [bp-304h]
  int v101; // [sp+E0h] [bp-2FCh]
  __int64 *v102; // [sp+E0h] [bp-2FCh]
  _QWORD *v103; // [sp+E0h] [bp-2FCh]
  _QWORD *v104; // [sp+E8h] [bp-2F4h]
  _QWORD *v105; // [sp+F0h] [bp-2ECh]
  _DWORD *v106; // [sp+100h] [bp-2DCh]
  _QWORD *v107; // [sp+108h] [bp-2D4h]
  _QWORD *v108; // [sp+110h] [bp-2CCh]
  _QWORD *v109; // [sp+110h] [bp-2CCh]
  _QWORD *v110; // [sp+120h] [bp-2BCh]
  _QWORD *v111; // [sp+128h] [bp-2B4h]
  _QWORD *v112; // [sp+128h] [bp-2B4h]
  _QWORD *v113; // [sp+130h] [bp-2ACh]
  _QWORD *v114; // [sp+130h] [bp-2ACh]
  _QWORD *v115; // [sp+138h] [bp-2A4h]
  _QWORD *v116; // [sp+140h] [bp-29Ch]
  _QWORD *v117; // [sp+140h] [bp-29Ch]
  _QWORD *v118; // [sp+148h] [bp-294h]
  _QWORD *v119; // [sp+150h] [bp-28Ch]
  _QWORD *v120; // [sp+158h] [bp-284h]
  _QWORD *v121; // [sp+158h] [bp-284h]
  _QWORD *v122; // [sp+168h] [bp-274h]
  _QWORD *v123; // [sp+168h] [bp-274h]
  _QWORD *v124; // [sp+170h] [bp-26Ch]
  _QWORD *v125; // [sp+178h] [bp-264h]
  _QWORD *v126; // [sp+180h] [bp-25Ch]
  _QWORD *v127; // [sp+180h] [bp-25Ch]
  _QWORD *v128; // [sp+188h] [bp-254h]
  _QWORD *v129; // [sp+190h] [bp-24Ch]
  _QWORD *v130; // [sp+190h] [bp-24Ch]
  _QWORD *v131; // [sp+198h] [bp-244h]
  _QWORD *v132; // [sp+1A0h] [bp-23Ch]
  _QWORD *v133; // [sp+1A8h] [bp-234h]
  _QWORD *v134; // [sp+1C8h] [bp-214h]
  _QWORD *v135; // [sp+1D0h] [bp-20Ch]
  _QWORD *v136; // [sp+1D8h] [bp-204h]
  _QWORD *v137; // [sp+1E4h] [bp-1F8h]
  _QWORD *v138; // [sp+1E8h] [bp-1F4h]
  _QWORD *v139; // [sp+1ECh] [bp-1F0h]
  _QWORD *v140; // [sp+1F0h] [bp-1ECh]
  _QWORD *v141; // [sp+1F4h] [bp-1E8h]
  _DWORD *v142; // [sp+204h] [bp-1D8h]
  _QWORD *v143; // [sp+208h] [bp-1D4h]
  _QWORD *v144; // [sp+208h] [bp-1D4h]
  _QWORD *v145; // [sp+210h] [bp-1CCh]
  _QWORD *v146; // [sp+214h] [bp-1C8h]
  _QWORD *v147; // [sp+218h] [bp-1C4h]
  _QWORD *v148; // [sp+21Ch] [bp-1C0h]
  _QWORD *v149; // [sp+220h] [bp-1BCh]
  _QWORD *v150; // [sp+224h] [bp-1B8h]
  _QWORD *v151; // [sp+224h] [bp-1B8h]
  _QWORD *v152; // [sp+22Ch] [bp-1B0h]
  _QWORD *v153; // [sp+230h] [bp-1ACh]
  _QWORD *v154; // [sp+234h] [bp-1A8h]
  _QWORD *v155; // [sp+238h] [bp-1A4h]
  _QWORD *v156; // [sp+23Ch] [bp-1A0h]
  _QWORD *v157; // [sp+244h] [bp-198h]
  int v158; // [sp+248h] [bp-194h] BYREF
  void *v159; // [sp+24Ch] [bp-190h]
  _BYTE dest[128]; // [sp+250h] [bp-18Ch] BYREF
  _QWORD v161[16]; // [sp+2D0h] [bp-10Ch] BYREF
  char v162[140]; // [sp+350h] [bp-8Ch] BYREF

  v5 = *(_DWORD *)(a1 + 128);
  v159 = a4;
  v158 = a1;
  v162[0] = (128 >> a3) | a2 & -(128 >> a3);
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
  memset(&v162[1], 0, v7 - 9);
  v9 = v158;
  v10 = &v162[v7 - 8];
  *v10 = HIBYTE(v8);
  v10[7] = v8;
  v10[3] = BYTE4(v8);
  v10[1] = BYTE6(v8);
  v10[2] = BYTE5(v8);
  v10[4] = BYTE3(v8);
  v10[5] = BYTE2(v8);
  v10[6] = BYTE1(v8);
  sph_groestl384_0(v9, v162, v7);
  memcpy(dest, (const void *)(v9 + 136), sizeof(dest));
  memcpy(v161, dest, sizeof(v161));
  v88 = v161[0];
  v45 = 0;
  v74 = v161[1];
  v76 = v161[2];
  v78 = v161[3];
  v52 = v161[4];
  v55 = v161[5];
  v58 = v161[6];
  v61 = v161[7];
  v64 = v161[8];
  v67 = v161[9];
  v71 = v161[10];
  v80 = v161[11];
  v83 = v161[14];
  v85 = v161[12];
  v91 = v161[13];
  v95 = v161[15];
  do
  {
    v46 = v88 ^ v45;
    v89 = v74 ^ (v45 + 16);
    v49 = v76 ^ (v45 + 32);
    v90 = v78 ^ (v45 + 48);
    v53 = v52 ^ (v45 + 64);
    v56 = v55 ^ (v45 + 80);
    v93 = v58 ^ (v45 + 96);
    v59 = v61 ^ (v45 + 112);
    v62 = v64 ^ (v45 + 128);
    v65 = v67 ^ (v45 + 144);
    v68 = v71 ^ (v45 + 160);
    v72 = v80 ^ (v45 + 176);
    v98 = v85 ^ (v45 + 192);
    v75 = (v45 + 208) ^ v91;
    v77 = v83 ^ (v45 + 224);
    v79 = (v45 + 240) ^ v95;
    v143 = &qword_2A05A0[((unsigned int)v80 ^ ((_DWORD)v45 + 176)) >> 24];
    v81 = qword_2A05A0[BYTE3(v90) + 1]
        ^ qword_29F5B0[BYTE1(v89) - 1]
        ^ (v45 + 1)
        ^ qword_29E5A8[(unsigned __int8)v46]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v72))]
        ^ qword_29FDB0[BYTE2(v49) - 1]
        ^ qword_2A0DB0[BYTE4(v53) - 1]
        ^ qword_2A15A8[BYTE5(v56)]
        ^ qword_2A1DA8[BYTE6(v93)];
    v99 = &qword_2A05A0[((unsigned int)v85 ^ ((_DWORD)v45 + 192)) >> 24];
    v96 = (v45 + 17)
        ^ qword_29E5A8[(unsigned __int8)v89]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v98))]
        ^ qword_29F5B0[BYTE1(v49) - 1]
        ^ qword_29FDB0[BYTE2(v90) - 1]
        ^ qword_2A05A0[BYTE3(v53) + 1]
        ^ qword_2A0DB0[BYTE4(v56) - 1]
        ^ qword_2A15A8[BYTE5(v93)]
        ^ qword_2A1DA8[BYTE6(v59)];
    v150 = &qword_2A05A0[(((_DWORD)v45 + 208) ^ (unsigned int)v91) >> 24];
    v113 = &qword_2A05A0[((unsigned int)v83 ^ ((_DWORD)v45 + 224)) >> 24];
    v84 = (v45 + 33)
        ^ qword_29E5A8[(unsigned __int8)v49]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v75))]
        ^ qword_29F5B0[BYTE1(v90) - 1]
        ^ qword_29FDB0[BYTE2(v53) - 1]
        ^ qword_2A05A0[BYTE3(v56) + 1]
        ^ qword_2A0DB0[BYTE4(v93) - 1]
        ^ qword_2A15A8[BYTE5(v59)]
        ^ qword_2A1DA8[BYTE6(v62)];
    v86 = qword_29FDB0[BYTE2(v56) - 1]
        ^ (v45 + 49)
        ^ qword_29E5A8[(unsigned __int8)v90]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v77))]
        ^ qword_29F5B0[BYTE1(v53) - 1]
        ^ qword_2A05A0[BYTE3(v93) + 1]
        ^ qword_2A0DB0[BYTE4(v59) - 1]
        ^ qword_2A15A8[BYTE5(v62)]
        ^ qword_2A1DA8[BYTE6(v65)];
    v122 = &qword_2A1DA8[BYTE6(v49)];
    v104 = &qword_2A1DA8[BYTE6(v46)];
    v92 = qword_2A05A0[BYTE3(v59) + 1]
        ^ (v45 + 65)
        ^ qword_29E5A8[(unsigned __int8)v53]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v79))]
        ^ qword_29F5B0[BYTE1(v56) - 1]
        ^ qword_29FDB0[BYTE2(v93) - 1]
        ^ qword_2A0DB0[BYTE4(v62) - 1]
        ^ qword_2A15A8[BYTE5(v65)]
        ^ qword_2A1DA8[BYTE6(v68)];
    v111 = &qword_29EDA8[HIBYTE(HIDWORD(v93))];
    v11 = qword_29E5A8[(unsigned __int8)v93];
    v94 = qword_29FDB0[BYTE2(v59) - 1]
        ^ qword_29F5B0[BYTE1(v93) - 1]
        ^ (v45 + 81)
        ^ qword_29EDA8[HIBYTE(HIDWORD(v46))]
        ^ qword_29E5A8[(unsigned __int8)v56]
        ^ qword_2A05A0[BYTE3(v62) + 1]
        ^ qword_2A0DB0[BYTE4(v65) - 1]
        ^ qword_2A15A8[BYTE5(v68)]
        ^ qword_2A1DA8[BYTE6(v72)];
    v120 = &qword_29EDA8[HIBYTE(HIDWORD(v59))];
    v97 = (v45 + 97)
        ^ v11
        ^ qword_29EDA8[HIBYTE(HIDWORD(v89))]
        ^ qword_29F5B0[BYTE1(v59) - 1]
        ^ qword_29FDB0[BYTE2(v62) - 1]
        ^ qword_2A05A0[BYTE3(v65) + 1]
        ^ qword_2A0DB0[BYTE4(v68) - 1]
        ^ qword_2A15A8[BYTE5(v72)]
        ^ qword_2A1DA8[BYTE6(v98)];
    v134 = &qword_29F5B0[BYTE1(v46)];
    v116 = &qword_2A0DB0[BYTE4(v46)];
    v60 = (v45 + 113)
        ^ qword_29E5A8[(unsigned __int8)v59]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v49))]
        ^ qword_29F5B0[BYTE1(v62) - 1]
        ^ qword_29FDB0[BYTE2(v65) - 1]
        ^ qword_2A05A0[BYTE3(v68) + 1]
        ^ qword_2A0DB0[BYTE4(v72) - 1]
        ^ qword_2A15A8[BYTE5(v98)]
        ^ qword_2A1DA8[BYTE6(v75)];
    v12 = &qword_29EDA8[HIBYTE(HIDWORD(v56))];
    v138 = &qword_2A1DA8[BYTE6(v56)];
    v137 = &qword_2A05A0[BYTE3(v49)];
    v57 = v143[1]
        ^ (v45 + 129)
        ^ qword_29E5A8[(unsigned __int8)v62]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v90))]
        ^ qword_29F5B0[BYTE1(v65) - 1]
        ^ qword_29FDB0[BYTE2(v68) - 1]
        ^ qword_2A0DB0[BYTE4(v98) - 1]
        ^ qword_2A15A8[BYTE5(v75)]
        ^ qword_2A1DA8[BYTE6(v77)];
    v13 = &qword_2A15A8[BYTE5(v46)];
    v108 = &qword_2A15A8[BYTE5(v49)];
    v14 = &qword_2A15A8[BYTE5(v53)];
    v107 = &qword_2A1DA8[BYTE6(v53)];
    v15 = (v45 + 209)
        ^ qword_2A05A0[BYTE3(v46) + 1]
        ^ qword_29E5A8[(unsigned __int8)v75]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v62))];
    v16 = qword_2A0DB0[BYTE4(v49) - 1]
        ^ qword_2A05A0[BYTE3(v89) + 1]
        ^ qword_29F5B0[BYTE1(v79) - 1]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v65))]
        ^ (v45 + 225)
        ^ qword_29FDB0[BYTE2(v46) - 1]
        ^ qword_29E5A8[(unsigned __int8)v77];
    v47 = qword_2A1DA8[BYTE6(v79)]
        ^ qword_2A15A8[BYTE5(v77)]
        ^ qword_2A0DB0[BYTE4(v75) - 1]
        ^ v99[1]
        ^ (v45 + 145)
        ^ qword_29E5A8[(unsigned __int8)v65]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v53))]
        ^ qword_29F5B0[BYTE1(v68) - 1]
        ^ qword_29FDB0[BYTE2(v72) - 1];
    v54 = qword_2A1DA8[BYTE6(v89)]
        ^ qword_2A0DB0[BYTE4(v79) - 1]
        ^ v113[1]
        ^ qword_29FDB0[BYTE2(v75) - 1]
        ^ qword_29E5A8[(unsigned __int8)v72]
        ^ *v13
        ^ (v45 + 177)
        ^ *v111
        ^ qword_29F5B0[BYTE1(v98) - 1];
    v50 = qword_2A15A8[BYTE5(v79)]
        ^ qword_2A0DB0[BYTE4(v77) - 1]
        ^ v150[1]
        ^ qword_29FDB0[BYTE2(v98) - 1]
        ^ qword_29F5B0[BYTE1(v72) - 1]
        ^ *v12
        ^ (v45 + 161)
        ^ *v104
        ^ qword_29E5A8[(unsigned __int8)v68];
    v63 = qword_2A15A8[BYTE5(v89)]
        ^ qword_2A05A0[BYTE3(v79) + 1]
        ^ qword_29FDB0[BYTE2(v77) - 1]
        ^ qword_29F5B0[BYTE1(v75) - 1]
        ^ (v45 + 193)
        ^ *(v116 - 1)
        ^ qword_29E5A8[(unsigned __int8)v98]
        ^ *v120
        ^ *v122;
    v66 = qword_2A0DB0[BYTE4(v89) - 1]
        ^ qword_29FDB0[BYTE2(v79) - 1]
        ^ qword_29F5B0[BYTE1(v77) - 1]
        ^ v15
        ^ *v108
        ^ qword_2A1DA8[BYTE6(v90)];
    v73 = *v138
        ^ *v14
        ^ qword_2A0DB0[BYTE4(v90) - 1]
        ^ v137[1]
        ^ qword_29FDB0[BYTE2(v89) - 1]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v68))]
        ^ qword_29E5A8[(unsigned __int8)v79]
        ^ *(v134 - 1)
        ^ (v45 + 241);
    v69 = *v107 ^ qword_2A15A8[BYTE5(v90)] ^ v16;
    v126 = &qword_2A1DA8[BYTE6(v54)];
    v129 = &qword_29FDB0[BYTE2(v57)];
    v132 = &qword_2A15A8[BYTE5(v54)];
    v133 = &qword_29F5B0[BYTE1(v57)];
    v135 = &qword_29F5B0[BYTE1(v47)];
    v136 = &qword_2A05A0[BYTE3(v54)];
    v139 = &qword_29F5B0[BYTE1(v50)];
    v140 = &qword_29FDB0[BYTE2(v54)];
    v141 = &qword_2A05A0[(LODWORD(qword_2A15A8[BYTE5(v89)])
                        ^ LODWORD(qword_2A05A0[BYTE3(v79) + 1])
                        ^ LODWORD(qword_29FDB0[BYTE2(v77) - 1])
                        ^ LODWORD(qword_29F5B0[BYTE1(v75) - 1])
                        ^ ((_DWORD)v45 + 193)
                        ^ (unsigned int)(*((_DWORD *)v116 - 2) ^ LODWORD(qword_29E5A8[(unsigned __int8)v98]))
                        ^ *(_DWORD *)v120
                        ^ *(_DWORD *)v122) >> 24];
    v144 = &qword_29F5B0[BYTE1(v54)];
    v45 += 2;
    v142 = &qword_2A1DA8[BYTE6(v81)];
    v145 = &qword_2A05A0[(LODWORD(qword_2A0DB0[BYTE4(v89) - 1])
                        ^ LODWORD(qword_29FDB0[BYTE2(v79) - 1])
                        ^ LODWORD(qword_29F5B0[BYTE1(v77) - 1])
                        ^ (unsigned int)v15
                        ^ *(_DWORD *)v108
                        ^ LODWORD(qword_2A1DA8[BYTE6(v90)])) >> 24];
    v146 = &qword_2A15A8[BYTE5(v73)];
    v148 = &qword_29F5B0[BYTE1(v63)];
    v147 = &qword_2A15A8[BYTE5(v81)];
    v149 = &qword_29FDB0[BYTE2(v66)];
    v88 = qword_2A15A8[BYTE5(v94)]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v54))]
        ^ qword_29E5A8[(unsigned __int8)v81]
        ^ qword_29F5B0[BYTE1(v96) - 1]
        ^ qword_29FDB0[BYTE2(v84) - 1]
        ^ qword_2A05A0[BYTE3(v86) + 1]
        ^ qword_2A0DB0[BYTE4(v92) - 1]
        ^ qword_2A1DA8[BYTE6(v97)];
    v151 = &qword_2A05A0[(*(_DWORD *)v107 ^ LODWORD(qword_2A15A8[BYTE5(v90)]) ^ (unsigned int)v16) >> 24];
    v152 = &qword_2A05A0[BYTE3(v81)];
    v153 = &qword_29FDB0[BYTE2(v81)];
    v155 = &qword_29F5B0[BYTE1(v81)];
    v74 = qword_2A05A0[BYTE3(v92) + 1]
        ^ qword_29F5B0[BYTE1(v84) - 1]
        ^ qword_29E5A8[(unsigned __int8)v96]
        ^ qword_2A0DB0[BYTE4(v94) - 1]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v63))]
        ^ qword_29FDB0[BYTE2(v86) - 1]
        ^ qword_2A15A8[BYTE5(v97)]
        ^ qword_2A1DA8[BYTE6(v60)];
    v76 = qword_29F5B0[BYTE1(v86) - 1]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v66))]
        ^ qword_29E5A8[(unsigned __int8)v84]
        ^ qword_2A05A0[BYTE3(v94) + 1]
        ^ qword_29FDB0[BYTE2(v92) - 1]
        ^ qword_2A0DB0[BYTE4(v97) - 1]
        ^ qword_2A15A8[BYTE5(v60)]
        ^ qword_2A1DA8[BYTE6(v57)];
    v110 = &qword_2A0DB0[BYTE4(v81)];
    v78 = qword_29EDA8[HIBYTE(HIDWORD(v69))]
        ^ qword_29E5A8[(unsigned __int8)v86]
        ^ qword_29FDB0[BYTE2(v94) - 1]
        ^ qword_29F5B0[BYTE1(v92) - 1]
        ^ qword_2A05A0[BYTE3(v97) + 1]
        ^ qword_2A0DB0[BYTE4(v60) - 1]
        ^ qword_2A15A8[BYTE5(v57)]
        ^ qword_2A1DA8[BYTE6(v47)];
    v17 = qword_29F5B0[BYTE1(v94) - 1]
        ^ qword_29E5A8[(unsigned __int8)v92]
        ^ qword_29EDA8[HIBYTE(HIDWORD(v73))]
        ^ qword_29FDB0[BYTE2(v97) - 1]
        ^ qword_2A05A0[BYTE3(v60) + 1];
    v18 = qword_2A0DB0[BYTE4(v57) - 1];
    v114 = &qword_29EDA8[HIBYTE(HIDWORD(v60))];
    v101 = (unsigned __int8)v54;
    v19 = v17 ^ v18;
    LODWORD(v17) = &qword_2A0DB0[BYTE4(v54)];
    LODWORD(v54) = v19;
    HIDWORD(v54) = HIDWORD(v17) ^ HIDWORD(v18);
    v100 = v17;
    v109 = &qword_29E5A8[v101];
    v102 = &qword_29E5A8[(unsigned __int8)v57];
    v118 = &qword_29EDA8[HIBYTE(HIDWORD(v57))];
    v52 = v54 ^ qword_2A15A8[BYTE5(v47)] ^ qword_2A1DA8[BYTE6(v50)];
    v112 = &qword_29E5A8[(unsigned __int8)v63];
    v20 = &qword_29E5A8[(unsigned __int8)v47];
    v154 = &qword_29EDA8[HIBYTE(HIDWORD(v47))];
    v106 = &qword_29E5A8[(unsigned __int8)v50];
    v157 = &qword_29EDA8[HIBYTE(HIDWORD(v50))];
    LODWORD(v98) = &qword_2A0DB0[BYTE4(v73)];
    v117 = &qword_29E5A8[(unsigned __int8)v66];
    v124 = &qword_29E5A8[(unsigned __int8)v69];
    v156 = &qword_29E5A8[(unsigned __int8)v73];
    v55 = qword_29EDA8[HIBYTE(HIDWORD(v81))]
        ^ qword_29E5A8[(unsigned __int8)v94]
        ^ qword_29F5B0[BYTE1(v97) - 1]
        ^ qword_29FDB0[BYTE2(v60) - 1]
        ^ qword_2A05A0[BYTE3(v57) + 1]
        ^ qword_2A0DB0[BYTE4(v47) - 1]
        ^ qword_2A15A8[BYTE5(v50)]
        ^ *v126;
    v115 = &qword_29F5B0[BYTE1(v66)];
    v21 = qword_29E5A8[(unsigned __int8)v97] ^ qword_29EDA8[HIBYTE(HIDWORD(v96))];
    LODWORD(v97) = &qword_29FDB0[BYTE2(v69)];
    v119 = &qword_29F5B0[BYTE1(v69)];
    v125 = &qword_29F5B0[BYTE1(v73)];
    v121 = &qword_29FDB0[BYTE2(v73)];
    LOBYTE(v47) = BYTE3(v96);
    LOBYTE(v17) = BYTE2(v96);
    LODWORD(v96) = &qword_2A05A0[BYTE3(v73)];
    v22 = qword_2A05A0[BYTE3(v47) + 1] ^ qword_29F5B0[BYTE1(v60) - 1] ^ v21 ^ *(v129 - 1);
    v127 = &qword_2A05A0[(unsigned __int8)v47];
    v128 = &qword_29FDB0[(unsigned __int8)v17];
    v130 = &qword_2A05A0[BYTE3(v84)];
    v23 = qword_29E5A8[(unsigned __int8)v60];
    v58 = v22 ^ qword_2A0DB0[BYTE4(v50) - 1] ^ *v132 ^ qword_2A1DA8[BYTE6(v63)];
    v123 = &qword_2A15A8[BYTE5(v84)];
    v24 = *v102;
    v103 = &qword_2A15A8[BYTE5(v86)];
    v48 = *(_QWORD *)(v100 - 8)
        ^ *(v133 - 1)
        ^ v23
        ^ qword_29EDA8[HIBYTE(HIDWORD(v84))]
        ^ qword_29FDB0[BYTE2(v47) - 1]
        ^ qword_2A05A0[BYTE3(v50) + 1]
        ^ qword_2A15A8[BYTE5(v63)];
    v131 = &qword_2A0DB0[vshrd_n_u64(vdup_n_s8(HIDWORD(v86)).n64_u64[0], 0x38u)];
    v82 = qword_2A1DA8[BYTE6(v69)];
    v51 = qword_29FDB0[BYTE2(v50) - 1] ^ qword_29EDA8[HIBYTE(HIDWORD(v86))] ^ v24 ^ *(v135 - 1);
    LODWORD(v92) = &qword_2A1DA8[BYTE6(v86)];
    v105 = &qword_2A15A8[BYTE5(v92)];
    v87 = qword_2A1DA8[BYTE6(v73)];
    v25 = *(v144 - 1);
    v26 = qword_29EDA8[HIBYTE(HIDWORD(v94))];
    v27 = qword_2A0DB0[(unsigned int)vshrd_n_u64(vdup_n_s8(HIDWORD(v63)).n64_u64[0], 0x38u) - 1] ^ v51 ^ v136[1];
    v28 = qword_29FDB0[BYTE2(v63) - 1];
    HIDWORD(v25) ^= HIDWORD(v28) ^ v142[1] ^ v106[1] ^ HIDWORD(v26);
    LODWORD(v18) = *v142 ^ *v106 ^ v26;
    v29 = v145[1];
    v30 = qword_2A0DB0[BYTE4(v69) - 1];
    v70 = qword_2A15A8[BYTE5(v69)]
        ^ *(v139 - 1)
        ^ qword_29EDA8[HIBYTE(HIDWORD(v92))]
        ^ *v20
        ^ *(v140 - 1)
        ^ v141[1]
        ^ qword_2A0DB0[BYTE4(v66) - 1];
    LODWORD(v73) = v29 ^ v28 ^ v18 ^ v25 ^ v30;
    HIDWORD(v73) = HIDWORD(v29) ^ HIDWORD(v25) ^ HIDWORD(v30);
    v61 = qword_2A1DA8[BYTE6(v66)] ^ v48;
    v64 = v82 ^ qword_2A15A8[BYTE5(v66)] ^ v27;
    v67 = v87 ^ v70;
    v71 = *v146 ^ v73;
    v80 = qword_2A1DA8[BYTE6(v96)]
        ^ *(v148 - 1)
        ^ *v147
        ^ *v109
        ^ qword_29EDA8[HIBYTE(HIDWORD(v97))]
        ^ *(v149 - 1)
        ^ v151[1]
        ^ *(_QWORD *)(v98 - 8);
    v85 = *(_QWORD *)(v96 + 8)
        ^ *(v115 - 1)
        ^ *(v110 - 1)
        ^ *v112
        ^ *v114
        ^ *(_QWORD *)(v97 - 8)
        ^ qword_2A15A8[BYTE5(v96)]
        ^ qword_2A1DA8[BYTE6(v84)];
    v83 = qword_2A1DA8[BYTE6(v92)]
        ^ *v103
        ^ v127[1]
        ^ *(v125 - 1)
        ^ *v124
        ^ *(v153 - 1)
        ^ *v154
        ^ qword_2A0DB0[BYTE4(v84) - 1];
    v91 = qword_2A0DB0[BYTE4(v96) - 1] ^ *(v119 - 1) ^ *v117 ^ v152[1] ^ *v118 ^ *(v121 - 1) ^ *v123 ^ *(_QWORD *)v92;
    v31 = *(v131 - 1) ^ v130[1] ^ *(v128 - 1) ^ *v157 ^ *v156 ^ *(v155 - 1) ^ qword_2A1DA8[BYTE6(v94)] ^ *v105;
    v95 = v31;
  }
  while ( v45 != 14 );
  v161[2] = v76;
  v32 = v88;
  v161[3] = v78;
  v161[1] = v74;
  v161[0] = v88;
  v161[4] = v52;
  v161[12] = v85;
  v161[13] = v91;
  v161[5] = v55;
  v161[15] = v31;
  v161[6] = v58;
  v161[7] = v61;
  v161[8] = v64;
  v161[9] = v67;
  v161[10] = v71;
  v161[11] = v80;
  v161[14] = v83;
  v33 = &v161[1];
  v34 = &v158;
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
  v38 = v162;
  do
  {
    v39 = *v37++;
    v38 += 8;
    *((_QWORD *)v38 - 1) = v39;
  }
  while ( v161 != v37 );
  memcpy(v159, &v162[64 - n], n);
  v40 = v158;
  v41 = v158 + 248;
  *(_DWORD *)(v158 + 128) = 0;
  v42 = v40 + 128;
  do
  {
    *(_QWORD *)(v42 + 8) = 0;
    v42 += 8;
  }
  while ( v41 != v42 );
  v43 = v158;
  *(_QWORD *)(v158 + 264) = 0;
  *(_DWORD *)(v43 + 256) = 0;
  *(_DWORD *)(v43 + 260) = (n << 11) & 0xFF0000 | (n << 27);
  return 0;
}
