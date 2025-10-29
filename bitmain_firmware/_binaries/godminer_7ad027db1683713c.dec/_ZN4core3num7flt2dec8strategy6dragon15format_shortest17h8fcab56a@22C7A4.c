int __fastcall core::num::flt2dec::strategy::dragon::format_shortest(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int64 v4; // r8
  int v5; // r4
  int v6; // r7
  unsigned int v7; // r6
  unsigned int v8; // r11
  int v9; // r0
  int v10; // r0
  int v11; // r5
  int v12; // r0
  int *v13; // r10
  unsigned int v14; // r0
  int *v15; // r4
  int v16; // r3
  unsigned int v17; // r2
  __int64 v18; // kr00_8
  __int16 v19; // r11
  int *v20; // r0
  __int16 v21; // r1
  _DWORD *v22; // r6
  int *v23; // r5
  unsigned int v24; // r9
  unsigned int v25; // r0
  unsigned int v26; // r12
  unsigned int v27; // r3
  int v28; // r1
  int v29; // t1
  int v30; // r1
  int v31; // lr
  unsigned int v32; // r8
  int v33; // r1
  unsigned int v34; // r3
  unsigned int v35; // r7
  int v36; // r2
  int v37; // r1
  int v38; // r2
  int v39; // r6
  unsigned int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r5
  _DWORD *v44; // r2
  int v45; // r1
  unsigned int v46; // r3
  unsigned int v47; // r6
  unsigned int v48; // r10
  _DWORD *v49; // lr
  int v50; // r1
  unsigned int v51; // r3
  unsigned int v52; // r7
  int v53; // r2
  char v54; // r12
  int *v55; // r1
  int v56; // r3
  unsigned int v57; // r2
  int *v58; // r7
  int v59; // t1
  int v60; // r3
  int v61; // r1
  unsigned int v62; // r7
  unsigned int v63; // r6
  int v64; // r3
  int *v65; // r1
  int *v66; // r4
  int v67; // r7
  unsigned int v68; // r3
  int v69; // t1
  int v70; // r2
  int v71; // r3
  unsigned int v72; // r2
  unsigned int v73; // r6
  int v74; // r7
  int *v75; // r0
  char v76; // r7
  unsigned int v77; // r3
  int *v78; // r4
  int v79; // t1
  bool v80; // cf
  int v81; // r0
  unsigned int v82; // r2
  unsigned int v83; // r7
  int v84; // r3
  int *v85; // r0
  int *v86; // r6
  char v87; // r3
  unsigned int v88; // r1
  int v89; // t1
  char v90; // cf
  unsigned int v91; // r2
  int v92; // r0
  _DWORD *v93; // r5
  unsigned int v94; // r1
  unsigned int v95; // r2
  int v96; // r7
  int *v97; // r6
  char v98; // r4
  unsigned int v99; // r2
  _DWORD *v100; // r3
  int v101; // t1
  char v102; // cf
  int v103; // r2
  unsigned int v104; // r6
  unsigned int v105; // r3
  int v106; // r1
  bool v107; // cc
  int v108; // r1
  int v109; // r3
  int *v110; // r7
  int v111; // r2
  int v112; // r1
  int v113; // r3
  int *v114; // r7
  int v115; // r2
  _DWORD *v116; // r2
  int v117; // r1
  unsigned int v118; // r3
  unsigned int v119; // r7
  _BYTE *v120; // r4
  __int16 v121; // r8
  unsigned int v122; // r5
  unsigned int v123; // r9
  _DWORD *v124; // r0
  unsigned int v125; // r1
  _DWORD *v126; // r0
  unsigned int v127; // r7
  unsigned int v128; // r6
  int v129; // r3
  unsigned int v130; // r2
  _BYTE *v131; // r0
  int v132; // r1
  int v133; // r3
  const char *v135; // r0
  char **v136; // r2
  unsigned int v138; // [sp+10h] [bp-564h]
  unsigned int v139; // [sp+14h] [bp-560h]
  unsigned int v140; // [sp+18h] [bp-55Ch]
  int v143; // [sp+24h] [bp-550h]
  unsigned int n; // [sp+28h] [bp-54Ch]
  unsigned int v145; // [sp+2Ch] [bp-548h]
  unsigned int v146; // [sp+30h] [bp-544h]
  unsigned int v147; // [sp+34h] [bp-540h]
  int src[40]; // [sp+38h] [bp-53Ch] BYREF
  unsigned int v149; // [sp+D8h] [bp-49Ch]
  int v150[40]; // [sp+E0h] [bp-494h] BYREF
  unsigned int v151; // [sp+180h] [bp-3F4h]
  _DWORD v152[40]; // [sp+188h] [bp-3ECh] BYREF
  unsigned int v153; // [sp+228h] [bp-34Ch]
  _DWORD v155[40]; // [sp+230h] [bp-344h] BYREF
  unsigned int v156; // [sp+2D0h] [bp-2A4h]
  _DWORD v157[40]; // [sp+2D8h] [bp-29Ch] BYREF
  unsigned int v158; // [sp+378h] [bp-1FCh]
  _DWORD v159[40]; // [sp+380h] [bp-1F4h] BYREF
  unsigned int v160; // [sp+420h] [bp-154h]
  _DWORD v161[40]; // [sp+428h] [bp-14Ch] BYREF
  unsigned int v162; // [sp+4C8h] [bp-ACh]
  _DWORD dest[40]; // [sp+4D0h] [bp-A4h] BYREF
  unsigned int v164; // [sp+570h] [bp-4h]

  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    v135 = aAssertionFaile_32;
    v136 = &off_2CEB54;
    goto LABEL_239;
  }
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  if ( !*(_QWORD *)(a2 + 8) )
    core::panicking::panic((int)aAssertionFaile_33, 29, (int)&off_2CEB64);
  v7 = *(_DWORD *)(a2 + 16);
  v8 = *(_DWORD *)(a2 + 20);
  if ( !*(_QWORD *)(a2 + 16) )
  {
    v135 = aAssertionFaile_34;
    v136 = &off_2CEB74;
LABEL_239:
    core::panicking::panic((int)v135, 28, (int)v136);
  }
  if ( __CFADD__(__CFADD__((_DWORD)v4, v7), HIDWORD(v4)) | __CFADD__(v8, __CFADD__((_DWORD)v4, v7) + HIDWORD(v4)) )
    core::panicking::panic((int)aAssertionFaile_35, 54, (int)&off_2CEB84);
  if ( v4 < __PAIR64__(v6, v5) )
    core::panicking::panic((int)aAssertionFaile_36, 55, (int)&off_2CEB94);
  if ( a4 < 0x11 )
    core::panicking::panic((int)aAssertionFaile_37, 45, (int)&off_2CEBA4);
  v143 = *(char *)(a2 + 26);
  v147 = *(unsigned __int16 *)(a2 + 24);
  v9 = HIDWORD(v4);
  if ( HIDWORD(v4) )
    v9 = HIDWORD(v4);
  src[0] = v4;
  src[1] = v9;
  v10 = 2;
  if ( !HIDWORD(v4) )
    v10 = 1;
  v11 = 2;
  v149 = v10;
  memset(&src[2], 0, 0x98u);
  v12 = 2;
  if ( !v6 )
    v12 = 1;
  v13 = v150;
  v151 = v12;
  v150[1] = v6;
  v150[0] = v5;
  memset(&v150[2], 0, 0x98u);
  v14 = v8;
  if ( v8 )
    v14 = v8;
  v15 = v152;
  v152[1] = v14;
  if ( !v8 )
    v11 = 1;
  v153 = v11;
  v152[0] = v7;
  memset(&v152[2], 0, 0x98u);
  memset(&v155[1], 0, 0x9Cu);
  LOWORD(v16) = 19778;
  v17 = __clz(v4 + v7 - 1) + 32;
  if ( (v4 + __PAIR64__(v8, v7) - 1) >> 32 )
    v17 = __clz((v4 + __PAIR64__(v8, v7) - 1) >> 32);
  HIWORD(v16) = 19728;
  v18 = (int)((__int16)v147 - v17) * (__int64)v16 + 0x1344135080LL;
  v156 = 1;
  v155[0] = 1;
  v19 = WORD2(v18);
  if ( (v147 & 0x8000u) != 0 )
  {
    core::num::bignum::Big32x40::mul_pow2(v155, (__int16)-(__int16)v147);
    if ( SWORD2(v18) > -1 )
      goto LABEL_21;
  }
  else
  {
    core::num::bignum::Big32x40::mul_pow2(src, v147);
    core::num::bignum::Big32x40::mul_pow2(v150, v147);
    core::num::bignum::Big32x40::mul_pow2(v152, v147);
    if ( SWORD2(v18) > -1 )
    {
LABEL_21:
      v20 = v155;
      v21 = WORD2(v18);
      goto LABEL_24;
    }
  }
  core::num::flt2dec::strategy::dragon::mul_pow10(src, -WORD2(v18));
  core::num::flt2dec::strategy::dragon::mul_pow10(v150, -WORD2(v18));
  v20 = v152;
  v21 = -WORD2(v18);
