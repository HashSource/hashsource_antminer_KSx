int __fastcall core::num::flt2dec::strategy::dragon::format_shortest(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int64 v4; // r8
  unsigned int v5; // r4
  unsigned int v6; // r7
  unsigned int v7; // r6
  unsigned int v8; // r11
  int v9; // r0
  int v10; // r0
  int v11; // r5
  int v12; // r0
  _DWORD *v13; // r10
  unsigned int v14; // r0
  int *v15; // r4
  int v16; // r3
  unsigned int v17; // r2
  __int64 v18; // kr00_8
  __int16 v19; // r11
  int v20; // r2
  int v21; // r2
  _DWORD *v22; // r0
  __int16 v23; // r1
  _DWORD *v24; // r6
  _DWORD *v25; // r5
  unsigned int v26; // r9
  unsigned int v27; // r0
  unsigned int v28; // r12
  unsigned int v29; // r3
  int v30; // r1
  int v31; // t1
  int v32; // r1
  int v33; // lr
  unsigned int v34; // r8
  int v35; // r1
  unsigned int v36; // r3
  unsigned int v37; // r7
  int v38; // r2
  int v39; // r1
  unsigned int v40; // r2
  unsigned int v41; // r6
  unsigned int v42; // r1
  int v43; // r2
  unsigned int v44; // r3
  unsigned int v45; // r5
  _DWORD *v46; // r2
  int v47; // r1
  unsigned int v48; // r3
  unsigned int v49; // r6
  int v50; // r2
  int v51; // r2
  int v52; // r2
  unsigned int v53; // r0
  unsigned int v54; // r10
  _DWORD *v55; // lr
  int v56; // r1
  unsigned int v57; // r3
  unsigned int v58; // r7
  int v59; // r2
  char v60; // r12
  _DWORD *v61; // r1
  int v62; // r3
  unsigned int v63; // r2
  int *v64; // r7
  int v65; // t1
  int v66; // r3
  unsigned int v67; // r0
  int v68; // r1
  unsigned int v69; // r7
  unsigned int v70; // r6
  int v71; // r3
  int *v72; // r1
  int *v73; // r4
  int v74; // r7
  unsigned int v75; // r3
  int v76; // t1
  int v77; // r2
  unsigned int v78; // r1
  int v79; // r3
  unsigned int v80; // r2
  unsigned int v81; // r6
  int v82; // r7
  _DWORD *v83; // r0
  char v84; // r7
  unsigned int v85; // r3
  int *v86; // r4
  int v87; // t1
  bool v88; // cf
  int v89; // r0
  unsigned int v90; // r2
  unsigned int v91; // r7
  int v92; // r3
  _DWORD *v93; // r0
  int *v94; // r6
  char v95; // r3
  unsigned int v96; // r1
  int v97; // t1
  char v98; // cf
  unsigned int v99; // r2
  unsigned int v100; // r0
  int v101; // r0
  _DWORD *v102; // r5
  unsigned int v103; // r1
  unsigned int v104; // r2
  int v105; // r7
  int *v106; // r6
  char v107; // r4
  unsigned int v108; // r2
  _DWORD *v109; // r3
  int v110; // t1
  char v111; // cf
  int v112; // r2
  unsigned int v113; // r6
  unsigned int v114; // r3
  int v115; // r1
  bool v116; // cc
  int v117; // r1
  unsigned int v118; // r3
  _DWORD *v119; // r7
  unsigned int v120; // r2
  unsigned int v121; // r1
  int v122; // r1
  unsigned int v123; // r3
  _DWORD *v124; // r7
  unsigned int v125; // r2
  _DWORD *v126; // r2
  int v127; // r1
  unsigned int v128; // r3
  unsigned int v129; // r7
  _BYTE *v130; // r4
  __int16 v131; // r8
  unsigned int v132; // r5
  unsigned int v133; // r9
  int v134; // r0
  unsigned int v135; // r1
  unsigned int v136; // r1
  int v137; // r0
  unsigned int v138; // r7
  unsigned int v139; // r6
  int v140; // r3
  unsigned int v141; // r2
  _BYTE *v142; // r0
  int v143; // r1
  int v144; // r3
  const char *v146; // r0
  char **v147; // r2
  unsigned int v149; // [sp+10h] [bp-564h]
  unsigned int v150; // [sp+14h] [bp-560h]
  unsigned int v151; // [sp+18h] [bp-55Ch]
  int v154; // [sp+24h] [bp-550h]
  unsigned int n; // [sp+28h] [bp-54Ch]
  unsigned int v156; // [sp+2Ch] [bp-548h]
  unsigned int v157; // [sp+30h] [bp-544h]
  unsigned int v158; // [sp+34h] [bp-540h]
  _DWORD src[40]; // [sp+38h] [bp-53Ch] BYREF
  unsigned int v160; // [sp+D8h] [bp-49Ch]
  _DWORD v161[40]; // [sp+E0h] [bp-494h] BYREF
  unsigned int v162; // [sp+180h] [bp-3F4h]
  _DWORD v163[40]; // [sp+188h] [bp-3ECh] BYREF
  unsigned int v164; // [sp+228h] [bp-34Ch]
  _DWORD v166[40]; // [sp+230h] [bp-344h] BYREF
  unsigned int v167; // [sp+2D0h] [bp-2A4h]
  _BYTE v168[160]; // [sp+2D8h] [bp-29Ch] BYREF
  unsigned int v169; // [sp+378h] [bp-1FCh]
  _BYTE v170[160]; // [sp+380h] [bp-1F4h] BYREF
  unsigned int v171; // [sp+420h] [bp-154h]
  _BYTE v172[160]; // [sp+428h] [bp-14Ch] BYREF
  unsigned int v173; // [sp+4C8h] [bp-ACh]
  _DWORD dest[40]; // [sp+4D0h] [bp-A4h] BYREF
  unsigned int v175; // [sp+570h] [bp-4h]

  v4 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    v146 = aAssertionFaile_32;
    v147 = &off_2E4B54;
    goto LABEL_239;
  }
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  if ( !*(_QWORD *)(a2 + 8) )
    core::panicking::panic((int)aAssertionFaile_33, 29, (int)&off_2E4B64);
  v7 = *(_DWORD *)(a2 + 16);
  v8 = *(_DWORD *)(a2 + 20);
  if ( !*(_QWORD *)(a2 + 16) )
  {
    v146 = aAssertionFaile_34;
    v147 = &off_2E4B74;
LABEL_239:
    core::panicking::panic((int)v146, 28, (int)v147);
  }
  if ( __CFADD__(__CFADD__((_DWORD)v4, v7), HIDWORD(v4)) | __CFADD__(v8, __CFADD__((_DWORD)v4, v7) + HIDWORD(v4)) )
    core::panicking::panic((int)aAssertionFaile_35, 54, (int)&off_2E4B84);
  if ( v4 < __PAIR64__(v6, v5) )
    core::panicking::panic((int)aAssertionFaile_36, 55, (int)&off_2E4B94);
  if ( a4 < 0x11 )
    core::panicking::panic((int)aAssertionFaile_37, 45, (int)&off_2E4BA4);
  v154 = *(char *)(a2 + 26);
  v158 = *(unsigned __int16 *)(a2 + 24);
  v9 = HIDWORD(v4);
  if ( HIDWORD(v4) )
    v9 = HIDWORD(v4);
  src[0] = v4;
  src[1] = v9;
  v10 = 2;
  if ( !HIDWORD(v4) )
    v10 = 1;
  v11 = 2;
  v160 = v10;
  memset(&src[2], 0, 0x98u);
  v12 = 2;
  if ( !v6 )
    v12 = 1;
  v13 = v161;
  v162 = v12;
  v161[1] = v6;
  v161[0] = v5;
  memset(&v161[2], 0, 0x98u);
  v14 = v8;
  if ( v8 )
    v14 = v8;
  v15 = v163;
  v163[1] = v14;
  if ( !v8 )
    v11 = 1;
  v164 = v11;
  v163[0] = v7;
  memset(&v163[2], 0, 0x98u);
  memset(&v166[1], 0, 0x9Cu);
  LOWORD(v16) = 19778;
  v17 = __clz(v4 + v7 - 1) + 32;
  if ( (v4 + __PAIR64__(v8, v7) - 1) >> 32 )
    v17 = __clz((v4 + __PAIR64__(v8, v7) - 1) >> 32);
  HIWORD(v16) = 19728;
  v18 = (int)((__int16)v158 - v17) * (__int64)v16 + 0x1344135080LL;
  v167 = 1;
  v166[0] = 1;
  v19 = WORD2(v18);
  if ( (v158 & 0x8000u) != 0 )
  {
    core::num::bignum::Big32x40::mul_pow2(v166, (__int16)-(__int16)v158, v18);
    if ( SWORD2(v18) > -1 )
      goto LABEL_21;
  }
  else
  {
    core::num::bignum::Big32x40::mul_pow2(src, v158, v18);
    core::num::bignum::Big32x40::mul_pow2(v161, v158, v20);
    core::num::bignum::Big32x40::mul_pow2(v163, v158, v21);
    if ( SWORD2(v18) > -1 )
    {
LABEL_21:
      v22 = v166;
      v23 = WORD2(v18);
      goto LABEL_24;
    }
  }
  core::num::flt2dec::strategy::dragon::mul_pow10((int)src, -WORD2(v18));
  core::num::flt2dec::strategy::dragon::mul_pow10((int)v161, -WORD2(v18));
  v22 = v163;
  v23 = -WORD2(v18);
