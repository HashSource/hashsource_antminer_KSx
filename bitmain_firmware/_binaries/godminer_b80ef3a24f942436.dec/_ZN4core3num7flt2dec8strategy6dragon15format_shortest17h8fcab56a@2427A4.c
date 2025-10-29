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
  unsigned int v48; // r0
  unsigned int v49; // r10
  _DWORD *v50; // lr
  int v51; // r1
  unsigned int v52; // r3
  unsigned int v53; // r7
  int v54; // r2
  char v55; // r12
  int *v56; // r1
  int v57; // r3
  unsigned int v58; // r2
  int *v59; // r7
  int v60; // t1
  int v61; // r3
  unsigned int v62; // r0
  int v63; // r1
  unsigned int v64; // r7
  unsigned int v65; // r6
  int v66; // r3
  int *v67; // r1
  int *v68; // r4
  int v69; // r7
  unsigned int v70; // r3
  int v71; // t1
  int v72; // r2
  unsigned int v73; // r1
  int v74; // r3
  unsigned int v75; // r2
  unsigned int v76; // r6
  int v77; // r7
  int *v78; // r0
  char v79; // r7
  unsigned int v80; // r3
  int *v81; // r4
  int v82; // t1
  bool v83; // cf
  int v84; // r0
  unsigned int v85; // r2
  unsigned int v86; // r7
  int v87; // r3
  int *v88; // r0
  int *v89; // r6
  char v90; // r3
  unsigned int v91; // r1
  int v92; // t1
  char v93; // cf
  unsigned int v94; // r2
  unsigned int v95; // r0
  int v96; // r0
  _DWORD *v97; // r5
  unsigned int v98; // r1
  unsigned int v99; // r2
  int v100; // r7
  int *v101; // r6
  char v102; // r4
  unsigned int v103; // r2
  _DWORD *v104; // r3
  int v105; // t1
  char v106; // cf
  int v107; // r2
  unsigned int v108; // r6
  unsigned int v109; // r3
  int v110; // r1
  bool v111; // cc
  int v112; // r1
  int v113; // r3
  int *v114; // r7
  int v115; // r2
  unsigned int v116; // r1
  int v117; // r1
  int v118; // r3
  int *v119; // r7
  int v120; // r2
  _DWORD *v121; // r2
  int v122; // r1
  unsigned int v123; // r3
  unsigned int v124; // r7
  _BYTE *v125; // r4
  __int16 v126; // r8
  unsigned int v127; // r5
  unsigned int v128; // r9
  _DWORD *v129; // r0
  unsigned int v130; // r1
  unsigned int v131; // r1
  _DWORD *v132; // r0
  unsigned int v133; // r7
  unsigned int v134; // r6
  int v135; // r3
  unsigned int v136; // r2
  _BYTE *v137; // r0
  int v138; // r1
  int v139; // r3
  const char *v141; // r0
  char **v142; // r2
  unsigned int v144; // [sp+10h] [bp-564h]
  unsigned int v145; // [sp+14h] [bp-560h]
  unsigned int v146; // [sp+18h] [bp-55Ch]
  int v149; // [sp+24h] [bp-550h]
  unsigned int n; // [sp+28h] [bp-54Ch]
  unsigned int v151; // [sp+2Ch] [bp-548h]
  unsigned int v152; // [sp+30h] [bp-544h]
  unsigned int v153; // [sp+34h] [bp-540h]
  int src[40]; // [sp+38h] [bp-53Ch] BYREF
  unsigned int v155; // [sp+D8h] [bp-49Ch]
  int v156[40]; // [sp+E0h] [bp-494h] BYREF
  unsigned int v157; // [sp+180h] [bp-3F4h]
  _DWORD v158[40]; // [sp+188h] [bp-3ECh] BYREF
  unsigned int v159; // [sp+228h] [bp-34Ch]
  _DWORD v161[40]; // [sp+230h] [bp-344h] BYREF
  unsigned int v162; // [sp+2D0h] [bp-2A4h]
  _DWORD v163[40]; // [sp+2D8h] [bp-29Ch] BYREF
  unsigned int v164; // [sp+378h] [bp-1FCh]
  _DWORD v165[40]; // [sp+380h] [bp-1F4h] BYREF
  unsigned int v166; // [sp+420h] [bp-154h]
  _DWORD v167[40]; // [sp+428h] [bp-14Ch] BYREF
  unsigned int v168; // [sp+4C8h] [bp-ACh]
  _DWORD dest[40]; // [sp+4D0h] [bp-A4h] BYREF
  unsigned int v170; // [sp+570h] [bp-4h]

  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    v141 = aAssertionFaile_32;
    v142 = &off_2EEB54;
    goto LABEL_239;
  }
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  if ( !*(_QWORD *)(a2 + 8) )
    core::panicking::panic((int)aAssertionFaile_33, 29, (int)&off_2EEB64);
  v7 = *(_DWORD *)(a2 + 16);
  v8 = *(_DWORD *)(a2 + 20);
  if ( !*(_QWORD *)(a2 + 16) )
  {
    v141 = aAssertionFaile_34;
    v142 = &off_2EEB74;
LABEL_239:
    core::panicking::panic((int)v141, 28, (int)v142);
  }
  if ( __CFADD__(__CFADD__((_DWORD)v4, v7), HIDWORD(v4)) | __CFADD__(v8, __CFADD__((_DWORD)v4, v7) + HIDWORD(v4)) )
    core::panicking::panic((int)aAssertionFaile_35, 54, (int)&off_2EEB84);
  if ( v4 < __PAIR64__(v6, v5) )
    core::panicking::panic((int)aAssertionFaile_36, 55, (int)&off_2EEB94);
  if ( a4 < 0x11 )
    core::panicking::panic((int)aAssertionFaile_37, 45, (int)&off_2EEBA4);
  v149 = *(char *)(a2 + 26);
  v153 = *(unsigned __int16 *)(a2 + 24);
  v9 = HIDWORD(v4);
  if ( HIDWORD(v4) )
    v9 = HIDWORD(v4);
  src[0] = v4;
  src[1] = v9;
  v10 = 2;
  if ( !HIDWORD(v4) )
    v10 = 1;
  v11 = 2;
  v155 = v10;
  memset(&src[2], 0, 0x98u);
  v12 = 2;
  if ( !v6 )
    v12 = 1;
  v13 = v156;
  v157 = v12;
  v156[1] = v6;
  v156[0] = v5;
  memset(&v156[2], 0, 0x98u);
  v14 = v8;
  if ( v8 )
    v14 = v8;
  v15 = v158;
  v158[1] = v14;
  if ( !v8 )
    v11 = 1;
  v159 = v11;
  v158[0] = v7;
  memset(&v158[2], 0, 0x98u);
  memset(&v161[1], 0, 0x9Cu);
  LOWORD(v16) = 19778;
  v17 = __clz(v4 + v7 - 1) + 32;
  if ( (v4 + __PAIR64__(v8, v7) - 1) >> 32 )
    v17 = __clz((v4 + __PAIR64__(v8, v7) - 1) >> 32);
  HIWORD(v16) = 19728;
  v18 = (int)((__int16)v153 - v17) * (__int64)v16 + 0x1344135080LL;
  v162 = 1;
  v161[0] = 1;
  v19 = WORD2(v18);
  if ( (v153 & 0x8000u) != 0 )
  {
    core::num::bignum::Big32x40::mul_pow2(v161, (__int16)-(__int16)v153);
    if ( SWORD2(v18) > -1 )
      goto LABEL_21;
  }
  else
  {
    core::num::bignum::Big32x40::mul_pow2(src, v153);
    core::num::bignum::Big32x40::mul_pow2(v156, v153);
    core::num::bignum::Big32x40::mul_pow2(v158, v153);
    if ( SWORD2(v18) > -1 )
    {
LABEL_21:
      v20 = v161;
      v21 = WORD2(v18);
      goto LABEL_24;
    }
  }
  core::num::flt2dec::strategy::dragon::mul_pow10(src, -WORD2(v18));
  core::num::flt2dec::strategy::dragon::mul_pow10(v156, -WORD2(v18));
  v20 = v158;
  v21 = -WORD2(v18);