LABEL_24:
  core::num::flt2dec::strategy::dragon::mul_pow10(v20, v21);
  v22 = dest;
  v23 = src;
  v24 = v149;
  memcpy(dest, src, sizeof(dest));
  v25 = v153;
  v164 = v149;
  v26 = v153;
  if ( v149 > v153 )
    v26 = v149;
  if ( v26 > 0x28 )
    goto LABEL_232;
  if ( v26 )
  {
    v27 = v26;
    LOBYTE(v28) = 0;
    do
    {
      v29 = *v15++;
      v80 = __CFADD__((v28 & 1) != 0, *v22);
      v30 = ((v28 & 1) != 0) + *v22;
      *v22++ = v29 + v30;
      v28 = v80 | __CFADD__(v29, v30);
      --v27;
    }
    while ( v27 );
    v31 = v143;
    if ( v28 )
    {
      if ( v26 > 0x27 )
      {
LABEL_225:
        v25 = v26;
        goto LABEL_230;
      }
      dest[v26++] = 1;
    }
  }
  else
  {
    v26 = 0;
    v31 = v143;
  }
  v32 = v156;
  v164 = v26;
  if ( v156 > v26 )
    v26 = v156;
  if ( v26 >= 0x29 )
LABEL_232:
    core::slice::index::slice_end_index_len_fail(v26, 40, (int)&off_2CF600);
  v33 = 4 - 4 * v26;
  do
  {
    if ( v33 == 4 )
    {
      if ( v31 <= 0 )
        goto LABEL_45;
LABEL_43:
      v19 = WORD2(v18) + 1;
      goto LABEL_70;
    }
    v34 = *(_DWORD *)((char *)v155 - v33);
    v35 = *(_DWORD *)((char *)dest - v33);
    v33 += 4;
    v36 = v35 != v34;
    if ( v35 > v34 )
      v36 = -1;
  }
  while ( !v36 );
  if ( (char)v36 < v31 )
    goto LABEL_43;