LABEL_24:
  core::num::flt2dec::strategy::dragon::mul_pow10((int)v22, v23);
  v24 = dest;
  v25 = src;
  v26 = v160;
  memcpy(dest, src, sizeof(dest));
  v27 = v164;
  v175 = v160;
  v28 = v164;
  if ( v160 > v164 )
    v28 = v160;
  if ( v28 > 0x28 )
    goto LABEL_232;
  if ( v28 )
  {
    v29 = v28;
    LOBYTE(v30) = 0;
    do
    {
      v31 = *v15++;
      v88 = __CFADD__((v30 & 1) != 0, *v24);
      v32 = ((v30 & 1) != 0) + *v24;
      *v24++ = v31 + v32;
      v30 = v88 | __CFADD__(v31, v32);
      --v29;
    }
    while ( v29 );
    v33 = v154;
    if ( v30 )
    {
      if ( v28 > 0x27 )
      {
LABEL_225:
        v27 = v28;
        goto LABEL_230;
      }
      dest[v28++] = 1;
    }
  }
  else
  {
    v28 = 0;
    v33 = v154;
  }
  v34 = v167;
  v175 = v28;
  if ( v167 > v28 )
    v28 = v167;
  if ( v28 >= 0x29 )
LABEL_232:
    core::slice::index::slice_end_index_len_fail();
  v35 = 4 - 4 * v28;
  do
  {
    if ( v35 == 4 )
    {
      if ( v33 <= 0 )
        goto LABEL_45;
LABEL_43:
      v19 = WORD2(v18) + 1;
      goto LABEL_70;
    }
    v36 = *(_DWORD *)((char *)v166 - v35);
    v37 = *(_DWORD *)((char *)dest - v35);
    v35 += 4;
    v38 = v37 != v36;
    if ( v37 > v36 )
      v38 = -1;
  }
  while ( !v38 );
  if ( (char)v38 < v33 )
    goto LABEL_43;