LABEL_24:
  core::num::flt2dec::strategy::dragon::mul_pow10(v20, v21);
  v22 = dest;
  v23 = src;
  v24 = v155;
  memcpy(dest, src, sizeof(dest));
  v25 = v159;
  v170 = v155;
  v26 = v159;
  if ( v155 > v159 )
    v26 = v155;
  if ( v26 > 0x28 )
    goto LABEL_232;
  if ( v26 )
  {
    v27 = v26;
    LOBYTE(v28) = 0;
    do
    {
      v29 = *v15++;
      v83 = __CFADD__((v28 & 1) != 0, *v22);
      v30 = ((v28 & 1) != 0) + *v22;
      *v22++ = v29 + v30;
      v28 = v83 | __CFADD__(v29, v30);
      --v27;
    }
    while ( v27 );
    v31 = v149;
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
    v31 = v149;
  }
  v32 = v162;
  v170 = v26;
  if ( v162 > v26 )
    v26 = v162;
  if ( v26 >= 0x29 )
LABEL_232:
    core::slice::index::slice_end_index_len_fail();
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
    v34 = *(_DWORD *)((char *)v161 - v33);
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
    core::slice::index::slice_end_index_len_fail();
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
      core::panicking::panic_bounds_check(v25, 40, (int)&off_2EF600);
    }
  }
  else
  {
    v24 = 0;
  }