LABEL_45:
  if ( v24 >= 0x29 )
    core::slice::index::slice_end_index_len_fail(v24, 40, (int)&off_2CF600);
  if ( v24 )
  {
    v37 = 4 * v24;
    v38 = 0;
    do
    {
      v37 -= 4;
      v39 = (10LL * (unsigned int)*v23 + (unsigned __int64)(unsigned int)v38) >> 32;
      *v23 = 10 * *v23 + v38;
      ++v23;
      v38 = v39;
    }
    while ( v37 );
    if ( v39 )
    {
      if ( v24 <= 0x27 )
      {
        src[v24++] = v39;
        goto LABEL_53;
      }
      v25 = v24;
LABEL_230:
      core::panicking::panic_bounds_check(v25, 40, (int)&off_2CF600);
    }
  }
  else
  {
    v24 = 0;
  }
LABEL_53:
  v40 = v151;
  v149 = v24;
  if ( v151 >= 0x29 )
    goto LABEL_233;
  if ( v151 )
  {
    v41 = 4 * v151;
    v42 = 0;
    do
    {
      v41 -= 4;
      v43 = (10LL * (unsigned int)*v13 + (unsigned __int64)(unsigned int)v42) >> 32;
      *v13 = 10 * *v13 + v42;
      ++v13;
      v42 = v43;
    }
    while ( v41 );
    if ( v43 )
    {
      if ( v40 > 0x27 )
      {
LABEL_226:
        v25 = v40;
        goto LABEL_230;
      }
      v150[v40++] = v43;
    }
  }
  else
  {
    v40 = 0;
  }
  v151 = v40;
  if ( v25 >= 0x29 )
    goto LABEL_197;
  if ( v25 )
  {
    v44 = v152;
    v45 = 4 * v25;
    v46 = 0;
    do
    {
      v45 -= 4;
      v47 = (10LL * (unsigned int)*v44 + (unsigned __int64)v46) >> 32;
      *v44 = 10 * *v44 + v46;
      ++v44;
      v46 = v47;
    }
    while ( v45 );
    if ( v47 )
    {
      if ( v25 > 0x27 )
        goto LABEL_230;
      v152[v25++] = v47;
    }
  }
  else
  {
    v25 = 0;
  }
  v153 = v25;
