int __fastcall miniz_oxide::inflate::core::decompress(
        int result,
        int a2,
        unsigned __int8 *src,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        char a8)
{
  int v8; // r8
  unsigned __int8 *v9; // r11
  int v10; // r6
  unsigned int v11; // lr
  unsigned int v12; // r1
  unsigned __int8 *v13; // r10
  size_t v14; // r2
  unsigned int v15; // r5
  char v16; // r0
  int v17; // r9
  unsigned int v18; // r1
  int v19; // r5
  _BOOL4 v20; // r12
  unsigned int v21; // t1
  unsigned int v22; // t1
  unsigned int v23; // r0
  unsigned int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r0
  int v27; // t1
  int v28; // r2
  unsigned int v29; // r5
  unsigned __int16 v30; // r0
  size_t v31; // r0
  unsigned int v32; // r1
  unsigned int v33; // r2
  int v34; // t1
  size_t v35; // r1
  unsigned __int8 *v36; // r7
  unsigned int v37; // r10
  size_t v38; // r5
  size_t v39; // r9
  unsigned int v40; // r4
  unsigned __int8 *v41; // r0
  size_t v42; // r0
  unsigned int v43; // r6
  unsigned int v44; // r5
  unsigned int v45; // r3
  int v46; // t1
  int v47; // r4
  unsigned int v48; // r3
  unsigned int v49; // r4
  size_t v50; // r6
  unsigned int v51; // r7
  int v52; // t1
  unsigned int v53; // r5
  unsigned int v54; // r5
  int v55; // r0
  unsigned int v56; // r2
  unsigned int v57; // r1
  int v58; // t1
  int v59; // r2
  size_t *v60; // r4
  size_t v61; // r2
  unsigned int v62; // r6
  unsigned int v63; // r3
  int v64; // r1
  bool v65; // cf
  unsigned int v66; // r6
  size_t v67; // r2
  size_t v68; // r1
  int v69; // t1
  unsigned int v70; // r2
  unsigned int v71; // r7
  unsigned int v72; // r1
  int v73; // r1
  int v74; // r1
  bool v75; // cf
  unsigned int v76; // r7
  int v77; // r7
  unsigned int v78; // r1
  size_t v79; // r2
  int v80; // r1
  unsigned int v81; // r4
  unsigned int v82; // r2
  int v83; // t1
  int v84; // r2
  size_t v85; // r5
  unsigned int v86; // r4
  unsigned int v87; // r0
  bool v88; // cf
  unsigned int v89; // r2
  int v90; // r0
  bool v91; // cf
  bool v92; // cc
  unsigned int v93; // r5
  int v94; // t1
  unsigned int v95; // r3
  signed int v96; // r2
  int v97; // r7
  unsigned int v98; // r0
  unsigned int v99; // r0
  unsigned int v100; // r3
  int v101; // t1
  unsigned int v102; // r12
  signed int v103; // r7
  int v104; // r6
  unsigned int v105; // r0
  unsigned int v106; // r0
  unsigned int v107; // r7
  int v108; // t1
  unsigned int v109; // r3
  unsigned int v110; // r2
  int v111; // r0
  bool v112; // cf
  unsigned int v113; // r0
  unsigned int v114; // r7
  int v115; // t1
  unsigned int v116; // r3
  unsigned int v117; // r1
  unsigned int v118; // r0
  int v119; // t1
  unsigned int v120; // r0
  size_t v121; // r2
  unsigned int v122; // r6
  unsigned int v123; // r7
  unsigned int v124; // r5
  unsigned __int8 *v125; // r8
  unsigned int v126; // r11
  char v127; // r2
  unsigned int v128; // r7
  unsigned int v129; // r0
  unsigned int v130; // r3
  unsigned int v131; // r0
  char v132; // r0
  int v133; // r0
  unsigned int v134; // r2
  size_t v135; // r0
  unsigned int v136; // r4
  unsigned int v137; // r1
  size_t v138; // r0
  unsigned int v139; // r1
  unsigned int v140; // r2
  int v141; // t1
  unsigned int *v142; // r7
  unsigned int v143; // r3
  int v144; // t1
  char v145; // t1
  unsigned int v146; // r2
  unsigned int v147; // r3
  int v148; // t1
  size_t v149; // r1
  unsigned int v150; // t1
  unsigned int v151; // r2
  unsigned int v152; // r1
  int v153; // t1
  unsigned int *v154; // r7
  int v155; // r1
  int v156; // t1
  unsigned int v157; // r3
  bool v158; // zf
  int v159; // r0
  unsigned int v160; // r3
  unsigned int v161; // r0
  int v162; // r0
  unsigned int v163; // r6
  int v164; // r0
  bool v165; // cf
  unsigned int v166; // r5
  int v167; // r4
  unsigned int v168; // r3
  int v169; // r1
  size_t v170; // r6
  unsigned int v171; // r2
  int v172; // t1
  unsigned int v173; // r7
  char v174; // t1
  unsigned int v175; // r2
  unsigned int v176; // r3
  int v177; // t1
  int v178; // t1
  unsigned int v179; // r2
  unsigned int v180; // r1
  int v181; // t1
  unsigned int *v182; // r7
  int v183; // r1
  unsigned int v184; // r3
  int v185; // r0
  int v186; // r0
  bool v187; // cf
  unsigned int v188; // r10
  unsigned int v189; // r4
  size_t v190; // r3
  int v191; // t1
  int v192; // r0
  int v193; // t1
  int v194; // r7
  int v195; // r2
  unsigned int v196; // r0
  int v197; // t1
  int v198; // r2
  unsigned int v199; // r6
  unsigned int v200; // r2
  int v201; // r1
  int v202; // t1
  int v203; // r0
  int v204; // r1
  unsigned int v205; // r0
  int v206; // r6
  int v207; // t1
  int v208; // r1
  bool v209; // cc
  unsigned int v210; // r6
  unsigned int v211; // r0
  char v212; // t1
  size_t v213; // r1
  unsigned int v214; // r2
  unsigned int v215; // r3
  int v216; // t1
  int v217; // t1
  unsigned int v218; // r2
  unsigned int v219; // r1
  int v220; // t1
  unsigned int *v221; // r7
  int v222; // r1
  unsigned int v223; // r7
  int v224; // r0
  int v225; // r3
  int v226; // r0
  unsigned int v227; // r7
  signed int v228; // r0
  int v229; // r3
  int v230; // r0
  char v231; // t1
  size_t v232; // r0
  int v233; // t1
  unsigned int *v234; // r8
  unsigned int v235; // r0
  unsigned int v236; // r9
  unsigned int v237; // r1
  size_t v238; // r3
  unsigned int v239; // r7
  char v240; // r0
  int v241; // r6
  unsigned int v242; // r4
  int v243; // r0
  int v244; // r2
  unsigned int v245; // r3
  unsigned int v246; // r1
  char v247; // r0
  char v248; // r0
  unsigned int v249; // [sp+Ch] [bp-88h]
  unsigned int v250; // [sp+10h] [bp-84h]
  unsigned __int8 *v251; // [sp+14h] [bp-80h]
  unsigned int v252; // [sp+18h] [bp-7Ch]
  unsigned __int8 *v253; // [sp+18h] [bp-7Ch]
  void *v254; // [sp+1Ch] [bp-78h]
  unsigned int v255; // [sp+20h] [bp-74h]
  unsigned __int16 *v256; // [sp+24h] [bp-70h]
  char v257; // [sp+28h] [bp-6Ch]
  char v258; // [sp+2Ch] [bp-68h]
  int v259; // [sp+30h] [bp-64h]
  unsigned int v260; // [sp+34h] [bp-60h]
  int v261; // [sp+38h] [bp-5Ch]
  int v262; // [sp+40h] [bp-54h]
  void *v264; // [sp+48h] [bp-4Ch]
  void *v265; // [sp+4Ch] [bp-48h]
  _DWORD *v266; // [sp+50h] [bp-44h]
  int v267; // [sp+54h] [bp-40h]
  int v268; // [sp+58h] [bp-3Ch]
  char *srca; // [sp+5Ch] [bp-38h]
  _DWORD *dest; // [sp+60h] [bp-34h]
  void *s; // [sp+64h] [bp-30h]
  unsigned int *v272; // [sp+68h] [bp-2Ch]
  char v273; // [sp+6Ch] [bp-28h]
  unsigned int v274; // [sp+6Ch] [bp-28h]
  unsigned int v275; // [sp+70h] [bp-24h] BYREF
  unsigned int v276; // [sp+74h] [bp-20h]
  unsigned int v277; // [sp+78h] [bp-1Ch]
  size_t n; // [sp+7Ch] [bp-18h]
  unsigned int v279; // [sp+80h] [bp-14h]
  int v280; // [sp+88h] [bp-Ch] BYREF
  int v281; // [sp+8Ch] [bp-8h]
  int v282; // [sp+90h] [bp-4h]

  v8 = a2;
  v9 = src;
  v10 = a6 - 1;
  v11 = a7;
  if ( !a6 )
    v10 = 0;
  if ( (a8 & 4) != 0 )
    v10 = -1;
  if ( a7 > a6 || ((v10 + 1) & v10) != 0 )
  {
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)result = 0;
    *(_BYTE *)(result + 4) = -3;
    return result;
  }
  v262 = result;
  v266 = (_DWORD *)(a2 + 3480);
  v261 = a8 & 4;
  v255 = v10 + 1;
  v256 = (unsigned __int16 *)(a2 + 10520);
  v12 = *(_DWORD *)(a2 + 10492);
  v13 = &src[a4];
  v14 = *(_DWORD *)(v8 + 10496);
  v272 = (unsigned int *)(v8 + 10464);
  v15 = *(_DWORD *)(v8 + 10500);
  v276 = *(_DWORD *)(v8 + 10464);
  v277 = v12;
  n = v14;
  v279 = v15;
  dest = (_DWORD *)(v8 + 6688);
  srca = (char *)(v8 + 10524);
  v16 = 1;
  LOBYTE(v17) = *(_BYTE *)(v8 + 10981);
  if ( (a8 & 2) == 0 )
    v16 = -4;
  v18 = 1;
  v258 = v16;
  v265 = (void *)(v8 + 3456);
  v264 = (void *)(v8 + 3344);
  v254 = (void *)(v8 + 10176);
  v268 = v8 + 10504;
  if ( (a8 & 1) == 0 )
    v18 = 3;
  v267 = v8 + 6976;
  s = (void *)(v8 + 3200);
  v260 = v10;
  v275 = *(_DWORD *)(v8 + 10516);
  v257 = v18;
  v259 = v8 + 3488;
  v251 = v9;