LABEL_45:
  if ( v26 >= 0x29 )
    core::slice::index::slice_end_index_len_fail();
  if ( v26 )
  {
    v39 = 4 * v26;
    v40 = 0;
    do
    {
      v39 -= 4;
      v41 = (10LL * (unsigned int)*v25 + (unsigned __int64)v40) >> 32;
      *v25 = 10 * *v25 + v40;
      ++v25;
      v40 = v41;
    }
    while ( v39 );
    if ( v41 )
    {
      if ( v26 <= 0x27 )
      {
        src[v26++] = v41;
        goto LABEL_53;
      }
      v27 = v26;
LABEL_230:
      core::panicking::panic_bounds_check(v27, 40, (int)&off_2E5600);
    }
  }
  else
  {
    v26 = 0;
  }
LABEL_53:
  v42 = v162;
  v160 = v26;
  if ( v162 >= 0x29 )
    goto LABEL_233;
  if ( v162 )
  {
    v43 = 4 * v162;
    v44 = 0;
    do
    {
      v43 -= 4;
      v45 = (10LL * (unsigned int)*v13 + (unsigned __int64)v44) >> 32;
      *v13 = 10 * *v13 + v44;
      ++v13;
      v44 = v45;
    }
    while ( v43 );
    if ( v45 )
    {
      if ( v42 > 0x27 )
      {
LABEL_226:
        v27 = v42;
        goto LABEL_230;
      }
      v161[v42++] = v45;
    }
  }
  else
  {
    v42 = 0;
  }
  v162 = v42;
  if ( v27 >= 0x29 )
    goto LABEL_197;
  if ( v27 )
  {
    v46 = v163;
    v47 = 4 * v27;
    v48 = 0;
    do
    {
      v47 -= 4;
      v49 = (10LL * (unsigned int)*v46 + (unsigned __int64)v48) >> 32;
      *v46 = 10 * *v46 + v48;
      ++v46;
      v48 = v49;
    }
    while ( v47 );
    if ( v49 )
    {
      if ( v27 > 0x27 )
        goto LABEL_230;
      v163[v27++] = v49;
    }
  }
  else
  {
    v27 = 0;
  }
  v164 = v27;