LABEL_70:
  memcpy(v157, v155, sizeof(v157));
  v158 = v32;
  core::num::bignum::Big32x40::mul_pow2(v157, 1u);
  memcpy(v159, v155, sizeof(v159));
  v160 = v156;
  core::num::bignum::Big32x40::mul_pow2(v159, 2u);
  memcpy(v161, v155, sizeof(v161));
  v162 = v156;
  core::num::bignum::Big32x40::mul_pow2(v161, 3u);
  v25 = v162;
  v48 = v149;
  v138 = v162;
  if ( v149 > v162 )
    v25 = v149;
  if ( v25 > 0x28 )
LABEL_197:
    core::slice::index::slice_end_index_len_fail(v25, 40, (int)&off_2CF600);
  v145 = v156;
  v49 = dest;
  v139 = v158;
  v140 = v160;
  v146 = 0;
  while ( 1 )
  {
    n = v146;
    v50 = 4 - 4 * v25;
    do
    {
      if ( v50 == 4 )
        goto LABEL_80;
      v51 = *(int *)((char *)src - v50);
      v52 = *(_DWORD *)((char *)v161 - v50);
      v50 += 4;
      v53 = v52 != v51;
      if ( v52 > v51 )
        v53 = -1;
    }
    while ( !v53 );
    v54 = 0;
    if ( (unsigned __int8)v53 <= 1u )
    {
LABEL_80:
      if ( v25 )
      {
        v55 = src;
        LOBYTE(v56) = 1;
        v57 = v25;
        v58 = v161;
        do
        {
          v59 = *v58++;
          v80 = __CFADD__((v56 & 1) != 0, *v55);
          v60 = ((v56 & 1) != 0) + *v55;
          *v55++ = ~v59 + v60;
          v56 = v80 | __CFADD__(~v59, v60);
          --v57;
        }
        while ( v57 );
        v49 = dest;
        if ( !v56 )
LABEL_235:
          core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2CF600);
      }
      v54 = 8;
      v48 = v25;
      v149 = v25;
    }
    v25 = v140;
    if ( v48 > v140 )
      v25 = v48;
    if ( v25 >= 0x29 )
      goto LABEL_197;
    v61 = 4 - 4 * v25;
    do
    {
      if ( v61 == 4 )
        goto LABEL_94;
      v62 = *(int *)((char *)src - v61);
      v63 = *(_DWORD *)((char *)v159 - v61);
      v61 += 4;
      v64 = v63 != v62;
      if ( v63 > v62 )
        v64 = -1;
    }
    while ( !v64 );
    if ( (unsigned __int8)v64 > 1u )
    {
      v25 = v48;
    }
    else
    {
LABEL_94:
      if ( v25 )
      {
        v65 = src;
        v66 = v159;
        LOBYTE(v67) = 1;
        v68 = v25;
        do
        {
          v69 = *v66++;
          v70 = ~v69 + ((v67 & 1) != 0) + *v65;
          v67 = __CFADD__((v67 & 1) != 0, *v65) | __CFADD__(~v69, ((v67 & 1) != 0) + *v65);
          *v65++ = v70;
          --v68;
        }
        while ( v68 );
        v49 = dest;
        if ( !v67 )
          goto LABEL_235;
      }
      v54 |= 4u;
      v149 = v25;
    }
    v40 = v139;
    if ( v25 > v139 )
      v40 = v25;
    if ( v40 >= 0x29 )
      goto LABEL_233;
    v71 = 4 - 4 * v40;
    do
    {
      if ( v71 == 4 )
        goto LABEL_110;
      v72 = *(int *)((char *)src - v71);
      v73 = *(_DWORD *)((char *)v157 - v71);
      v71 += 4;
      v74 = v73 != v72;
      if ( v73 > v72 )
        v74 = -1;
    }
    while ( !v74 );
    if ( (unsigned __int8)v74 > 1u )
    {
      v40 = v25;
    }
    else
    {
LABEL_110:
      if ( v40 )
      {
        v75 = src;
        v76 = 1;
        v77 = v40;
        v78 = v157;
        do
        {
          v79 = *v78++;
          v80 = __CFADD__((v76 & 1) != 0, *v75) | __CFADD__(~v79, ((v76 & 1) != 0) + *v75);
          *v75++ += ~v79 + ((v76 & 1) != 0);
          v76 = v80;
          --v77;
        }
        while ( v77 );
        v49 = dest;
        if ( !v80 )
          goto LABEL_235;
      }
      v54 += 2;
      v149 = v40;
    }
    v48 = v145;
    if ( v40 > v145 )
      v48 = v40;
    if ( v48 >= 0x29 )