LABEL_53:
  v40 = v157;
  v155 = v24;
  if ( v157 >= 0x29 )
    goto LABEL_233;
  if ( v157 )
  {
    v41 = 4 * v157;
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
      v156[v40++] = v43;
    }
  }
  else
  {
    v40 = 0;
  }
  v157 = v40;
  if ( v25 >= 0x29 )
    goto LABEL_197;
  if ( v25 )
  {
    v44 = v158;
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
      v158[v25++] = v47;
    }
  }
  else
  {
    v25 = 0;
  }
  v159 = v25;
LABEL_70:
  memcpy(v163, v161, sizeof(v163));
  v164 = v32;
  core::num::bignum::Big32x40::mul_pow2(v163, 1u);
  memcpy(v165, v161, sizeof(v165));
  v166 = v162;
  core::num::bignum::Big32x40::mul_pow2(v165, 2u);
  memcpy(v167, v161, sizeof(v167));
  v168 = v162;
  core::num::bignum::Big32x40::mul_pow2(v167, 3u);
  v48 = v168;
  v49 = v155;
  v144 = v168;
  if ( v155 > v168 )
    v48 = v155;
  if ( v48 > 0x28 )
LABEL_197:
    core::slice::index::slice_end_index_len_fail();
  v151 = v162;
  v50 = dest;
  v145 = v164;
  v146 = v166;
  v152 = 0;
  while ( 1 )
  {
    n = v152;
    v51 = 4 - 4 * v48;
    do
    {
      if ( v51 == 4 )
        goto LABEL_80;
      v52 = *(int *)((char *)src - v51);
      v53 = *(_DWORD *)((char *)v167 - v51);
      v51 += 4;
      v54 = v53 != v52;
      if ( v53 > v52 )
        v54 = -1;
    }
    while ( !v54 );
    v55 = 0;
    if ( (unsigned __int8)v54 <= 1u )
    {
LABEL_80:
      if ( v48 )
      {
        v56 = src;
        LOBYTE(v57) = 1;
        v58 = v48;
        v59 = v167;
        do
        {
          v60 = *v59++;
          v83 = __CFADD__((v57 & 1) != 0, *v56);
          v61 = ((v57 & 1) != 0) + *v56;
          *v56++ = ~v60 + v61;
          v57 = v83 | __CFADD__(~v60, v61);
          --v58;
        }
        while ( v58 );
        v50 = dest;
        if ( !v57 )
LABEL_235:
          core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2EF600);
      }
      v55 = 8;
      v49 = v48;
      v155 = v48;
    }
    v62 = v146;
    if ( v49 > v146 )
      v62 = v49;
    if ( v62 >= 0x29 )
      goto LABEL_197;
    v63 = 4 - 4 * v62;
    do
    {
      if ( v63 == 4 )
        goto LABEL_94;
      v64 = *(int *)((char *)src - v63);
      v65 = *(_DWORD *)((char *)v165 - v63);
      v63 += 4;
      v66 = v65 != v64;
      if ( v65 > v64 )
        v66 = -1;
    }
    while ( !v66 );
    if ( (unsigned __int8)v66 > 1u )
    {
      v62 = v49;
    }
    else
    {
LABEL_94:
      if ( v62 )
      {
        v67 = src;
        v68 = v165;
        LOBYTE(v69) = 1;
        v70 = v62;
        do
        {
          v71 = *v68++;
          v72 = ~v71 + ((v69 & 1) != 0) + *v67;
          v69 = __CFADD__((v69 & 1) != 0, *v67) | __CFADD__(~v71, ((v69 & 1) != 0) + *v67);
          *v67++ = v72;
          --v70;
        }
        while ( v70 );
        v50 = dest;
        if ( !v69 )
          goto LABEL_235;
      }
      v55 |= 4u;
      v155 = v62;
    }
    v73 = v145;
    if ( v62 > v145 )
      v73 = v62;
    if ( v73 >= 0x29 )
      goto LABEL_233;
    v74 = 4 - 4 * v73;
    do
    {
      if ( v74 == 4 )
        goto LABEL_110;
      v75 = *(int *)((char *)src - v74);
      v76 = *(_DWORD *)((char *)v163 - v74);
      v74 += 4;
      v77 = v76 != v75;
      if ( v76 > v75 )
        v77 = -1;
    }
    while ( !v77 );
    if ( (unsigned __int8)v77 > 1u )
    {
      v73 = v62;
    }
    else
    {
LABEL_110:
      if ( v73 )
      {
        v78 = src;
        v79 = 1;
        v80 = v73;
        v81 = v163;
        do
        {
          v82 = *v81++;
          v83 = __CFADD__((v79 & 1) != 0, *v78) | __CFADD__(~v82, ((v79 & 1) != 0) + *v78);
          *v78++ += ~v82 + ((v79 & 1) != 0);
          v79 = v83;
          --v80;
        }
        while ( v80 );
        v50 = dest;
        if ( !v83 )
          goto LABEL_235;
      }
      v55 += 2;
      v155 = v73;
    }
    v49 = v151;
    if ( v73 > v151 )
      v49 = v73;
    if ( v49 >= 0x29 )
