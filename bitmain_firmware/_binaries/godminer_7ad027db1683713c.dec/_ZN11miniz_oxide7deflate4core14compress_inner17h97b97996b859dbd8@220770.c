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
  int v22; // r6
  __int16 v23; // r7
  unsigned int v24; // r7
  size_t v25; // r5
  unsigned int v26; // r1
  size_t v27; // r2
  int v28; // r3
  int v29; // r0
  unsigned int v30; // r12
  unsigned int v31; // r0
  int v32; // r1
  unsigned int v33; // r5
  unsigned int v34; // r1
  int v35; // r9
  unsigned int v36; // r1
  int v37; // r4
  __int16 v38; // lr
  unsigned int v39; // r8
  unsigned int v40; // r2
  int v41; // r1
  int v42; // r11
  char *v43; // r6
  char *v44; // r5
  int v45; // r7
  unsigned int v46; // r1
  __int64 v47; // r0
  unsigned int v48; // r7
  unsigned int v49; // r0
  unsigned int v50; // r2
  unsigned int v51; // r1
  unsigned int v52; // r0
  unsigned int v53; // r0
  int v54; // r0
  unsigned int v55; // r0
  unsigned int v56; // r1
  unsigned int v57; // r2
  unsigned int v58; // r1
  __int16 v59; // r7
  int v60; // r1
  bool v61; // cc
  unsigned int v62; // r1
  unsigned int v63; // r0
  unsigned __int16 v64; // r6
  unsigned int v65; // r3
  unsigned int v66; // r3
  bool v67; // cf
  unsigned __int8 *v68; // r1
  int v69; // r1
  int v70; // r1
  int v71; // r0
  unsigned int v72; // r0
  unsigned int v73; // r1
  unsigned int v74; // r0
  int v75; // r1
  unsigned int v76; // r9
  unsigned int v77; // r7
  unsigned int v78; // r4
  int v79; // lr
  int v80; // r5
  int v81; // r0
  int v82; // r1
  bool v83; // zf
  unsigned int v84; // r0
  unsigned int v85; // r12
  int v86; // r2
  unsigned int v87; // lr
  unsigned int v88; // r2
  unsigned int v89; // r5
  int v90; // r6
  unsigned __int8 *v91; // r7
  int v92; // r3
  int v93; // t1
  unsigned int v94; // r6
  int v95; // r6
  unsigned int v96; // r8
  __int16 v97; // r9
  int v98; // r5
  unsigned int v99; // r1
  unsigned int v100; // r7
  int v101; // r1
  int v102; // r2
  int v103; // r3
  int v104; // r2
  unsigned int v105; // r11
  int v106; // r0
  unsigned int i; // r6
  int v108; // lr
  unsigned int v109; // r5
  int v110; // r0
  unsigned int v111; // r12
  unsigned int v112; // r1
  unsigned int v113; // r1
  unsigned int v114; // r1
  unsigned int v115; // r7
  int v116; // r3
  unsigned int v117; // r9
  unsigned int v118; // r12
  int v119; // r4
  int v120; // r8
  __int16 v121; // r4
  unsigned int v122; // r3
  unsigned int v123; // r5
  unsigned int v124; // r1
  __int16 v125; // r4
  unsigned int v126; // r5
  __int16 v127; // r4
  unsigned int v128; // r5
  int v129; // r5
  int v130; // r1
  int v131; // r2
  int v132; // r7
  unsigned int v133; // lr
  unsigned int v134; // r9
  unsigned int v135; // r5
  unsigned int v136; // r2
  unsigned int v137; // r5
  bool v138; // cc
  unsigned int v139; // r2
  int v140; // r5
  int v141; // r1
  unsigned int v142; // r7
  int v143; // r2
  unsigned int v144; // r2
  int v145; // r0
  _DWORD *v146; // r1
  bool v147; // zf
  int v148; // r5
  unsigned int v149; // r0
  unsigned int v150; // r2
  int v151; // r3
  int v152; // r0
  unsigned int v153; // r0
  unsigned int v154; // r1
  unsigned int v155; // r2
  unsigned int v156; // r3
  int v157; // r2
  __int64 v158; // r0
  unsigned int *v159; // r5
  unsigned int v160; // r2
  unsigned int v161; // r1
  unsigned int v162; // r2
  int v163; // r1
  int v164; // r2
  unsigned int v165; // r1
  int v166; // r0
  unsigned int v167; // r1
  char **v168; // r2
  char **v169; // r2
  char **v170; // r2
  int v171; // r0
  char **v172; // r2
  unsigned int v173; // r0
  unsigned int v174; // [sp+0h] [bp-74h]
  unsigned int v175; // [sp+4h] [bp-70h]
  unsigned int v176; // [sp+8h] [bp-6Ch]
  int v177; // [sp+Ch] [bp-68h]
  unsigned int v178; // [sp+10h] [bp-64h]
  unsigned int v179; // [sp+18h] [bp-5Ch]
  _DWORD *v180; // [sp+1Ch] [bp-58h]
  unsigned int v181; // [sp+20h] [bp-54h]
  unsigned int *v182; // [sp+24h] [bp-50h]
  unsigned __int8 v183; // [sp+28h] [bp-4Ch]
  unsigned int v184; // [sp+2Ch] [bp-48h]
  int v185; // [sp+34h] [bp-40h]
  unsigned int v186; // [sp+38h] [bp-3Ch]
  int v187; // [sp+3Ch] [bp-38h]
  unsigned int v188; // [sp+3Ch] [bp-38h]
  unsigned int v189; // [sp+40h] [bp-34h]
  unsigned int v190; // [sp+40h] [bp-34h]
  unsigned int v191; // [sp+40h] [bp-34h]
  _DWORD *v192; // [sp+44h] [bp-30h]
  unsigned int v193; // [sp+48h] [bp-2Ch]
  unsigned int v194; // [sp+48h] [bp-2Ch]
  unsigned int v195; // [sp+48h] [bp-2Ch]
  unsigned int v196; // [sp+48h] [bp-2Ch]
  _DWORD *v198; // [sp+50h] [bp-24h]
  unsigned int v199; // [sp+54h] [bp-20h]
  int v200; // [sp+54h] [bp-20h]
  int v201; // [sp+54h] [bp-20h]
  int v202; // [sp+58h] [bp-1Ch]
  unsigned int v203; // [sp+5Ch] [bp-18h]
  unsigned int v204; // [sp+5Ch] [bp-18h]
  int v205; // [sp+5Ch] [bp-18h]
  unsigned int v206; // [sp+60h] [bp-14h]
  int v207; // [sp+64h] [bp-10h]
  unsigned int v208; // [sp+68h] [bp-Ch] BYREF
  unsigned int v209; // [sp+6Ch] [bp-8h]
  unsigned int v210; // [sp+70h] [bp-4h]

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
    sub_2205D8(&v208, a3, v5);
    result = v208;
    v13 = v209;
    v14 = v210;
    *(_DWORD *)(v5 + 48) = v209;
    *a1 = result;
    a1[1] = v13;
    a1[2] = v14;
    return result;
  }
  v15 = v6 + 16386;
  v16 = v6 + 0x4000;
  v182 = a1;
  v207 = v5;
  v198 = v6 + 16386;
  v192 = v6;
  if ( (*(_DWORD *)v5 & ((unsigned int)&loc_B4FFC + 3)) != 0x4001 )
  {
    v202 = *a3;
    if ( *a3 )
    {
      v76 = 0;
      v188 = *(_DWORD *)(v5 + 8);
      v183 = *(_BYTE *)(v5 + 52);
      v77 = *(_DWORD *)(v5 + 12);
      v78 = *(_DWORD *)(v5 + 72);
      v79 = *(_DWORD *)(v5 + 76);
      v180 = v6 + 16403;
      v206 = a3[1];
      while ( 1 )
      {
        if ( v206 <= v76 )
        {
          v83 = *(_BYTE *)(v5 + 53) == 0;
          if ( *(_BYTE *)(v5 + 53) )
            v83 = v78 == 0;
          if ( v83 )
            goto LABEL_240;
        }
        v84 = 258 - v78;
        if ( v206 - v76 < 258 - v78 )
          v84 = v206 - v76;
        if ( *(_DWORD *)(v5 + 80) + v78 >= 2 && v84 )
        {
          v85 = v84 + v76;
          if ( __CFADD__(v84, v76) )
            core::slice::index::slice_index_order_fail(v76, v85, (int)&off_2CE0D4);
          if ( v85 > v206 )
          {
            v171 = v84 + v76;
            v172 = &off_2CE0D4;
LABEL_297:
            core::slice::index::slice_end_index_len_fail(v171, v206, (int)v172);
          }
          v86 = v79;
          v87 = v77;
          v200 = v86;
          v88 = v78 + v86;
          v89 = v88 - 2;
          v194 = v84 + v78;
          v90 = *(unsigned __int8 *)(v16[25] + 0x20000 + (((_WORD)v88 - 1) & 0x7FFF))
              ^ (32 * *(unsigned __int8 *)(v16[25] + 0x20000 + (((_WORD)v88 - 2) & 0x7FFF)));
          v91 = (unsigned __int8 *)(v202 + v76);
          do
          {
            v88 &= 0x7FFFu;
            v93 = *v91++;
            v92 = v93;
            *(_BYTE *)(v16[25] + v88 + 0x20000) = v93;
            if ( v88 <= 0x100 )
              *(_BYTE *)(v16[25] + v88 + 163840) = v92;
            v90 = (32 * v90) & 0x7FE0 ^ v92;
            --v84;
            LOWORD(v88) = v88 + 1;
            *(_WORD *)(v16[25] + 2 * (v89 & 0x7FFF)) = *(_WORD *)(v16[25] + 2 * v90 + 0x10000);
            *(_WORD *)(v16[25] + 2 * v90 + 0x10000) = v89++;
          }
          while ( v84 );
          v76 = v85;
          v78 = v194;
          v103 = v200;
          v77 = v87;
        }
        else
        {
          v94 = v84 + v76;
          if ( __CFADD__(v84, v76) )
            core::slice::index::slice_index_order_fail(v76, v94, (int)&off_2CE0E4);
          if ( v94 > v206 )
            core::slice::index::slice_end_index_len_fail(v84 + v76, v206, (int)&off_2CE0E4);
          if ( v84 )
          {
            v195 = v84 + v76;
            v95 = 0;
            v96 = v202 + v76;
            v97 = v78 + v79 - 2;
            v190 = v77;
            do
            {
              v98 = *(unsigned __int8 *)(v96 + v95);
              v99 = ((_WORD)v78 + (_WORD)v79 + (_WORD)v95) & 0x7FFF;
              *(_BYTE *)(v16[25] + v99 + 0x20000) = v98;
              if ( v99 <= 0x100 )
                *(_BYTE *)(v16[25] + v99 + 163840) = v98;
              if ( v78 + v95 + *(_DWORD *)(v5 + 80) + 1 > 2 )
              {
                v100 = v16[25];
                v101 = (v97 + (_WORD)v95) & 0x7FFF;
                v5 = v207;
                v102 = v98
                     ^ (32
                      * *(unsigned __int8 *)(v100 + 0x20000 + (((_WORD)v78 + (_WORD)v79 + 0x7FFF + (_WORD)v95) & 0x7FFF)))
                     ^ ((*(_BYTE *)(v100 + 0x20000 + v101) & 0x1F) << 10);
                *(_WORD *)(v100 + 2 * v101) = *(_WORD *)(v100 + 2 * v102 + 0x10000);
                *(_WORD *)(v16[25] + 2 * v102 + 0x10000) = v97 + v95;
              }
              ++v95;
            }
            while ( v84 != v95 );
            v103 = v79;
            v78 += v95;
            v77 = v190;
            v6 = v192;
            v76 = v195;
          }
          else
          {
            v103 = v79;
          }
        }
        v104 = v5;
        v105 = *(_DWORD *)(v5 + 80);
        v106 = *(unsigned __int8 *)(v104 + 53);
        if ( 0x8000 - v78 < v105 )
          v105 = 0x8000 - v78;
        *(_DWORD *)(v104 + 80) = v105;
        if ( !v106 && v78 >> 1 < 0x81 )
          break;
        i = v77;
        v108 = v103;
        if ( !v77 )
          i = 2;
        v109 = *(_DWORD *)v207;
        v110 = v103 & 0x7FFF;
        if ( (*(_DWORD *)v207 & 0x90000) != 0 )
        {
          v111 = 0;
          if ( v105 )
          {
            v5 = v207;
            if ( (v109 & 0x80000) != 0 )
              goto LABEL_195;
            v112 = v78 + v110;
            if ( __CFADD__(v78, v110) )
              core::slice::index::slice_index_order_fail(v110, v112, (int)&off_2CE0F4);
            if ( v112 <= 0x8102 )
            {
              if ( v78 )
              {
                for ( i = 0; i != v78; ++i )
                {
                  if ( *(unsigned __int8 *)(v16[25] + 0x20000 + v110 + i) != *(unsigned __int8 *)(v16[25]
                                                                                                + 0x20000
                                                                                                + (((_WORD)v103 - 1)
                                                                                                 & 0x7FFF)) )
                    goto LABEL_193;
                }
                i = v78;
              }
              else
              {
                i = 0;
              }
LABEL_193:
              v111 = i > 2;
              if ( i < 3 )
                i = 0;
              goto LABEL_195;
            }
            v29 = v78 + v110;
            v169 = &off_2CE0F4;
            goto LABEL_302;
          }
LABEL_191:
          v5 = v207;
          goto LABEL_195;
        }
        v113 = 258;
        v111 = 0;
        if ( v78 < 0x102 )
          v113 = v78;
        if ( v113 <= i )
          goto LABEL_191;
        v178 = v113;
        v114 = v110 + i;
        v191 = v77;
        v115 = v110 + i - 1;
        if ( v115 > 0x8101 )
          core::panicking::panic_bounds_check(v110 + i - 1, 33026, (int)&off_2CDD54);
        if ( v114 >= 0x8102 )
          core::panicking::panic_bounds_check(v110 + i, 33026, (int)&off_2CDD64);
        v116 = v180[i > 0x1F] - 1;
        if ( v180[i > 0x1F] == 1 )
        {
          v5 = v207;
          v77 = v191;
          goto LABEL_195;
        }
        v179 = v76;
        v117 = v16[25];
        v118 = v117 + 0x20000;
        v196 = v78;
        v119 = v110;
        v177 = *(unsigned __int16 *)(v117 + 0x20000 + v110);
        v205 = *(unsigned __int8 *)(v117 + 0x20000 + v115) | (*(unsigned __int8 *)(v117 + 0x20000 + v114) << 8);
        v176 = v117 + 131074;
        v185 = v117 + 131074 + v110;
        v186 = (33024 - v110) & 0xFFFFFFF8;
        v181 = 0;
        do
        {
          v120 = 1 - v116;
          while ( 1 )
          {
            v121 = *(_WORD *)(v117 + 2 * v119);
            if ( !v121 )
              goto LABEL_234;
            v122 = (unsigned __int16)(v108 - v121);
            if ( v122 > v105 )
              goto LABEL_234;
            v119 = v121 & 0x7FFF;
            v123 = v119 + i;
            v124 = v119 + i - 1;
            if ( v124 > 0x8101 )
              goto LABEL_267;
            if ( v123 >= 0x8102 )
              goto LABEL_268;
            if ( (*(unsigned __int8 *)(v118 + v124) | (*(unsigned __int8 *)(v118 + v123) << 8)) == v205 )
              break;
            v125 = *(_WORD *)(v117 + 2 * v119);
            if ( !v125 )
              goto LABEL_234;
            v122 = (unsigned __int16)(v108 - v125);
            if ( v122 > v105 )
              goto LABEL_234;
            v119 = v125 & 0x7FFF;
            v126 = v119 + i;
            v124 = v119 + i - 1;
            if ( v124 > 0x8101 )
              goto LABEL_267;
            if ( v126 > 0x8101 )
              goto LABEL_268;
            if ( (*(unsigned __int8 *)(v118 + v124) | (*(unsigned __int8 *)(v118 + v126) << 8)) == v205 )
              break;
            v127 = *(_WORD *)(v117 + 2 * v119);
            if ( !v127 )
              goto LABEL_234;
            v122 = (unsigned __int16)(v108 - v127);
            if ( v122 > v105 )
              goto LABEL_234;
            v119 = v127 & 0x7FFF;
            v128 = v119 + i;
            v124 = v119 + i - 1;
            if ( v124 > 0x8101 )
              goto LABEL_267;
            if ( v128 > 0x8101 )
LABEL_268:
              core::panicking::panic_bounds_check(33026, 33026, (int)&off_2CDD64);
            if ( (*(unsigned __int8 *)(v118 + v124) | (*(unsigned __int8 *)(v118 + v128) << 8)) == v205 )
              break;
            if ( ++v120 == 1 )
              goto LABEL_234;
          }
          if ( !v122 )
            break;
          if ( *(unsigned __int16 *)(v118 + v119) != v177 )
            goto LABEL_189;
          v129 = 0;
          v175 = v117;
          v184 = v176 + v119;
          v201 = v108;
          v174 = (33024 - v119) & 0xFFFFFFF8;
          do
          {
            v108 = v201;
            if ( v129 == 256 )
            {
              i = v178;
LABEL_233:
              v181 = v122;
              goto LABEL_234;
            }
            if ( v186 == v129 )
            {
              v169 = &off_2CDFD4;
              v173 = v110 + v186;
              goto LABEL_294;
            }
            v130 = v129 + 8;
            if ( v174 + 8 == v129 + 8 )
            {
              v169 = &off_2CDFD4;
              v173 = v119 + v174;
LABEL_294:
              v29 = v173 + 10;
LABEL_302:
              core::slice::index::slice_end_index_len_fail(v29, 33026, (int)v169);
            }
            v131 = v184 + v129;
            v132 = *(_DWORD *)(v185 + v129 + 4);
            v133 = *(_DWORD *)(v184 + v129) ^ *(_DWORD *)(v185 + v129);
            v129 += 8;
            v134 = *(_DWORD *)(v131 + 4) ^ v132;
          }
          while ( !(v133 | v134) );
          v135 = __rbit32(v133);
          v12 = v133 == 0;
          v136 = __clz(__rbit32(v134)) + 32;
          v108 = v201;
          if ( !v12 )
            v136 = __clz(v135);
          v117 = v175;
          v137 = v130 + (v136 >> 3) - 6;
          if ( v137 > i )
          {
            v138 = v178 > v137;
            if ( v178 < v137 )
              v137 = v178;
            if ( !v138 )
            {
              i = v137;
              goto LABEL_233;
            }
            v124 = v137 + v110 - 1;
            if ( v124 < 0x8102 )
            {
              i = v137;
              v181 = v122;
              v205 = *(unsigned __int8 *)(v118 + v124) | (*(unsigned __int8 *)(v118 + v137 + v110) << 8);
              goto LABEL_189;
            }
LABEL_267:
            core::panicking::panic_bounds_check(v124, 33026, (int)&off_2CDD54);
          }
LABEL_189:
          v116 = -v120;
        }
        while ( v120 );
LABEL_234:
        v5 = v207;
        v78 = v196;
        v77 = v191;
        v76 = v179;
        v109 = *(_DWORD *)v207;
        if ( i != 3 )
        {
          v6 = v192;
          v111 = v181;
          goto LABEL_195;
        }
        v111 = v181;
        v6 = v192;
        if ( v181 >> 13 )
        {
LABEL_196:
          if ( v77 )
          {
            v140 = v108;
            v141 = v16[18];
LABEL_218:
            sub_2203B0(v141, v6, v77, v188);
            v149 = v77 - 1;
            v77 = 0;
            v15 = v198;
            v108 = v140;
            goto LABEL_224;
          }
LABEL_212:
          v62 = *v16;
          v150 = v16[18];
          v67 = *v16 >= 0x10000;
          v151 = *(unsigned __int8 *)(v16[25] + v110 + 0x20000);
          ++v16[2];
          if ( v67 )
          {
LABEL_271:
            v49 = v62;
            v168 = &off_2CDFE4;
            goto LABEL_279;
          }
          *((_BYTE *)v6 + v62) = v151;
          v49 = v16[1];
          ++*v16;
          if ( v49 >= 0x10000 )
            goto LABEL_269;
          *((_BYTE *)v6 + v49) >>= 1;
          v152 = v16[3] - 1;
          v16[3] = v152;
          if ( !v152 )
          {
            v153 = *v16;
            v16[3] = 8;
            *v16 = v153 + 1;
            v16[1] = v153;
          }
          v77 = 0;
          ++*(_WORD *)(v150 + 2 * v151);
          goto LABEL_222;
        }
LABEL_195:
        v139 = i;
        if ( (i < 6) & (unsigned __int8)(v109 >> 17) | (v110 == v111) )
          goto LABEL_196;
        if ( !v77 )
        {
          if ( v111 )
          {
            v147 = (v109 & 0x10000) == 0;
            if ( (v109 & 0x10000) == 0 )
              v147 = *((_BYTE *)v16 + 70) == 0;
            if ( v147 && i < 0x80 )
              goto LABEL_221;
            v145 = v16[18];
            v146 = v6;
LABEL_211:
            v148 = v108;
            sub_2203B0(v145, v146, v139, v111);
            v108 = v148;
            v77 = 0;
            v149 = i;
            goto LABEL_223;
          }
          goto LABEL_212;
        }
        v141 = v16[18];
        if ( i <= v77 )
        {
          v140 = v108;
          goto LABEL_218;
        }
        v142 = *v16;
        v67 = *v16 >= 0x10000;
        ++v16[2];
        if ( v67 )
        {
          v168 = &off_2CDFE4;
LABEL_277:
          v49 = v142;
          goto LABEL_279;
        }
        *((_BYTE *)v6 + v142) = v183;
        v142 = v16[1];
        ++*v16;
        if ( v142 >= 0x10000 )
        {
          v168 = &off_2CDFF4;
          goto LABEL_277;
        }
        *((_BYTE *)v6 + v142) >>= 1;
        v143 = v16[3] - 1;
        v16[3] = v143;
        if ( !v143 )
        {
          v144 = *v16;
          v16[3] = 8;
          *v16 = v144 + 1;
          v16[1] = v144;
        }
        ++*(_WORD *)(v141 + 2 * v183);
        if ( i >= 0x80 )
        {
          v145 = v16[18];
          v146 = v6;
          v139 = i;
          goto LABEL_211;
        }
LABEL_221:
        v77 = i;
        v188 = v111;
        v183 = *(_BYTE *)(v16[25] + v110 + 0x20000);
LABEL_222:
        v149 = 1;
LABEL_223:
        v15 = v198;
LABEL_224:
        if ( v78 < v149 )
          core::panicking::panic((int)aAssertionFaile_30, 47, (int)&off_2CE104);
        v154 = *v16;
        v155 = *(_DWORD *)(v5 + 80) + v149;
        v156 = v16[2];
        if ( v155 >= 0x8000 )
          v155 = 0x8000;
        *(_DWORD *)(v5 + 80) = v155;
        v157 = 0;
        if ( v156 > 0x7C00 )
          v157 = (v156 <= (115 * v154) >> 7) | ((unsigned __int8)(*(_BYTE *)(v5 + 2) & 8) >> 3);
        v79 = v149 + v108;
        v78 -= v149;
        if ( v154 > 0xFFF8 || v157 )
        {
          *(_DWORD *)(v5 + 72) = v78;
          *(_DWORD *)(v5 + 76) = v79;
          v80 = v79;
          *(_DWORD *)(v5 + 28) = v76;
          v81 = sub_21F984(v6, a3, 0);
          v79 = v80;
          if ( v81 )
            v82 = -1;
          if ( v82 )
          {
            v159 = v182;
            *(_DWORD *)(v5 + 8) = v188;
            *(_DWORD *)(v5 + 12) = v77;
            *(_BYTE *)(v5 + 52) = v183;
            if ( v82 > 0 )
              goto LABEL_247;
            v17 = *(_DWORD *)(v5 + 28);
            goto LABEL_264;
          }
        }
      }
      v5 = v207;
      v79 = v103;
      v15 = v198;
LABEL_240:
      *(_BYTE *)(v5 + 52) = v183;
      *(_DWORD *)(v5 + 72) = v78;
      *(_DWORD *)(v5 + 76) = v79;
      *(_DWORD *)(v5 + 28) = v76;
      *(_DWORD *)(v5 + 8) = v188;
      *(_DWORD *)(v5 + 12) = v77;
LABEL_241:
      v159 = v182;
      goto LABEL_247;
    }
LABEL_238:
    LODWORD(v158) = 0;
    v159 = a1;
    goto LABEL_251;
  }
  v202 = *a3;
  if ( !*a3 )
    goto LABEL_238;
  v17 = 0;
  v18 = v6[16406];
  v203 = v6[16407];
  v19 = v203 & 0x7FFF;
  v206 = a3[1];
  while ( 1 )
  {
LABEL_15:
    if ( v206 <= v17 )
    {
      v20 = v18 == 0;
      if ( v18 )
        v20 = *(_BYTE *)(v207 + 53) == 0;
      if ( v20 )
        goto LABEL_266;
    }
    v21 = 4096 - v18;
    v187 = v19;
    v193 = v18;
    if ( v206 - v17 < 4096 - v18 )
      v21 = v206 - v17;
    v189 = v21;
    if ( v21 )
    {
      v22 = v17;
      v23 = v18 + v203;
      do
      {
        v24 = v23 & 0x7FFF;
        v25 = 0x8000 - v24;
        if ( 0x8000 - v24 >= v21 )
          v25 = v21;
        if ( v25 + v24 >= 0x8103 )
        {
          v29 = v25 + v24;
          v169 = &off_2CE114;
          goto LABEL_302;
        }
        v26 = v25 + v22;
        if ( __CFADD__(v25, v22) )
        {
          v170 = &off_2CE124;
          goto LABEL_289;
        }
        if ( v26 > v206 )
        {
          v171 = v25 + v22;
          v172 = &off_2CE124;
          goto LABEL_297;
        }
        memcpy((void *)(v16[25] + v24 + 0x20000), (const void *)(v202 + v22), v25);
        if ( v24 <= 0x100 )
        {
          v27 = 257 - v24;
          v28 = v24 | 0x8000;
          if ( v25 < 257 - v24 )
            v27 = v25;
          v29 = v27 + v28;
          if ( v27 + v28 >= 0x8103 )
          {
            v169 = &off_2CE134;
            goto LABEL_302;
          }
          v26 = v27 + v22;
          if ( __CFADD__(v27, v22) )
          {
            v170 = &off_2CE144;
LABEL_289:
            core::slice::index::slice_index_order_fail(v22, v26, (int)v170);
          }
          if ( v26 > v206 )
          {
            v171 = v27 + v22;
            v172 = &off_2CE144;
            goto LABEL_297;
          }
          memcpy((void *)(v16[25] + v28 + 0x20000), (const void *)(v202 + v22), v27);
        }
        v21 -= v25;
        v23 = v25 + v24;
        v17 = v25 + v22;
        v22 += v25;
      }
      while ( v21 );
    }
    v15 = v198;
    v30 = v189 + v193;
    v31 = v16[24];
    v32 = *(unsigned __int8 *)(v207 + 53);
    if ( 0x8000 - (v189 + v193) < v31 )
      v31 = 0x8000 - (v189 + v193);
    v16[24] = v31;
    if ( !v32 && v30 < 0x1000 )
    {
      v18 = v189 + v193;
      v6 = v192;
LABEL_266:
      v5 = v207;
      v16[22] = v18;
      v16[23] = v203;
      *(_DWORD *)(v207 + 28) = v17;
      goto LABEL_241;
    }
    v19 = v187;
    v33 = v203;
    v199 = v17;
    if ( v30 >= 4 )
      break;
LABEL_41:
    v6 = v192;
    v203 = v33;
    v18 = 0;
    if ( v30 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v70 = *(unsigned __int8 *)(v16[25] + v19 + 0x20000);
          v49 = *v16;
          ++*v15;
          if ( v49 >= 0x10000 )
            goto LABEL_270;
          *((_BYTE *)v192 + v49) = v70;
          v49 = v16[1];
          ++*v16;
          if ( v49 >= 0x10000 )
            goto LABEL_269;
          *((_BYTE *)v192 + v49) >>= 1;
          v71 = v15[1] - 1;
          v15[1] = v71;
          if ( !v71 )
          {
            v72 = *v16;
            v15[1] = 8;
            *v16 = v72 + 1;
            v16[1] = v72;
          }
          --v30;
          ++*(_WORD *)(v15[16] + 2 * v70);
          v73 = *v16;
          v74 = v16[24] + 1;
          if ( v74 >= 0x8000 )
            v74 = 0x8000;
          v16[24] = v74;
          if ( v73 > 0xFFF8 )
            break;
          ++v203;
          v19 = ((_WORD)v19 + 1) & 0x7FFF;
          if ( !v30 )
            goto LABEL_15;
        }
        v16[23] = v203 + 1;
        v16[22] = v30;
        if ( sub_21F984(v192, a3, 0) )
          break;
        v61 = v75 <= 0;
        if ( v75 )
          goto LABEL_242;
        v30 = v16[22];
        v203 = v16[23];
        v19 = ((_WORD)v19 + 1) & 0x7FFF;
        if ( !v30 )
          goto LABEL_15;
      }
      v5 = v207;
      v159 = v182;
      *(_DWORD *)(v207 + 28) = v17;
      *(_DWORD *)(v207 + 48) = -1;
      goto LABEL_264;
    }
  }
  while ( 1 )
  {
    v34 = v16[25];
    v204 = v33;
    v35 = *(_DWORD *)(v34 + (v19 & 0x7FFF) + 0x20000);
    v36 = v34 + 2 * (v35 & 0xFFF ^ ((v35 & 0xFFFFFFu) >> 17));
    v37 = *(unsigned __int16 *)(v36 + 0x10000);
    *(_WORD *)(v36 + 0x10000) = v33;
    v38 = v33 - v37;
    v39 = (unsigned __int16)(v33 - v37);
    if ( v16[24] < v39 )
    {
      v17 = v199;
      goto LABEL_44;
    }
    v40 = v16[25];
    v41 = v37 & 0x7FFF;
    if ( (v35 & 0xFFFFFF) != (*(_DWORD *)(v40 + v41 + 0x20000) & 0xFFFFFF) )
    {
      v49 = *v16;
      if ( *v16 < 0x10000 )
      {
        v6 = v192;
        *((_BYTE *)v192 + v49) = v35;
        v49 = v16[1];
        ++*v16;
        if ( v49 < 0x10000 )
        {
          v15 = v198;
          LOWORD(v42) = v19;
          v17 = v199;
          goto LABEL_64;
        }
        goto LABEL_269;
      }
      goto LABEL_270;
    }
    v42 = v19;
    v43 = (char *)&stru_20000.st_name + v40 + v19 + 3;
    v44 = (char *)&stru_20000.st_name + v40 + v41 + 3;
    v45 = 0;
    while ( 1 )
    {
      v46 = v42 + v45 + 11;
      if ( (unsigned int)(v42 + v45 + 3) > 0xFFFFFFF7 )
        core::slice::index::slice_index_order_fail(v42 + v45 + 3, v46, (int)&off_2CDFD4);
      if ( v46 > 0x8102 )
      {
        v29 = v42 + v45 + 11;
        v169 = &off_2CDFD4;
        goto LABEL_302;
      }
      v47 = *(_QWORD *)&v44[v45] ^ *(_QWORD *)&v43[v45];
      if ( v47 )
        break;
      v45 += 8;
      if ( v45 == 256 )
      {
        v48 = 258;
        v15 = v198;
        v12 = v37 == (unsigned __int16)v204;
        v17 = v199;
        if ( !v12 )
          goto LABEL_74;
LABEL_62:
        v49 = *v16;
        if ( *v16 < 0x10000 )
        {
          v6 = v192;
          *((_BYTE *)v192 + v49) = v35;
          v49 = v16[1];
          ++*v16;
          if ( v49 < 0x10000 )
          {
LABEL_64:
            v48 = 1;
            *((_BYTE *)v6 + v49) >>= 1;
            v53 = (unsigned __int8)v35;
            goto LABEL_65;
          }
LABEL_269:
          v168 = &off_2CDFF4;
LABEL_279:
          core::panicking::panic_bounds_check(v49, 0x10000, (int)v168);
        }
LABEL_270:
        v168 = &off_2CDFE4;
        goto LABEL_279;
      }
    }
    v50 = __rbit32(v47);
    v51 = __clz(__rbit32(HIDWORD(v47))) + 32;
    v15 = v198;
    if ( (_DWORD)v47 )
      v51 = __clz(v50);
    v17 = v199;
    v52 = v45 + (v51 >> 3);
    v48 = v52 + 3;
    if ( v52 >= 0xFFFFFFFD || !v52 && v39 >> 13 )
      goto LABEL_62;
LABEL_74:
    v62 = *v16;
    if ( v48 >= v30 )
      v48 = v30;
    if ( v62 >= 0x10000 )
      goto LABEL_271;
    v6 = v192;
    v63 = v48 - 3;
    *((_BYTE *)v192 + v62) = v48 - 3;
    v62 = *v16 + 1;
    *v16 = v62;
    if ( v62 >= 0x10000 )
      goto LABEL_271;
    v64 = v38 - 1;
    *((_BYTE *)v192 + v62) = v38 - 1;
    v65 = *v16 + 1;
    *v16 = v65;
    if ( v65 >= 0x10000 )
    {
      v49 = v65;
      v168 = &off_2CDFE4;
      goto LABEL_279;
    }
    *((_BYTE *)v192 + v65) = HIBYTE(v64);
    v66 = v16[1];
    ++*v16;
    v67 = v66 >= 0x10000;
    if ( v66 < 0x10000 )
    {
      *((_BYTE *)v192 + v66) >>= 1;
      v66 = v16[1];
      v67 = v66 >= 0x10000;
    }
    if ( v67 )
    {
      v49 = v66;
      v168 = &off_2CDFF4;
      goto LABEL_279;
    }
    *((_BYTE *)v192 + v66) |= 0x80u;
    if ( v64 >= 0x200u )
    {
      if ( (__int16)v64 <= -1 )
        core::panicking::panic_bounds_check(HIBYTE(v64), 128, (int)&off_2CE154);
      v68 = (unsigned __int8 *)&unk_29C864 + HIBYTE(v64);
    }
    else
    {
      v68 = (unsigned __int8 *)&unk_29C464 + v64;
    }
    v15 = v198;
    v69 = v198[16] + 2 * *v68;
    ++*(_WORD *)(v69 + 576);
    if ( v63 >= 0x100 )
      core::panicking::panic_bounds_check(v63, 256, (int)&off_2CE164);
    v53 = word_29C120[v63];
    if ( v53 >= 0x120 )
      core::panicking::panic_bounds_check(v53, 288, (int)&off_2CE174);
LABEL_65:
    ++*(_WORD *)(v15[16] + 2 * v53);
    v54 = v15[1] - 1;
    v15[1] = v54;
    if ( v54 )
    {
      v55 = *v16;
    }
    else
    {
      v56 = *v16;
      v15[1] = 8;
      v55 = v56 + 1;
      *v16 = v56 + 1;
      v16[1] = v56;
    }
    v57 = v16[24];
    v30 -= v48;
    *v15 += v48;
    v33 = v48 + v204;
    v58 = v57 + v48;
    v59 = v48 + v42;
    if ( v58 >= 0x8000 )
      v58 = 0x8000;
    v19 = v59 & 0x7FFF;
    v16[24] = v58;
    if ( v55 >= 0xFFF9 )
      break;
LABEL_44:
    if ( v30 <= 3 )
      goto LABEL_41;
  }
  v16[22] = v30;
  v16[23] = v33;
  if ( sub_21F984(v6, a3, 0) )
  {
    v5 = v207;
    v159 = v182;
    *(_DWORD *)(v207 + 48) = -1;
    *(_DWORD *)(v207 + 28) = v17;
LABEL_264:
    result = *(_DWORD *)(v5 + 32);
    v167 = *(_DWORD *)(v5 + 48);
    *v159 = v17;
    v159[1] = v167;
    v159[2] = result;
    return result;
  }
  v61 = v60 <= 0;
  if ( !v60 )
  {
    v30 = v16[22];
    v33 = v16[23];
    goto LABEL_44;
  }