LABEL_234:
      core::slice::index::slice_end_index_len_fail(v48, 40, (int)&off_2CF600);
    v81 = 4 - 4 * v48;
    do
    {
      if ( v81 == 4 )
        goto LABEL_126;
      v82 = *(int *)((char *)src - v81);
      v83 = *(_DWORD *)((char *)v155 - v81);
      v81 += 4;
      v84 = v83 != v82;
      if ( v83 > v82 )
        v84 = -1;
    }
    while ( !v84 );
    if ( (unsigned __int8)v84 > 1u )
    {
      v48 = v40;
    }
    else
    {
LABEL_126:
      if ( v48 )
      {
        v85 = src;
        v86 = v155;
        v87 = 1;
        v88 = v48;
        do
        {
          v89 = *v86++;
          v90 = __CFADD__((v87 & 1) != 0, *v85) | __CFADD__(~v89, ((v87 & 1) != 0) + *v85);
          *v85++ += ~v89 + ((v87 & 1) != 0);
          v87 = v90;
          --v88;
        }
        while ( v88 );
        if ( !v90 )
          goto LABEL_235;
      }
      ++v54;
      v149 = v48;
    }
    if ( n == a4 )
      core::panicking::panic_bounds_check(a4, a4, (int)&off_2CEBB4);
    v91 = v151;
    v107 = v48 > v151;
    v147 = v151;
    a3[n] = v54 + 48;
    v25 = v91;
    if ( v107 )
      v25 = v48;
    if ( v25 >= 0x29 )
      goto LABEL_197;
    v146 = n + 1;
    v92 = 4 - 4 * v25;
    v93 = v49;
    while ( v92 != 4 )
    {
      v94 = *(int *)((char *)src - v92);
      v95 = *(int *)((char *)v150 - v92);
      v92 += 4;
      v96 = v95 != v94;
      if ( v95 > v94 )
        v96 = -1;
      if ( v96 )
        goto LABEL_144;
    }
    LOBYTE(v96) = 0;
LABEL_144:
    memcpy(v49, src, 0xA0u);
    v25 = v153;
    v164 = v48;
    v26 = v153;
    if ( v48 > v153 )
      v26 = v48;
    if ( v26 > 0x28 )
      goto LABEL_232;
    if ( v26 )
    {
      v97 = v152;
      v98 = 0;
      v99 = v26;
      v100 = v93;
      do
      {
        v101 = *v97++;
        v102 = __CFADD__((v98 & 1) != 0, *v100) | __CFADD__(v101, ((v98 & 1) != 0) + *v100);
        *v100++ += v101 + ((v98 & 1) != 0);
        v98 = v102;
        --v99;
      }
      while ( v99 );
      if ( v102 )
      {
        v93 = dest;
        if ( v26 > 0x27 )
          goto LABEL_225;
        dest[v26++] = 1;
      }
      else
      {
        v93 = dest;
      }
    }
    else
    {
      v26 = 0;
    }
    v164 = v26;
    if ( v145 > v26 )
      v26 = v145;
    if ( v26 >= 0x29 )
      goto LABEL_232;
    v103 = 4 - 4 * v26;
    while ( v103 != 4 )
    {
      v104 = *(_DWORD *)((char *)v93 - v103);
      v105 = *(_DWORD *)((char *)v155 - v103);
      v103 += 4;
      v106 = v104 != v105;
      if ( v104 > v105 )
        v106 = -1;
      if ( v106 )
        goto LABEL_165;
    }
    LOBYTE(v106) = 0;
