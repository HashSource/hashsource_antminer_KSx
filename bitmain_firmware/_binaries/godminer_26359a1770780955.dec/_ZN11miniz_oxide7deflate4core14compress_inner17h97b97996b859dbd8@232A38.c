unsigned int __fastcall miniz_oxide::deflate::core::compress_inner(unsigned int *a1, int a2, int *a3, unsigned int a4)
{
  int v5; // r11
  _DWORD *v6; // r8
  unsigned int result; // r0
  int v8; // r7
  int v9; // r6
  _BOOL4 v10; // r1
  int v11; // r0
  bool v12; // zf
  unsigned int v13; // r1
  unsigned int v14; // r2
  _DWORD *v15; // r6
  unsigned int *v16; // r10
  unsigned int v17; // r4
  unsigned int v18; // r5
  int v19; // r7
  bool v20; // zf
  unsigned int v21; // r9
  unsigned int v22; // r6
  __int16 v23; // r7
  unsigned int v24; // r7
  size_t v25; // r5
  size_t v26; // r2
  int v27; // r3
  unsigned int v28; // r12
  unsigned int v29; // r0
  int v30; // r1
  unsigned int v31; // r5
  unsigned int v32; // r1
  int v33; // r9
  unsigned int v34; // r1
  int v35; // r4
  __int16 v36; // lr
  unsigned int v37; // r8
  unsigned int v38; // r2
  int v39; // r1
  int v40; // r11
  char *v41; // r6
  char *v42; // r5
  int v43; // r7
  __int64 v44; // r0
  unsigned int v45; // r7
  unsigned int v46; // r0
  unsigned int v47; // r2
  unsigned int v48; // r1
  unsigned int v49; // r0
  unsigned int v50; // r0
  int v51; // r0
  unsigned int v52; // r0
  unsigned int v53; // r1
  unsigned int v54; // r2
  unsigned int v55; // r1
  __int16 v56; // r7
  int v57; // r1
  bool v58; // cc
  unsigned int v59; // r1
  unsigned int v60; // r0
  unsigned __int16 v61; // r6
  unsigned int v62; // r3
  unsigned int v63; // r3
  bool v64; // cf
  unsigned __int8 *v65; // r1
  int v66; // r1
  int v67; // r1
  int v68; // r0
  unsigned int v69; // r0
  unsigned int v70; // r1
  unsigned int v71; // r0
  int v72; // r1
  unsigned int v73; // r9
  unsigned int v74; // r7
  unsigned int v75; // r4
  int v76; // lr
  int v77; // r5
  int v78; // r0
  int v79; // r1
  bool v80; // zf
  unsigned int v81; // r0
  unsigned int v82; // r12
  int v83; // r2
  unsigned int v84; // lr
  unsigned int v85; // r2
  unsigned int v86; // r5
  int v87; // r6
  unsigned __int8 *v88; // r7
  int v89; // r3
  int v90; // t1
  int v91; // r6
  int v92; // r8
  __int16 v93; // r9
  int v94; // r5
  unsigned int v95; // r1
  unsigned int v96; // r7
  int v97; // r1
  int v98; // r2
  int v99; // r3
  int v100; // r2
  unsigned int v101; // r11
  int v102; // r0
  unsigned int i; // r6
  int v104; // lr
  unsigned int v105; // r5
  int v106; // r0
  unsigned int v107; // r12
  unsigned int v108; // r1
  unsigned int v109; // r1
  unsigned int v110; // r7
  int v111; // r3
  unsigned int v112; // r9
  unsigned int v113; // r12
  int v114; // r4
  int v115; // r8
  __int16 v116; // r4
  unsigned int v117; // r3
  unsigned int v118; // r5
  unsigned int v119; // r1
  __int16 v120; // r4
  unsigned int v121; // r5
  __int16 v122; // r4
  unsigned int v123; // r5
  int v124; // r5
  int v125; // r1
  int v126; // r2
  int v127; // r7
  unsigned int v128; // lr
  unsigned int v129; // r9
  unsigned int v130; // r5
  unsigned int v131; // r2
  unsigned int v132; // r5
  bool v133; // cc
  unsigned int v134; // r2
  int v135; // r5
  int v136; // r1
  unsigned int v137; // r7
  int v138; // r2
  unsigned int v139; // r2
  int v140; // r0
  _DWORD *v141; // r1
  bool v142; // zf
  int v143; // r5
  unsigned int v144; // r0
  unsigned int v145; // r2
  int v146; // r3
  int v147; // r0
  unsigned int v148; // r0
  unsigned int v149; // r1
  unsigned int v150; // r2
  unsigned int v151; // r3
  int v152; // r2
  __int64 v153; // r0
  unsigned int *v154; // r5
  unsigned int v155; // r1
  unsigned int v156; // r2
  int v157; // r1
  int v158; // r2
  unsigned int v159; // r1
  int v160; // r0
  unsigned int v161; // r1
  char **v162; // r2
  unsigned int v163; // [sp+4h] [bp-70h]
  unsigned int v164; // [sp+8h] [bp-6Ch]
  int v165; // [sp+Ch] [bp-68h]
  unsigned int v166; // [sp+10h] [bp-64h]
  unsigned int v167; // [sp+18h] [bp-5Ch]
  _DWORD *v168; // [sp+1Ch] [bp-58h]
  unsigned int v169; // [sp+20h] [bp-54h]
  unsigned int *v170; // [sp+24h] [bp-50h]
  unsigned __int8 v171; // [sp+28h] [bp-4Ch]
  unsigned int v172; // [sp+2Ch] [bp-48h]
  int v173; // [sp+34h] [bp-40h]
  int v174; // [sp+3Ch] [bp-38h]
  unsigned int v175; // [sp+3Ch] [bp-38h]
  unsigned int v176; // [sp+40h] [bp-34h]
  unsigned int v177; // [sp+40h] [bp-34h]
  unsigned int v178; // [sp+40h] [bp-34h]
  _DWORD *v179; // [sp+44h] [bp-30h]
  unsigned int v180; // [sp+48h] [bp-2Ch]
  unsigned int v181; // [sp+48h] [bp-2Ch]
  unsigned int v182; // [sp+48h] [bp-2Ch]
  unsigned int v183; // [sp+48h] [bp-2Ch]
  _DWORD *v185; // [sp+50h] [bp-24h]
  unsigned int v186; // [sp+54h] [bp-20h]
  int v187; // [sp+54h] [bp-20h]
  int v188; // [sp+54h] [bp-20h]
  int v189; // [sp+58h] [bp-1Ch]
  unsigned int v190; // [sp+5Ch] [bp-18h]
  unsigned int v191; // [sp+5Ch] [bp-18h]
  int v192; // [sp+5Ch] [bp-18h]
  unsigned int v193; // [sp+60h] [bp-14h]
  int v194; // [sp+64h] [bp-10h]
  unsigned int v195; // [sp+68h] [bp-Ch] BYREF
  unsigned int v196; // [sp+6Ch] [bp-8h]
  unsigned int v197; // [sp+70h] [bp-4h]

  v5 = a2 + 65552;
  v6 = (_DWORD *)a2;
  result = 0;
  v8 = *(_DWORD *)(a2 + 65600);
  v9 = *(unsigned __int8 *)(a2 + 65605);
  v10 = (unsigned __int8)a4 != 4;
  *(_BYTE *)(v5 + 53) = a4;
  if ( !v8 )
    a4 = v9 - 4;
  *(_DWORD *)(v5 + 28) = 0;
  if ( !v8 )
    a4 = __clz(a4);
  *(_DWORD *)(v5 + 32) = 0;
  if ( v8 || (v10 & (a4 >> 5)) != 0 )
  {
    *a1 = 0;
    a1[1] = -2;
    *(_DWORD *)(v5 + 48) = -2;
    a1[2] = 0;
    return result;
  }
  v11 = *(_DWORD *)(v5 + 20);
  v12 = v11 == 0;
  if ( !v11 )
    v12 = *(_BYTE *)(v5 + 55) == 0;
  if ( !v12 )
  {
    sub_2328A0(&v195, a3, v5);
    result = v195;
    v13 = v196;
    v14 = v197;
    *(_DWORD *)(v5 + 48) = v196;
    *a1 = result;
    a1[1] = v13;
    a1[2] = v14;
    return result;
  }
  v15 = v6 + 16386;
  v16 = v6 + 0x4000;
  v170 = a1;
  v194 = v5;
  v185 = v6 + 16386;
  v179 = v6;
  if ( (*(_DWORD *)v5 & ((unsigned int)&loc_B4FFC + 3)) != 0x4001 )
  {
    v189 = *a3;
    if ( !*a3 )
      goto LABEL_238;
    v73 = 0;
    v175 = *(_DWORD *)(v5 + 8);
    v171 = *(_BYTE *)(v5 + 52);
    v74 = *(_DWORD *)(v5 + 12);
    v75 = *(_DWORD *)(v5 + 72);
    v76 = *(_DWORD *)(v5 + 76);
    v168 = v6 + 16403;
    v193 = a3[1];
    while ( 1 )
    {
      if ( v193 <= v73 )
      {
        v80 = *(_BYTE *)(v5 + 53) == 0;
        if ( *(_BYTE *)(v5 + 53) )
          v80 = v75 == 0;
        if ( v80 )
          goto LABEL_240;
      }
      v81 = 258 - v75;
      if ( v193 - v73 < 258 - v75 )
        v81 = v193 - v73;
      if ( *(_DWORD *)(v5 + 80) + v75 >= 2 && v81 )
      {
        v82 = v81 + v73;
        if ( __CFADD__(v81, v73) )
          core::slice::index::slice_index_order_fail();
        if ( v82 > v193 )
LABEL_294:
          core::slice::index::slice_end_index_len_fail();
        v83 = v76;
        v84 = v74;
        v187 = v83;
        v85 = v75 + v83;
        v86 = v85 - 2;
        v181 = v81 + v75;
        v87 = *(unsigned __int8 *)(v16[25] + 0x20000 + (((_WORD)v85 - 1) & 0x7FFF))
            ^ (32 * *(unsigned __int8 *)(v16[25] + 0x20000 + (((_WORD)v85 - 2) & 0x7FFF)));
        v88 = (unsigned __int8 *)(v189 + v73);
        do
        {
          v85 &= 0x7FFFu;
          v90 = *v88++;
          v89 = v90;
          *(_BYTE *)(v16[25] + v85 + 0x20000) = v90;
          if ( v85 <= 0x100 )
            *(_BYTE *)(v16[25] + v85 + 163840) = v89;
          v87 = (32 * v87) & 0x7FE0 ^ v89;
          --v81;
          LOWORD(v85) = v85 + 1;
          *(_WORD *)(v16[25] + 2 * (v86 & 0x7FFF)) = *(_WORD *)(v16[25] + 2 * v87 + 0x10000);
          *(_WORD *)(v16[25] + 2 * v87 + 0x10000) = v86++;
        }
        while ( v81 );
        v73 = v82;
        v75 = v181;
        v99 = v187;
        v74 = v84;
      }
      else
      {
        if ( __CFADD__(v81, v73) )
          core::slice::index::slice_index_order_fail();
        if ( v81 + v73 > v193 )
          core::slice::index::slice_end_index_len_fail();
        if ( v81 )
        {
          v182 = v81 + v73;
          v91 = 0;
          v92 = v189 + v73;
          v93 = v75 + v76 - 2;
          v177 = v74;
          do
          {
            v94 = *(unsigned __int8 *)(v92 + v91);
            v95 = ((_WORD)v75 + (_WORD)v76 + (_WORD)v91) & 0x7FFF;
            *(_BYTE *)(v16[25] + v95 + 0x20000) = v94;
            if ( v95 <= 0x100 )
              *(_BYTE *)(v16[25] + v95 + 163840) = v94;
            if ( v75 + v91 + *(_DWORD *)(v5 + 80) + 1 > 2 )
            {
              v96 = v16[25];
              v97 = (v93 + (_WORD)v91) & 0x7FFF;
              v5 = v194;
              v98 = v94
                  ^ (32
                   * *(unsigned __int8 *)(v96 + 0x20000 + (((_WORD)v75 + (_WORD)v76 + 0x7FFF + (_WORD)v91) & 0x7FFF)))
                  ^ ((*(_BYTE *)(v96 + 0x20000 + v97) & 0x1F) << 10);
              *(_WORD *)(v96 + 2 * v97) = *(_WORD *)(v96 + 2 * v98 + 0x10000);
              *(_WORD *)(v16[25] + 2 * v98 + 0x10000) = v93 + v91;
            }
            ++v91;
          }
          while ( v81 != v91 );
          v99 = v76;
          v75 += v91;
          v74 = v177;
          v6 = v179;
          v73 = v182;
        }
        else
        {
          v99 = v76;
        }
      }
      v100 = v5;
      v101 = *(_DWORD *)(v5 + 80);
      v102 = *(unsigned __int8 *)(v100 + 53);
      if ( 0x8000 - v75 < v101 )
        v101 = 0x8000 - v75;
      *(_DWORD *)(v100 + 80) = v101;
      if ( !v102 && v75 >> 1 < 0x81 )
      {
        v5 = v194;
        v76 = v99;
        v15 = v185;
LABEL_240:
        *(_BYTE *)(v5 + 52) = v171;
        *(_DWORD *)(v5 + 72) = v75;
        *(_DWORD *)(v5 + 76) = v76;
        *(_DWORD *)(v5 + 28) = v73;
        *(_DWORD *)(v5 + 8) = v175;
        *(_DWORD *)(v5 + 12) = v74;
LABEL_241:
        v154 = v170;
        goto LABEL_247;
      }
      i = v74;
      v104 = v99;
      if ( !v74 )
        i = 2;
      v105 = *(_DWORD *)v194;
      v106 = v99 & 0x7FFF;
      if ( (*(_DWORD *)v194 & 0x90000) != 0 )
      {
        v107 = 0;
        if ( !v101 )
          goto LABEL_191;
        v5 = v194;
        if ( (v105 & 0x80000) == 0 )
        {
          if ( __CFADD__(v75, v106) )
            core::slice::index::slice_index_order_fail();
          if ( v75 + v106 > 0x8102 )
            goto LABEL_298;
          if ( v75 )
          {
            for ( i = 0; i != v75; ++i )
            {
              if ( *(unsigned __int8 *)(v16[25] + 0x20000 + v106 + i) != *(unsigned __int8 *)(v16[25]
                                                                                            + 0x20000
                                                                                            + (((_WORD)v99 - 1) & 0x7FFF)) )
                goto LABEL_193;
            }
            i = v75;
          }
          else
          {
            i = 0;
          }
LABEL_193:
          v107 = i > 2;
          if ( i < 3 )
            i = 0;
        }
      }
      else
      {
        v108 = 258;
        v107 = 0;
        if ( v75 < 0x102 )
          v108 = v75;
        if ( v108 <= i )
        {
LABEL_191:
          v5 = v194;
          goto LABEL_195;
        }
        v166 = v108;
        v109 = v106 + i;
        v178 = v74;
        v110 = v106 + i - 1;
        if ( v110 > 0x8101 )
          core::panicking::panic_bounds_check(v106 + i - 1, 33026, (int)&off_2E2D54);
        if ( v109 >= 0x8102 )
          core::panicking::panic_bounds_check(v106 + i, 33026, (int)&off_2E2D64);
        v111 = v168[i > 0x1F] - 1;
        if ( v168[i > 0x1F] == 1 )
        {
          v5 = v194;
          v74 = v178;
        }
        else
        {
          v167 = v73;
          v112 = v16[25];
          v113 = v112 + 0x20000;
          v183 = v75;
          v114 = v106;
          v165 = *(unsigned __int16 *)(v112 + 0x20000 + v106);
          v192 = *(unsigned __int8 *)(v112 + 0x20000 + v110) | (*(unsigned __int8 *)(v112 + 0x20000 + v109) << 8);
          v164 = v112 + 131074;
          v173 = v112 + 131074 + v106;
          v169 = 0;
          do
          {
            v115 = 1 - v111;
            while ( 1 )
            {
              v116 = *(_WORD *)(v112 + 2 * v114);
              if ( !v116 )
                goto LABEL_234;
              v117 = (unsigned __int16)(v104 - v116);
              if ( v117 > v101 )
                goto LABEL_234;
              v114 = v116 & 0x7FFF;
              v118 = v114 + i;
              v119 = v114 + i - 1;
              if ( v119 > 0x8101 )
                goto LABEL_267;
              if ( v118 >= 0x8102 )
                goto LABEL_268;
              if ( (*(unsigned __int8 *)(v113 + v119) | (*(unsigned __int8 *)(v113 + v118) << 8)) == v192 )
                break;
              v120 = *(_WORD *)(v112 + 2 * v114);
              if ( !v120 )
                goto LABEL_234;
              v117 = (unsigned __int16)(v104 - v120);
              if ( v117 > v101 )
                goto LABEL_234;
              v114 = v120 & 0x7FFF;
              v121 = v114 + i;
              v119 = v114 + i - 1;
              if ( v119 > 0x8101 )
                goto LABEL_267;
              if ( v121 > 0x8101 )
                goto LABEL_268;
              if ( (*(unsigned __int8 *)(v113 + v119) | (*(unsigned __int8 *)(v113 + v121) << 8)) == v192 )
                break;
              v122 = *(_WORD *)(v112 + 2 * v114);
              if ( !v122 )
                goto LABEL_234;
              v117 = (unsigned __int16)(v104 - v122);
              if ( v117 > v101 )
                goto LABEL_234;
              v114 = v122 & 0x7FFF;
              v123 = v114 + i;
              v119 = v114 + i - 1;
              if ( v119 > 0x8101 )
                goto LABEL_267;
              if ( v123 > 0x8101 )
LABEL_268:
                core::panicking::panic_bounds_check(33026, 33026, (int)&off_2E2D64);
              if ( (*(unsigned __int8 *)(v113 + v119) | (*(unsigned __int8 *)(v113 + v123) << 8)) == v192 )
                break;
              if ( ++v115 == 1 )
                goto LABEL_234;
            }
            if ( !v117 )
              break;
            if ( *(unsigned __int16 *)(v113 + v114) != v165 )
              goto LABEL_189;
            v124 = 0;
            v163 = v112;
            v172 = v164 + v114;
            v188 = v104;
            do
            {
              v104 = v188;
              if ( v124 == 256 )
              {
                i = v166;
LABEL_233:
                v169 = v117;
                goto LABEL_234;
              }
              if ( ((33024 - v106) & 0xFFFFFFF8) == v124 )
                goto LABEL_298;
              v125 = v124 + 8;
              if ( ((33024 - v114) & 0xFFFFFFF8) + 8 == v124 + 8 )
                goto LABEL_298;
              v126 = v172 + v124;
              v127 = *(_DWORD *)(v173 + v124 + 4);
              v128 = *(_DWORD *)(v172 + v124) ^ *(_DWORD *)(v173 + v124);
              v124 += 8;
              v129 = *(_DWORD *)(v126 + 4) ^ v127;
            }
            while ( !(v128 | v129) );
            v130 = __rbit32(v128);
            v12 = v128 == 0;
            v131 = __clz(__rbit32(v129)) + 32;
            v104 = v188;
            if ( !v12 )
              v131 = __clz(v130);
            v112 = v163;
            v132 = v125 + (v131 >> 3) - 6;
            if ( v132 > i )
            {
              v133 = v166 > v132;
              if ( v166 < v132 )
                v132 = v166;
              if ( !v133 )
              {
                i = v132;
                goto LABEL_233;
              }
              v119 = v132 + v106 - 1;
              if ( v119 < 0x8102 )
              {
                i = v132;
                v169 = v117;
                v192 = *(unsigned __int8 *)(v113 + v119) | (*(unsigned __int8 *)(v113 + v132 + v106) << 8);
                goto LABEL_189;
              }
LABEL_267:
              core::panicking::panic_bounds_check(v119, 33026, (int)&off_2E2D54);
            }
LABEL_189:
            v111 = -v115;
          }
          while ( v115 );
LABEL_234:
          v5 = v194;
          v75 = v183;
          v74 = v178;
          v73 = v167;
          v105 = *(_DWORD *)v194;
          if ( i == 3 )
          {
            v107 = v169;
            v6 = v179;
            if ( v169 >> 13 )
            {
LABEL_196:
              if ( !v74 )
                goto LABEL_212;
              v135 = v104;
              v136 = v16[18];
              goto LABEL_218;
            }
          }
          else
          {
            v6 = v179;
            v107 = v169;
          }
        }
      }
LABEL_195:
      v134 = i;
      if ( (i < 6) & (unsigned __int8)(v105 >> 17) | (v106 == v107) )
        goto LABEL_196;
      if ( !v74 )
      {
        if ( !v107 )
        {
LABEL_212:
          v59 = *v16;
          v145 = v16[18];
          v64 = *v16 >= 0x10000;
          v146 = *(unsigned __int8 *)(v16[25] + v106 + 0x20000);
          ++v16[2];
          if ( v64 )
          {
LABEL_271:
            v46 = v59;
            v162 = &off_2E2FE4;
            goto LABEL_279;
          }
          *((_BYTE *)v6 + v59) = v146;
          v46 = v16[1];
          ++*v16;
          if ( v46 >= 0x10000 )
            goto LABEL_269;
          *((_BYTE *)v6 + v46) >>= 1;
          v147 = v16[3] - 1;
          v16[3] = v147;
          if ( !v147 )
          {
            v148 = *v16;
            v16[3] = 8;
            *v16 = v148 + 1;
            v16[1] = v148;
          }
          v74 = 0;
          ++*(_WORD *)(v145 + 2 * v146);
          goto LABEL_222;
        }
        v142 = (v105 & 0x10000) == 0;
        if ( (v105 & 0x10000) == 0 )
          v142 = *((_BYTE *)v16 + 70) == 0;
        if ( v142 && i < 0x80 )
          goto LABEL_221;
        v140 = v16[18];
        v141 = v6;
LABEL_211:
        v143 = v104;
        sub_232678(v140, v141, v134, v107);
        v104 = v143;
        v74 = 0;
        v144 = i;
LABEL_223:
        v15 = v185;
        goto LABEL_224;
      }
      v136 = v16[18];
      if ( i > v74 )
      {
        v137 = *v16;
        v64 = *v16 >= 0x10000;
        ++v16[2];
        if ( v64 )
        {
          v162 = &off_2E2FE4;
LABEL_277:
          v46 = v137;
          goto LABEL_279;
        }
        *((_BYTE *)v6 + v137) = v171;
        v137 = v16[1];
        ++*v16;
        if ( v137 >= 0x10000 )
        {
          v162 = &off_2E2FF4;
          goto LABEL_277;
        }
        *((_BYTE *)v6 + v137) >>= 1;
        v138 = v16[3] - 1;
        v16[3] = v138;
        if ( !v138 )
        {
          v139 = *v16;
          v16[3] = 8;
          *v16 = v139 + 1;
          v16[1] = v139;
        }
        ++*(_WORD *)(v136 + 2 * v171);
        if ( i >= 0x80 )
        {
          v140 = v16[18];
          v141 = v6;
          v134 = i;
          goto LABEL_211;
        }
LABEL_221:
        v74 = i;
        v175 = v107;
        v171 = *(_BYTE *)(v16[25] + v106 + 0x20000);
LABEL_222:
        v144 = 1;
        goto LABEL_223;
      }
      v135 = v104;
LABEL_218:
      sub_232678(v136, v6, v74, v175);
      v144 = v74 - 1;
      v74 = 0;
      v15 = v185;
      v104 = v135;
LABEL_224:
      if ( v75 < v144 )
        core::panicking::panic((int)aAssertionFaile_30, 47, (int)&off_2E3104);
      v149 = *v16;
      v150 = *(_DWORD *)(v5 + 80) + v144;
      v151 = v16[2];
      if ( v150 >= 0x8000 )
        v150 = 0x8000;
      *(_DWORD *)(v5 + 80) = v150;
      v152 = 0;
      if ( v151 > 0x7C00 )
        v152 = (v151 <= (115 * v149) >> 7) | ((unsigned __int8)(*(_BYTE *)(v5 + 2) & 8) >> 3);
      v76 = v144 + v104;
      v75 -= v144;
      if ( v149 > 0xFFF8 || v152 )
      {
        *(_DWORD *)(v5 + 72) = v75;
        *(_DWORD *)(v5 + 76) = v76;
        v77 = v76;
        *(_DWORD *)(v5 + 28) = v73;
        v78 = sub_231C4C(v6, a3, 0);
        v76 = v77;
        if ( v78 )
          v79 = -1;
        if ( v79 )
        {
          v154 = v170;
          *(_DWORD *)(v5 + 8) = v175;
          *(_DWORD *)(v5 + 12) = v74;
          *(_BYTE *)(v5 + 52) = v171;
          if ( v79 > 0 )
            goto LABEL_247;
          v17 = *(_DWORD *)(v5 + 28);
          goto LABEL_264;
        }
      }
    }
  }
  v189 = *a3;
  if ( !*a3 )
  {
LABEL_238:
    LODWORD(v153) = 0;
    v154 = a1;
    goto LABEL_251;
  }
  v17 = 0;
  v18 = v6[16406];
  v190 = v6[16407];
  v19 = v190 & 0x7FFF;
  v193 = a3[1];
  while ( 1 )
  {
LABEL_15:
    if ( v193 <= v17 )
    {
      v20 = v18 == 0;
      if ( v18 )
        v20 = *(_BYTE *)(v194 + 53) == 0;
      if ( v20 )
        goto LABEL_266;
    }
    v21 = 4096 - v18;
    v174 = v19;
    v180 = v18;
    if ( v193 - v17 < 4096 - v18 )
      v21 = v193 - v17;
    v176 = v21;
    if ( v21 )
    {
      v22 = v17;
      v23 = v18 + v190;
      while ( 1 )
      {
        v24 = v23 & 0x7FFF;
        v25 = 0x8000 - v24;
        if ( 0x8000 - v24 >= v21 )
          v25 = v21;
        if ( v25 + v24 >= 0x8103 )
          break;
        if ( __CFADD__(v25, v22) )
          goto LABEL_288;
        if ( v25 + v22 > v193 )
          goto LABEL_294;
        memcpy((void *)(v16[25] + v24 + 0x20000), (const void *)(v189 + v22), v25);
        if ( v24 <= 0x100 )
        {
          v26 = 257 - v24;
          v27 = v24 | 0x8000;
          if ( v25 < 257 - v24 )
            v26 = v25;
          if ( v26 + v27 >= 0x8103 )
            break;
          if ( __CFADD__(v26, v22) )
LABEL_288:
            core::slice::index::slice_index_order_fail();
          if ( v26 + v22 > v193 )
            goto LABEL_294;
          memcpy((void *)(v16[25] + v27 + 0x20000), (const void *)(v189 + v22), v26);
        }
        v21 -= v25;
        v23 = v25 + v24;
        v17 = v25 + v22;
        v22 += v25;
        if ( !v21 )
          goto LABEL_36;
      }
LABEL_298:
      core::slice::index::slice_end_index_len_fail();
    }
LABEL_36:
    v15 = v185;
    v28 = v176 + v180;
    v29 = v16[24];
    v30 = *(unsigned __int8 *)(v194 + 53);
    if ( 0x8000 - (v176 + v180) < v29 )
      v29 = 0x8000 - (v176 + v180);
    v16[24] = v29;
    if ( !v30 && v28 < 0x1000 )
    {
      v18 = v176 + v180;
      v6 = v179;
LABEL_266:
      v5 = v194;
      v16[22] = v18;
      v16[23] = v190;
      *(_DWORD *)(v194 + 28) = v17;
      goto LABEL_241;
    }
    v19 = v174;
    v31 = v190;
    v186 = v17;
    if ( v28 >= 4 )
      break;
LABEL_41:
    v6 = v179;
    v190 = v31;
    v18 = 0;
    if ( v28 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v67 = *(unsigned __int8 *)(v16[25] + v19 + 0x20000);
          v46 = *v16;
          ++*v15;
          if ( v46 >= 0x10000 )
            goto LABEL_270;
          *((_BYTE *)v179 + v46) = v67;
          v46 = v16[1];
          ++*v16;
          if ( v46 >= 0x10000 )
            goto LABEL_269;
          *((_BYTE *)v179 + v46) >>= 1;
          v68 = v15[1] - 1;
          v15[1] = v68;
          if ( !v68 )
          {
            v69 = *v16;
            v15[1] = 8;
            *v16 = v69 + 1;
            v16[1] = v69;
          }
          --v28;
          ++*(_WORD *)(v15[16] + 2 * v67);
          v70 = *v16;
          v71 = v16[24] + 1;
          if ( v71 >= 0x8000 )
            v71 = 0x8000;
          v16[24] = v71;
          if ( v70 > 0xFFF8 )
            break;
          ++v190;
          v19 = ((_WORD)v19 + 1) & 0x7FFF;
          if ( !v28 )
            goto LABEL_15;
        }
        v16[23] = v190 + 1;
        v16[22] = v28;
        if ( sub_231C4C(v179, a3, 0) )
          break;
        v58 = v72 <= 0;
        if ( v72 )
          goto LABEL_242;
        v28 = v16[22];
        v190 = v16[23];
        v19 = ((_WORD)v19 + 1) & 0x7FFF;
        if ( !v28 )
          goto LABEL_15;
      }
      v5 = v194;
      v154 = v170;
      *(_DWORD *)(v194 + 28) = v17;
      *(_DWORD *)(v194 + 48) = -1;
LABEL_264:
      result = *(_DWORD *)(v5 + 32);
      v161 = *(_DWORD *)(v5 + 48);
      *v154 = v17;
      v154[1] = v161;
      v154[2] = result;
      return result;
    }
  }
  while ( 1 )
  {
    v32 = v16[25];
    v191 = v31;
    v33 = *(_DWORD *)(v32 + (v19 & 0x7FFF) + 0x20000);
    v34 = v32 + 2 * (v33 & 0xFFF ^ ((v33 & 0xFFFFFFu) >> 17));
    v35 = *(unsigned __int16 *)(v34 + 0x10000);
    *(_WORD *)(v34 + 0x10000) = v31;
    v36 = v31 - v35;
    v37 = (unsigned __int16)(v31 - v35);
    if ( v16[24] < v37 )
    {
      v17 = v186;
      goto LABEL_44;
    }
    v38 = v16[25];
    v39 = v35 & 0x7FFF;
    if ( (v33 & 0xFFFFFF) != (*(_DWORD *)(v38 + v39 + 0x20000) & 0xFFFFFF) )
    {
      v46 = *v16;
      if ( *v16 < 0x10000 )
      {
        v6 = v179;
        *((_BYTE *)v179 + v46) = v33;
        v46 = v16[1];
        ++*v16;
        if ( v46 < 0x10000 )
        {
          v15 = v185;
          LOWORD(v40) = v19;
          v17 = v186;
          goto LABEL_64;
        }
        goto LABEL_269;
      }
      goto LABEL_270;
    }
    v40 = v19;
    v41 = (char *)&stru_20000.st_name + v38 + v19 + 3;
    v42 = (char *)&stru_20000.st_name + v38 + v39 + 3;
    v43 = 0;
    while ( 1 )
    {
      if ( (unsigned int)(v40 + v43 + 3) > 0xFFFFFFF7 )
        core::slice::index::slice_index_order_fail();
      if ( (unsigned int)(v40 + v43 + 11) > 0x8102 )
        goto LABEL_298;
      v44 = *(_QWORD *)&v42[v43] ^ *(_QWORD *)&v41[v43];
      if ( v44 )
        break;
      v43 += 8;
      if ( v43 == 256 )
      {
        v45 = 258;
        v15 = v185;
        v12 = v35 == (unsigned __int16)v191;
        v17 = v186;
        if ( !v12 )
          goto LABEL_74;
LABEL_62:
        v46 = *v16;
        if ( *v16 < 0x10000 )
        {
          v6 = v179;
          *((_BYTE *)v179 + v46) = v33;
          v46 = v16[1];
          ++*v16;
          if ( v46 < 0x10000 )
          {
LABEL_64:
            v45 = 1;
            *((_BYTE *)v6 + v46) >>= 1;
            v50 = (unsigned __int8)v33;
            goto LABEL_65;
          }
LABEL_269:
          v162 = &off_2E2FF4;
LABEL_279:
          core::panicking::panic_bounds_check(v46, 0x10000, (int)v162);
        }
LABEL_270:
        v162 = &off_2E2FE4;
        goto LABEL_279;
      }
    }
    v47 = __rbit32(v44);
    v48 = __clz(__rbit32(HIDWORD(v44))) + 32;
    v15 = v185;
    if ( (_DWORD)v44 )
      v48 = __clz(v47);
    v17 = v186;
    v49 = v43 + (v48 >> 3);
    v45 = v49 + 3;
    if ( v49 >= 0xFFFFFFFD || !v49 && v37 >> 13 )
      goto LABEL_62;
LABEL_74:
    v59 = *v16;
    if ( v45 >= v28 )
      v45 = v28;
    if ( v59 >= 0x10000 )
      goto LABEL_271;
    v6 = v179;
    v60 = v45 - 3;
    *((_BYTE *)v179 + v59) = v45 - 3;
    v59 = *v16 + 1;
    *v16 = v59;
    if ( v59 >= 0x10000 )
      goto LABEL_271;
    v61 = v36 - 1;
    *((_BYTE *)v179 + v59) = v36 - 1;
    v62 = *v16 + 1;
    *v16 = v62;
    if ( v62 >= 0x10000 )
    {
      v46 = v62;
      v162 = &off_2E2FE4;
      goto LABEL_279;
    }
    *((_BYTE *)v179 + v62) = HIBYTE(v61);
    v63 = v16[1];
    ++*v16;
    v64 = v63 >= 0x10000;
    if ( v63 < 0x10000 )
    {
      *((_BYTE *)v179 + v63) >>= 1;
      v63 = v16[1];
      v64 = v63 >= 0x10000;
    }
    if ( v64 )
    {
      v46 = v63;
      v162 = &off_2E2FF4;
      goto LABEL_279;
    }
    *((_BYTE *)v179 + v63) |= 0x80u;
    if ( v61 >= 0x200u )
    {
      if ( (__int16)v61 <= -1 )
        core::panicking::panic_bounds_check(HIBYTE(v61), 128, (int)&off_2E3154);
      v65 = (unsigned __int8 *)&unk_2B14B4 + HIBYTE(v61);
    }
    else
    {
      v65 = (unsigned __int8 *)&unk_2B10B4 + v61;
    }
    v15 = v185;
    v66 = v185[16] + 2 * *v65;
    ++*(_WORD *)(v66 + 576);
    if ( v60 >= 0x100 )
      core::panicking::panic_bounds_check(v60, 256, (int)&off_2E3164);
    v50 = word_2B0D70[v60];
    if ( v50 >= 0x120 )
      core::panicking::panic_bounds_check(v50, 288, (int)&off_2E3174);
LABEL_65:
    ++*(_WORD *)(v15[16] + 2 * v50);
    v51 = v15[1] - 1;
    v15[1] = v51;
    if ( v51 )
    {
      v52 = *v16;
    }
    else
    {
      v53 = *v16;
      v15[1] = 8;
      v52 = v53 + 1;
      *v16 = v53 + 1;
      v16[1] = v53;
    }
    v54 = v16[24];
    v28 -= v45;
    *v15 += v45;
    v31 = v45 + v191;
    v55 = v54 + v45;
    v56 = v45 + v40;
    if ( v55 >= 0x8000 )
      v55 = 0x8000;
    v19 = v56 & 0x7FFF;
    v16[24] = v55;
    if ( v52 >= 0xFFF9 )
      break;
LABEL_44:
    if ( v28 <= 3 )
      goto LABEL_41;
  }
  v16[22] = v28;
  v16[23] = v31;
  if ( sub_231C4C(v6, a3, 0) )
  {
    v5 = v194;
    v154 = v170;
    *(_DWORD *)(v194 + 48) = -1;
    *(_DWORD *)(v194 + 28) = v17;
    goto LABEL_264;
  }
  v58 = v57 <= 0;
  if ( !v57 )
  {
    v28 = v16[22];
    v31 = v16[23];
    goto LABEL_44;
  }
