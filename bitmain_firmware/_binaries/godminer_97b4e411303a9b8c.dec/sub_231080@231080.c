int __fastcall sub_231080(int a1, int *a2, int a3, int a4)
{
  int v4; // r4
  int v6; // r11
  int v7; // r1
  unsigned int v8; // r12
  unsigned int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r7
  int v12; // r3
  int v13; // r0
  unsigned int v14; // lr
  unsigned int v15; // r3
  unsigned int v16; // r0
  unsigned int v17; // r4
  int v18; // r1
  unsigned int v19; // r11
  int v20; // r1
  unsigned int v21; // r7
  int v22; // r8
  unsigned int v23; // r6
  int v24; // r1
  unsigned int v25; // r5
  int v26; // r4
  unsigned int v27; // r9
  int v28; // r5
  unsigned int v29; // r8
  unsigned int v30; // r2
  unsigned int v31; // r12
  char v32; // r5
  int v33; // r2
  int v34; // r11
  char v35; // r6
  unsigned int v36; // r4
  bool v37; // nf
  char v38; // r2
  unsigned int v39; // r6
  int v40; // r2
  unsigned int v41; // r2
  char v42; // r4
  char v43; // r6
  int v44; // r1
  char v45; // r5
  unsigned int v46; // r2
  unsigned int v47; // r5
  int v48; // r1
  int v49; // r1
  unsigned int v50; // r5
  unsigned int v51; // r8
  unsigned int v52; // r1
  int v53; // r7
  unsigned int v54; // lr
  unsigned int v55; // r9
  unsigned int v56; // r0
  int v57; // r6
  int v58; // r5
  unsigned int v59; // r1
  int v60; // r4
  unsigned __int8 *v61; // r12
  char *v62; // r5
  char *v63; // lr
  unsigned int v64; // r6
  unsigned __int8 *v65; // r5
  int v66; // lr
  int v67; // r7
  int v68; // r4
  unsigned int v69; // r7
  int v70; // r2
  int v71; // r11
  unsigned int v72; // r5
  int v73; // r8
  unsigned int v74; // r4
  unsigned int v75; // r0
  int v76; // r12
  int v77; // r4
  unsigned int v78; // r0
  int v79; // r1
  int v80; // r2
  int v81; // r7
  char v82; // r6
  int v83; // r9
  int v84; // r1
  size_t v85; // r8
  int v86; // r5
  int v87; // r12
  int v88; // r7
  size_t v89; // r8
  size_t v90; // r6
  unsigned int v91; // r0
  int v92; // r9
  unsigned int v93; // r11
  int v94; // r1
  unsigned int v95; // r4
  __int16 v96; // t1
  __int16 v97; // r2
  _WORD *v98; // r1
  __int16 v99; // r4
  unsigned int v100; // r4
  unsigned int v101; // r7
  int v102; // r8
  unsigned int v103; // r1
  unsigned int v104; // r5
  int v105; // r4
  unsigned int v106; // r0
  char v107; // r6
  int v108; // r0
  int v109; // r0
  unsigned int v110; // r1
  unsigned int v111; // r2
  unsigned int v112; // r3
  unsigned int v113; // r1
  unsigned int v114; // r6
  int v115; // r7
  int v116; // r0
  int v118; // r1
  unsigned int v119; // r9
  __int16 v120; // t1
  __int16 v121; // r2
  _WORD *v122; // r1
  __int16 v123; // r3
  int v124; // r1
  unsigned int v125; // r2
  unsigned int v126; // r6
  int v127; // r7
  unsigned int v128; // r2
  unsigned int v129; // r6
  int v130; // r3
  unsigned int v131; // r2
  unsigned int v132; // r6
  int v133; // r7
  int v134; // r0
  unsigned int v135; // r7
  unsigned int v136; // r6
  int v137; // r3
  int v138; // r5
  char *v139; // r3
  char *v140; // r7
  int v141; // t1
  unsigned int v142; // r0
  char v143; // r4
  unsigned int v144; // r0
  unsigned int v145; // r8
  int v146; // r3
  unsigned int v147; // r4
  int v148; // r3
  unsigned int v149; // r3
  unsigned int v150; // r11
  int v151; // r3
  char **v152; // r2
  int v153; // r0
  char **v154; // r2
  char **v155; // r2
  unsigned __int16 *v156; // [sp+Ch] [bp-2C8h]
  unsigned int v157; // [sp+10h] [bp-2C4h]
  int v158; // [sp+14h] [bp-2C0h]
  int v159; // [sp+18h] [bp-2BCh]
  unsigned int v160; // [sp+1Ch] [bp-2B8h]
  unsigned int v161; // [sp+20h] [bp-2B4h]
  int v162; // [sp+24h] [bp-2B0h]
  unsigned int v163; // [sp+28h] [bp-2ACh]
  unsigned __int8 *src; // [sp+2Ch] [bp-2A8h]
  void *srca; // [sp+2Ch] [bp-2A8h]
  int v166; // [sp+30h] [bp-2A4h]
  int v167; // [sp+30h] [bp-2A4h]
  unsigned int v168; // [sp+34h] [bp-2A0h]
  _WORD *v169; // [sp+34h] [bp-2A0h]
  void *v172; // [sp+40h] [bp-294h]
  char *v173; // [sp+40h] [bp-294h]
  void *v174; // [sp+40h] [bp-294h]
  unsigned int v175; // [sp+44h] [bp-290h]
  void *v176; // [sp+44h] [bp-290h]
  _WORD *v177; // [sp+44h] [bp-290h]
  _BYTE v178[320]; // [sp+48h] [bp-28Ch] BYREF
  _BYTE s[320]; // [sp+188h] [bp-14Ch] BYREF
  _DWORD v180[3]; // [sp+2C8h] [bp-Ch] BYREF

  v4 = a1 + 2240;
  v6 = a1;
  v156 = (unsigned __int16 *)(a1 + 2240);
  if ( a4 )
  {
    memset((void *)(a1 + 3456), 8, 0x90u);
    memset((void *)(v6 + 3600), 9, 0x70u);
    *(_DWORD *)(v4 + 1500) = 134744072;
    *(_DWORD *)(v4 + 1496) = 134744072;
    memset((void *)(v6 + 3712), 7, 24);
    *(_DWORD *)(v6 + 3744) = 84215045;
    *(_DWORD *)(v6 + 3748) = 84215045;
    *(_DWORD *)(v6 + 3752) = 84215045;
    *(_DWORD *)(v6 + 3756) = 84215045;
    *(_DWORD *)(v6 + 3760) = 84215045;
    *(_DWORD *)(v6 + 3764) = 84215045;
    *(_DWORD *)(v6 + 3768) = 84215045;
    *(_DWORD *)(v6 + 3772) = 84215045;
    sub_230380(v6, 0, 0x120u, 0xFu, 1u);
    sub_230380(v6, 1, 0x20u, 0xFu, 1u);
    v7 = a2[4];
    v8 = v7 + 2;
    v9 = a2[3] | (1 << (v7 & 0x1F));
    a2[3] = v9;
    if ( (unsigned int)(v7 + 2) < 8 )
    {
LABEL_7:
      a2[4] = v8;
      goto LABEL_8;
    }
    v10 = a2[1];
    v11 = a2[2];
    v12 = *a2;
    v13 = v10;
    if ( v11 > v10 )
      v13 = a2[2];
    while ( v13 != v11 )
    {
      *(_BYTE *)(v12 + v11++) = v9;
      v8 -= 8;
      v9 >>= 8;
      a2[2] = v11;
      a2[3] = v9;
      if ( v8 <= 7 )
        goto LABEL_7;
    }
    goto LABEL_294;
  }
  v83 = 0;
  *(_WORD *)(a1 + 512) = 1;
  sub_230380(a1, 0, 0x120u, 0xFu, 0);
  sub_230380(v6, 1, 0x20u, 0xFu, 0);
  v84 = 0;
  if ( !*(_BYTE *)(v6 + 3741) )
  {
    v84 = 1;
    if ( !*(_BYTE *)(v6 + 3740) )
    {
      v84 = 2;
      if ( !*(_BYTE *)(v6 + 3739) )
      {
        v84 = 3;
        if ( !*(_BYTE *)(v6 + 3738) )
        {
          v84 = 4;
          if ( !*(_BYTE *)(v6 + 3737) )
          {
            v84 = 5;
            if ( !*(_BYTE *)(v6 + 3736) )
            {
              v84 = 6;
              if ( !*(_BYTE *)(v6 + 3735) )
              {
                v84 = 7;
                if ( !*(_BYTE *)(v6 + 3734) )
                {
                  v84 = 8;
                  if ( !*(_BYTE *)(v6 + 3733) )
                  {
                    v84 = 9;
                    if ( !*(_BYTE *)(v6 + 3732) )
                    {
                      v84 = 10;
                      if ( !*(_BYTE *)(v6 + 3731) )
                      {
                        v84 = 11;
                        if ( !*(_BYTE *)(v6 + 3730) )
                        {
                          v84 = 12;
                          if ( !*(_BYTE *)(v6 + 3729) )
                          {
                            v84 = 13;
                            if ( !*(_BYTE *)(v6 + 3728) )
                            {
                              v84 = 14;
                              if ( !*(_BYTE *)(v6 + 3727) )
                              {
                                v84 = 15;
                                if ( !*(_BYTE *)(v6 + 3726) )
                                {
                                  v84 = 16;
                                  if ( !*(_BYTE *)(v6 + 3725) )
                                  {
                                    v84 = 17;
                                    if ( !*(_BYTE *)(v6 + 3724) )
                                    {
                                      v84 = 18;
                                      if ( !*(_BYTE *)(v6 + 3723) )
                                      {
                                        v84 = 19;
                                        if ( !*(_BYTE *)(v6 + 3722) )
                                        {
                                          v84 = 20;
                                          if ( !*(_BYTE *)(v6 + 3721) )
                                          {
                                            v84 = 21;
                                            if ( !*(_BYTE *)(v6 + 3720) )
                                            {
                                              v84 = 22;
                                              if ( !*(_BYTE *)(v6 + 3719) )
                                              {
                                                v84 = 23;
                                                if ( !*(_BYTE *)(v6 + 3718) )
                                                {
                                                  v84 = 24;
                                                  if ( !*(_BYTE *)(v6 + 3717) )
                                                  {
                                                    v84 = 25;
                                                    if ( !*(_BYTE *)(v6 + 3716) )
                                                    {
                                                      v84 = 26;
                                                      if ( !*(_BYTE *)(v6 + 3715) )
                                                      {
                                                        v84 = 27;
                                                        if ( !*(_BYTE *)(v6 + 3714) )
                                                        {
                                                          v84 = 28;
                                                          if ( !*(_BYTE *)(v6 + 3713) )
                                                            v84 = 29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v177 = (_WORD *)(v6 + 1152);
  v85 = 286 - v84;
  v167 = v84;
  if ( !*(_BYTE *)(v6 + 3773) )
  {
    v83 = 1;
    if ( !*(_BYTE *)(v6 + 3772) )
    {
      v83 = 2;
      if ( !*(_BYTE *)(v6 + 3771) )
      {
        v83 = 3;
        if ( !*(_BYTE *)(v6 + 3770) )
        {
          v83 = 4;
          if ( !*(_BYTE *)(v6 + 3769) )
          {
            v83 = 5;
            if ( !*(_BYTE *)(v6 + 3768) )
            {
              v83 = 6;
              if ( !*(_BYTE *)(v6 + 3767) )
              {
                v83 = 7;
                if ( !*(_BYTE *)(v6 + 3766) )
                {
                  v83 = 8;
                  if ( !*(_BYTE *)(v6 + 3765) )
                  {
                    v83 = 9;
                    if ( !*(_BYTE *)(v6 + 3764) )
                    {
                      v83 = 10;
                      if ( !*(_BYTE *)(v6 + 3763) )
                      {
                        v83 = 11;
                        if ( !*(_BYTE *)(v6 + 3762) )
                        {
                          v83 = 12;
                          if ( !*(_BYTE *)(v6 + 3761) )
                          {
                            v83 = 13;
                            if ( !*(_BYTE *)(v6 + 3760) )
                            {
                              v83 = 14;
                              if ( !*(_BYTE *)(v6 + 3759) )
                              {
                                v83 = 15;
                                if ( !*(_BYTE *)(v6 + 3758) )
                                {
                                  v83 = 16;
                                  if ( !*(_BYTE *)(v6 + 3757) )
                                  {
                                    v83 = 17;
                                    if ( !*(_BYTE *)(v6 + 3756) )
                                    {
                                      v83 = 18;
                                      if ( !*(_BYTE *)(v6 + 3755) )
                                      {
                                        v83 = 19;
                                        if ( !*(_BYTE *)(v6 + 3754) )
                                        {
                                          v83 = 20;
                                          if ( !*(_BYTE *)(v6 + 3753) )
                                          {
                                            v83 = 21;
                                            if ( !*(_BYTE *)(v6 + 3752) )
                                            {
                                              v83 = 22;
                                              if ( !*(_BYTE *)(v6 + 3751) )
                                              {
                                                v83 = 23;
                                                if ( !*(_BYTE *)(v6 + 3750) )
                                                {
                                                  v83 = 24;
                                                  if ( !*(_BYTE *)(v6 + 3749) )
                                                  {
                                                    v83 = 25;
                                                    if ( !*(_BYTE *)(v6 + 3748) )
                                                    {
                                                      v83 = 26;
                                                      if ( !*(_BYTE *)(v6 + 3747) )
                                                      {
                                                        v83 = 27;
                                                        if ( !*(_BYTE *)(v6 + 3746) )
                                                        {
                                                          v83 = 28;
                                                          if ( !*(_BYTE *)(v6 + 3745) )
                                                            v83 = 29;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v169 = (_WORD *)(v6 + 1184);
  v86 = 0;
  memset(s, 0, sizeof(s));
  memset(&v178[v85], 0, v167 + 34);
  memcpy(v178, (const void *)(v6 + 3456), v85);
  memcpy(&v178[v85], (const void *)(v6 + 3744), 30 - v83);
  memset(v177, 0, 0x26u);
  v87 = v83 + v167 - 316;
  v88 = 255;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  srca = (void *)v83;
  v174 = (void *)v87;
  do
  {
    v92 = v88;
    v88 = (unsigned __int8)v178[-v86];
    if ( v178[-v86] )
    {
      if ( v89 )
      {
        if ( v89 >= 3 )
        {
          if ( v89 >= 0xB )
          {
            ++v177[18];
            if ( v91 > 0x13E )
              return 2;
            v97 = v89 - 11;
            v98 = &s[v91];
            v99 = 18;
          }
          else
          {
            ++v177[17];
            if ( v91 > 0x13E )
              return 2;
            v97 = v89 - 3;
            v98 = &s[v91];
            v99 = 17;
          }
          v93 = v91 + 2;
          *v98 = v99 | (v97 << 8);
          if ( v88 != v92 )
            goto LABEL_166;
        }
        else
        {
          v93 = v91 + v89;
          *v177 += v89;
          if ( __CFADD__(v91, v89) || v93 > 0x140 )
            return 2;
          memset(&s[v91], 0, v89);
          v87 = (int)v174;
          if ( v88 != v92 )
          {
LABEL_166:
            if ( v90 )
            {
              if ( v90 >= 3 )
              {
                ++*v169;
                if ( v93 > 0x13E )
                  return 2;
                v100 = v93 + 2;
                *(_WORD *)&s[v93] = (((_WORD)v90 - 3) << 8) | 0x10;
              }
              else
              {
                v100 = v93 + v90;
                BYTE2(v180[0]) = v92;
                BYTE1(v180[0]) = v92;
                LOBYTE(v180[0]) = v92;
                *(_WORD *)(a1 + 2 * v92 + 1152) += v90;
                if ( __CFADD__(v93, v90) || v100 > 0x140 )
                  return 2;
                memcpy(&s[v93], v180, v90);
                v87 = (int)v174;
              }
            }
            else
            {
              v100 = v93;
            }
            ++*(_WORD *)(a1 + 2 * v88 + 1152);
            if ( v100 >> 6 > 4 )
              return 2;
            s[v100] = v88;
            v91 = v100 + 1;
            goto LABEL_136;
          }
        }
      }
      else
      {
        v93 = v91;
        if ( v88 != v92 )
          goto LABEL_166;
      }
      ++v90;
      v89 = 0;
      if ( v90 == 6 )
      {
        ++*v169;
        if ( v93 > 0x13E )
          return 2;
        *(_WORD *)&s[v93] = 784;
        v91 = v93 + 2;
LABEL_136:
        v90 = 0;
        v89 = 0;
        goto LABEL_137;
      }
      v91 = v93;
    }
    else
    {
      if ( v90 )
      {
        if ( v90 >= 3 )
        {
          ++*v169;
          if ( v91 > 0x13E )
            return 2;
          v95 = v91 + 2;
          *(_WORD *)&s[v91] = (((_WORD)v90 - 3) << 8) | 0x10;
          ++v89;
          v90 = 0;
          if ( v89 == 138 )
            goto LABEL_158;
        }
        else
        {
          v94 = v6 + 2 * v92;
          v95 = v91 + v90;
          BYTE2(v180[0]) = v92;
          v96 = *(_WORD *)(v94 + 1152);
          BYTE1(v180[0]) = v92;
          *(_WORD *)(v94 + 1152) = v96 + v90;
          LOBYTE(v180[0]) = v92;
          if ( __CFADD__(v91, v90) || v95 > 0x140 )
            return 2;
          memcpy(&s[v91], v180, v90);
          v87 = (int)v174;
          ++v89;
          v90 = 0;
          if ( v89 == 138 )
          {
LABEL_158:
            ++v177[18];
            if ( v95 > 0x13E )
              return 2;
            *(_WORD *)&s[v95] = 32530;
            v91 = v95 + 2;
            goto LABEL_136;
          }
        }
      }
      else
      {
        v95 = v91;
        ++v89;
        v90 = 0;
        if ( v89 == 138 )
          goto LABEL_158;
      }
      v91 = v95;
    }
LABEL_137:
    v6 = a1;
    --v86;
  }
  while ( v87 != v86 );
  if ( v90 )
  {
    if ( v90 < 3 )
    {
      v118 = a1 + 2 * v88;
      v119 = v90 + v91;
      BYTE2(v180[0]) = v88;
      v120 = *(_WORD *)(v118 + 1152);
      BYTE1(v180[0]) = v88;
      *(_WORD *)(v118 + 1152) = v120 + v90;
      LOBYTE(v180[0]) = v88;
      if ( !__CFADD__(v90, v91) && v119 <= 0x140 )
      {
        memcpy(&s[v91], v180, v90);
        goto LABEL_216;
      }
      return 2;
    }
    ++*v169;
    if ( v91 > 0x13E )
      return 2;
    v121 = v90 - 3;
    v122 = &s[v91];
    v123 = 16;
LABEL_214:
    *v122 = v123 | (v121 << 8);
    v119 = v91 + 2;
    v6 = a1;
  }
  else if ( v89 )
  {
    if ( v89 >= 3 )
    {
      if ( v89 >= 0xB )
      {
        ++v177[18];
        if ( v91 > 0x13E )
          return 2;
        v121 = v89 - 11;
        v122 = &s[v91];
        v123 = 18;
      }
      else
      {
        ++v177[17];
        if ( v91 > 0x13E )
          return 2;
        v121 = v89 - 3;
        v122 = &s[v91];
        v123 = 17;
      }
      goto LABEL_214;
    }
    v119 = v89 + v91;
    *v177 += v89;
    if ( __CFADD__(v89, v91) || v119 > 0x140 )
      return 2;
    memset(&s[v91], 0, v89);
    v6 = a1;
  }
  else
  {
    v119 = v91;
  }
LABEL_216:
  sub_230380(v6, 2, 0x13u, 7u, 0);
  v124 = a2[4];
  v112 = v124 + 2;
  v125 = a2[3] | (2 << (v124 & 0x1F));
  a2[3] = v125;
  if ( (unsigned int)(v124 + 2) >= 8 )
  {
    v113 = a2[1];
    v126 = a2[2];
    v127 = *a2;
    v116 = v113;
    if ( v126 > v113 )
      v116 = a2[2];
    do
    {
      if ( v116 == v126 )
        goto LABEL_301;
      *(_BYTE *)(v127 + v126++) = v125;
      v112 -= 8;
      v125 >>= 8;
      a2[2] = v126;
      a2[3] = v125;
    }
    while ( v112 > 7 );
  }
  v101 = v112 + 5;
  a2[4] = v112;
  v128 = v125 | ((29 - v167) << v112);
  a2[3] = v128;
  if ( v112 >= 3 )
  {
    v103 = a2[1];
    v129 = a2[2];
    v130 = *a2;
    v108 = v103;
    if ( v129 > v103 )
      v108 = a2[2];
    do
    {
      if ( v108 == v129 )
        goto LABEL_293;
      *(_BYTE *)(v130 + v129++) = v128;
      v101 -= 8;
      v128 >>= 8;
      a2[2] = v129;
      a2[3] = v128;
    }
    while ( v101 > 7 );
  }
  v112 = v101 + 5;
  a2[4] = v101;
  v131 = v128 | ((29 - (_DWORD)srca) << v101);
  a2[3] = v131;
  if ( v101 >= 3 )
  {
    v113 = a2[1];
    v132 = a2[2];
    v133 = *a2;
    v116 = v113;
    if ( v132 > v113 )
      v116 = a2[2];
    do
    {
      if ( v116 == v132 )
        goto LABEL_301;
      *(_BYTE *)(v133 + v132++) = v131;
      v112 -= 8;
      v131 >>= 8;
      a2[2] = v132;
      a2[3] = v131;
    }
    while ( v112 > 7 );
  }
  v134 = *(unsigned __int8 *)(v6 + 4047);
  v135 = 19;
  a2[4] = v112;
  if ( !v134 )
  {
    v135 = 18;
    if ( !*(_BYTE *)(v6 + 4033) )
    {
      v135 = 17;
      if ( !*(_BYTE *)(v6 + 4046) )
      {
        v135 = 16;
        if ( !*(_BYTE *)(v6 + 4034) )
        {
          v135 = 15;
          if ( !*(_BYTE *)(v6 + 4045) )
          {
            v135 = 14;
            if ( !*(_BYTE *)(v6 + 4035) )
            {
              v135 = 13;
              if ( !*(_BYTE *)(v6 + 4044) )
              {
                v135 = 12;
                if ( !*(_BYTE *)(v6 + 4036) )
                {
                  v135 = 11;
                  if ( !*(_BYTE *)(v6 + 4043) )
                  {
                    v135 = 10;
                    if ( !*(_BYTE *)(v6 + 4037) )
                    {
                      v135 = 9;
                      if ( !*(_BYTE *)(v6 + 4042) )
                      {
                        v135 = 8;
                        if ( !*(_BYTE *)(v6 + 4038) )
                        {
                          v135 = 7;
                          if ( !*(_BYTE *)(v6 + 4041) )
                          {
                            v135 = 6;
                            if ( !*(_BYTE *)(v6 + 4039) )
                            {
                              v135 = 5;
                              if ( !*(_BYTE *)(v6 + 4040) )
                              {
                                v135 = 4;
                                if ( !*(_BYTE *)(v6 + 4032) )
                                {
                                  v135 = 3;
                                  if ( !*(_BYTE *)(v6 + 4050) )
                                  {
                                    v135 = 2;
                                    if ( !*(_BYTE *)(v6 + 4049) )
                                    {
                                      v135 = *(unsigned __int8 *)(v6 + 4048);
                                      if ( *(_BYTE *)(v6 + 4048) )
                                        v135 = 1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v8 = v112 + 4;
  if ( v135 <= 4 )
    v135 = 4;
  v9 = v131 | ((v135 - 4) << v112);
  a2[3] = v9;
  if ( v112 > 3 )
  {
    v10 = a2[1];
    v136 = a2[2];
    v137 = *a2;
    v13 = v10;
    if ( v136 > v10 )
      v13 = a2[2];
    while ( v13 != v136 )
    {
      *(_BYTE *)(v137 + v136++) = v9;
      v8 -= 8;
      v9 >>= 8;
      a2[2] = v136;
      a2[3] = v9;
      if ( v8 <= 7 )
        goto LABEL_260;
    }
LABEL_294:
    a2[4] = v8;
    core::panicking::panic_bounds_check(v13, v10, (int)&off_2E3DC4);
  }
  v10 = a2[1];
  v136 = a2[2];
LABEL_260:
  v138 = *a2;
  v139 = (char *)&unk_2B1A32;
  a2[4] = v8;
  v140 = (char *)&unk_2B1A32 + v135;
  do
  {
    v141 = (unsigned __int8)*v139++;
    v142 = *(unsigned __int8 *)(v6 + v141 + 4032);
    if ( v142 > 7 )
      goto LABEL_317;
    v143 = v8 & 0x1F;
    v8 += 3;
    v9 |= v142 << v143;
    a2[3] = v9;
    if ( v8 >= 8 )
    {
      v13 = v10;
      if ( v136 > v10 )
        v13 = v136;
      while ( v13 != v136 )
      {
        *(_BYTE *)(v138 + v136++) = v9;
        v8 -= 8;
        v9 >>= 8;
        a2[2] = v136;
        a2[3] = v9;
        if ( v8 <= 7 )
          goto LABEL_261;
      }
      goto LABEL_294;
    }
LABEL_261:
    a2[4] = v8;
  }
  while ( v139 != v140 );
  if ( v119 )
  {
    v144 = 0;
    while ( v144 >> 6 <= 4 )
    {
      v145 = (unsigned __int8)s[v144];
      if ( v145 > 0x12 )
        core::panicking::panic((int)aAssertionFaile_26, 43, (int)&off_2E3FA4);
      v146 = *(unsigned __int8 *)(v6 + v145 + 4032);
      v147 = *(unsigned __int16 *)(v6 + 2 * v145 + 2880);
      if ( v147 >> (v146 & 0x1F) )
        goto LABEL_317;
      v9 |= v147 << v8;
      v8 += v146;
      a2[3] = v9;
      if ( v8 >= 8 )
      {
        v148 = v10;
        if ( v136 > v10 )
          v148 = v136;
        while ( v148 != v136 )
        {
          *(_BYTE *)(v138 + v136++) = v9;
          v8 -= 8;
          v9 >>= 8;
          a2[2] = v136;
          a2[3] = v9;
          if ( v8 <= 7 )
            goto LABEL_280;
        }
LABEL_298:
        a2[4] = v8;
        core::panicking::panic_bounds_check(v148, v10, (int)&off_2E3DC4);
      }
LABEL_280:
      v149 = v144 + 1;
      a2[4] = v8;
      if ( v145 <= 0xF )
      {
        ++v144;
        if ( v149 >= v119 )
          goto LABEL_8;
      }
      else
      {
        if ( v144 > 0x13E )
        {
          v144 = 320;
          v155 = &off_2E3FB4;
LABEL_315:
          core::panicking::panic_bounds_check(v144, 320, (int)v155);
        }
        v150 = (unsigned __int8)s[v149];
        v180[2] = 7;
        v180[1] = 3;
        v180[0] = 2;
        if ( v145 - 16 >= 3 )
          core::panicking::panic_bounds_check(v145 - 16, 3, (int)&off_2E3FC4);
        v151 = v180[v145 - 16];
        if ( v150 >> (v151 & 0x1F) )
          goto LABEL_317;
        v9 |= v150 << v8;
        v8 += v151;
        a2[3] = v9;
        if ( v8 >= 8 )
        {
          v6 = a1;
          v148 = v10;
          if ( v136 > v10 )
            v148 = v136;
          while ( v148 != v136 )
          {
            *(_BYTE *)(v138 + v136++) = v9;
            v8 -= 8;
            v9 >>= 8;
            a2[2] = v136;
            a2[3] = v9;
            if ( v8 <= 7 )
              goto LABEL_291;
          }
          goto LABEL_298;
        }
        v6 = a1;
LABEL_291:
        a2[4] = v8;
        v144 += 2;
        if ( v144 >= v119 )
          goto LABEL_8;
      }
    }
    v155 = &off_2E3F94;
    goto LABEL_315;
  }
LABEL_8:
  v14 = *(_DWORD *)(a3 + 0x10000);
  if ( v14 > 0x10000 )
    core::slice::index::slice_end_index_len_fail();
  v15 = 0;
  if ( v14 )
  {
    v16 = 0;
    v162 = *a2;
    v163 = a2[1];
    v17 = a2[2];
    v166 = v6 + 1728;
    src = (unsigned __int8 *)(v6 + 3456);
    v18 = 1;
    v19 = 0;
    v157 = *(_DWORD *)(a3 + 0x10000);
    while ( 1 )
    {
      if ( v18 == 1 )
      {
        v20 = *(unsigned __int8 *)(a3 + v16++);
        v18 = v20 | 0x100;
      }
      v175 = v18;
      v168 = v17;
      if ( (v18 & 1) != 0 )
      {
        if ( v16 >= v14 )
        {
          v152 = &off_2E4014;
          goto LABEL_307;
        }
        v21 = v16 + 1;
        if ( v16 + 1 >= v14 )
        {
          v152 = &off_2E3D54;
LABEL_305:
          v16 = v21;
LABEL_307:
          core::panicking::panic_bounds_check(v16, v14, (int)v152);
        }
        if ( v16 + 2 >= v14 )
        {
          v16 += 2;
          v152 = &off_2E3D64;
          goto LABEL_307;
        }
        v173 = (char *)v16;
        v49 = *(unsigned __int8 *)(a3 + v16);
        v50 = word_2B1A70[v49];
        if ( v50 >= 0x120 )
          core::panicking::panic_bounds_check(word_2B1A70[v49], 288, (int)&off_2E4024);
        v51 = byte_2B1CB4[v49];
        if ( v51 >= 0x11 )
        {
          v153 = byte_2B1CB4[v49];
          v154 = &off_2E4034;
          goto LABEL_311;
        }
        v158 = *(unsigned __int8 *)(a3 + v16 + 2);
        v161 = *(unsigned __int8 *)(a3 + v21) | (v158 << 8);
        v52 = dword_2B1C70[v51] & v49;
        v53 = v8 & 0x3F;
        v54 = *(unsigned __int16 *)(v166 + 2 * v50);
        v160 = v8 + src[v50];
        v55 = v54 >> (32 - (v8 & 0x3F));
        v56 = v52 >> (32 - (v160 & 0x3F));
        v57 = (v160 & 0x3F) - 32;
        if ( v57 >= 0 )
          v56 = v52 << v57;
        v58 = v53 - 32;
        v59 = v52 << (v160 & 0x3F);
        if ( v53 - 32 >= 0 )
          v55 = v54 << v58;
        if ( v57 >= 0 )
          v59 = 0;
        v60 = v54 << v53;
        if ( v58 >= 0 )
          v60 = 0;
        if ( v161 >= 0x200 )
        {
          v62 = v173;
          if ( (__int16)v161 <= -1 )
            core::panicking::panic_bounds_check(v158, 128, (int)&off_2E4044);
          v61 = (unsigned __int8 *)&unk_2B2234 + v158;
          v63 = (char *)&unk_2B21B4 + v158;
        }
        else
        {
          v61 = (unsigned __int8 *)&unk_2B1FB4 + v161;
          v62 = v173;
          v63 = (char *)&unk_2B1DB4 + v161;
        }
        v64 = *v61;
        if ( v64 >= 0x11 )
        {
          v153 = *v61;
          v154 = &off_2E4054;
LABEL_311:
          core::panicking::panic_bounds_check(v153, 17, (int)v154);
        }
        v172 = v62 + 3;
        v65 = (unsigned __int8 *)v63;
        v176 = (void *)(v175 >> 1);
        v66 = v55 | v19 | v56;
        v159 = v60 | v9 | v59;
        v67 = *v65;
        v68 = a1 + v67;
        v69 = *(unsigned __int16 *)(a1 + 2 * v67 + 2304);
        v70 = (v160 + v51) & 0x3F;
        v71 = v160 + v51 + *(unsigned __int8 *)(v68 + 3744);
        v72 = dword_2B1C70[v64] & v161;
        v73 = (v71 & 0x3F) - 32;
        v74 = v69 >> (32 - v70);
        v75 = v72 >> (32 - (v71 & 0x3F));
        if ( v73 >= 0 )
          v75 = v72 << v73;
        v76 = v70 - 32;
        if ( v70 - 32 >= 0 )
          v74 = v69 << v76;
        v77 = v66 | v74;
        v14 = v157;
        v27 = v77 | v75;
        v78 = v72 << (v71 & 0x3F);
        if ( v73 >= 0 )
          v78 = 0;
        v79 = v69 << v70;
        if ( v76 >= 0 )
          v79 = 0;
        v31 = v71 + v64;
        v29 = v159 | v79 | v78;
      }
      else
      {
        v21 = v14;
        if ( v16 > v14 )
          v21 = v16;
        if ( v16 >= v14 )
        {
LABEL_302:
          v152 = &off_2E4004;
          goto LABEL_305;
        }
        v22 = *(unsigned __int8 *)(a3 + v16);
        v23 = *(unsigned __int16 *)(v166 + 2 * v22);
        v24 = (v8 & 0x3F) - 32;
        v25 = v23 >> (32 - (v8 & 0x3F));
        v26 = v23 << (v8 & 0x3F);
        if ( v24 >= 0 )
          v25 = v23 << v24;
        v27 = v25 | v19;
        if ( v24 >= 0 )
          v26 = 0;
        v28 = src[v22];
        v29 = v26 | v9;
        v30 = v16 + 1;
        v31 = v8 + v28;
        if ( (v175 & 2) != 0 || v30 >= v14 )
        {
          v172 = (void *)(v16 + 1);
          v176 = (void *)(v175 >> 1);
        }
        else
        {
          if ( v21 - v16 == 1 )
            goto LABEL_302;
          v32 = v31 & 0x3F;
          v33 = *(unsigned __int8 *)(a3 + v30);
          v34 = src[v33];
          v35 = 32 - (v31 & 0x3F);
          v36 = *(unsigned __int16 *)(v166 + 2 * v33);
          v38 = (v31 & 0x3F) - 32;
          v37 = (int)((v31 & 0x3F) - 32) < 0;
          v31 += v34;
          v39 = v36 >> v35;
          if ( !v37 )
            v39 = v36 << v38;
          v40 = v36 << v32;
          if ( !v37 )
            v40 = 0;
          v27 |= v39;
          v29 |= v40;
          v41 = v16 + 2;
          if ( (v175 & 4) != 0 || v41 >= v14 )
          {
            v172 = (void *)(v16 + 2);
            v176 = (void *)(v175 >> 2);
          }
          else
          {
            if ( v21 - v16 == 2 )
              goto LABEL_302;
            v172 = (void *)(v16 + 3);
            v42 = v31 & 0x3F;
            v43 = (v31 & 0x3F) - 32;
            v37 = (int)((v31 & 0x3F) - 32) < 0;
            v44 = *(unsigned __int8 *)(a3 + v41);
            v45 = 32 - (v31 & 0x3F);
            v46 = *(unsigned __int16 *)(v166 + 2 * v44);
            v31 += src[v44];
            v176 = (void *)(v175 >> 3);
            v47 = v46 >> v45;
            v48 = v46 << v42;
            if ( !v37 )
            {
              v47 = v46 << v43;
              v48 = 0;
            }
            v27 |= v47;
            v29 |= v48;
          }
        }
      }
      if ( v168 > 0xFFFFFFF7 )
        core::slice::index::slice_index_order_fail();
      v16 = (unsigned int)v172;
      if ( v168 + 8 > v163 )
        core::slice::index::slice_end_index_len_fail();
      v17 = v168 + (v31 >> 3);
      *(_DWORD *)(v162 + v168) = v29;
      *(_DWORD *)(v162 + v168 + 4) = v27;
      v80 = 2;
      if ( v17 < v168 || v17 > v163 )
        return v80;
      v81 = v31 & 0x38;
      v18 = (int)v176;
      v82 = 32 - (v31 & 0x38);
      v8 = v31 & 7;
      v19 = v27 >> v81;
      v9 = (v29 >> v81) | (v27 << v82);
      if ( v81 - 32 >= 0 )
        v19 = 0;
      a2[2] = v17;
      if ( v81 - 32 >= 0 )
        v9 = v27 >> (v81 - 32);
      if ( (unsigned int)v172 >= v14 )
        goto LABEL_177;
    }
  }
  v19 = 0;
LABEL_177:
  v101 = 0;
  a2[3] = 0;
  a2[4] = 0;
  if ( v8 )
  {
    v102 = *a2;
    v103 = a2[1];
    v104 = a2[2];
    v101 = 0;
    v15 = 0;
    while ( 1 )
    {
      v105 = v8;
      if ( v8 >= 0x10 )
        v105 = 16;
      v106 = dword_2B1C70[v105] & v9;
      if ( v106 >> v105 )
        goto LABEL_317;
      v107 = v101;
      v101 += v105;
      v15 |= v106 << v107;
      a2[3] = v15;
      if ( v101 >= 8 )
        break;
LABEL_179:
      v8 -= v105;
      a2[4] = v101;
      v9 = (v9 >> v105) | (v19 << (32 - v105));
      if ( v105 - 32 >= 0 )
        v9 = v19 >> (v105 - 32);
      v19 >>= v105;
      if ( v105 - 32 >= 0 )
        v19 = 0;
      if ( !v8 )
        goto LABEL_193;
    }
    v108 = v103;
    if ( v104 > v103 )
      v108 = v104;
    while ( v108 != v104 )
    {
      *(_BYTE *)(v102 + v104++) = v15;
      v101 -= 8;
      v15 >>= 8;
      a2[2] = v104;
      a2[3] = v15;
      if ( v101 <= 7 )
        goto LABEL_179;
    }
LABEL_293:
    a2[4] = v101;
    core::panicking::panic_bounds_check(v108, v103, (int)&off_2E3DC4);
  }
LABEL_193:
  v109 = *(unsigned __int8 *)(a1 + 3712);
  v110 = *v156;
  if ( v110 >> (v109 & 0x1F) )
LABEL_317:
    core::panicking::panic((int)aAssertionFaile_25, 48, (int)&off_2E3DB4);
  v111 = v15 | (v110 << v101);
  v112 = v101 + v109;
  a2[3] = v111;
  if ( v101 + v109 >= 8 )
  {
    v113 = a2[1];
    v114 = a2[2];
    v115 = *a2;
    v116 = v113;
    if ( v114 > v113 )
      v116 = a2[2];
    while ( v116 != v114 )
    {
      *(_BYTE *)(v115 + v114++) = v111;
      v112 -= 8;
      v111 >>= 8;
      a2[2] = v114;
      a2[3] = v111;
      if ( v112 <= 7 )
        goto LABEL_199;
    }
LABEL_301:
    a2[4] = v112;
    core::panicking::panic_bounds_check(v116, v113, (int)&off_2E3DC4);
  }
LABEL_199:
  a2[4] = v112;
  return 1;
}