LABEL_165:
    v107 = (char)v96 < v143;
    if ( (char)v96 >= v143 )
      v107 = (char)v106 < v143;
    if ( v107 )
      break;
    if ( v48 >= 0x29 )
      goto LABEL_234;
    v49 = v93;
    if ( v48 )
    {
      v108 = 4 * v48;
      v109 = 0;
      v110 = src;
      do
      {
        v108 -= 4;
        v111 = (10LL * (unsigned int)*v110 + (unsigned __int64)(unsigned int)v109) >> 32;
        *v110 = 10 * *v110 + v109;
        ++v110;
        v109 = v111;
      }
      while ( v108 );
      v40 = v147;
      if ( v111 )
      {
        if ( v48 > 0x27 )
        {
          v25 = v48;
          goto LABEL_230;
        }
        src[v48++] = v111;
      }
    }
    else
    {
      v48 = 0;
      v40 = v147;
    }
    v149 = v48;
    if ( v40 >= 0x29 )
      goto LABEL_233;
    if ( v40 )
    {
      v112 = 4 * v40;
      v113 = 0;
      v114 = v150;
      do
      {
        v112 -= 4;
        v115 = (10LL * (unsigned int)*v114 + (unsigned __int64)(unsigned int)v113) >> 32;
        *v114 = 10 * *v114 + v113;
        ++v114;
        v113 = v115;
      }
      while ( v112 );
      if ( v115 )
      {
        v40 = v147;
        if ( v147 > 0x27 )
          goto LABEL_226;
        v150[v147] = v115;
        v151 = v40 + 1;
        if ( v25 >= 0x29 )
          goto LABEL_197;
      }
      else
      {
        v151 = v147;
        if ( v25 >= 0x29 )
          goto LABEL_197;
      }
    }
    else
    {
      v151 = 0;
      if ( v25 >= 0x29 )
        goto LABEL_197;
    }
    if ( v25 )
    {
      v116 = v152;
      v117 = 4 * v25;
      v118 = 0;
      do
      {
        v117 -= 4;
        v119 = (10LL * (unsigned int)*v116 + (unsigned __int64)v118) >> 32;
        *v116 = 10 * *v116 + v118;
        ++v116;
        v118 = v119;
      }
      while ( v117 );
      if ( v119 )
      {
        if ( v25 > 0x27 )
          goto LABEL_230;
        v152[v25++] = v119;
      }
    }
    else
    {
      v25 = 0;
    }
    v153 = v25;
    v25 = v138;
    if ( v48 > v138 )
      v25 = v48;
    if ( v25 > 0x28 )
      goto LABEL_197;
  }
  if ( (char)v106 >= v143 )
  {
    v120 = a3;
    v121 = v19;
    v122 = v146;
    v123 = a4;
    goto LABEL_221;
  }
  v120 = a3;
  v121 = v19;
  v122 = v146;
  v123 = a4;
  if ( (char)v96 < v143 )
  {
    v124 = core::num::bignum::Big32x40::mul_pow2(src, 1u);
    v40 = v156;
    if ( v149 > v156 )
      v40 = v149;
    if ( v40 < 0x29 )
    {
      v125 = -4 * v40;
      v126 = v124 - 1;
      while ( v125 )
      {
        v127 = v126[v125 / 0xFFFFFFFC];
        v128 = v155[v125 / 0xFFFFFFFC - 1];
        v125 += 4;
        v129 = v128 != v127;
        if ( v128 > v127 )
          v129 = -1;
        if ( v129 )
        {
          if ( (unsigned __int8)v129 < 2u )
            goto LABEL_211;
          goto LABEL_221;
        }
      }
      goto LABEL_211;
    }
LABEL_233:
    core::slice::index::slice_end_index_len_fail(v40, 40, (int)&off_2CF600);
  }
LABEL_211:
  v130 = n;
  if ( n >= a4 )
    core::slice::index::slice_end_index_len_fail(v122, a4, (int)&off_2CEBC4);
  v131 = &a3[n];
  v132 = 0;
  while ( n + v132 != -1 )
  {
    v133 = (unsigned __int8)v131[v132--];
    if ( v133 != 57 )
    {
      ++a3[n + 1 + v132];
      if ( n >= n + v132 + 2 )
        memset(&v131[v132 + 2], 48, ~v132);
      goto LABEL_221;
    }
  }
  *a3 = 49;
  if ( n )
  {
    memset(a3 + 1, 48, n);
    v130 = n;
  }
  if ( v122 >= a4 )
    core::panicking::panic_bounds_check(v122, a4, (int)&off_2CEBD4);
  v121 = v19 + 1;
  a3[v122] = 48;
  v122 = v130 + 2;
LABEL_221:
  if ( v122 > v123 )
    core::slice::index::slice_end_index_len_fail(v122, v123, (int)&off_2CEBE4);
  *(_DWORD *)a1 = v120;
  *(_DWORD *)(a1 + 4) = v122;
  *(_WORD *)(a1 + 8) = v121;
  return a1;
}