LABEL_242:
  v5 = v194;
  v154 = v170;
  *(_DWORD *)(v194 + 28) = v17;
  if ( v58 )
    goto LABEL_264;
LABEL_247:
  if ( (*(_BYTE *)(v5 + 1) & 0x30) != 0 )
  {
    if ( *(_DWORD *)(v5 + 28) > v193 )
      core::slice::index::slice_end_index_len_fail();
    v195 = v15[8];
    adler::Adler32::write_slice(&v195, v189);
    v15[8] = v195;
  }
  LODWORD(v153) = a3[1];
LABEL_251:
  if ( *(_BYTE *)(v5 + 53) && (HIDWORD(v153) = v15[20], v153 == *(_DWORD *)(v5 + 28)) && !*(_DWORD *)(v5 + 20) )
  {
    if ( sub_231C4C(v6, a3, *(_BYTE *)(v5 + 53)) )
    {
      v158 = -1;
      result = *(_DWORD *)(v5 + 28);
      v159 = *(_DWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 48) = -1;
      goto LABEL_257;
    }
    if ( v157 >= 0 )
    {
      v160 = *(unsigned __int8 *)(v5 + 53);
      *(_BYTE *)(v5 + 55) = v160 == 4;
      if ( v160 == 3 )
      {
        memset((void *)(v15[23] + 0x10000), 0, 0x10000u);
        memset((void *)v15[23], 0, 0x10000u);
        v15[22] = 0;
      }
      goto LABEL_253;
    }
    result = *(_DWORD *)(v5 + 28);
    v159 = *(_DWORD *)(v5 + 32);
    v158 = *(_DWORD *)(v5 + 48);
LABEL_257:
    *v154 = result;
    v154[1] = v158;
    v154[2] = v159;
  }
  else
  {
LABEL_253:
    sub_2328A0(&v195, a3, v5);
    result = v195;
    v155 = v196;
    v156 = v197;
    *(_DWORD *)(v5 + 48) = v196;
    *v154 = result;
    v154[1] = v155;
    v154[2] = v156;
  }
  return result;
}