LABEL_234:
      core::slice::index::slice_end_index_len_fail();
    v84 = 4 - 4 * v49;
    do
    {
      if ( v84 == 4 )
        goto LABEL_126;
      v85 = *(int *)((char *)src - v84);
      v86 = *(_DWORD *)((char *)v161 - v84);
      v84 += 4;
      v87 = v86 != v85;
      if ( v86 > v85 )
        v87 = -1;
    }
    while ( !v87 );
    if ( (unsigned __int8)v87 > 1u )
    {
      v49 = v73;
    }
    else
    {
LABEL_126:
      if ( v49 )
      {
        v88 = src;
        v89 = v161;
        v90 = 1;
        v91 = v49;
        do
        {
          v92 = *v89++;
          v93 = __CFADD__((v90 & 1) != 0, *v88) | __CFADD__(~v92, ((v90 & 1) != 0) + *v88);
          *v88++ += ~v92 + ((v90 & 1) != 0);
          v90 = v93;
          --v91;
        }
        while ( v91 );
        if ( !v93 )
          goto LABEL_235;
      }
      ++v55;
      v155 = v49;
    }
    if ( n == a4 )
      core::panicking::panic_bounds_check(a4, a4, (int)&off_2EEBB4);
    v94 = v157;
    v111 = v49 > v157;
    v153 = v157;
    a3[n] = v55 + 48;
    v95 = v94;
    if ( v111 )
      v95 = v49;
    if ( v95 >= 0x29 )
      goto LABEL_197;
    v152 = n + 1;
    v96 = 4 - 4 * v95;
    v97 = v50;
    while ( v96 != 4 )
    {
      v98 = *(int *)((char *)src - v96);
      v99 = *(int *)((char *)v156 - v96);
      v96 += 4;
      v100 = v99 != v98;
      if ( v99 > v98 )
        v100 = -1;
      if ( v100 )
        goto LABEL_144;
    }
    LOBYTE(v100) = 0;
LABEL_144:
    memcpy(v50, src, 0xA0u);
    v25 = v159;
    v170 = v49;
    v26 = v159;
    if ( v49 > v159 )
      v26 = v49;
    if ( v26 > 0x28 )
      goto LABEL_232;
    if ( v26 )
    {
      v101 = v158;
      v102 = 0;
      v103 = v26;
      v104 = v97;
      do
      {
        v105 = *v101++;
        v106 = __CFADD__((v102 & 1) != 0, *v104) | __CFADD__(v105, ((v102 & 1) != 0) + *v104);
        *v104++ += v105 + ((v102 & 1) != 0);
        v102 = v106;
        --v103;
      }
      while ( v103 );
      if ( v106 )
      {
        v97 = dest;
        if ( v26 > 0x27 )
          goto LABEL_225;
        dest[v26++] = 1;
      }
      else
      {
        v97 = dest;
      }
    }
    else
    {
      v26 = 0;
    }
    v170 = v26;
    if ( v151 > v26 )
      v26 = v151;
    if ( v26 >= 0x29 )
      goto LABEL_232;
    v107 = 4 - 4 * v26;
    while ( v107 != 4 )
    {
      v108 = *(_DWORD *)((char *)v97 - v107);
      v109 = *(_DWORD *)((char *)v161 - v107);
      v107 += 4;
      v110 = v108 != v109;
      if ( v108 > v109 )
        v110 = -1;
      if ( v110 )
        goto LABEL_165;
    }
    LOBYTE(v110) = 0;