LABEL_242:
  v5 = v207;
  v159 = v182;
  *(_DWORD *)(v207 + 28) = v17;
  if ( v61 )
    goto LABEL_264;
LABEL_247:
  if ( (*(_BYTE *)(v5 + 1) & 0x30) != 0 )
  {
    v160 = *(_DWORD *)(v5 + 28);
    if ( v160 > v206 )
      core::slice::index::slice_end_index_len_fail(*(_DWORD *)(v5 + 28), v206, (int)&off_2CE1A4);
    v208 = v15[8];
    adler::Adler32::write_slice((unsigned __int16 *)&v208, v202, v160);
    v15[8] = v208;
  }
  LODWORD(v158) = a3[1];
LABEL_251:
  if ( *(_BYTE *)(v5 + 53) && (HIDWORD(v158) = v15[20], v158 == *(_DWORD *)(v5 + 28)) && !*(_DWORD *)(v5 + 20) )
  {
    if ( sub_21F984(v6, a3, *(_BYTE *)(v5 + 53)) )
    {
      v164 = -1;
      result = *(_DWORD *)(v5 + 28);
      v165 = *(_DWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 48) = -1;
      goto LABEL_257;
    }
    if ( v163 >= 0 )
    {
      v166 = *(unsigned __int8 *)(v5 + 53);
      *(_BYTE *)(v5 + 55) = v166 == 4;
      if ( v166 == 3 )
      {
        memset((void *)(v15[23] + 0x10000), 0, 0x10000u);
        memset((void *)v15[23], 0, 0x10000u);
        v15[22] = 0;
      }
      goto LABEL_253;
    }
    result = *(_DWORD *)(v5 + 28);
    v165 = *(_DWORD *)(v5 + 32);
    v164 = *(_DWORD *)(v5 + 48);
LABEL_257:
    *v159 = result;
    v159[1] = v164;
    v159[2] = v165;
  }
  else
  {
LABEL_253:
    sub_2205D8(&v208, a3, v5);
    result = v208;
    v161 = v209;
    v162 = v210;
    *(_DWORD *)(v5 + 48) = v209;
    *v159 = result;
    v159[1] = v161;
    v159[2] = v162;
  }
  return result;
}