LABEL_70:
  memcpy(v168, v166, sizeof(v168));
  v169 = v34;
  core::num::bignum::Big32x40::mul_pow2(v168, 1, v50);
  memcpy(v170, v166, sizeof(v170));
  v171 = v167;
  core::num::bignum::Big32x40::mul_pow2(v170, 2, v51);
  memcpy(v172, v166, sizeof(v172));
  v173 = v167;
  core::num::bignum::Big32x40::mul_pow2(v172, 3, v52);
  v53 = v173;
  v54 = v160;
  v149 = v173;
  if ( v160 > v173 )
    v53 = v160;
  if ( v53 > 0x28 )
LABEL_197:
    core::slice::index::slice_end_index_len_fail();
  v156 = v167;
  v55 = dest;
  v150 = v169;
  v151 = v171;
  v157 = 0;
  while ( 1 )
  {
    n = v157;
    v56 = 4 - 4 * v53;
    do
    {
      if ( v56 == 4 )
        goto LABEL_80;
      v57 = *(_DWORD *)((char *)src - v56);
      v58 = *(_DWORD *)&v172[-v56];
      v56 += 4;
      v59 = v58 != v57;
      if ( v58 > v57 )
        v59 = -1;
    }
    while ( !v59 );
    v60 = 0;
    if ( (unsigned __int8)v59 <= 1u )
    {
LABEL_80:
      if ( v53 )
      {
        v61 = src;
        LOBYTE(v62) = 1;
        v63 = v53;
        v64 = (int *)v172;
        do
        {
          v65 = *v64++;
          v88 = __CFADD__((v62 & 1) != 0, *v61);
          v66 = ((v62 & 1) != 0) + *v61;
          *v61++ = ~v65 + v66;
          v62 = v88 | __CFADD__(~v65, v66);
          --v63;
        }
        while ( v63 );
        v55 = dest;
        if ( !v62 )
LABEL_235:
          core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2E5600);
      }
      v60 = 8;
      v54 = v53;
      v160 = v53;
    }
    v67 = v151;
    if ( v54 > v151 )
      v67 = v54;
    if ( v67 >= 0x29 )
      goto LABEL_197;
    v68 = 4 - 4 * v67;
    do
    {
      if ( v68 == 4 )
        goto LABEL_94;
      v69 = *(_DWORD *)((char *)src - v68);
      v70 = *(_DWORD *)&v170[-v68];
      v68 += 4;
      v71 = v70 != v69;
      if ( v70 > v69 )
        v71 = -1;
    }
    while ( !v71 );
    if ( (unsigned __int8)v71 > 1u )
    {
      v67 = v54;
    }
    else
    {
LABEL_94:
      if ( v67 )
      {
        v72 = src;
        v73 = (int *)v170;
        LOBYTE(v74) = 1;
        v75 = v67;
        do
        {
          v76 = *v73++;
          v77 = ~v76 + ((v74 & 1) != 0) + *v72;
          v74 = __CFADD__((v74 & 1) != 0, *v72) | __CFADD__(~v76, ((v74 & 1) != 0) + *v72);
          *v72++ = v77;
          --v75;
        }
        while ( v75 );
        v55 = dest;
        if ( !v74 )
          goto LABEL_235;
      }
      v60 |= 4u;
      v160 = v67;
    }
    v78 = v150;
    if ( v67 > v150 )
      v78 = v67;
    if ( v78 >= 0x29 )
      goto LABEL_233;
    v79 = 4 - 4 * v78;
    do
    {
      if ( v79 == 4 )
        goto LABEL_110;
      v80 = *(_DWORD *)((char *)src - v79);
      v81 = *(_DWORD *)&v168[-v79];
      v79 += 4;
      v82 = v81 != v80;
      if ( v81 > v80 )
        v82 = -1;
    }
    while ( !v82 );
    if ( (unsigned __int8)v82 > 1u )
    {
      v78 = v67;
    }
    else
    {
LABEL_110:
      if ( v78 )
      {
        v83 = src;
        v84 = 1;
        v85 = v78;
        v86 = (int *)v168;
        do
        {
          v87 = *v86++;
          v88 = __CFADD__((v84 & 1) != 0, *v83) | __CFADD__(~v87, ((v84 & 1) != 0) + *v83);
          *v83++ += ~v87 + ((v84 & 1) != 0);
          v84 = v88;
          --v85;
        }
        while ( v85 );
        v55 = dest;
        if ( !v88 )
          goto LABEL_235;
      }
      v60 += 2;
      v160 = v78;
    }
    v54 = v156;
    if ( v78 > v156 )
      v54 = v78;
    if ( v54 >= 0x29 )