LABEL_165:
    v111 = (char)v100 < v149;
    if ( (char)v100 >= v149 )
      v111 = (char)v110 < v149;
    if ( v111 )
      break;
    if ( v49 >= 0x29 )
      goto LABEL_234;
    v50 = v97;
    if ( v49 )
    {
      v112 = 4 * v49;
      v113 = 0;
      v114 = src;
      do
      {
        v112 -= 4;
        v115 = (10LL * (unsigned int)*v114 + (unsigned __int64)(unsigned int)v113) >> 32;
        *v114 = 10 * *v114 + v113;
        ++v114;
        v113 = v115;
      }
      while ( v112 );
      v116 = v153;
      if ( v115 )
      {
        if ( v49 > 0x27 )
        {
          v25 = v49;
          goto LABEL_230;
        }
        src[v49++] = v115;
      }
    }
    else
    {
      v49 = 0;
      v116 = v153;
    }
    v155 = v49;
    if ( v116 >= 0x29 )
      goto LABEL_233;
    if ( v116 )
    {
      v117 = 4 * v116;
      v118 = 0;
      v119 = v156;
      do
      {
        v117 -= 4;
        v120 = (10LL * (unsigned int)*v119 + (unsigned __int64)(unsigned int)v118) >> 32;
        *v119 = 10 * *v119 + v118;
        ++v119;
        v118 = v120;
      }
      while ( v117 );
      if ( v120 )
      {
        v40 = v153;
        if ( v153 > 0x27 )
          goto LABEL_226;
        v156[v153] = v120;
        v157 = v40 + 1;
        if ( v25 >= 0x29 )
          goto LABEL_197;
      }
      else
      {
        v157 = v153;
        if ( v25 >= 0x29 )
          goto LABEL_197;
      }
    }
    else
    {
      v157 = 0;
      if ( v25 >= 0x29 )
        goto LABEL_197;
    }
    if ( v25 )
    {
      v121 = v158;
      v122 = 4 * v25;
      v123 = 0;
      do
      {
        v122 -= 4;
        v124 = (10LL * (unsigned int)*v121 + (unsigned __int64)v123) >> 32;
        *v121 = 10 * *v121 + v123;
        ++v121;
        v123 = v124;
      }
      while ( v122 );
      if ( v124 )
      {
        if ( v25 > 0x27 )
          goto LABEL_230;
        v158[v25++] = v124;
      }
    }
    else
    {
      v25 = 0;
    }
    v159 = v25;
    v48 = v144;
    if ( v49 > v144 )
      v48 = v49;
    if ( v48 > 0x28 )
      goto LABEL_197;
  }
  if ( (char)v110 >= v149 )
  {
    v125 = a3;
    v126 = v19;
    v127 = v152;
    v128 = a4;
    goto LABEL_221;
  }
  v125 = a3;
  v126 = v19;
  v127 = v152;
  v128 = a4;
  if ( (char)v100 < v149 )
  {
    v129 = core::num::bignum::Big32x40::mul_pow2(src, 1u);
    v130 = v162;
    if ( v155 > v162 )
      v130 = v155;
    if ( v130 < 0x29 )
    {
      v131 = -4 * v130;
      v132 = v129 - 1;
      while ( v131 )
      {
        v133 = v132[v131 / 0xFFFFFFFC];
        v134 = v161[v131 / 0xFFFFFFFC - 1];
        v131 += 4;
        v135 = v134 != v133;
        if ( v134 > v133 )
          v135 = -1;
        if ( v135 )
        {
          if ( (unsigned __int8)v135 < 2u )
            goto LABEL_211;
          goto LABEL_221;
        }
      }
      goto LABEL_211;
    }
LABEL_233:
    core::slice::index::slice_end_index_len_fail();
  }
LABEL_211:
  v136 = n;
  if ( n >= a4 )
    core::slice::index::slice_end_index_len_fail();
  v137 = &a3[n];
  v138 = 0;
  while ( n + v138 != -1 )
  {
    v139 = (unsigned __int8)v137[v138--];
    if ( v139 != 57 )
    {
      ++a3[n + 1 + v138];
      if ( n >= n + v138 + 2 )
        memset(&v137[v138 + 2], 48, ~v138);
      goto LABEL_221;
    }
  }
  *a3 = 49;
  if ( n )
  {
    memset(a3 + 1, 48, n);
    v136 = n;
  }
  if ( v127 >= a4 )
    core::panicking::panic_bounds_check(v127, a4, (int)&off_2EEBD4);
  v126 = v19 + 1;
  a3[v127] = 48;
  v127 = v136 + 2;
LABEL_221:
  if ( v127 > v128 )
    core::slice::index::slice_end_index_len_fail();
  *(_DWORD *)a1 = v125;
  *(_DWORD *)(a1 + 4) = v127;
  *(_WORD *)(a1 + 8) = v126;
  return a1;
}
