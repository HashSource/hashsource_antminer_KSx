int __fastcall sub_17D36C(int a1, char a2, char a3, void *a4, size_t n)
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
  __int64 v15; // r0
  __int64 v16; // r8
  __int64 v17; // r10
  _QWORD *v18; // lr
  __int64 v19; // r6
  __int64 v20; // r10
  __int64 v21; // r0
  __int64 v22; // r6
  __int64 v23; // r10
  __int64 v24; // r0
  __int64 v25; // r8
  __int64 v26; // r6
  __int64 v27; // r4
  __int64 v28; // r0
  __int64 v29; // r0
  __int64 v30; // r6
  __int64 *v31; // r2
  int *v32; // r3
  __int64 v33; // t1
  __int64 v34; // t1
  __int64 *v35; // lr
  char *v36; // r12
  __int64 v37; // t1
  int v38; // r3
  int v39; // r2
  int v40; // r3
  int v41; // r12
  __int64 v43; // [sp+10h] [bp-3CCh]
  __int64 v44; // [sp+18h] [bp-3C4h]
  __int64 v45; // [sp+18h] [bp-3C4h]
  __int64 v46; // [sp+18h] [bp-3C4h]
  __int64 v47; // [sp+20h] [bp-3BCh]
  __int64 v48; // [sp+20h] [bp-3BCh]
  __int64 v49; // [sp+20h] [bp-3BCh]
  __int64 v50; // [sp+28h] [bp-3B4h]
  __int64 v51; // [sp+28h] [bp-3B4h]
  __int64 v52; // [sp+28h] [bp-3B4h]
  __int64 v53; // [sp+30h] [bp-3ACh]
  __int64 v54; // [sp+30h] [bp-3ACh]
  __int64 v55; // [sp+30h] [bp-3ACh]
  __int64 v56; // [sp+38h] [bp-3A4h]
  __int64 v57; // [sp+38h] [bp-3A4h]
  __int64 v58; // [sp+38h] [bp-3A4h]
  __int64 v59; // [sp+40h] [bp-39Ch]
  __int64 v60; // [sp+40h] [bp-39Ch]
  __int64 v61; // [sp+40h] [bp-39Ch]
  __int64 v62; // [sp+48h] [bp-394h]
  __int64 v63; // [sp+48h] [bp-394h]
  __int64 v64; // [sp+48h] [bp-394h]
  __int64 v65; // [sp+50h] [bp-38Ch]
  __int64 v66; // [sp+50h] [bp-38Ch]
  __int64 v67; // [sp+50h] [bp-38Ch]
  __int64 v68; // [sp+50h] [bp-38Ch]
  __int64 v69; // [sp+58h] [bp-384h]
  __int64 v70; // [sp+58h] [bp-384h]
  __int64 v71; // [sp+58h] [bp-384h]
  __int64 v72; // [sp+60h] [bp-37Ch]
  __int64 v73; // [sp+60h] [bp-37Ch]
  __int64 v74; // [sp+68h] [bp-374h]
  __int64 v75; // [sp+68h] [bp-374h]
  __int64 v76; // [sp+70h] [bp-36Ch]
  __int64 v77; // [sp+70h] [bp-36Ch]
  __int64 v78; // [sp+70h] [bp-36Ch]
  __int64 v79; // [sp+78h] [bp-364h]
  __int64 v80; // [sp+78h] [bp-364h]
  __int64 v81; // [sp+78h] [bp-364h]
  __int64 v82; // [sp+80h] [bp-35Ch]
  __int64 v83; // [sp+80h] [bp-35Ch]
  __int64 v84; // [sp+88h] [bp-354h]
  __int64 v85; // [sp+88h] [bp-354h]
  __int64 v86; // [sp+88h] [bp-354h]
  __int64 v87; // [sp+90h] [bp-34Ch]
  __int64 v88; // [sp+90h] [bp-34Ch]
  __int64 v89; // [sp+98h] [bp-344h]
  __int64 v90; // [sp+A0h] [bp-33Ch]
  __int64 v91; // [sp+A0h] [bp-33Ch]
  __int64 v92; // [sp+A8h] [bp-334h]
  __int64 v93; // [sp+A8h] [bp-334h]
  __int64 v94; // [sp+B0h] [bp-32Ch]
  __int64 v95; // [sp+B0h] [bp-32Ch]
  __int64 v96; // [sp+B8h] [bp-324h]
  __int64 v97; // [sp+C0h] [bp-31Ch]
  __int64 v98; // [sp+D0h] [bp-30Ch]
  _QWORD *v99; // [sp+D8h] [bp-304h]
  _QWORD *v100; // [sp+D8h] [bp-304h]
  __int64 *v101; // [sp+E0h] [bp-2FCh]
  _QWORD *v102; // [sp+E0h] [bp-2FCh]
  _QWORD *v103; // [sp+F0h] [bp-2ECh]
  _DWORD *v104; // [sp+100h] [bp-2DCh]
  _QWORD *v105; // [sp+108h] [bp-2D4h]
  _QWORD *v106; // [sp+110h] [bp-2CCh]
  _QWORD *v107; // [sp+110h] [bp-2CCh]
  _QWORD *v108; // [sp+120h] [bp-2BCh]
  _QWORD *v109; // [sp+128h] [bp-2B4h]
  _QWORD *v110; // [sp+128h] [bp-2B4h]
  _QWORD *v111; // [sp+130h] [bp-2ACh]
  _QWORD *v112; // [sp+130h] [bp-2ACh]
  _QWORD *v113; // [sp+138h] [bp-2A4h]
  _QWORD *v114; // [sp+140h] [bp-29Ch]
  _QWORD *v115; // [sp+140h] [bp-29Ch]
  _QWORD *v116; // [sp+148h] [bp-294h]
  _QWORD *v117; // [sp+150h] [bp-28Ch]
  _QWORD *v118; // [sp+158h] [bp-284h]
  _QWORD *v119; // [sp+158h] [bp-284h]
  _QWORD *v120; // [sp+168h] [bp-274h]
  _QWORD *v121; // [sp+168h] [bp-274h]
  _QWORD *v122; // [sp+170h] [bp-26Ch]
  _QWORD *v123; // [sp+178h] [bp-264h]
  _QWORD *v124; // [sp+180h] [bp-25Ch]
  _QWORD *v125; // [sp+180h] [bp-25Ch]
  _QWORD *v126; // [sp+188h] [bp-254h]
  _QWORD *v127; // [sp+190h] [bp-24Ch]
  _QWORD *v128; // [sp+190h] [bp-24Ch]
  _QWORD *v129; // [sp+190h] [bp-24Ch]
  _QWORD *v130; // [sp+198h] [bp-244h]
  _QWORD *v131; // [sp+1A0h] [bp-23Ch]
  _QWORD *v132; // [sp+1A8h] [bp-234h]
  _QWORD *v133; // [sp+1B0h] [bp-22Ch]
  _QWORD *v134; // [sp+1B8h] [bp-224h]
  _QWORD *v135; // [sp+1C8h] [bp-214h]
  _QWORD *v136; // [sp+1D0h] [bp-20Ch]
  _QWORD *v137; // [sp+1D0h] [bp-20Ch]
  _QWORD *v138; // [sp+1D8h] [bp-204h]
  _QWORD *v139; // [sp+1E4h] [bp-1F8h]
  _QWORD *v140; // [sp+1E8h] [bp-1F4h]
  _QWORD *v141; // [sp+1ECh] [bp-1F0h]
  _QWORD *v142; // [sp+1F0h] [bp-1ECh]
  _QWORD *v143; // [sp+1F4h] [bp-1E8h]
  _DWORD *v144; // [sp+204h] [bp-1D8h]
  _QWORD *v145; // [sp+208h] [bp-1D4h]
  _QWORD *v146; // [sp+208h] [bp-1D4h]
  _QWORD *v147; // [sp+214h] [bp-1C8h]
  _QWORD *v148; // [sp+218h] [bp-1C4h]
  _QWORD *v149; // [sp+218h] [bp-1C4h]
  _QWORD *v150; // [sp+21Ch] [bp-1C0h]
  _QWORD *v151; // [sp+21Ch] [bp-1C0h]
  _QWORD *v152; // [sp+220h] [bp-1BCh]
  _QWORD *v153; // [sp+220h] [bp-1BCh]
  _QWORD *v154; // [sp+224h] [bp-1B8h]
  _QWORD *v155; // [sp+224h] [bp-1B8h]
  _QWORD *v156; // [sp+22Ch] [bp-1B0h]
  _QWORD *v157; // [sp+230h] [bp-1ACh]
  _QWORD *v158; // [sp+234h] [bp-1A8h]
  _QWORD *v159; // [sp+238h] [bp-1A4h]
  _QWORD *v160; // [sp+238h] [bp-1A4h]
  _QWORD *v161; // [sp+23Ch] [bp-1A0h]
  _QWORD *v162; // [sp+244h] [bp-198h]
  int v163; // [sp+248h] [bp-194h] BYREF
  void *v164; // [sp+24Ch] [bp-190h]
  _BYTE dest[128]; // [sp+250h] [bp-18Ch] BYREF
  _QWORD v166[16]; // [sp+2D0h] [bp-10Ch] BYREF
  char v167[140]; // [sp+350h] [bp-8Ch] BYREF

  v5 = *(_DWORD *)(a1 + 128);
  v164 = a4;
  v163 = a1;
  v167[0] = (128 >> a3) | a2 & -(128 >> a3);
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
  memset(&v167[1], 0, v7 - 9);
  v9 = v163;
  v10 = &v167[v7 - 8];
  *v10 = HIBYTE(v8);
  v10[7] = v8;
  v10[3] = BYTE4(v8);
  v10[1] = BYTE6(v8);
  v10[2] = BYTE5(v8);
  v10[4] = BYTE3(v8);
  v10[5] = BYTE2(v8);
  v10[6] = BYTE1(v8);
  sph_groestl384_0(v9, v167, v7);
  memcpy(dest, (const void *)(v9 + 136), sizeof(dest));
  memcpy(v166, dest, sizeof(v166));
  v87 = v166[0];
  v43 = 0;
  v72 = v166[1];
  v74 = v166[2];
  v76 = v166[3];
  v50 = v166[4];
  v53 = v166[5];
  v56 = v166[6];
  v59 = v166[7];
  v62 = v166[8];
  v65 = v166[9];
  v69 = v166[10];
  v79 = v166[11];
  v82 = v166[14];
  v84 = v166[12];
  v90 = v166[13];
  v94 = v166[15];
  do
  {
    v44 = v87 ^ v43;
    v88 = v72 ^ (v43 + 16);
    v47 = v74 ^ (v43 + 32);
    v89 = v76 ^ (v43 + 48);
    v51 = v50 ^ (v43 + 64);
    v54 = v53 ^ (v43 + 80);
    v92 = v56 ^ (v43 + 96);
    v57 = v59 ^ (v43 + 112);
    v60 = v62 ^ (v43 + 128);
    v63 = v65 ^ (v43 + 144);
    v66 = v69 ^ (v43 + 160);
    v70 = v79 ^ (v43 + 176);
    v97 = v84 ^ (v43 + 192);
    v73 = (v43 + 208) ^ v90;
    v75 = v82 ^ (v43 + 224);
    v77 = (v43 + 240) ^ v94;
    v145 = &qword_2A0340[((unsigned int)v79 ^ ((_DWORD)v43 + 176)) >> 24];
    v80 = qword_2A0340[BYTE3(v89) + 1]
        ^ qword_29F350[BYTE1(v88) - 1]
        ^ (v43 + 1)
        ^ qword_29E348[(unsigned __int8)v44]
        ^ qword_29EB48[HIBYTE(HIDWORD(v70))]
        ^ qword_29FB50[BYTE2(v47) - 1]
        ^ qword_2A0B50[BYTE4(v51) - 1]
        ^ qword_2A1348[BYTE5(v54)]
        ^ qword_2A1B48[BYTE6(v92)];
    v99 = &qword_2A0340[((unsigned int)v84 ^ ((_DWORD)v43 + 192)) >> 24];
    v148 = &qword_2A1B48[BYTE6(v77)];
    v150 = &qword_29F350[BYTE1(v70)];
    v152 = &qword_29FB50[BYTE2(v97)];
    v95 = (v43 + 17)
        ^ qword_29E348[(unsigned __int8)v88]
        ^ qword_29EB48[HIBYTE(HIDWORD(v97))]
        ^ qword_29F350[BYTE1(v47) - 1]
        ^ qword_29FB50[BYTE2(v89) - 1]
        ^ qword_2A0340[BYTE3(v51) + 1]
        ^ qword_2A0B50[BYTE4(v54) - 1]
        ^ qword_2A1348[BYTE5(v92)]
        ^ qword_2A1B48[BYTE6(v57)];
    v154 = &qword_2A0340[(((_DWORD)v43 + 208) ^ (unsigned int)v90) >> 24];
    v111 = &qword_2A0340[((unsigned int)v82 ^ ((_DWORD)v43 + 224)) >> 24];
    v83 = (v43 + 33)
        ^ qword_29E348[(unsigned __int8)v47]
        ^ qword_29EB48[HIBYTE(HIDWORD(v73))]
        ^ qword_29F350[BYTE1(v89) - 1]
        ^ qword_29FB50[BYTE2(v51) - 1]
        ^ qword_2A0340[BYTE3(v54) + 1]
        ^ qword_2A0B50[BYTE4(v92) - 1]
        ^ qword_2A1348[BYTE5(v57)]
        ^ qword_2A1B48[BYTE6(v60)];
    v85 = qword_29FB50[BYTE2(v54) - 1]
        ^ (v43 + 49)
        ^ qword_29E348[(unsigned __int8)v89]
        ^ qword_29EB48[HIBYTE(HIDWORD(v75))]
        ^ qword_29F350[BYTE1(v51) - 1]
        ^ qword_2A0340[BYTE3(v92) + 1]
        ^ qword_2A0B50[BYTE4(v57) - 1]
        ^ qword_2A1348[BYTE5(v60)]
        ^ qword_2A1B48[BYTE6(v63)];
    v159 = &qword_2A0340[BYTE3(v77)];
    v120 = &qword_2A1B48[BYTE6(v47)];
    v91 = qword_2A0340[BYTE3(v57) + 1]
        ^ (v43 + 65)
        ^ qword_29E348[(unsigned __int8)v51]
        ^ qword_29EB48[HIBYTE(HIDWORD(v77))]
        ^ qword_29F350[BYTE1(v54) - 1]
        ^ qword_29FB50[BYTE2(v92) - 1]
        ^ qword_2A0B50[BYTE4(v60) - 1]
        ^ qword_2A1348[BYTE5(v63)]
        ^ qword_2A1B48[BYTE6(v66)];
    v109 = &qword_29EB48[HIBYTE(HIDWORD(v92))];
    v11 = qword_29E348[(unsigned __int8)v92];
    v93 = qword_29FB50[BYTE2(v57) - 1]
        ^ qword_29F350[BYTE1(v92) - 1]
        ^ (v43 + 81)
        ^ qword_29EB48[HIBYTE(HIDWORD(v44))]
        ^ qword_29E348[(unsigned __int8)v54]
        ^ qword_2A0340[BYTE3(v60) + 1]
        ^ qword_2A0B50[BYTE4(v63) - 1]
        ^ qword_2A1348[BYTE5(v66)]
        ^ qword_2A1B48[BYTE6(v70)];
    v118 = &qword_29EB48[HIBYTE(HIDWORD(v57))];
    v127 = &qword_29FB50[BYTE2(v77)];
    v96 = (v43 + 97)
        ^ v11
        ^ qword_29EB48[HIBYTE(HIDWORD(v88))]
        ^ qword_29F350[BYTE1(v57) - 1]
        ^ qword_29FB50[BYTE2(v60) - 1]
        ^ qword_2A0340[BYTE3(v63) + 1]
        ^ qword_2A0B50[BYTE4(v66) - 1]
        ^ qword_2A1348[BYTE5(v70)]
        ^ qword_2A1B48[BYTE6(v97)];
    v135 = &qword_29F350[BYTE1(v44)];
    v114 = &qword_2A0B50[BYTE4(v44)];
    v58 = (v43 + 113)
        ^ qword_29E348[(unsigned __int8)v57]
        ^ qword_29EB48[HIBYTE(HIDWORD(v47))]
        ^ qword_29F350[BYTE1(v60) - 1]
        ^ qword_29FB50[BYTE2(v63) - 1]
        ^ qword_2A0340[BYTE3(v66) + 1]
        ^ qword_2A0B50[BYTE4(v70) - 1]
        ^ qword_2A1348[BYTE5(v97)]
        ^ qword_2A1B48[BYTE6(v73)];
    v12 = &qword_29EB48[HIBYTE(HIDWORD(v54))];
    v136 = &qword_29E348[(unsigned __int8)v77];
    v140 = &qword_2A1B48[BYTE6(v54)];
    v133 = &qword_29F350[BYTE1(v77)];
    v139 = &qword_2A0340[BYTE3(v47)];
    v55 = v145[1]
        ^ (v43 + 129)
        ^ qword_29E348[(unsigned __int8)v60]
        ^ qword_29EB48[HIBYTE(HIDWORD(v89))]
        ^ qword_29F350[BYTE1(v63) - 1]
        ^ qword_29FB50[BYTE2(v66) - 1]
        ^ qword_2A0B50[BYTE4(v97) - 1]
        ^ qword_2A1348[BYTE5(v73)]
        ^ qword_2A1B48[BYTE6(v75)];
    v13 = &qword_2A1348[BYTE5(v44)];
    v106 = &qword_2A1348[BYTE5(v47)];
    v98 = qword_2A0B50[BYTE4(v77) - 1];
    v14 = &qword_2A1348[BYTE5(v51)];
    v78 = qword_2A1348[BYTE5(v77)];
    v105 = &qword_2A1B48[BYTE6(v51)];
    v15 = *v12 ^ (v43 + 161) ^ qword_2A1B48[BYTE6(v44)] ^ qword_29E348[(unsigned __int8)v66];
    v16 = (v43 + 209)
        ^ qword_2A0340[BYTE3(v44) + 1]
        ^ qword_29E348[(unsigned __int8)v73]
        ^ qword_29EB48[HIBYTE(HIDWORD(v60))];
    v17 = qword_2A0B50[BYTE4(v47) - 1]
        ^ qword_2A0340[BYTE3(v88) + 1]
        ^ *(v133 - 1)
        ^ qword_29EB48[HIBYTE(HIDWORD(v63))]
        ^ (v43 + 225)
        ^ qword_29FB50[BYTE2(v44) - 1]
        ^ qword_29E348[(unsigned __int8)v75];
    v45 = *v148
        ^ qword_2A1348[BYTE5(v75)]
        ^ qword_2A0B50[BYTE4(v73) - 1]
        ^ v99[1]
        ^ (v43 + 145)
        ^ qword_29E348[(unsigned __int8)v63]
        ^ qword_29EB48[HIBYTE(HIDWORD(v51))]
        ^ qword_29F350[BYTE1(v66) - 1]
        ^ qword_29FB50[BYTE2(v70) - 1];
    v52 = qword_2A1B48[BYTE6(v88)]
        ^ v98
        ^ v111[1]
        ^ qword_29FB50[BYTE2(v73) - 1]
        ^ qword_29E348[(unsigned __int8)v70]
        ^ *v13
        ^ (v43 + 177)
        ^ *v109
        ^ qword_29F350[BYTE1(v97) - 1];
    v48 = v78 ^ qword_2A0B50[BYTE4(v75) - 1] ^ v154[1] ^ *(v152 - 1) ^ *(v150 - 1) ^ v15;
    v61 = qword_2A1348[BYTE5(v88)]
        ^ v159[1]
        ^ qword_29FB50[BYTE2(v75) - 1]
        ^ qword_29F350[BYTE1(v73) - 1]
        ^ (v43 + 193)
        ^ *(v114 - 1)
        ^ qword_29E348[(unsigned __int8)v97]
        ^ *v118
        ^ *v120;
    v64 = qword_2A0B50[BYTE4(v88) - 1]
        ^ *(v127 - 1)
        ^ qword_29F350[BYTE1(v75) - 1]
        ^ v16
        ^ *v106
        ^ qword_2A1B48[BYTE6(v89)];
    v71 = *v140
        ^ *v14
        ^ qword_2A0B50[BYTE4(v89) - 1]
        ^ v139[1]
        ^ qword_29FB50[BYTE2(v88) - 1]
        ^ qword_29EB48[HIBYTE(HIDWORD(v66))]
        ^ *v136
        ^ *(v135 - 1)
        ^ (v43 + 241);
    v67 = *v105 ^ qword_2A1348[BYTE5(v89)] ^ v17;
    v124 = &qword_2A1B48[BYTE6(v52)];
    v128 = &qword_29FB50[BYTE2(v55)];
    v131 = &qword_2A1348[BYTE5(v52)];
    v132 = &qword_29F350[BYTE1(v55)];
    v134 = &qword_2A0340[((unsigned int)v78
                        ^ LODWORD(qword_2A0B50[BYTE4(v75) - 1])
                        ^ *((_DWORD *)v154 + 2)
                        ^ *((_DWORD *)v152 - 2)
                        ^ *((_DWORD *)v150 - 2)
                        ^ (unsigned int)v15) >> 24];
    v137 = &qword_29F350[BYTE1(v45)];
    v138 = &qword_2A0340[BYTE3(v52)];
    v141 = &qword_29F350[BYTE1(v48)];
    v142 = &qword_29FB50[BYTE2(v52)];
    v143 = &qword_2A0340[(LODWORD(qword_2A1348[BYTE5(v88)])
                        ^ *((_DWORD *)v159 + 2)
                        ^ LODWORD(qword_29FB50[BYTE2(v75) - 1])
                        ^ LODWORD(qword_29F350[BYTE1(v73) - 1])
                        ^ ((_DWORD)v43 + 193)
                        ^ (unsigned int)(*((_DWORD *)v114 - 2) ^ LODWORD(qword_29E348[(unsigned __int8)v97]))
                        ^ *(_DWORD *)v118
                        ^ *(_DWORD *)v120) >> 24];
    v146 = &qword_29F350[BYTE1(v52)];
    v43 += 2;
    v144 = &qword_2A1B48[BYTE6(v80)];
    v147 = &qword_2A1348[BYTE5(v71)];
    v151 = &qword_29F350[BYTE1(v61)];
    v149 = &qword_2A1348[BYTE5(v80)];
    v153 = &qword_29FB50[BYTE2(v64)];
    v87 = qword_2A1348[BYTE5(v93)]
        ^ qword_29EB48[HIBYTE(HIDWORD(v52))]
        ^ qword_29E348[(unsigned __int8)v80]
        ^ qword_29F350[BYTE1(v95) - 1]
        ^ qword_29FB50[BYTE2(v83) - 1]
        ^ qword_2A0340[BYTE3(v85) + 1]
        ^ qword_2A0B50[BYTE4(v91) - 1]
        ^ qword_2A1B48[BYTE6(v96)];
    v155 = &qword_2A0340[(*(_DWORD *)v105 ^ LODWORD(qword_2A1348[BYTE5(v89)]) ^ (unsigned int)v17) >> 24];
    v156 = &qword_2A0340[BYTE3(v80)];
    v157 = &qword_29FB50[BYTE2(v80)];
    v160 = &qword_29F350[BYTE1(v80)];
    v72 = qword_2A0340[BYTE3(v91) + 1]
        ^ qword_29F350[BYTE1(v83) - 1]
        ^ qword_29E348[(unsigned __int8)v95]
        ^ qword_2A0B50[BYTE4(v93) - 1]
        ^ qword_29EB48[HIBYTE(HIDWORD(v61))]
        ^ qword_29FB50[BYTE2(v85) - 1]
        ^ qword_2A1348[BYTE5(v96)]
        ^ qword_2A1B48[BYTE6(v58)];
    v74 = qword_29F350[BYTE1(v85) - 1]
        ^ qword_29EB48[HIBYTE(HIDWORD(v64))]
        ^ qword_29E348[(unsigned __int8)v83]
        ^ qword_2A0340[BYTE3(v93) + 1]
        ^ qword_29FB50[BYTE2(v91) - 1]
        ^ qword_2A0B50[BYTE4(v96) - 1]
        ^ qword_2A1348[BYTE5(v58)]
        ^ qword_2A1B48[BYTE6(v55)];
    v108 = &qword_2A0B50[BYTE4(v80)];
    v76 = qword_29EB48[HIBYTE(HIDWORD(v67))]
        ^ qword_29E348[(unsigned __int8)v85]
        ^ qword_29FB50[BYTE2(v93) - 1]
        ^ qword_29F350[BYTE1(v91) - 1]
        ^ qword_2A0340[BYTE3(v96) + 1]
        ^ qword_2A0B50[BYTE4(v58) - 1]
        ^ qword_2A1348[BYTE5(v55)]
        ^ qword_2A1B48[BYTE6(v45)];
    v112 = &qword_29EB48[HIBYTE(HIDWORD(v58))];
    v100 = &qword_2A0B50[BYTE4(v52)];
    v107 = &qword_29E348[(unsigned __int8)v52];
    v101 = &qword_29E348[(unsigned __int8)v55];
    v116 = &qword_29EB48[HIBYTE(HIDWORD(v55))];
    v50 = qword_29F350[BYTE1(v93) - 1]
        ^ qword_29E348[(unsigned __int8)v91]
        ^ qword_29EB48[HIBYTE(HIDWORD(v71))]
        ^ qword_29FB50[BYTE2(v96) - 1]
        ^ qword_2A0340[BYTE3(v58) + 1]
        ^ qword_2A0B50[BYTE4(v55) - 1]
        ^ qword_2A1348[BYTE5(v45)]
        ^ qword_2A1B48[BYTE6(v48)];
    v110 = &qword_29E348[(unsigned __int8)v61];
    v18 = &qword_29E348[(unsigned __int8)v45];
    v158 = &qword_29EB48[HIBYTE(HIDWORD(v45))];
    v104 = &qword_29E348[(unsigned __int8)v48];
    v162 = &qword_29EB48[HIBYTE(HIDWORD(v48))];
    LODWORD(v97) = &qword_2A0B50[BYTE4(v71)];
    v115 = &qword_29E348[(unsigned __int8)v64];
    v122 = &qword_29E348[(unsigned __int8)v67];
    v161 = &qword_29E348[(unsigned __int8)v71];
    v53 = qword_29EB48[HIBYTE(HIDWORD(v80))]
        ^ qword_29E348[(unsigned __int8)v93]
        ^ qword_29F350[BYTE1(v96) - 1]
        ^ qword_29FB50[BYTE2(v58) - 1]
        ^ qword_2A0340[BYTE3(v55) + 1]
        ^ qword_2A0B50[BYTE4(v45) - 1]
        ^ qword_2A1348[BYTE5(v48)]
        ^ *v124;
    v113 = &qword_29F350[BYTE1(v64)];
    v19 = qword_29E348[(unsigned __int8)v96] ^ qword_29EB48[HIBYTE(HIDWORD(v95))];
    LODWORD(v96) = &qword_29FB50[BYTE2(v67)];
    v117 = &qword_29F350[BYTE1(v67)];
    v123 = &qword_29F350[BYTE1(v71)];
    v119 = &qword_29FB50[BYTE2(v71)];
    LOBYTE(v45) = BYTE3(v95);
    LOBYTE(v15) = BYTE2(v95);
    LODWORD(v95) = &qword_2A0340[BYTE3(v71)];
    v20 = qword_2A0340[BYTE3(v45) + 1] ^ qword_29F350[BYTE1(v58) - 1] ^ v19 ^ *(v128 - 1);
    v125 = &qword_2A0340[(unsigned __int8)v45];
    v126 = &qword_29FB50[(unsigned __int8)v15];
    v129 = &qword_2A0340[BYTE3(v83)];
    v21 = qword_29E348[(unsigned __int8)v58];
    v56 = v20 ^ qword_2A0B50[BYTE4(v48) - 1] ^ *v131 ^ qword_2A1B48[BYTE6(v61)];
    v121 = &qword_2A1348[BYTE5(v83)];
    v22 = *v101;
    v102 = &qword_2A1348[BYTE5(v85)];
    v46 = *(v100 - 1)
        ^ *(v132 - 1)
        ^ v21
        ^ qword_29EB48[HIBYTE(HIDWORD(v83))]
        ^ qword_29FB50[BYTE2(v45) - 1]
        ^ v134[1]
        ^ qword_2A1348[BYTE5(v61)];
    v130 = &qword_2A0B50[vshrd_n_u64(vdup_n_s8(HIDWORD(v85)).n64_u64[0], 0x38u)];
    v81 = qword_2A1B48[BYTE6(v67)];
    v49 = qword_29FB50[BYTE2(v48) - 1] ^ qword_29EB48[HIBYTE(HIDWORD(v85))] ^ v22 ^ *(v137 - 1);
    LODWORD(v91) = &qword_2A1B48[BYTE6(v85)];
    v103 = &qword_2A1348[BYTE5(v91)];
    v86 = qword_2A1B48[BYTE6(v71)];
    v23 = *(v146 - 1);
    v24 = qword_29EB48[HIBYTE(HIDWORD(v93))];
    v25 = qword_2A0B50[(unsigned int)vshrd_n_u64(vdup_n_s8(HIDWORD(v61)).n64_u64[0], 0x38u) - 1] ^ v49 ^ v138[1];
    v26 = qword_29FB50[BYTE2(v61) - 1];
    HIDWORD(v23) ^= HIDWORD(v26) ^ v144[1] ^ v104[1] ^ HIDWORD(v24);
    LODWORD(v11) = *v144 ^ *v104 ^ v24;
    v27 = qword_2A0340[BYTE3(v64) + 1];
    v28 = qword_2A0B50[BYTE4(v67) - 1];
    v68 = qword_2A1348[BYTE5(v67)]
        ^ *(v141 - 1)
        ^ qword_29EB48[HIBYTE(HIDWORD(v91))]
        ^ *v18
        ^ *(v142 - 1)
        ^ v143[1]
        ^ qword_2A0B50[BYTE4(v64) - 1];
    LODWORD(v71) = v27 ^ v26 ^ v11 ^ v23 ^ v28;
    HIDWORD(v71) = HIDWORD(v27) ^ HIDWORD(v23) ^ HIDWORD(v28);
    v59 = qword_2A1B48[BYTE6(v64)] ^ v46;
    v62 = v81 ^ qword_2A1348[BYTE5(v64)] ^ v25;
    v65 = v86 ^ v68;
    v69 = *v147 ^ v71;
    v79 = qword_2A1B48[BYTE6(v95)]
        ^ *(v151 - 1)
        ^ *v149
        ^ *v107
        ^ qword_29EB48[HIBYTE(HIDWORD(v96))]
        ^ *(v153 - 1)
        ^ v155[1]
        ^ *(_QWORD *)(v97 - 8);
    v84 = *(_QWORD *)(v95 + 8)
        ^ *(v113 - 1)
        ^ *(v108 - 1)
        ^ *v110
        ^ *v112
        ^ *(_QWORD *)(v96 - 8)
        ^ qword_2A1348[BYTE5(v95)]
        ^ qword_2A1B48[BYTE6(v83)];
    v82 = qword_2A1B48[BYTE6(v91)]
        ^ *v102
        ^ v125[1]
        ^ *(v123 - 1)
        ^ *v122
        ^ *(v157 - 1)
        ^ *v158
        ^ qword_2A0B50[BYTE4(v83) - 1];
    v90 = qword_2A0B50[BYTE4(v95) - 1] ^ *(v117 - 1) ^ *v115 ^ v156[1] ^ *v116 ^ *(v119 - 1) ^ *v121 ^ *(_QWORD *)v91;
    v29 = *(v130 - 1) ^ v129[1] ^ *(v126 - 1) ^ *v162 ^ *v161 ^ *(v160 - 1) ^ qword_2A1B48[BYTE6(v93)] ^ *v103;
    v94 = v29;
  }
  while ( v43 != 14 );
  v166[2] = v74;
  v30 = v87;
  v166[3] = v76;
  v166[1] = v72;
  v166[0] = v87;
  v166[4] = v50;
  v166[12] = v84;
  v166[13] = v90;
  v166[5] = v53;
  v166[15] = v29;
  v166[6] = v56;
  v166[7] = v59;
  v166[8] = v62;
  v166[9] = v65;
  v166[10] = v69;
  v166[11] = v79;
  v166[14] = v82;
  v31 = &v166[1];
  v32 = &v163;
  while ( 1 )
  {
    v34 = *((_QWORD *)v32 + 1);
    v32 += 2;
    *(_QWORD *)v32 = v34 ^ v30;
    if ( &dest[120] == (_BYTE *)v32 )
      break;
    v33 = *v31++;
    v30 = v33;
  }
  v35 = (__int64 *)&dest[64];
  v36 = v167;
  do
  {
    v37 = *v35++;
    v36 += 8;
    *((_QWORD *)v36 - 1) = v37;
  }
  while ( v166 != v35 );
  memcpy(v164, &v167[64 - n], n);
  v38 = v163;
  v39 = v163 + 248;
  *(_DWORD *)(v163 + 128) = 0;
  v40 = v38 + 128;
  do
  {
    *(_QWORD *)(v40 + 8) = 0;
    v40 += 8;
  }
  while ( v39 != v40 );
  v41 = v163;
  *(_QWORD *)(v163 + 264) = 0;
  *(_DWORD *)(v41 + 256) = 0;
  *(_DWORD *)(v41 + 260) = (n << 11) & 0xFF0000 | (n << 27);
  return 0;
}