LABEL_234:
      core::slice::index::slice_end_index_len_fail();
    v89 = 4 - 4 * v54;
    do
    {
      if ( v89 == 4 )
        goto LABEL_126;
      v90 = *(_DWORD *)((char *)src - v89);
      v91 = *(_DWORD *)((char *)v166 - v89);
      v89 += 4;
      v92 = v91 != v90;
      if ( v91 > v90 )
        v92 = -1;
    }
    while ( !v92 );
    if ( (unsigned __int8)v92 > 1u )
    {
      v54 = v78;
    }
    else
    {
LABEL_126:
      if ( v54 )
      {
        v93 = src;
        v94 = v166;
        v95 = 1;
        v96 = v54;
        do
        {
          v97 = *v94++;
          v98 = __CFADD__((v95 & 1) != 0, *v93) | __CFADD__(~v97, ((v95 & 1) != 0) + *v93);
          *v93++ += ~v97 + ((v95 & 1) != 0);
          v95 = v98;
          --v96;
        }
        while ( v96 );
        if ( !v98 )
          goto LABEL_235;
      }
      ++v60;
      v160 = v54;
    }
    if ( n == a4 )
      core::panicking::panic_bounds_check(a4, a4, (int)&off_2E4BB4);
    v99 = v162;
    v116 = v54 > v162;
    v158 = v162;
    a3[n] = v60 + 48;
    v100 = v99;
    if ( v116 )
      v100 = v54;
    if ( v100 >= 0x29 )
      goto LABEL_197;
    v157 = n + 1;
    v101 = 4 - 4 * v100;
    v102 = v55;
    while ( v101 != 4 )
    {
      v103 = *(_DWORD *)((char *)src - v101);
      v104 = *(_DWORD *)((char *)v161 - v101);
      v101 += 4;
      v105 = v104 != v103;
      if ( v104 > v103 )
        v105 = -1;
      if ( v105 )
        goto LABEL_144;
    }
    LOBYTE(v105) = 0;
LABEL_144:
    memcpy(v55, src, 0xA0u);
    v27 = v164;
    v175 = v54;
    v28 = v164;
    if ( v54 > v164 )
      v28 = v54;
    if ( v28 > 0x28 )
      goto LABEL_232;
    if ( v28 )
    {
      v106 = v163;
      v107 = 0;
      v108 = v28;
      v109 = v102;
      do
      {
        v110 = *v106++;
        v111 = __CFADD__((v107 & 1) != 0, *v109) | __CFADD__(v110, ((v107 & 1) != 0) + *v109);
        *v109++ += v110 + ((v107 & 1) != 0);
        v107 = v111;
        --v108;
      }
      while ( v108 );
      if ( v111 )
      {
        v102 = dest;
        if ( v28 > 0x27 )
          goto LABEL_225;
        dest[v28++] = 1;
      }
      else
      {
        v102 = dest;
      }
    }
    else
    {
      v28 = 0;
    }
    v175 = v28;
    if ( v156 > v28 )
      v28 = v156;
    if ( v28 >= 0x29 )
      goto LABEL_232;
    v112 = 4 - 4 * v28;
    while ( v112 != 4 )
    {
      v113 = *(_DWORD *)((char *)v102 - v112);
      v114 = *(_DWORD *)((char *)v166 - v112);
      v112 += 4;
      v115 = v113 != v114;
      if ( v113 > v114 )
        v115 = -1;
      if ( v115 )
        goto LABEL_165;
    }
    LOBYTE(v115) = 0;
