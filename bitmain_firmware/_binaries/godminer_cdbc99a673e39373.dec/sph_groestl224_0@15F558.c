void *__fastcall sph_groestl224_0(_DWORD *a1, char *a2, size_t a3)
{
  int v3; // r4
  _BYTE *v5; // r6
  int *v6; // r7
  int *v7; // lr
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r5
  int v11; // r2
  int v12; // r3
  size_t i; // r3
  char *v14; // r0
  const void *v15; // r1
  __int64 *v16; // r5
  _BYTE *v17; // lr
  int *v18; // r4
  _DWORD *v19; // r12
  __int64 v20; // r0
  __int64 v21; // t1
  __int64 v22; // t1
  __int64 v23; // r2
  __int64 v24; // r6
  __int64 v25; // r2
  __int64 v26; // r8
  unsigned __int8 v27; // r0^1
  unsigned __int8 v28; // r1
  __int64 v29; // r8
  __int64 v30; // r6
  int v31; // r4
  __int64 v32; // r8
  int v33; // r4
  __int64 v34; // r0
  _QWORD *v35; // r12
  __int64 v36; // r6
  __int64 v37; // r8
  unsigned __int64 v38; // r4
  __int64 v39; // r10
  __int64 v40; // r6
  _QWORD *v41; // r12
  __int64 v42; // r2
  __int64 v43; // r4
  __int64 v44; // r6
  __int64 v45; // r2
  __int64 v46; // r6
  __int64 v47; // r0
  __int64 v48; // r4
  __int64 v49; // r10
  __int64 v50; // r8
  __int64 v51; // r0
  __int64 v52; // r2
  __int64 v53; // r8
  __int64 v54; // r2
  __int64 v55; // r0
  __int64 v56; // r6
  int v57; // r5
  __int64 v58; // r8
  __int64 v59; // r6
  __int64 v60; // r4
  __int64 v61; // r0
  __int64 v62; // r4
  __int64 v63; // r6
  __int64 v64; // r8
  __int64 v65; // r4
  unsigned __int64 v66; // r2
  __int64 v67; // r2
  __int64 v68; // r10
  __int64 v69; // r2
  __int64 v70; // r10
  __int64 v71; // r6
  __int64 *v72; // r3
  __int64 *v73; // r2
  __int64 v74; // r6
  int v75; // r1
  __int64 v76; // t1
  __int64 v77; // t1
  __int64 v78; // t1
  _DWORD *v79; // r12
  __int64 *v80; // r5
  void *result; // r0
  int v82; // r1
  int v83; // r2
  int v84; // r3
  __int64 v86; // [sp+8h] [bp-2ACh]
  __int64 v87; // [sp+8h] [bp-2ACh]
  unsigned __int64 v88; // [sp+8h] [bp-2ACh]
  __int64 v89; // [sp+8h] [bp-2ACh]
  __int64 v90; // [sp+10h] [bp-2A4h]
  __int64 v91; // [sp+10h] [bp-2A4h]
  __int64 v92; // [sp+10h] [bp-2A4h]
  __int64 v93; // [sp+10h] [bp-2A4h]
  __int64 v94; // [sp+10h] [bp-2A4h]
  __int64 v95; // [sp+10h] [bp-2A4h]
  __int64 v96; // [sp+10h] [bp-2A4h]
  __int64 v97; // [sp+18h] [bp-29Ch]
  __int64 v98; // [sp+18h] [bp-29Ch]
  __int64 v99; // [sp+18h] [bp-29Ch]
  __int64 v100; // [sp+18h] [bp-29Ch]
  __int64 v101; // [sp+18h] [bp-29Ch]
  __int64 v102; // [sp+18h] [bp-29Ch]
  __int64 v103; // [sp+20h] [bp-294h]
  __int64 v104; // [sp+20h] [bp-294h]
  __int64 v105; // [sp+20h] [bp-294h]
  __int64 v106; // [sp+20h] [bp-294h]
  __int64 v107; // [sp+20h] [bp-294h]
  unsigned __int8 v108; // [sp+23h] [bp-291h]
  unsigned int v109; // [sp+24h] [bp-290h]
  __int64 v110; // [sp+28h] [bp-28Ch]
  __int64 v111; // [sp+28h] [bp-28Ch]
  __int64 v112; // [sp+28h] [bp-28Ch]
  __int64 v113; // [sp+28h] [bp-28Ch]
  __int64 v114; // [sp+28h] [bp-28Ch]
  __int64 v115; // [sp+28h] [bp-28Ch]
  __int64 v116; // [sp+28h] [bp-28Ch]
  __int64 v117; // [sp+30h] [bp-284h]
  __int64 v118; // [sp+30h] [bp-284h]
  __int64 v119; // [sp+30h] [bp-284h]
  __int64 v120; // [sp+30h] [bp-284h]
  __int64 v121; // [sp+38h] [bp-27Ch]
  __int64 v122; // [sp+38h] [bp-27Ch]
  __int64 v123; // [sp+38h] [bp-27Ch]
  unsigned __int64 v124; // [sp+38h] [bp-27Ch]
  __int64 v125; // [sp+40h] [bp-274h]
  __int64 v126; // [sp+40h] [bp-274h]
  __int64 v127; // [sp+40h] [bp-274h]
  unsigned __int64 v128; // [sp+40h] [bp-274h]
  __int64 v129; // [sp+40h] [bp-274h]
  __int64 v130; // [sp+48h] [bp-26Ch]
  __int64 v131; // [sp+48h] [bp-26Ch]
  __int64 v132; // [sp+48h] [bp-26Ch]
  __int64 v133; // [sp+48h] [bp-26Ch]
  __int64 v134; // [sp+48h] [bp-26Ch]
  __int64 v135; // [sp+50h] [bp-264h]
  __int64 v136; // [sp+50h] [bp-264h]
  __int64 v137; // [sp+50h] [bp-264h]
  __int64 v138; // [sp+50h] [bp-264h]
  unsigned int v139; // [sp+54h] [bp-260h]
  __int64 v140; // [sp+58h] [bp-25Ch]
  _DWORD *v141; // [sp+58h] [bp-25Ch]
  __int64 v142; // [sp+60h] [bp-254h]
  unsigned __int8 v143; // [sp+60h] [bp-254h]
  __int64 v144; // [sp+60h] [bp-254h]
  size_t n; // [sp+68h] [bp-24Ch]
  char *src; // [sp+6Ch] [bp-248h]
  char *v147; // [sp+70h] [bp-244h]
  __int64 v148; // [sp+70h] [bp-244h]
  __int64 v149; // [sp+70h] [bp-244h]
  char *v150; // [sp+78h] [bp-23Ch]
  _QWORD *v151; // [sp+78h] [bp-23Ch]
  char *v152; // [sp+78h] [bp-23Ch]
  char *v153; // [sp+80h] [bp-234h]
  char *v154; // [sp+80h] [bp-234h]
  _QWORD *v155; // [sp+88h] [bp-22Ch]
  char *v156; // [sp+88h] [bp-22Ch]
  unsigned __int8 v157; // [sp+90h] [bp-224h]
  _QWORD *v158; // [sp+90h] [bp-224h]
  _DWORD *v159; // [sp+90h] [bp-224h]
  _QWORD *v160; // [sp+90h] [bp-224h]
  _QWORD *v161; // [sp+98h] [bp-21Ch]
  _QWORD *v162; // [sp+98h] [bp-21Ch]
  _QWORD *v163; // [sp+A0h] [bp-214h]
  char *v164; // [sp+A0h] [bp-214h]
  _QWORD *v165; // [sp+A0h] [bp-214h]
  _QWORD *v166; // [sp+A0h] [bp-214h]
  _QWORD *v167; // [sp+A8h] [bp-20Ch]
  _QWORD *v168; // [sp+B0h] [bp-204h]
  _QWORD *v169; // [sp+B0h] [bp-204h]
  char *v170; // [sp+B0h] [bp-204h]
  char *v171; // [sp+B8h] [bp-1FCh]
  char *v172; // [sp+B8h] [bp-1FCh]
  _DWORD *v173; // [sp+B8h] [bp-1FCh]
  _QWORD *v174; // [sp+B8h] [bp-1FCh]
  _QWORD *v175; // [sp+C0h] [bp-1F4h]
  _QWORD *v176; // [sp+C0h] [bp-1F4h]
  _QWORD *v177; // [sp+D0h] [bp-1E4h]
  char *v178; // [sp+D0h] [bp-1E4h]
  _QWORD *v179; // [sp+D8h] [bp-1DCh]
  char *v180; // [sp+D8h] [bp-1DCh]
  _QWORD *v181; // [sp+D8h] [bp-1DCh]
  _QWORD *v182; // [sp+E0h] [bp-1D4h]
  _QWORD *v183; // [sp+E0h] [bp-1D4h]
  char *v184; // [sp+F0h] [bp-1C4h]
  char *v185; // [sp+F0h] [bp-1C4h]
  char *v186; // [sp+F8h] [bp-1BCh]
  char *v187; // [sp+F8h] [bp-1BCh]
  char *v188; // [sp+100h] [bp-1B4h]
  char *v189; // [sp+108h] [bp-1ACh]
  char *v190; // [sp+108h] [bp-1ACh]
  char *v191; // [sp+108h] [bp-1ACh]
  char *v192; // [sp+110h] [bp-1A4h]
  char *v193; // [sp+110h] [bp-1A4h]
  char *v194; // [sp+118h] [bp-19Ch]
  char *v195; // [sp+118h] [bp-19Ch]
  _DWORD *v196; // [sp+130h] [bp-184h]
  _DWORD *v197; // [sp+138h] [bp-17Ch]
  char *v198; // [sp+140h] [bp-174h]
  char *v199; // [sp+148h] [bp-16Ch]
  char *v200; // [sp+150h] [bp-164h]
  _QWORD *v201; // [sp+150h] [bp-164h]
  _QWORD *v202; // [sp+158h] [bp-15Ch]
  _QWORD *v203; // [sp+160h] [bp-154h]
  _QWORD *v204; // [sp+160h] [bp-154h]
  _QWORD *v205; // [sp+168h] [bp-14Ch]
  _QWORD *v206; // [sp+168h] [bp-14Ch]
  _QWORD *v207; // [sp+170h] [bp-144h]
  char *v208; // [sp+170h] [bp-144h]
  char *v209; // [sp+178h] [bp-13Ch]
  char *v210; // [sp+178h] [bp-13Ch]
  char *v211; // [sp+180h] [bp-134h]
  _DWORD *v212; // [sp+188h] [bp-12Ch]
  char *v213; // [sp+188h] [bp-12Ch]
  _QWORD *v214; // [sp+190h] [bp-124h]
  _QWORD *v215; // [sp+190h] [bp-124h]
  char *v216; // [sp+194h] [bp-120h]
  char *v217; // [sp+194h] [bp-120h]
  char *v218; // [sp+198h] [bp-11Ch]
  char *v219; // [sp+198h] [bp-11Ch]
  _QWORD *v220; // [sp+1A0h] [bp-114h]
  char *v221; // [sp+1A0h] [bp-114h]
  _QWORD *v222; // [sp+1A4h] [bp-110h]
  _QWORD *v223; // [sp+1A4h] [bp-110h]
  _QWORD *v224; // [sp+1A8h] [bp-10Ch]
  char *v225; // [sp+1ACh] [bp-108h]
  char *v226; // [sp+1B0h] [bp-104h]
  char *v227; // [sp+1B0h] [bp-104h]
  char *v228; // [sp+1B4h] [bp-100h]
  char *v229; // [sp+1B4h] [bp-100h]
  _QWORD *v230; // [sp+1BCh] [bp-F8h]
  _QWORD *v231; // [sp+1BCh] [bp-F8h]
  char *v232; // [sp+1C0h] [bp-F4h]
  _QWORD *v233; // [sp+1C0h] [bp-F4h]
  _QWORD *v234; // [sp+1C4h] [bp-F0h]
  _QWORD *v235; // [sp+1C4h] [bp-F0h]
  char *v236; // [sp+1C8h] [bp-ECh]
  char *v237; // [sp+1C8h] [bp-ECh]
  char *v238; // [sp+1CCh] [bp-E8h]
  char *v239; // [sp+1D4h] [bp-E0h]
  char *v240; // [sp+1D4h] [bp-E0h]
  char *v241; // [sp+1D8h] [bp-DCh]
  _QWORD *v242; // [sp+1D8h] [bp-DCh]
  char *v243; // [sp+1DCh] [bp-D8h]
  int v245; // [sp+1E8h] [bp-CCh] BYREF
  _DWORD *v246; // [sp+1ECh] [bp-C8h]
  _BYTE v247[56]; // [sp+1F0h] [bp-C4h] BYREF
  _BYTE v248[8]; // [sp+228h] [bp-8Ch] BYREF
  __int64 v249; // [sp+230h] [bp-84h] BYREF
  __int64 v250; // [sp+238h] [bp-7Ch] BYREF
  __int64 v251; // [sp+240h] [bp-74h]
  __int64 v252; // [sp+248h] [bp-6Ch]
  __int64 v253; // [sp+250h] [bp-64h]
  __int64 v254; // [sp+258h] [bp-5Ch]
  __int64 v255; // [sp+260h] [bp-54h]
  __int64 v256; // [sp+268h] [bp-4Ch] BYREF
  __int64 v257; // [sp+270h] [bp-44h]
  __int64 v258; // [sp+278h] [bp-3Ch] BYREF
  __int64 v259; // [sp+280h] [bp-34h]
  __int64 v260; // [sp+288h] [bp-2Ch]
  __int64 v261; // [sp+290h] [bp-24h]
  __int64 v262; // [sp+298h] [bp-1Ch]
  __int64 v263; // [sp+2A0h] [bp-14h]
  __int64 v264; // [sp+2A8h] [bp-Ch]

  v3 = a1[16];
  n = a3;
  src = a2;
  if ( 64 - v3 > a3 )
  {
    result = memcpy((char *)a1 + v3, a2, a3);
    a1[16] = v3 + a3;
  }
  else
  {
    v5 = v247;
    v6 = a1 + 34;
    v7 = a1 + 18;
    v246 = a1 + 18;
    do
    {
      v8 = *v7;
      v7 += 4;
      v9 = *(v7 - 3);
      v10 = v5;
      v11 = *(v7 - 2);
      v5 += 16;
      v12 = *(v7 - 1);
      *v10 = v8;
      v10[1] = v9;
      v10[2] = v11;
      v10[3] = v12;
    }
    while ( v7 != v6 );
    if ( n )
    {
      for ( i = 64 - v3; ; i = 64 - v3 )
      {
        if ( n < i )
          i = n;
        v14 = (char *)a1 + v3;
        v3 += i;
        n -= i;
        v15 = src;
        src += i;
        memcpy(v14, v15, i);
        if ( v3 == 64 )
        {
          v16 = &v256;
          v17 = v248;
          v18 = &v245;
          v19 = a1 - 2;
          v245 = (int)&v245;
          do
          {
            v21 = *((_QWORD *)v19 + 1);
            v19 += 2;
            v20 = v21;
            v22 = *((_QWORD *)v18 + 1);
            v18 += 2;
            v16[1] = v20;
            ++v16;
            *((_QWORD *)v17 + 1) = v22 ^ v20;
            v17 += 8;
          }
          while ( a1 + 14 != v19 );
          v142 = v249;
          v86 = 0;
          v117 = v254;
          v125 = v250;
          v130 = v251;
          v103 = v252;
          v110 = v253;
          v135 = v255;
          v97 = v256;
          do
          {
            v121 = v142 ^ v86;
            v90 = v125 ^ (v86 + 16);
            v23 = v97 ^ (v86 + 112);
            v98 = v130 ^ (v86 + 32);
            v104 = v103 ^ (v86 + 48);
            v111 = v110 ^ (v86 + 64);
            v118 = (v86 + 80) ^ v117;
            v126 = v135 ^ (v86 + 96);
            v143 = ((unsigned int)v130 ^ ((_DWORD)v86 + 32)) >> 16;
            v157 = (unsigned __int16)(v130 ^ (v86 + 32)) >> 8;
            v131 = v23;
            v161 = &qword_28D9A0[BYTE6(v23)];
            v163 = &qword_28D9A0[BYTE6(v121)];
            v177 = &qword_28D1A0[BYTE5(v121)];
            v24 = qword_28B1A8[BYTE1(v90) - 1]
                ^ (v86 + 1)
                ^ qword_28A1A0[(unsigned __int8)v121]
                ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v23)))
                ^ qword_28B9A8[v143 - 1]
                ^ qword_28C198[BYTE3(v104) + 1]
                ^ qword_28C9A8[BYTE4(v111) - 1]
                ^ qword_28D1A0[BYTE5(v118)]
                ^ qword_28D9A0[BYTE6(v126)];
            v25 = qword_28A1A0[(unsigned __int8)v90];
            v136 = v24;
            v188 = (char *)&qword_28B1A8[BYTE1(v118)];
            v26 = (v86 + 17) ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v121)));
            v27 = BYTE1(v121);
            v28 = BYTE4(v121);
            HIDWORD(v24) = HIDWORD(v25) ^ HIDWORD(v26);
            v29 = qword_28B1A8[v157 - 1] ^ (unsigned int)v25 ^ (unsigned int)v26;
            HIDWORD(v25) = HIDWORD(v29) ^ HIDWORD(v24);
            v30 = qword_28B9A8[BYTE2(v104) - 1];
            v189 = (char *)&qword_28C198[BYTE3(v121)];
            v31 = BYTE2(v121);
            LODWORD(v121) = v29 ^ v30;
            HIDWORD(v121) = HIDWORD(v25) ^ HIDWORD(v30);
            v192 = (char *)&qword_28B9A8[v31];
            v194 = (char *)&qword_28B1A8[v27];
            v140 = v121
                 ^ qword_28C198[BYTE3(v111) + 1]
                 ^ qword_28C9A8[BYTE4(v118) - 1]
                 ^ qword_28D1A0[BYTE5(v126)]
                 ^ *v161;
            v158 = &qword_28A1A0[(unsigned __int8)v118];
            v175 = &qword_28A1A0[(unsigned __int8)v131];
            v122 = qword_28B1A8[BYTE1(v104) - 1]
                 ^ (v86 + 33)
                 ^ *v163
                 ^ qword_28A1A0[(unsigned __int8)v98]
                 ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v90)))
                 ^ qword_28B9A8[BYTE2(v111) - 1]
                 ^ qword_28C198[BYTE3(v118) + 1]
                 ^ qword_28C9A8[BYTE4(v126) - 1]
                 ^ qword_28D1A0[BYTE5(v131)];
            v167 = &qword_28A1A0[(unsigned __int8)v126];
            v164 = (char *)&qword_28B1A8[BYTE1(v126)];
            LODWORD(v25) = (char *)&unk_28A9A0 + 8 * HIBYTE(HIDWORD(v126));
            HIDWORD(v25) = &qword_28B9A8[BYTE2(v126)];
            LODWORD(v30) = BYTE6(v118);
            v168 = (_QWORD *)((char *)&unk_28A9A0 + 8 * HIBYTE(HIDWORD(v118)));
            v171 = (char *)&qword_28B1A8[BYTE1(v131)];
            v119 = qword_28C198[BYTE3(v126) + 1]
                 ^ (v86 + 49)
                 ^ *v177
                 ^ qword_28A1A0[(unsigned __int8)v104]
                 ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v98)))
                 ^ qword_28B1A8[BYTE1(v111) - 1]
                 ^ qword_28B9A8[BYTE2(v118) - 1]
                 ^ qword_28C9A8[BYTE4(v131) - 1]
                 ^ qword_28D9A0[BYTE6(v90)];
            v182 = &qword_28D9A0[v30];
            v178 = (char *)&qword_28B9A8[BYTE2(v90)];
            v127 = qword_28C9A8[v28 - 1] ^ qword_28A1A0[(unsigned __int8)v111] ^ (v86 + 65);
            v32 = *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v104)));
            v147 = (char *)&qword_28B9A8[BYTE2(v131)];
            v33 = v127 ^ v32;
            v34 = *((_QWORD *)v188 - 1);
            v150 = (char *)&qword_28C9A8[BYTE4(v90)];
            v35 = &qword_28D1A0[BYTE5(v90)];
            v153 = (char *)&qword_28C198[BYTE3(v90)];
            v36 = *(_QWORD *)(HIDWORD(v25) - 8);
            HIDWORD(v90) = HIDWORD(v36) ^ HIDWORD(v34) ^ HIDWORD(v127) ^ HIDWORD(v32);
            v37 = qword_28C198[BYTE3(v131) + 1];
            v38 = __PAIR64__(HIDWORD(v90), v36 ^ v34 ^ v33) ^ (unsigned int)v37;
            LODWORD(v90) = v38;
            HIDWORD(v90) = HIDWORD(v38) ^ HIDWORD(v37);
            v144 = *((_QWORD *)v192 - 1) ^ *v167;
            v132 = *v158 ^ *((_QWORD *)v189 + 1) ^ (v86 + 81);
            v91 = v90 ^ *v35 ^ qword_28D9A0[BYTE6(v98)];
            v159 = &qword_28D9A0[BYTE6(v111)];
            v39 = v132
                ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v111)))
                ^ *((_QWORD *)v164 - 1)
                ^ *((_QWORD *)v147 - 1)
                ^ *((_QWORD *)v150 - 1)
                ^ qword_28D1A0[BYTE5(v98)];
            v40 = qword_28D9A0[BYTE6(v104)];
            HIDWORD(v37) = HIDWORD(v39) ^ HIDWORD(v40);
            HIDWORD(v39) = v159[1];
            HIDWORD(v25) = (qword_28D1A0[BYTE5(v104)]
                          ^ *v168
                          ^ v144
                          ^ (unsigned __int64)(v86 + 97)
                          ^ *((_QWORD *)v171 - 1)
                          ^ *((_QWORD *)v153 + 1)
                          ^ qword_28C9A8[BYTE4(v98) - 1]) >> 32;
            LODWORD(v40) = v39 ^ v40;
            LODWORD(v39) = LODWORD(qword_28D1A0[BYTE5(v104)])
                         ^ *(_DWORD *)v168
                         ^ v144
                         ^ (v86 + 97)
                         ^ *((_DWORD *)v171 - 2)
                         ^ *((_DWORD *)v153 + 2)
                         ^ LODWORD(qword_28C9A8[BYTE4(v98) - 1])
                         ^ *v159;
            v112 = *(_QWORD *)v25
                 ^ *v175
                 ^ *((_QWORD *)v194 - 1)
                 ^ (v86 + 113)
                 ^ *((_QWORD *)v178 - 1)
                 ^ qword_28C198[BYTE3(v98) + 1]
                 ^ qword_28C9A8[BYTE4(v104) - 1]
                 ^ qword_28D1A0[BYTE5(v111)]
                 ^ *v182;
            v86 += 2;
            v142 = qword_28B9A8[BYTE2(v122) - 1]
                 ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v112)))
                 ^ qword_28B1A8[BYTE1(v140) - 1]
                 ^ qword_28A1A0[(unsigned __int8)v136]
                 ^ qword_28C198[BYTE3(v119) + 1]
                 ^ qword_28C9A8[BYTE4(v91) - 1]
                 ^ qword_28D1A0[BYTE5(v37)]
                 ^ qword_28D9A0[(unsigned __int8)((unsigned int)(HIDWORD(v25) ^ HIDWORD(v39)) >> 16)];
            v125 = qword_28A1A0[(unsigned __int8)v140]
                 ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v136)))
                 ^ qword_28B1A8[BYTE1(v122) - 1]
                 ^ qword_28B9A8[BYTE2(v119) - 1]
                 ^ qword_28C198[BYTE3(v91) + 1]
                 ^ qword_28C9A8[BYTE4(v37) - 1]
                 ^ qword_28D1A0[(unsigned __int8)((unsigned __int16)(WORD2(v25) ^ WORD2(v39)) >> 8)]
                 ^ qword_28D9A0[BYTE6(v112)];
            v130 = qword_28A1A0[(unsigned __int8)v122]
                 ^ qword_28D9A0[BYTE6(v136)]
                 ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v140)))
                 ^ qword_28B1A8[BYTE1(v119) - 1]
                 ^ qword_28B9A8[BYTE2(v91) - 1]
                 ^ qword_28C198[BYTE3(v40) + 1]
                 ^ qword_28C9A8[(unsigned __int8)(BYTE4(v25) ^ BYTE4(v39)) - 1]
                 ^ qword_28D1A0[BYTE5(v112)];
            v176 = (_QWORD *)((char *)&unk_28A9A0 + 8 * ((unsigned int)(HIDWORD(v25) ^ HIDWORD(v39)) >> 24));
            v103 = qword_28D9A0[BYTE6(v140)]
                 ^ qword_28D1A0[BYTE5(v136)]
                 ^ qword_28A1A0[(unsigned __int8)v119]
                 ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v122)))
                 ^ qword_28B1A8[BYTE1(v91) - 1]
                 ^ qword_28B9A8[BYTE2(v40) - 1]
                 ^ qword_28C198[BYTE3(v39) + 1]
                 ^ qword_28C9A8[BYTE4(v112) - 1];
            v172 = (char *)&qword_28B1A8[BYTE1(v112)];
            v151 = &qword_28D1A0[BYTE5(v122)];
            v155 = &qword_28D1A0[BYTE5(v119)];
            v41 = &qword_28D9A0[BYTE6(v119)];
            v99 = qword_28B1A8[BYTE1(v40) - 1]
                ^ qword_28C9A8[BYTE4(v136) - 1]
                ^ qword_28A1A0[(unsigned __int8)v91]
                ^ qword_28D1A0[BYTE5(v140)]
                ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v119)))
                ^ qword_28B9A8[BYTE2(v39) - 1]
                ^ qword_28C198[BYTE3(v112) + 1];
            v179 = &qword_28D1A0[BYTE5(v91)];
            LODWORD(v119) = BYTE6(v91);
            v42 = qword_28C198[BYTE3(v136) + 1]
                ^ qword_28A1A0[(unsigned __int8)v40]
                ^ qword_28C9A8[BYTE4(v140) - 1]
                ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v91)));
            v43 = qword_28B1A8[BYTE1(v136) - 1] ^ qword_28A1A0[(unsigned __int8)v112] ^ qword_28B9A8[BYTE2(v140) - 1];
            v92 = *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v37)))
                ^ qword_28B9A8[BYTE2(v136) - 1]
                ^ qword_28A1A0[(unsigned __int8)v39]
                ^ qword_28C198[BYTE3(v140) + 1];
            LODWORD(v140) = &qword_28D9A0[v119];
            v148 = qword_28C9A8[BYTE4(v119) - 1];
            v44 = qword_28B1A8[BYTE1(v39) - 1] ^ v42 ^ qword_28B9A8[BYTE2(v112) - 1];
            v110 = v99 ^ qword_28D9A0[BYTE6(v122)];
            v117 = *v151 ^ v44 ^ *v41;
            v135 = *(_QWORD *)v140 ^ *v155 ^ qword_28C9A8[BYTE4(v122) - 1] ^ v92 ^ *((_QWORD *)v172 - 1);
            v45 = qword_28D9A0[BYTE6(v37)] ^ *v179 ^ v148 ^ qword_28C198[BYTE3(v122) + 1] ^ *v176 ^ v43;
            v97 = v45;
          }
          while ( v86 != 10 );
          v46 = *v151 ^ v44 ^ *v41;
          v249 = v142;
          v87 = v258;
          v250 = v125;
          v93 = v259;
          v251 = v130;
          v120 = -1;
          v252 = v103;
          v100 = v260;
          v253 = v110;
          v254 = v46;
          v47 = v262;
          v255 = v135;
          v48 = v264;
          v256 = v45;
          v105 = v257;
          v113 = v261;
          v123 = v263;
          do
          {
            v49 = v105 ^ v120;
            LODWORD(v87) = ~(_DWORD)v87;
            HIDWORD(v87) ^= HIDWORD(v120) ^ 0x10000000;
            LODWORD(v100) = ~(_DWORD)v100;
            HIDWORD(v100) ^= HIDWORD(v120) ^ 0x30000000;
            LODWORD(v93) = ~(_DWORD)v93;
            HIDWORD(v93) ^= HIDWORD(v120) ^ 0x20000000;
            v108 = ~BYTE3(v113);
            v109 = HIDWORD(v113) ^ HIDWORD(v120) ^ 0x40000000;
            v139 = HIDWORD(v120) ^ 0x50000000 ^ HIDWORD(v47);
            v156 = (char *)&qword_28B9A8[(unsigned __int8)((unsigned int)~(_DWORD)v47 >> 16)];
            v141 = &qword_28A1A0[(unsigned __int8)v87];
            v165 = &qword_28D1A0[BYTE5(v93)];
            v180 = (char *)&qword_28C9A8[BYTE4(v87)];
            v169 = &qword_28A1A0[(unsigned __int8)v93];
            v173 = (_DWORD *)((char *)&unk_28A9A0 + 8 * ((HIDWORD(v120) ^ 0x70000000u ^ HIDWORD(v48)) >> 24));
            v183 = &qword_28D1A0[BYTE5(v100)];
            v197 = (_DWORD *)((char *)&unk_28A9A0 + 8 * HIBYTE(HIDWORD(v87)));
            v196 = &qword_28A1A0[(unsigned __int8)~(_BYTE)v113];
            v199 = (char *)&qword_28B9A8[BYTE2(v49)];
            v200 = (char *)&qword_28C198[BYTE3(v93)];
            v205 = &qword_28D9A0[(unsigned __int8)((HIDWORD(v120) ^ 0x70000000u ^ HIDWORD(v48)) >> 16)];
            v203 = &qword_28D1A0[(unsigned __int8)((unsigned __int16)(WORD2(v120) ^ WORD2(v47)) >> 8)];
            v212 = &qword_28A1A0[(unsigned __int8)~(_BYTE)v47];
            v234 = (_QWORD *)((char *)&unk_28A9A0 + 8 * HIBYTE(v139));
            v224 = &qword_28A1A0[(unsigned __int8)~(_BYTE)v48];
            v232 = (char *)&qword_28A1A0[(unsigned __int8)v49];
            v207 = (_QWORD *)((char *)&unk_28A9A0 + 8 * HIBYTE(HIDWORD(v93)));
            v214 = (_QWORD *)((char *)&unk_28A9A0 + 8 * HIBYTE(HIDWORD(v100)));
            v209 = (char *)&qword_28B1A8[(unsigned __int8)((unsigned __int16)~(_WORD)v48 >> 8)];
            v211 = (char *)&qword_28B9A8[BYTE2(v87)];
            v184 = (char *)&qword_28C198[BYTE3(v100)];
            v218 = (char *)&qword_28B9A8[BYTE2(v93)];
            v190 = (char *)&qword_28D9A0[BYTE6(v49)];
            v239 = (char *)&qword_28C9A8[(unsigned __int8)(BYTE4(v120) ^ BYTE4(v48))];
            v220 = &qword_28D1A0[(unsigned __int8)((unsigned __int16)(WORD2(v120) ^ WORD2(v48)) >> 8)];
            v222 = &qword_28D9A0[BYTE6(v87)];
            v216 = (char *)&qword_28B1A8[BYTE1(v49)];
            v226 = (char *)&qword_28B1A8[BYTE1(v87)];
            v241 = (char *)&qword_28D1A0[BYTE5(v87)];
            v236 = (char *)&qword_28B1A8[BYTE1(v93)];
            v186 = (char *)&qword_28C9A8[(unsigned __int8)(BYTE4(v113) ^ BYTE4(v120))];
            v230 = &qword_28D9A0[BYTE6(v93)];
            v238 = (char *)&qword_28B9A8[(unsigned __int8)((unsigned int)~(_DWORD)v113 >> 16)];
            v195 = (char *)&qword_28B9A8[BYTE2(v100)];
            v243 = (char *)&qword_28D9A0[BYTE6(v100)];
            v193 = (char *)&qword_28C9A8[(unsigned __int8)(BYTE4(v120) ^ BYTE4(v47))];
            v228 = (char *)&qword_28C198[(unsigned __int8)~BYTE3(v47)];
            v50 = qword_28B1A8[BYTE1(v100) - 1];
            v88 = qword_28C9A8[BYTE4(v93) - 1]
                ^ qword_28C198[BYTE3(v87) + 1]
                ^ qword_28B1A8[(unsigned __int8)~BYTE1(v47) - 1]
                ^ (0xFFFFFFFFFFFFFFLL - v120)
                ^ 0xDFFFFFFFFFFFFFFFLL
                ^ qword_28A1A0[(unsigned __int8)v100]
                ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v49)))
                ^ qword_28B9A8[(unsigned __int8)((unsigned int)~(_DWORD)v48 >> 16) - 1]
                ^ qword_28D1A0[(unsigned __int8)((unsigned __int16)(WORD2(v113) ^ WORD2(v120)) >> 8)]
                ^ qword_28D9A0[(unsigned __int8)((HIDWORD(v123) ^ HIDWORD(v120) ^ 0x60000000u) >> 16)];
            v51 = *((_QWORD *)&unk_28A9A0 + ((HIDWORD(v123) ^ HIDWORD(v120) ^ 0x60000000u) >> 24));
            LODWORD(v52) = ~(*v141 ^ v51) ^ v50;
            HIDWORD(v52) = v141[1] ^ HIDWORD(v51) ^ (HIDWORD(v120) - 0xFFFFFF) ^ HIDWORD(v50);
            v53 = qword_28B1A8[(unsigned __int8)((unsigned __int16)~(_WORD)v113 >> 8) - 1];
            v94 = *((_QWORD *)v156 - 1)
                ^ v52
                ^ qword_28C198[((unsigned int)~(_DWORD)v48 >> 24) + 1]
                ^ qword_28C9A8[BYTE4(v49) - 1];
            v54 = qword_28B9A8[(unsigned __int8)((unsigned int)~(_DWORD)v123 >> 16) - 1];
            v55 = qword_28C198[BYTE3(v49) + 1];
            v56 = *((_QWORD *)v180 - 1);
            v57 = (((0xFFFFFFFFFFFFFFLL - v120) ^ 0xEFFFFFFFFFFFFFFFLL ^ *v169) >> 32) ^ v173[1] ^ HIDWORD(v53);
            v133 = qword_28D9A0[BYTE2(v139)];
            LODWORD(v49) = ~*(_DWORD *)v169 ^ *v173 ^ v53 ^ v54 ^ v55 ^ v56;
            v58 = qword_28B1A8[(unsigned __int8)((unsigned __int16)~(_WORD)v123 >> 8) - 1];
            LODWORD(v114) = v49;
            HIDWORD(v114) = v57 ^ HIDWORD(v54) ^ HIDWORD(v55) ^ HIDWORD(v56);
            v59 = *((_QWORD *)v199 - 1);
            v60 = *((_QWORD *)v200 + 1);
            v61 = qword_28C9A8[(unsigned int)vshrd_n_u64(vdup_n_s8(BYTE4(v100)).n64_u64[0], 0x38u) - 1];
            LODWORD(v137) = ~*v196 ^ *v197 ^ v58 ^ v59 ^ v60 ^ v61;
            HIDWORD(v137) = ((unsigned __int64)(0xFFFFFFFFFFFFFFLL - v120) >> 32)
                          ^ 0xCFFFFFFF
                          ^ v196[1]
                          ^ v197[1]
                          ^ HIDWORD(v58)
                          ^ HIDWORD(v59)
                          ^ HIDWORD(v60)
                          ^ HIDWORD(v61);
            LODWORD(v101) = ~*v212;
            HIDWORD(v101) = ((unsigned __int64)(0xFFFFFFFFFFFFFFLL - v120) >> 32) ^ 0xBFFFFFFF ^ v212[1];
            v62 = *(_QWORD *)v232 ^ 0xFFFFFFFFLL;
            HIDWORD(v62) = *((_DWORD *)v232 + 1) ^ (((0xFFFFFFFFFFFFFFLL - v120) ^ 0x8FFFFFFFFFFFFFFFLL) >> 32);
            v63 = *((_QWORD *)v238 - 1)
                ^ *((_QWORD *)v236 - 1)
                ^ *v234
                ^ v62
                ^ qword_28C198[((unsigned int)~(_DWORD)v123 >> 24) + 1];
            v64 = *((_QWORD *)v239 - 1);
            v65 = qword_28D1A0[(unsigned __int8)((unsigned __int16)(WORD2(v123) ^ WORD2(v120)) >> 8)]
                ^ *((_QWORD *)v186 - 1)
                ^ *((_QWORD *)v184 + 1)
                ^ *((_QWORD *)v211 - 1)
                ^ *((_QWORD *)v209 - 1)
                ^ v101
                ^ *v207;
            v95 = qword_28D9A0[BYTE2(v109)] ^ *v165 ^ v94;
            v66 = *v220
                ^ *((_QWORD *)v193 - 1)
                ^ (0xFFFFFFFFFFFFFFLL - v120)
                ^ 0xAFFFFFFFFFFFFFFFLL
                ^ qword_28A1A0[(unsigned __int8)~(_BYTE)v123]
                ^ *v214
                ^ *((_QWORD *)v216 - 1)
                ^ *((_QWORD *)v218 - 1)
                ^ qword_28C198[v108 + 1];
            v102 = v133 ^ *v183 ^ v114;
            v115 = *v205 ^ *v203 ^ v137;
            v124 = *v230
                 ^ *((_QWORD *)v226 - 1)
                 ^ __PAIR64__(
                     (unsigned int)((*v224 ^ (0xFFFFFFFFFFFFFFLL - v120) ^ 0x9FFFFFFFFFFFFFFFLL) >> 32)
                   ^ *((_DWORD *)&unk_28A9A0 + 2 * HIBYTE(v109) + 1),
                     (unsigned int)~*(_DWORD *)v224 ^ *((_DWORD *)&unk_28A9A0 + 2 * HIBYTE(v109)))
                 ^ *((_QWORD *)v195 - 1)
                 ^ *((_QWORD *)v228 + 1)
                 ^ qword_28C9A8[(unsigned __int8)(BYTE4(v123) ^ BYTE4(v120)) - 1]
                 ^ qword_28D1A0[BYTE5(v49)];
            v106 = v64 ^ v63 ^ *(_QWORD *)v241 ^ *(_QWORD *)v243;
            v128 = v66 ^ *v222;
            v134 = *(_QWORD *)v190 ^ v65;
            v154 = (char *)&qword_28C198[((unsigned int)v64 ^ (unsigned int)v63 ^ *(_DWORD *)v241 ^ *(_DWORD *)v243) >> 24];
            v152 = (char *)&qword_28B9A8[(unsigned __int8)(((unsigned int)v66 ^ *(_DWORD *)v222) >> 16)];
            v170 = (char *)&qword_28B1A8[(unsigned __int8)((unsigned __int16)(*(_WORD *)v190 ^ v65) >> 8)];
            v162 = &qword_28D9A0[(unsigned __int8)((unsigned int)(*((_DWORD *)v190 + 1) ^ HIDWORD(v65)) >> 16)];
            v181 = &qword_28D9A0[BYTE6(v128)];
            v185 = (char *)&qword_28B1A8[BYTE1(v128)];
            v187 = (char *)&qword_28B9A8[(unsigned __int8)(((unsigned int)v64
                                                          ^ (unsigned int)v63
                                                          ^ *(_DWORD *)v241
                                                          ^ *(_DWORD *)v243) >> 16)];
            v191 = (char *)&qword_28C9A8[BYTE4(v88)];
            v201 = &qword_28D1A0[BYTE5(v128)];
            v198 = (char *)&qword_28C198[BYTE3(v88)];
            v202 = &qword_28D9A0[(unsigned __int8)(((unsigned int)(HIDWORD(v64) ^ HIDWORD(v63))
                                                  ^ *((_DWORD *)v241 + 1)
                                                  ^ *((_DWORD *)v243 + 1)) >> 16)];
            v204 = &qword_28A1A0[(unsigned __int8)v128];
            v206 = (_QWORD *)((char *)&unk_28A9A0 + 8 * HIBYTE(HIDWORD(v88)));
            v215 = (_QWORD *)((char *)&unk_28A9A0 + 8 * HIBYTE(HIDWORD(v115)));
            v223 = &qword_28A1A0[(unsigned __int8)v106];
            v235 = (_QWORD *)((char *)&unk_28A9A0 + 8 * HIBYTE(HIDWORD(v128)));
            v213 = (char *)&qword_28B1A8[BYTE1(v106)];
            v233 = &qword_28A1A0[(unsigned __int8)v95];
            v217 = (char *)&qword_28B1A8[BYTE1(v95)];
            v225 = (char *)&qword_28B1A8[BYTE1(v102)];
            v208 = (char *)&qword_28B9A8[BYTE2(v102)];
            v237 = (char *)&qword_28B1A8[BYTE1(v88)];
            v210 = (char *)&qword_28C198[BYTE3(v115)];
            v219 = (char *)&qword_28B9A8[BYTE2(v88)];
            v227 = (char *)&qword_28B9A8[BYTE2(v115)];
            v229 = (char *)&qword_28C198[BYTE3(v128)];
            v221 = (char *)&qword_28C9A8[BYTE4(v128)];
            v129 = qword_28D1A0[BYTE5(v88)];
            v242 = &qword_28D9A0[BYTE6(v115)];
            v231 = &qword_28D9A0[BYTE6(v88)];
            v240 = (char *)&qword_28C9A8[BYTE4(v106)];
            v67 = qword_28A1A0[(unsigned __int8)v88]
                ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v106)))
                ^ *((_QWORD *)v170 - 1);
            v166 = &qword_28D1A0[BYTE5(v106)];
            HIDWORD(v120) -= 0x1FFFFFF;
            v160 = &qword_28D9A0[BYTE6(v95)];
            v174 = &qword_28D1A0[BYTE5(v95)];
            v89 = qword_28C9A8[(unsigned int)vshrd_n_u64(vdup_n_s8(BYTE4(v95)).n64_u64[0], 0x38u) - 1]
                ^ *((_QWORD *)v152 - 1)
                ^ qword_28A1A0[(unsigned __int8)v102]
                ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v124)))
                ^ qword_28B1A8[BYTE1(v115) - 1]
                ^ *((_QWORD *)v154 + 1);
            v68 = qword_28C198[BYTE3(v102) + 1]
                ^ qword_28A1A0[(unsigned __int8)v115]
                ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v95)))
                ^ *((_QWORD *)v185 - 1)
                ^ *((_QWORD *)v187 - 1)
                ^ *((_QWORD *)v191 - 1);
            v107 = qword_28B9A8[BYTE2(v95) - 1]
                 ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v102)))
                 ^ qword_28A1A0[(unsigned __int8)v134]
                 ^ qword_28B1A8[BYTE1(v124) - 1]
                 ^ *((_QWORD *)v198 + 1)
                 ^ qword_28C9A8[BYTE4(v115) - 1];
            v96 = qword_28D1A0[BYTE5(v115)]
                ^ qword_28C9A8[(unsigned int)vshrd_n_u64(vdup_n_s8(HIDWORD(v102)).n64_u64[0], 0x38u) - 1]
                ^ qword_28B9A8[BYTE2(v124) - 1]
                ^ v67
                ^ qword_28C198[BYTE3(v95) + 1];
            v116 = *v201 ^ v107;
            v138 = qword_28C198[BYTE3(v134) + 1]
                 ^ *v215
                 ^ qword_28A1A0[(unsigned __int8)v124]
                 ^ *((_QWORD *)v217 - 1)
                 ^ *((_QWORD *)v219 - 1)
                 ^ *((_QWORD *)v221 - 1)
                 ^ *v166;
            v149 = qword_28D9A0[BYTE6(v102)];
            v48 = qword_28D1A0[BYTE5(v102)]
                ^ *((_QWORD *)v240 - 1)
                ^ qword_28C198[BYTE3(v124) + 1]
                ^ qword_28B9A8[BYTE2(v134) - 1]
                ^ *v235
                ^ *v233
                ^ *((_QWORD *)v237 - 1)
                ^ *v242;
            v105 = *v162 ^ v129 ^ v89;
            v87 = *v181 ^ v96;
            v93 = qword_28D9A0[BYTE6(v124)] ^ qword_28D1A0[BYTE5(v134)] ^ v68;
            v100 = *v202 ^ v116;
            v113 = *v206
                 ^ *v204
                 ^ *((_QWORD *)v213 - 1)
                 ^ *((_QWORD *)v208 - 1)
                 ^ *((_QWORD *)v210 + 1)
                 ^ qword_28C9A8[BYTE4(v134) - 1]
                 ^ qword_28D1A0[BYTE5(v124)]
                 ^ *v160;
            v47 = v138 ^ v149;
            v69 = *v231
                ^ *v174
                ^ qword_28C9A8[BYTE4(v124) - 1]
                ^ *((_QWORD *)v229 + 1)
                ^ *((_QWORD *)v227 - 1)
                ^ *((_QWORD *)&unk_28A9A0 + HIBYTE(HIDWORD(v134)))
                ^ *v223
                ^ *((_QWORD *)v225 - 1);
            v123 = v69;
          }
          while ( v120 != 0xF5FFFFFFFFFFFFFFLL );
          v70 = v105;
          v71 = v69;
          v72 = &v250;
          v73 = &v258;
          v263 = v71;
          v258 = v87;
          v257 = v105;
          v261 = v113;
          v259 = v93;
          v264 = v48;
          v74 = v142;
          v260 = v100;
          v262 = v138 ^ v149;
          v75 = v245;
          while ( 1 )
          {
            v78 = *(_QWORD *)(v75 + 8);
            v75 += 8;
            *(_QWORD *)v75 = v78 ^ v70 ^ v74;
            if ( v248 == (_BYTE *)v75 )
              break;
            v76 = *v72++;
            v74 = v76;
            v77 = *v73++;
            v70 = v77;
          }
          v3 = 0;
          ++*((_QWORD *)a1 + 17);
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
      }
    }
    v79 = v246;
    v80 = (__int64 *)v247;
    do
    {
      v79 += 4;
      result = *(void **)v80;
      v82 = *((_DWORD *)v80 + 1);
      v83 = *((_DWORD *)v80 + 2);
      v84 = *((_DWORD *)v80 + 3);
      v80 += 2;
      *(v79 - 4) = result;
      *(v79 - 3) = v82;
      *(v79 - 2) = v83;
      *(v79 - 1) = v84;
    }
    while ( v80 != &v249 );
    a1[16] = v3;
  }
  return result;
}