LABEL_12:
  while ( 2 )
  {
    LOBYTE(v19) = -1;
    v20 = 0;
    v273 = v17;
    switch ( (char)v17 )
    {
      case 0:
        v18 = 0;
        v279 = 0;
        n = 0;
        v272[6] = 1;
        v272[1] = 0;
        v272[2] = 0;
        v272[3] = 1;
        v277 = 0;
        v276 = 0;
        v275 = 0;
        LOBYTE(v17) = v257;
        continue;
      case 1:
        if ( v9 == v13 )
          goto LABEL_453;
        v18 = (unsigned int)v272;
        LOBYTE(v17) = 2;
        v21 = *v9++;
        v272[1] = v21;
        continue;
      case 2:
        if ( v9 == v13 )
          goto LABEL_453;
        v22 = *v9++;
        LOBYTE(v17) = 3;
        v23 = v272[1];
        v272[2] = v22;
        v18 = v23 & 0xF ^ 8 | ((v22 | (v23 << 8)) % 0x1F) | v22 & 0x20;
        v24 = ((unsigned __int8)(v23 >> 4) + 8) & 0x1F;
        if ( !(v261 | (v255 >> v24)) )
          LOBYTE(v17) = 28;
        if ( v18 )
          LOBYTE(v17) = 28;
        if ( v24 > 0xF )
          LOBYTE(v17) = 28;
        continue;
      case 3:
        do
        {
          v25 = v276;
          v26 = v275;
          if ( v276 <= 2 )
          {
            if ( v9 == v13 )
              goto LABEL_453;
            v27 = *v9++;
            v26 = v275 | (v27 << v276);
            v25 = v276 + 8;
          }
          v28 = (v26 >> 1) & 3;
          v18 = v25 - 3;
          v272[4] = v26 & 1;
          v272[5] = v28;
          v276 = v18;
          v275 = v26 >> 3;
          if ( v28 != 1 )
          {
            if ( v28 )
            {
              if ( v28 == 2 )
              {
                LOBYTE(v17) = 8;
                n = 0;
              }
              else
              {
                LOBYTE(v17) = 25;
              }
            }
            else
            {
              LOBYTE(v17) = 4;
            }
            goto LABEL_12;
          }
          *(_DWORD *)(v268 + 4) = 32;
          v29 = v11;
          *(_DWORD *)v268 = 288;
          memset(s, 8, 0x90u);
          memset(v264, 9, 0x70u);
          *v266 = 134744072;
          v266[1] = 134744072;
          memset(v265, 7, 24);
          *dest = 84215045;
          dest[1] = 84215045;
          dest[2] = 84215045;
          dest[3] = 84215045;
          dest[4] = 84215045;
          dest[5] = 84215045;
          dest[6] = 84215045;
          dest[7] = 84215045;
          v30 = sub_23430C(v8, (int)&v275);
          v18 = (unsigned __int8)v30;
          v11 = v29;
        }
        while ( !(_BYTE)v30 );
        if ( (unsigned __int8)v30 == 1 )
        {
          v17 = HIBYTE(v30);
          continue;
        }
        v19 = HIBYTE(v30);
LABEL_455:
        v234 = v272;
LABEL_456:
        v20 = (unsigned __int8)v19 == 1;
        if ( v20 == ((unsigned __int8)v19 != 252) )
        {
          v235 = v276;
          v236 = 0;
          goto LABEL_463;
        }
LABEL_460:
        v236 = (unsigned int)&v9[a4 - (_DWORD)v13];
        if ( v236 > v276 >> 3 )
          v236 = v276 >> 3;
        v235 = v276 - 8 * v236;
        v276 = v235;
LABEL_463:
        *v234 = v235;
        v237 = v275;
        v238 = n;
        v239 = v279;
        v234[7] = v277;
        *(_DWORD *)(v268 + 12) = v237 & ~(-1 << (v235 & 0x1F));
        v240 = v19;
        if ( v273 != 23 )
          v240 = 2;
        if ( v11 != a6 )
          v240 = v19;
        if ( !v20 )
          v240 = v19;
        *(_BYTE *)(v268 + 477) = v273;
        v241 = v240;
        v234[8] = v238;
        v234[9] = v239;
        if ( (a8 & 0x40) != 0 || (a8 & 9) == 0 || v240 <= -1 )
        {
          v242 = v11 - a7;
LABEL_480:
          v244 = v262;
          v245 = a4;
          goto LABEL_481;
        }
        if ( v11 < a7 )
          core::slice::index::slice_index_order_fail();
        if ( v11 > a6 )
          core::slice::index::slice_end_index_len_fail();
        v242 = v11 - a7;
        v280 = v234[6];
        adler::Adler32::write_slice(&v280, a5 + a7);
        v243 = v280;
        v234[6] = v280;
        if ( (a8 & 1) == 0 )
          goto LABEL_480;
        v244 = v262;
        v245 = a4;
        if ( !v241 )
        {
          v246 = v234[3];
          v241 = (unsigned __int8)(v243 - v246);
          if ( v243 != v246 )
            LOBYTE(v241) = -2;
        }
LABEL_481:
        result = &v9[v245] - &v13[v236];
        *(_DWORD *)(v244 + 8) = v242;
        *(_BYTE *)(v244 + 4) = v241;
        *(_DWORD *)v244 = result;
        return result;
      case 4:
        LOBYTE(v17) = 5;
        n = 0;
        v18 = v276 & 7;
        v276 &= 0xFFFFFFF8;
        v275 >>= v18;
        continue;
      case 5:
        v31 = n;
        if ( n >= 4 )
          goto LABEL_442;
        v32 = v276;
        if ( v276 )
        {
          v33 = v275;
          if ( v276 <= 7 )
          {
            if ( v9 == v13 )
              goto LABEL_453;
            v34 = *v9++;
            v33 = v275 | (v34 << v276);
            v32 = v276 + 8;
          }
          v276 = v32 - 8;
          *(_BYTE *)(v8 + n + 10520) = v33;
          v275 = v33 >> 8;
          v35 = v31 + 1;
          n = v31 + 1;
          if ( v31 > 2 )
            goto LABEL_442;
        }
        else
        {
          if ( v9 == v13 )
            goto LABEL_453;
          v145 = *v9++;
          *(_BYTE *)(v8 + n + 10520) = v145;
          v35 = v31 + 1;
          n = v31 + 1;
          if ( v31 > 2 )
            goto LABEL_442;
        }
        v146 = v276;
        if ( v276 )
        {
          v147 = v275;
          if ( v276 <= 7 )
          {
            if ( v9 == v13 )
              goto LABEL_453;
            v148 = *v9++;
            v147 = v275 | (v148 << v276);
            v146 = v276 + 8;
          }
          *(_BYTE *)(v8 + v35 + 10520) = v147;
          v276 = v146 - 8;
          v275 = v147 >> 8;
          v149 = v31 + 2;
          n = v31 + 2;
          if ( v31 > 1 )
            goto LABEL_442;
        }
        else
        {
          if ( v9 == v13 )
            goto LABEL_453;
          v174 = *v9++;
          *(_BYTE *)(v8 + v35 + 10520) = v174;
          v149 = v31 + 2;
          n = v31 + 2;
          if ( v31 > 1 )
            goto LABEL_442;
        }
        v175 = v276;
        if ( v276 )
        {
          v176 = v275;
          if ( v276 <= 7 )
          {
            if ( v9 == v13 )
              goto LABEL_453;
            v177 = *v9++;
            v176 = v275 | (v177 << v276);
            v175 = v276 + 8;
          }
          *(_BYTE *)(v8 + v149 + 10520) = v176;
          v276 = v175 - 8;
          v275 = v176 >> 8;
        }
        else
        {
          if ( v9 == v13 )
            goto LABEL_453;
          v212 = *v9++;
          *(_BYTE *)(v8 + v149 + 10520) = v212;
        }
        v213 = v31 + 3;
        n = v31 + 3;
        if ( !v31 )
        {
          v214 = v276;
          if ( v276 )
          {
            v215 = v275;
            if ( v276 > 7 )
            {
LABEL_389:
              *(_BYTE *)(v8 + v213 + 10520) = v215;
              v276 = v214 - 8;
              v275 = v215 >> 8;
LABEL_441:
              n = 4;
              goto LABEL_442;
            }
            if ( v9 != v13 )
            {
              v216 = *v9++;
              v215 = v275 | (v216 << v276);
              v214 = v276 + 8;
              goto LABEL_389;
            }
          }
          else if ( v9 != v13 )
          {
            v231 = *v9++;
            *(_BYTE *)(v8 + v213 + 10520) = v231;
            goto LABEL_441;
          }
LABEL_453:
          v9 = v13;
LABEL_454:
          LOBYTE(v19) = v258;
          goto LABEL_455;
        }
LABEL_442:
        LOBYTE(v17) = 30;
        v232 = *v256;
        v18 = v256[1] ^ 0xFFFF;
        n = v232;
        if ( v232 == v18 )
        {
          LOBYTE(v17) = 20;
          if ( v232 )
          {
            LOBYTE(v17) = 17;
            if ( !v276 )
              LOBYTE(v17) = 6;
          }
        }
        continue;
      case 6:
        v18 = a6;
        LOBYTE(v17) = 7;
        if ( v11 == a6 )
          LOBYTE(v17) = 2;
        if ( !n )
        {
          LOBYTE(v17) = 20;
          continue;
        }
        if ( v11 != a6 )
          continue;
        LOBYTE(v19) = v17;
        v273 = 6;
        v11 = a6;
        goto LABEL_459;
      case 7:
        v36 = v13;
        v37 = v13 - v9;
        if ( v37 )
        {
          v38 = n;
          v39 = a6 - v11;
          if ( a6 - v11 >= v37 )
            v39 = v37;
          if ( v39 >= n )
            v39 = n;
          if ( v39 > v37 )
            core::slice::index::slice_end_index_len_fail();
          v40 = v39 + v11;
          if ( __CFADD__(v39, v11) )
            core::slice::index::slice_index_order_fail();
          if ( v40 > a6 )
            core::slice::index::slice_end_index_len_fail();
          memcpy((void *)(a5 + v11), v9, v39);
          n = v38 - v39;
          v11 = v40;
          v41 = v36;
          if ( v37 > v39 - 1 )
            v41 = &v9[v39];
          v13 = v36;
          LOBYTE(v17) = 6;
          v9 = v41;
          continue;
        }
        v13 = v9;
        goto LABEL_454;
      case 8:
        v42 = n;
        v252 = v11;
        if ( n > 2 )
          goto LABEL_402;
        v282 = 4;
        v281 = 5;
        v280 = 5;
        v43 = *(&v280 + n);
        v44 = v276;
        v45 = v275;
        if ( v276 >= v43 )
          goto LABEL_60;
        do
        {
          if ( v9 == v13 )
            goto LABEL_482;
          v46 = *v9++;
          v45 |= v46 << (v44 & 0x1F);
          v44 += 8;
          v276 = v44;
          v275 = v45;
        }
        while ( v44 < v43 );
LABEL_60:
        v47 = v45 & ~(-1 << (v43 & 0x1F));
        v48 = v45 >> (v43 & 0x1F);
        v275 = v48;
        *(_DWORD *)(v8 + 4 * n + 10504) = v47 + word_2B17E6[n];
        v49 = v44 - v43;
        v50 = v42 + 1;
        v276 = v49;
        n = v42 + 1;
        if ( v42 > 1 )
          goto LABEL_402;
        v282 = 4;
        v281 = 5;
        v280 = 5;
        v51 = *(&v280 + v50);
        if ( v49 < v51 )
        {
          while ( v9 != v13 )
          {
            v52 = *v9++;
            v53 = v49 + 8;
            v276 = v49 + 8;
            v65 = v49 + 8 >= v51;
            v48 |= v52 << (v49 & 0x1F);
            v49 += 8;
            v275 = v48;
            if ( v65 )
              goto LABEL_295;
          }
LABEL_482:
          v9 = v13;
          LOBYTE(v19) = v258;
          v234 = v272;
          goto LABEL_456;
        }
        v53 = v49;
LABEL_295:
        v166 = v53 - v51;
        v167 = v48 & ~(-1 << (v51 & 0x1F));
        v168 = v48 >> (v51 & 0x1F);
        v169 = v167 + word_2B17E6[v50];
        v276 = v166;
        *(_DWORD *)(v8 + 4 * v50 + 10504) = v169;
        v170 = v42 + 2;
        n = v42 + 2;
        v275 = v168;
        if ( v42 )
          goto LABEL_402;
        v282 = 4;
        v281 = 5;
        v280 = 5;
        v171 = *(&v280 + v170);
        if ( v166 < v171 )
        {
          while ( v9 != v13 )
          {
            v172 = *v9++;
            v173 = v166 + 8;
            v276 = v173;
            v168 |= v172 << (v166 & 0x1F);
            v166 += 8;
            v275 = v168;
            if ( v173 >= v171 )
              goto LABEL_401;
          }
          goto LABEL_453;
        }
        v173 = v166;
LABEL_401:
        v222 = word_2B17E6[v170];
        n = 3;
        *(_DWORD *)(v8 + 4 * v170 + 10504) = (v168 & ~(-1 << (v171 & 0x1F))) + v222;
        v276 = v173 - v171;
        v275 = v168 >> (v171 & 0x1F);
LABEL_402:
        memset(v254, 0, 0x120u);
        n = 0;
        LOBYTE(v17) = 9;
        v11 = v252;
        continue;
      case 9:
        while ( 2 )
        {
          while ( n >= *(_DWORD *)(v268 + 8) )
          {
            *(_DWORD *)(v268 + 8) = 19;
            v54 = v11;
            LOWORD(v55) = sub_23430C(v8, (int)&v275);
            v18 = (unsigned __int16)v55;
            v11 = v54;
            v17 = BYTE1(v55);
            v55 = (unsigned __int8)v55;
            if ( (_BYTE)v55 )
              goto LABEL_73;
          }
          v56 = v276;
          v57 = v275;
          if ( v276 > 2 )
            goto LABEL_71;
          if ( v9 != v13 )
          {
            v58 = *v9++;
            v57 = v275 | (v58 << v276);
            v56 = v276 + 8;
LABEL_71:
            v276 = v56 - 3;
            v275 = v57 >> 3;
            if ( n >= 0x13 )
              core::panicking::panic_bounds_check(n, 19, (int)&off_2E24F4);
            v59 = byte_2B0892[n++];
            *(_BYTE *)(v8 + v59 + 10176) = v57 & 7;
            continue;
          }
          goto LABEL_453;
        }
      case 10:
        v60 = (size_t *)v268;
        while ( 1 )
        {
          v61 = *v60;
          v18 = v60[1] + *v60;
          if ( n < v18 )
            break;
          if ( n != v18 )
          {
            LOBYTE(v17) = 26;
            goto LABEL_12;
          }
          if ( v61 > 0x120 || (v66 = v11, memcpy(s, srca, v61), v67 = v60[1], v67 > 0x120) )
            core::slice::index::slice_end_index_len_fail();
          v68 = v67 + *v60;
          if ( v68 < *v60 )
            core::slice::index::slice_index_order_fail();
          if ( v68 >> 1 > 0xE4 )
            core::slice::index::slice_end_index_len_fail();
          memcpy(dest, &srca[*v60], v67);
          --v272[5];
          LOWORD(v55) = sub_23430C(v8, (int)&v275);
          v18 = (unsigned __int16)v55;
          v11 = v66;
          v17 = BYTE1(v55);
LABEL_76:
          v55 = (unsigned __int8)v55;
          if ( (_BYTE)v55 )
          {
LABEL_73:
            if ( v55 != 1 )
            {
              LOBYTE(v19) = v17;
              goto LABEL_455;
            }
            goto LABEL_12;
          }
        }
        v62 = v276;
        if ( v276 >= 0xF )
        {
          v63 = v275;
        }
        else
        {
          if ( (unsigned int)(v13 - v9) > 1 )
          {
            v69 = *(unsigned __int16 *)v9;
            v9 += 2;
            v70 = v276 + 16;
            v276 += 16;
            v63 = v275 | (v69 << v62);
            v275 = v63;
          }
          else
          {
            v63 = v275;
            v64 = *(__int16 *)(v267 + 2 * (v275 & 0x3FF));
            if ( v64 <= -1 )
            {
              if ( v276 >= 0xB )
              {
                v71 = 12;
                do
                {
                  v72 = ((v275 >> ((v71 - 2) & 0x1F)) & 1) + ~v64;
                  if ( v72 >> 6 > 8 )
LABEL_494:
                    core::panicking::panic_bounds_check(v72, 576, (int)&off_2E2224);
                  v64 = *(__int16 *)(v8 + 2 * v72 + 9024);
                  if ( v64 > -1 )
                    break;
                  v65 = v276 >= v71++;
                }
                while ( v65 );
                if ( v64 > -1 )
                  goto LABEL_116;
              }
            }
            else
            {
              v65 = (unsigned __int16)v64 >= 0x200u;
              if ( (unsigned __int16)v64 >= 0x200u )
                v65 = v276 >= v64 >> 9;
              if ( v65 )
                goto LABEL_116;
            }
            if ( v9 == v13 )
              goto LABEL_453;
            v73 = *v9;
            v70 = v276 + 8;
            v276 += 8;
            v63 = v275 | (v73 << (v62 & 0x1F));
            v275 = v63;
            if ( v62 <= 6 )
            {
              v74 = *(__int16 *)(v267 + 2 * (v63 & 0x3FF));
              if ( v74 <= -1 )
              {
                if ( v62 < 3 )
                  goto LABEL_125;
                v76 = 12;
                do
                {
                  v72 = ((v63 >> ((v76 - 2) & 0x1F)) & 1) + ~v74;
                  if ( v72 >> 6 > 8 )
                    goto LABEL_494;
                  v74 = *(__int16 *)(v8 + 2 * v72 + 9024);
                  if ( v74 > -1 )
                    break;
                  v65 = v70 >= v76++;
                }
                while ( v65 );
                v60 = (size_t *)v268;
                if ( v74 <= -1 )
                  goto LABEL_125;
              }
              else
              {
                v75 = (unsigned __int16)v74 >= 0x200u;
                if ( (unsigned __int16)v74 >= 0x200u )
                  v75 = v70 >= v74 >> 9;
                if ( !v75 )
                {
LABEL_125:
                  if ( v9 + 1 == v13 )
                    goto LABEL_453;
                  v80 = v9[1];
                  v62 += 16;
                  v9 += 2;
                  v276 = v62;
                  v63 |= v80 << (v70 & 0x1F);
                  v275 = v63;
                  goto LABEL_116;
                }
              }
            }
            ++v9;
          }
          v62 = v70;
        }
LABEL_116:
        v18 = *(__int16 *)(v267 + 2 * (v63 & 0x3FF));
        if ( (v18 & 0x80000000) != 0 )
        {
          v77 = 10;
          do
          {
            v78 = ((v63 >> (v77 & 0x1F)) & 1) + ~v18;
            if ( v78 >> 6 > 8 )
              core::panicking::panic_bounds_check(v78, 576, (int)&off_2E2204);
            ++v77;
            v18 = *(__int16 *)(v8 + 2 * v78 + 9024);
          }
          while ( (int)v18 <= -1 );
        }
        else
        {
          v77 = (int)v18 >> 9;
          v18 &= 0x1FFu;
        }
        if ( !v77 )
        {
          LOBYTE(v17) = 34;
          continue;
        }
        v276 = v62 - v77;
        v277 = v18;
        v275 = v63 >> (v77 & 0x1F);
        if ( v18 >= 0x10 )
        {
          v158 = n == 0;
          if ( !n )
          {
            LOBYTE(v17) = 31;
            v158 = v18 == 16;
          }
          if ( !v158 )
          {
            v282 = 7;
            v281 = 3;
            v280 = 2;
            v159 = v18 - 16;
            if ( v18 - 16 > 2 )
              core::panicking::panic_bounds_check(v159, 3, (int)&off_2E2514);
            v18 = (unsigned int)&v280;
            LOBYTE(v17) = 11;
            v279 = *(&v280 + v159);
          }
          continue;
        }
        if ( n > 0x1C8 )
          core::panicking::panic_bounds_check(n, 457, (int)&off_2E2504);
        v79 = v8 + n++;
        LOBYTE(v55) = 0;
        *(_BYTE *)(v79 + 10524) = v18;
        goto LABEL_76;
      case 11:
        v81 = v276;
        v82 = v275;
        if ( v276 >= v279 )
          goto LABEL_131;
        while ( v9 != v13 )
        {
          v83 = *v9++;
          v276 = v81 + 8;
          v65 = v81 + 8 >= v279;
          v82 |= v83 << (v81 & 0x1F);
          v81 += 8;
          v275 = v82;
          if ( v65 )
          {
LABEL_131:
            v276 = v81 - v279;
            v275 = v82 >> (v279 & 0x1F);
            v282 = 11;
            v281 = 3;
            v280 = 3;
            if ( (v277 & 3) == 3 )
              core::panicking::panic_bounds_check(3, 3, (int)&off_2E2524);
            v18 = 0;
            if ( v277 == 16 )
            {
              if ( n - 1 > 0x1C8 )
                core::panicking::panic_bounds_check(n - 1, 457, (int)&off_2E2534);
              v18 = *(unsigned __int8 *)(v8 + n - 1 + 10524);
            }
            v84 = *(&v280 + (v277 & 3)) + (v82 & ~(-1 << (v279 & 0x1F)));
            v85 = n + v84;
            if ( __CFADD__(n, v84) )
              core::slice::index::slice_index_order_fail();
            if ( v85 >> 1 > 0xE4 )
              core::slice::index::slice_end_index_len_fail();
            v86 = v11;
            if ( v84 )
              memset(&srca[n], v18, v84);
            n = v85;
            LOBYTE(v17) = 10;
            v11 = v86;
            goto LABEL_12;
          }
        }
        goto LABEL_453;
      case 12:
        v87 = v13 - v9;
        v88 = (unsigned int)(v13 - v9) >= 4;
        if ( (unsigned int)(v13 - v9) >= 4 )
        {
          v18 = a6 - v11;
          v88 = a6 - v11 >= 2;
        }
        if ( !v88 )
          goto LABEL_143;
        do
        {
          v92 = v18 > 0x103;
          if ( v18 >= 0x103 )
            v92 = v87 > 0xD;
          if ( v92 )
          {
            v253 = v13;
            v188 = v275;
            v189 = v276;
            v190 = n;
            v250 = v277;
            v249 = v279;
LABEL_329:
            LOBYTE(v17) = 12;
            if ( (unsigned int)(v253 - v9) < 0xE )
              goto LABEL_451;
            while ( 1 )
            {
              if ( v189 < 0xF )
              {
                v191 = *(unsigned __int16 *)v9;
                v9 += 2;
                v188 |= v191 << v189;
                v189 += 16;
              }
              v192 = *(__int16 *)(v8 + 2 * (v188 & 0x3FF));
              if ( v192 <= -1 )
                break;
              if ( (unsigned __int16)v192 < 0x200u )
                goto LABEL_489;
              v18 = (unsigned int)v192 >> 9;
LABEL_338:
              v190 = v192;
              v189 -= v18;
              v188 >>= v18 & 0x1F;
              if ( (v192 & 0x100) != 0 )
                goto LABEL_355;
              if ( v189 < 0xF )
              {
                v18 = v253 - v9;
                if ( (unsigned int)(v253 - v9) <= 1 )
                  goto LABEL_512;
                v193 = *(unsigned __int16 *)v9;
                v9 += 2;
                v188 |= v193 << v189;
                v189 += 16;
              }
              v194 = *(__int16 *)(v8 + 2 * (v188 & 0x3FF));
              if ( v194 <= -1 )
              {
                v195 = 10;
                while ( 1 )
                {
                  v98 = ((v188 >> (v195 & 0x1F)) & 1) + ~v194;
                  if ( v98 >> 6 > 8 )
                    goto LABEL_484;
                  v18 = 2048;
                  ++v195;
                  v194 = *(__int16 *)(v8 + 2 * v98 + 2048);
                  if ( v194 > -1 )
                    goto LABEL_348;
                }
              }
              if ( (unsigned __int16)v194 < 0x200u )
                goto LABEL_489;
              v195 = (unsigned int)v194 >> 9;
LABEL_348:
              if ( v11 >= a6 )
                goto LABEL_503;
              v189 -= v195;
              v188 >>= v195 & 0x1F;
              *(_BYTE *)(a5 + v11) = v190;
              v105 = v11 + 1;
              if ( (v194 & 0x100) != 0 )
              {
                ++v11;
                LOWORD(v190) = v194;
LABEL_355:
                v196 = v190 & 0x1FF;
                if ( v196 == 256 )
                {
                  v190 = 256;
                  LOBYTE(v17) = 20;
LABEL_451:
                  v279 = v249;
                  v275 = v188;
                  n = v190;
                  v277 = v250;
                  v276 = v189;
                  v13 = v253;
                  goto LABEL_12;
                }
                if ( v196 >> 1 > 0x8E )
                {
                  v190 &= 0x1FFu;
                  v273 = 32;
                  goto LABEL_491;
                }
                if ( v189 < 0xF )
                {
                  if ( (unsigned int)(v253 - v9) > 1 )
                  {
                    v197 = *(unsigned __int16 *)v9;
                    v9 += 2;
                    v188 |= v197 << v189;
                    v189 += 16;
                    goto LABEL_360;
                  }
LABEL_512:
                  core::slice::index::slice_end_index_len_fail();
                }
LABEL_360:
                v198 = ((_BYTE)v190 - 1) & 0x1F;
                v199 = (unsigned __int8)byte_2B13AB[v198];
                v200 = word_2B13EC[v198];
                v249 = v199;
                if ( v199 )
                {
                  v189 -= v199;
                  v201 = v188 & ~(-1 << (v199 & 0x1F));
                  v188 >>= v199 & 0x1F;
                  v200 += v201;
                  if ( v189 < 0xF )
                  {
                    if ( (unsigned int)(v253 - v9) <= 1 )
                      goto LABEL_512;
                    v202 = *(unsigned __int16 *)v9;
                    v9 += 2;
                    v188 |= v202 << v189;
                    v189 += 16;
                  }
                }
                v190 = v200;
                v203 = *(__int16 *)(v259 + 2 * (v188 & 0x3FF));
                if ( v203 > -1 )
                {
                  if ( (unsigned __int16)v203 < 0x200u )
                  {
LABEL_489:
                    v248 = 34;
                  }
                  else
                  {
                    v204 = (unsigned int)v203 >> 9;
LABEL_370:
                    v189 -= v204;
                    v205 = v203 & 0x1FF;
                    v188 >>= v204 & 0x1F;
                    if ( v205 > 0x1D )
                    {
                      v248 = 33;
                    }
                    else
                    {
                      v206 = byte_2B13CB[v205];
                      v250 = *((unsigned __int16 *)&off_2B142C + v205);
                      if ( byte_2B13CB[v205] )
                      {
                        if ( v189 < 0xF )
                        {
                          if ( (unsigned int)(v253 - v9) <= 1 )
                            goto LABEL_512;
                          v207 = *(unsigned __int16 *)v9;
                          v9 += 2;
                          v188 |= v207 << v189;
                          v189 += 16;
                        }
                        v189 -= v206;
                        v208 = v188 & ~(-1 << (v206 & 0x1F));
                        v188 >>= v206 & 0x1F;
                        v250 += v208;
                      }
                      v209 = v261 != 0;
                      v249 = byte_2B13CB[v205];
                      if ( (a8 & 4) != 0 )
                        v209 = v250 > v11;
                      if ( !v209 )
                      {
                        v19 = v200;
                        v210 = v11;
                        sub_234BD4(a5, a6, v11, v250, v200, v260);
                        v190 = v19;
                        v11 = v19 + v210;
                        v18 = 259;
                        v211 = a6 - (v19 + v210);
                        LOBYTE(v19) = -1;
                        v20 = 0;
                        if ( v211 < 0x103 )
                          goto LABEL_451;
                        goto LABEL_329;
                      }
                      v248 = 29;
                      LOBYTE(v19) = -1;
                      v20 = 0;
                    }
                  }
                  v273 = v248;
LABEL_491:
                  v279 = v249;
                  v275 = v188;
                  n = v190;
                  v277 = v250;
                  v276 = v189;
                  v13 = v253;
LABEL_459:
                  v234 = v272;
                  goto LABEL_460;
                }
                v204 = 10;
                while ( 1 )
                {
                  v98 = ((v188 >> (v204 & 0x1F)) & 1) + ~v203;
                  if ( v98 >> 6 > 8 )
                    break;
                  ++v204;
                  v203 = *(__int16 *)(v8 + 2 * v98 + 5536);
                  if ( v203 > -1 )
                    goto LABEL_370;
                }
LABEL_484:
                core::panicking::panic_bounds_check(v98, 576, (int)&off_2E2204);
              }
              v18 = a6;
              if ( v105 >= a6 )
                goto LABEL_500;
              v11 += 2;
              *(_BYTE *)(a5 + v105) = v194;
              v18 = 259;
              if ( a6 - v11 < 0x103 || (unsigned int)(v253 - v9) < 0xE )
                goto LABEL_451;
            }
            v18 = 10;
            while ( 1 )
            {
              v98 = ((v188 >> (v18 & 0x1F)) & 1) + ~v192;
              if ( v98 >> 6 > 8 )
                goto LABEL_484;
              ++v18;
              v192 = *(__int16 *)(v8 + 2 * v98 + 2048);
              if ( v192 > -1 )
                goto LABEL_338;
            }
          }
          v93 = v276;
          if ( v276 >= 0xF )
          {
            v95 = v275;
          }
          else
          {
            v94 = *(unsigned __int16 *)v9;
            v9 += 2;
            v18 = v276 + 16;
            v276 += 16;
            v95 = v275 | (v94 << v93);
            v93 += 16;
            v275 = v95;
          }
          v96 = *(__int16 *)(v8 + 2 * (v95 & 0x3FF));
          if ( v96 <= -1 )
          {
            v97 = 10;
            while ( 1 )
            {
              v98 = ((v95 >> (v97 & 0x1F)) & 1) + ~v96;
              if ( v98 >> 6 > 8 )
                goto LABEL_484;
              ++v97;
              v96 = *(__int16 *)(v8 + 2 * v98 + 2048);
              if ( v96 > -1 )
                goto LABEL_163;
            }
          }
          if ( (unsigned __int16)v96 < 0x200u )
          {
            LOBYTE(v17) = 34;
            goto LABEL_12;
          }
          v97 = (unsigned int)v96 >> 9;
LABEL_163:
          v18 = v97 & 0x1F;
          v99 = v93 - v97;
          LOBYTE(v17) = 21;
          v100 = v95 >> (v97 & 0x1F);
          v276 = v93 - v97;
          n = v96;
          v275 = v100;
          if ( (v96 & 0x100) != 0 )
            goto LABEL_12;
          if ( v99 >= 0xF )
          {
            v102 = v93 - v97;
          }
          else
          {
            if ( (unsigned int)(v13 - v9) <= 1 )
              goto LABEL_512;
            v101 = *(unsigned __int16 *)v9;
            v9 += 2;
            v102 = v99 + 16;
            v276 = v99 + 16;
            v100 |= v101 << v99;
            v275 = v100;
          }
          v18 = a6;
          v103 = *(__int16 *)(v8 + 2 * (v100 & 0x3FF));
          if ( v103 <= -1 )
          {
            v104 = 10;
            do
            {
              v98 = ((v100 >> (v104 & 0x1F)) & 1) + ~v103;
              if ( v98 >> 6 > 8 )
                goto LABEL_484;
              ++v104;
              v103 = *(__int16 *)(v8 + 2 * v98 + 2048);
            }
            while ( v103 <= -1 );
            v18 = a6;
          }
          else
          {
            if ( (unsigned __int16)v103 < 0x200u )
            {
              LOBYTE(v17) = 34;
              goto LABEL_12;
            }
            v104 = (unsigned int)v103 >> 9;
          }
          v276 = v102 - v104;
          v275 = v100 >> (v104 & 0x1F);
          if ( v11 >= v18 )
LABEL_498:
            core::panicking::panic_bounds_check(v11, v18, (int)&off_2E2444);
          *(_BYTE *)(a5 + v11) = v96;
          v105 = v11 + 1;
          if ( (v103 & 0x100) != 0 )
          {
            n = v103;
            ++v11;
            goto LABEL_12;
          }
          if ( v105 >= v18 )
LABEL_500:
            core::panicking::panic_bounds_check(v105, v18, (int)&off_2E2444);
          v11 += 2;
          *(_BYTE *)(a5 + v105) = v103;
          v87 = v13 - v9;
          if ( (unsigned int)(v13 - v9) < 4 )
            break;
          v18 -= v11;
          LOBYTE(v19) = -1;
          v20 = 0;
        }
        while ( v18 >= 2 );
LABEL_143:
        v18 = v276;
        if ( v276 >= 0xF )
        {
          v89 = v275;
          goto LABEL_430;
        }
        if ( v87 > 1 )
        {
          v156 = *(unsigned __int16 *)v9;
          v9 += 2;
          v157 = v276 + 16;
          v276 += 16;
          v89 = v275 | (v156 << v18);
          v275 = v89;
        }
        else
        {
          v89 = v275;
          v90 = *(__int16 *)(v8 + 2 * (v275 & 0x3FF));
          if ( v90 <= -1 )
          {
            if ( v276 >= 0xB )
            {
              v184 = 12;
              do
              {
                v161 = ((v275 >> ((v184 - 2) & 0x1F)) & 1) + ~v90;
                if ( v161 >> 6 > 8 )
                  goto LABEL_497;
                v90 = *(__int16 *)(v8 + 2 * v161 + 2048);
                if ( v90 > -1 )
                  break;
                v65 = v276 >= v184++;
              }
              while ( v65 );
              if ( v90 > -1 )
                goto LABEL_430;
            }
          }
          else
          {
            v91 = (unsigned __int16)v90 >= 0x200u;
            if ( (unsigned __int16)v90 >= 0x200u )
              v91 = v276 >= v90 >> 9;
            if ( v91 )
              goto LABEL_430;
          }
          if ( v9 == v13 )
            goto LABEL_453;
          v185 = *v9;
          v157 = v276 + 8;
          v276 += 8;
          v89 = v275 | (v185 << (v18 & 0x1F));
          v275 = v89;
          if ( v18 <= 6 )
          {
            v186 = *(__int16 *)(v8 + 2 * (v89 & 0x3FF));
            if ( v186 <= -1 )
            {
              if ( v18 < 3 )
                goto LABEL_437;
              v227 = 12;
              do
              {
                v161 = ((v89 >> ((v227 - 2) & 0x1F)) & 1) + ~v186;
                if ( v161 >> 6 > 8 )
                  goto LABEL_497;
                v186 = *(__int16 *)(v8 + 2 * v161 + 2048);
                if ( v186 > -1 )
                  break;
                v65 = v157 >= v227++;
              }
              while ( v65 );
              if ( v186 <= -1 )
                goto LABEL_437;
            }
            else
            {
              v187 = (unsigned __int16)v186 >= 0x200u;
              if ( (unsigned __int16)v186 >= 0x200u )
                v187 = v157 >= v186 >> 9;
              if ( !v187 )
              {
LABEL_437:
                if ( v9 + 1 == v13 )
                  goto LABEL_453;
                v230 = v9[1];
                v18 += 16;
                v9 += 2;
                v276 = v18;
                v89 |= v230 << (v157 & 0x1F);
                v275 = v89;
LABEL_430:
                v228 = *(__int16 *)(v8 + 2 * (v89 & 0x3FF));
                if ( v228 >= 0 )
                {
                  v229 = v228 >> 9;
                  v228 &= 0x1FFu;
LABEL_435:
                  LOBYTE(v17) = 34;
                  if ( v229 )
                  {
                    n = v228;
                    v276 = v18 - v229;
                    LOBYTE(v17) = 13;
                    v275 = v89 >> (v229 & 0x1F);
                  }
                  continue;
                }
                v229 = 10;
                while ( 1 )
                {
                  v98 = ((v89 >> (v229 & 0x1F)) & 1) + ~v228;
                  if ( v98 >> 6 > 8 )
                    goto LABEL_484;
                  ++v229;
                  v228 = *(__int16 *)(v8 + 2 * v98 + 2048);
                  if ( v228 > -1 )
                    goto LABEL_435;
                }
              }
            }
          }
          ++v9;
        }
        v18 = v157;
        goto LABEL_430;
      case 13:
        LOBYTE(v17) = 21;
        if ( n > 0xFF )
          continue;
        v18 = a6;
        if ( v11 != a6 )
        {
          if ( v11 < a6 )
          {
            v18 = a5;
            LOBYTE(v17) = 12;
            *(_BYTE *)(a5 + v11++) = n;
            continue;
          }
LABEL_503:
          core::panicking::panic_bounds_check(v11, a6, (int)&off_2E2444);
        }
        LOBYTE(v19) = 2;
        v247 = 13;
        goto LABEL_493;
      case 14:
        v106 = v275;
        v107 = v276;
        if ( v276 >= v279 )
        {
          v109 = v276;
LABEL_249:
          v276 = v109 - v279;
          v18 = n + (v106 & ~(-1 << (v279 & 0x1F)));
          n = v18;
          LOBYTE(v17) = 15;
          v275 = v106 >> (v279 & 0x1F);
          continue;
        }
        while ( v9 != v13 )
        {
          v108 = *v9++;
          v109 = v107 + 8;
          v276 = v109;
          v106 |= v108 << (v107 & 0x1F);
          v107 += 8;
          v275 = v106;
          if ( v109 >= v279 )
            goto LABEL_249;
        }
        goto LABEL_453;
      case 15:
        v110 = v276;
        v18 = v275;
        if ( v276 > 0xE )
          goto LABEL_410;
        if ( (unsigned int)(v13 - v9) >= 2 )
        {
          v144 = *(unsigned __int16 *)v9;
          v9 += 2;
          v18 = v275 | (v144 << v276);
LABEL_254:
          v275 = v18;
          v110 += 16;
          v276 = v110;
          goto LABEL_410;
        }
        v111 = *(__int16 *)(v259 + 2 * (v275 & 0x3FF));
        if ( v111 <= -1 )
        {
          if ( v276 >= 0xB )
          {
            v160 = 12;
            do
            {
              v161 = ((v275 >> ((v160 - 2) & 0x1F)) & 1) + ~v111;
              if ( v161 >> 6 > 8 )
LABEL_497:
                core::panicking::panic_bounds_check(v161, 576, (int)&off_2E2224);
              v111 = *(__int16 *)(v8 + 2 * v161 + 5536);
              if ( v111 > -1 )
                break;
              v65 = v276 >= v160++;
            }
            while ( v65 );
            if ( v111 > -1 )
              goto LABEL_410;
          }
        }
        else
        {
          v112 = (unsigned __int16)v111 >= 0x200u;
          if ( (unsigned __int16)v111 >= 0x200u )
            v112 = v276 >= v111 >> 9;
          if ( v112 )
            goto LABEL_410;
        }
        if ( v9 == v13 )
          goto LABEL_453;
        v162 = *v9;
        v163 = v276 + 8;
        v276 += 8;
        v18 = v275 | (v162 << (v110 & 0x1F));
        v275 = v18;
        if ( v110 <= 6 )
        {
          v164 = *(__int16 *)(v259 + 2 * (v18 & 0x3FF));
          if ( v164 <= -1 )
          {
            if ( v110 < 3 )
              goto LABEL_420;
            v223 = 12;
            do
            {
              v161 = ((v18 >> ((v223 - 2) & 0x1F)) & 1) + ~v164;
              if ( v161 >> 6 > 8 )
                goto LABEL_497;
              v164 = *(__int16 *)(v8 + 2 * v161 + 5536);
              if ( v164 > -1 )
                break;
              v65 = v163 >= v223++;
            }
            while ( v65 );
            if ( v164 <= -1 )
              goto LABEL_420;
          }
          else
          {
            v165 = (unsigned __int16)v164 >= 0x200u;
            if ( (unsigned __int16)v164 >= 0x200u )
              v165 = v163 >= v164 >> 9;
            if ( !v165 )
            {
LABEL_420:
              if ( v9 + 1 == v13 )
                goto LABEL_453;
              v226 = v9[1];
              v9 += 2;
              v18 |= v226 << (v163 & 0x1F);
              goto LABEL_254;
            }
          }
        }
        v110 += 8;
        ++v9;
LABEL_410:
        v224 = *(__int16 *)(v259 + 2 * (v18 & 0x3FF));
        if ( v224 < 0 )
        {
          v225 = 10;
          do
          {
            v98 = ((v18 >> (v225 & 0x1F)) & 1) + ~v224;
            if ( v98 >> 6 > 8 )
              goto LABEL_484;
            ++v225;
            v224 = *(__int16 *)(v8 + 2 * v98 + 5536);
          }
          while ( v224 <= -1 );
        }
        else
        {
          v225 = v224 >> 9;
          v224 &= 0x1FFu;
        }
        LOBYTE(v17) = 34;
        if ( v225 )
        {
          v276 = v110 - v225;
          LOBYTE(v17) = 33;
          v18 >>= v225 & 0x1F;
          v275 = v18;
          if ( v224 <= 29 )
          {
            LOBYTE(v17) = 16;
            v18 = byte_2B13CB[v224];
            v277 = *((unsigned __int16 *)&off_2B142C + v224);
            v279 = v18;
            if ( !v18 )
              LOBYTE(v17) = 22;
          }
        }
        continue;
      case 16:
        v113 = v275;
        v114 = v276;
        if ( v276 >= v279 )
        {
          v116 = v276;
LABEL_251:
          v276 = v116 - v279;
          v18 = v277 + (v113 & ~(-1 << (v279 & 0x1F)));
          v277 = v18;
          LOBYTE(v17) = 22;
          v275 = v113 >> (v279 & 0x1F);
          continue;
        }
        while ( v9 != v13 )
        {
          v115 = *v9++;
          v116 = v114 + 8;
          v276 = v116;
          v113 |= v115 << (v114 & 0x1F);
          v114 += 8;
          v275 = v113;
          if ( v116 >= v279 )
            goto LABEL_251;
        }
        goto LABEL_453;
      case 17:
        v117 = v276;
        v118 = v275;
        if ( v276 > 7 )
          goto LABEL_204;
        if ( v9 == v13 )
          goto LABEL_453;
        v119 = *v9++;
        v118 = v275 | (v119 << v276);
        v117 = v276 + 8;
LABEL_204:
        v276 = v117 - 8;
        v18 = (unsigned __int8)v118;
        v277 = (unsigned __int8)v118;
        LOBYTE(v17) = 18;
        v275 = v118 >> 8;
        continue;
      case 18:
        v18 = a6;
        if ( v11 == a6 )
        {
          LOBYTE(v19) = 2;
          v247 = 18;
LABEL_493:
          v273 = v247;
          v11 = v18;
          goto LABEL_459;
        }
        if ( v11 < a6 )
        {
          LOBYTE(v17) = 17;
          v120 = v276;
          v121 = n;
          *(_BYTE *)(a5 + v11) = v277;
          v18 = v121 - 1;
          if ( !v120 )
            LOBYTE(v17) = 6;
          n = v121 - 1;
          if ( v121 == 1 )
            LOBYTE(v17) = 6;
          ++v11;
          continue;
        }
        goto LABEL_498;
      case 19:
        v122 = n;
        v274 = v277;
        while ( v11 != a6 )
        {
          v123 = a6 - v11;
          v124 = v122;
          if ( a6 - v11 < v122 )
            v124 = a6 - v11;
          v17 = v8;
          v125 = v9;
          v126 = v11;
          sub_234870(a5, a6, (v11 - v274) & v260, v11, v124, v260);
          v11 = v124 + v126;
          v9 = v125;
          v8 = v17;
          v92 = v122 > v123;
          LOBYTE(v17) = 12;
          v122 -= v124;
          n = v122;
          if ( !v92 )
            goto LABEL_12;
        }
        v11 = a6;
        LOBYTE(v19) = 2;
        v273 = 19;
        v20 = 0;
        goto LABEL_459;
      case 20:
        LOBYTE(v17) = 3;
        if ( v272[4] )
        {
          v127 = v276;
          v128 = v9 - v13 + a4;
          v129 = v128;
          if ( v128 > v276 >> 3 )
            v129 = v276 >> 3;
          v130 = (v276 & 0xFFFFFFF8) - 8 * v129;
          v131 = v128 - v129;
          v276 = v130;
          if ( v131 > a4 )
            core::slice::index::slice_start_index_len_fail();
          LOBYTE(v17) = 24;
          v275 = (v275 >> (v127 & 7)) & ~(-1 << (v130 & 0x18));
          v18 = (unsigned int)v251;
          v9 = &v251[v131];
          if ( (a8 & 1) != 0 )
          {
            LOBYTE(v17) = 23;
            n = 0;
          }
        }
        continue;
      case 21:
        v132 = n;
        LOBYTE(v17) = 20;
        v18 = n & 0x1FF;
        n = v18;
        if ( v18 != 256 )
        {
          v18 >>= 1;
          LOBYTE(v17) = 32;
          if ( v18 <= 0x8E )
          {
            v133 = (v132 - 1) & 0x1F;
            v18 = (unsigned int)word_2B13EC;
            LOBYTE(v17) = 14;
            v134 = (unsigned __int8)byte_2B13AB[v133];
            v135 = word_2B13EC[v133];
            v279 = v134;
            n = v135;
            if ( !v134 )
              LOBYTE(v17) = 15;
          }
        }
        continue;
      case 22:
        if ( (a8 & 4) == 0 || (LOBYTE(v17) = 29, v11 >= v277) )
        {
          v18 = a6;
          v136 = n + v11;
          if ( n + v11 > a6 || (v137 = v260 & (v11 - v277), v65 = v137 >= v11, v18 = v137 - v11, v65) && v18 < n )
          {
            LOBYTE(v17) = 19;
            if ( !n )
              LOBYTE(v17) = 12;
          }
          else
          {
            sub_234BD4(a5, a6, v11, v277, n, v260);
            LOBYTE(v17) = 12;
            v11 = v136;
          }
        }
        continue;
      case 23:
        v138 = n;
        LOBYTE(v17) = 24;
        if ( n >= 4 )
          continue;
        v139 = v276;
        if ( v276 )
        {
          v140 = v275;
          if ( v276 <= 7 )
          {
            if ( v9 == v13 )
              goto LABEL_453;
            v141 = *v9++;
            v140 = v275 | (v141 << v276);
            v139 = v276 + 8;
          }
          v142 = v272;
          v276 = v139 - 8;
          v143 = v140 >> 8;
          v140 = (unsigned __int8)v140;
          v275 = v143;
        }
        else
        {
          if ( v9 == v13 )
            goto LABEL_453;
          v142 = v272;
          v150 = *v9++;
          v140 = v150;
        }
        v142[3] = v140 | (v142[3] << 8);
        v18 = v138 + 1;
        n = v138 + 1;
        if ( v138 > 2 )
          continue;
        v151 = v276;
        if ( v276 )
        {
          v152 = v275;
          if ( v276 <= 7 )
          {
            if ( v9 == v13 )
              goto LABEL_453;
            v153 = *v9++;
            v152 = v275 | (v153 << v276);
            v151 = v276 + 8;
          }
          v154 = v272;
          v276 = v151 - 8;
          v275 = v152 >> 8;
          v155 = (unsigned __int8)v152 | (v272[3] << 8);
        }
        else
        {
          if ( v9 == v13 )
            goto LABEL_453;
          v154 = v272;
          v178 = *v9++;
          v155 = v178 | (v272[3] << 8);
        }
        v154[3] = v155;
        v18 = v138 + 2;
        n = v138 + 2;
        if ( v138 > 1 )
          continue;
        v179 = v276;
        if ( v276 )
        {
          v180 = v275;
          if ( v276 <= 7 )
          {
            if ( v9 == v13 )
              goto LABEL_453;
            v181 = *v9++;
            v180 = v275 | (v181 << v276);
            v179 = v276 + 8;
          }
          v182 = v272;
          v276 = v179 - 8;
          v275 = v180 >> 8;
          v183 = (unsigned __int8)v180 | (v272[3] << 8);
        }
        else
        {
          if ( v9 == v13 )
            goto LABEL_453;
          v182 = v272;
          v217 = *v9++;
          v183 = v217 | (v272[3] << 8);
        }
        v182[3] = v183;
        v18 = v138 + 3;
        n = v138 + 3;
        if ( v138 )
          continue;
        v218 = v276;
        if ( v276 )
        {
          v219 = v275;
          if ( v276 <= 7 )
          {
            if ( v9 == v13 )
              goto LABEL_453;
            v220 = *v9++;
            v219 = v275 | (v220 << v276);
            v218 = v276 + 8;
          }
          v221 = v272;
          v276 = v218 - 8;
          v275 = v219 >> 8;
          v18 = (unsigned __int8)v219 | (v272[3] << 8);
        }
        else
        {
          if ( v9 == v13 )
            goto LABEL_453;
          v221 = v272;
          v233 = *v9++;
          v18 = v233 | (v272[3] << 8);
        }
        v221[3] = v18;
        n = 4;
        continue;
      case 24:
        v20 = 0;
        LOBYTE(v19) = 0;
        v273 = 24;
        goto LABEL_459;
      default:
        goto LABEL_459;
    }
  }
}