LABEL_165:
    v116 = (char)v105 < v154;
    if ( (char)v105 >= v154 )
      v116 = (char)v115 < v154;
    if ( v116 )
      break;
    if ( v54 >= 0x29 )
      goto LABEL_234;
    v55 = v102;
    if ( v54 )
    {
      v117 = 4 * v54;
      v118 = 0;
      v119 = src;
      do
      {
        v117 -= 4;
        v120 = (10LL * (unsigned int)*v119 + (unsigned __int64)v118) >> 32;
        *v119 = 10 * *v119 + v118;
        ++v119;
        v118 = v120;
      }
      while ( v117 );
      v121 = v158;
      if ( v120 )
      {
        if ( v54 > 0x27 )
        {
          v27 = v54;
          goto LABEL_230;
        }
        src[v54++] = v120;
      }
    }
    else
    {
      v54 = 0;
      v121 = v158;
    }
    v160 = v54;
    if ( v121 >= 0x29 )
      goto LABEL_233;
    if ( v121 )
    {
      v122 = 4 * v121;
      v123 = 0;
      v124 = v161;
      do
      {
        v122 -= 4;
        v125 = (10LL * (unsigned int)*v124 + (unsigned __int64)v123) >> 32;
        *v124 = 10 * *v124 + v123;
        ++v124;
        v123 = v125;
      }
      while ( v122 );
      if ( v125 )
      {
        v42 = v158;
        if ( v158 > 0x27 )
          goto LABEL_226;
        v161[v158] = v125;
        v162 = v42 + 1;
        if ( v27 >= 0x29 )
          goto LABEL_197;
      }
      else
      {
        v162 = v158;
        if ( v27 >= 0x29 )
          goto LABEL_197;
      }
    }
    else
    {
      v162 = 0;
      if ( v27 >= 0x29 )
        goto LABEL_197;
    }
    if ( v27 )
    {
      v126 = v163;
      v127 = 4 * v27;
      v128 = 0;
      do
      {
        v127 -= 4;
        v129 = (10LL * (unsigned int)*v126 + (unsigned __int64)v128) >> 32;
        *v126 = 10 * *v126 + v128;
        ++v126;
        v128 = v129;
      }
      while ( v127 );
      if ( v129 )
      {
        if ( v27 > 0x27 )
          goto LABEL_230;
        v163[v27++] = v129;
      }
    }
    else
    {
      v27 = 0;
    }
    v164 = v27;
    v53 = v149;
    if ( v54 > v149 )
      v53 = v54;
    if ( v53 > 0x28 )
      goto LABEL_197;
  }
  if ( (char)v115 >= v154 )
  {
    v130 = a3;
    v131 = v19;
    v132 = v157;
    v133 = a4;
    goto LABEL_221;
  }
  v130 = a3;
  v131 = v19;
  v132 = v157;
  v133 = a4;
  if ( (char)v105 < v154 )
  {
    v134 = core::num::bignum::Big32x40::mul_pow2(src, 1, (char)v105);
    v135 = v167;
    if ( v160 > v167 )
      v135 = v160;
    if ( v135 < 0x29 )
    {
      v136 = -4 * v135;
      v137 = v134 - 4;
      while ( v136 )
      {
        v138 = *(_DWORD *)(v137 - v136);
        v139 = v166[v136 / 0xFFFFFFFC - 1];
        v136 += 4;
        v140 = v139 != v138;
        if ( v139 > v138 )
          v140 = -1;
        if ( v140 )
        {
          if ( (unsigned __int8)v140 < 2u )
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
  v141 = n;
  if ( n >= a4 )
    core::slice::index::slice_end_index_len_fail();
  v142 = &a3[n];
  v143 = 0;
  while ( n + v143 != -1 )
  {
    v144 = (unsigned __int8)v142[v143--];
    if ( v144 != 57 )
    {
      ++a3[n + 1 + v143];
      if ( n >= n + v143 + 2 )
        memset(&v142[v143 + 2], 48, ~v143);
      goto LABEL_221;
    }
  }
  *a3 = 49;
  if ( n )
  {
    memset(a3 + 1, 48, n);
    v141 = n;
  }
  if ( v157 >= a4 )
    core::panicking::panic_bounds_check(v157, a4, (int)&off_2E4BD4);
  v131 = v19 + 1;
  a3[v157] = 48;
  v132 = v141 + 2;
LABEL_221:
  if ( v132 > v133 )
    core::slice::index::slice_end_index_len_fail();
  *(_DWORD *)a1 = v130;
  *(_DWORD *)(a1 + 4) = v132;
  *(_WORD *)(a1 + 8) = v131;
  return a1;
}
