int __fastcall core::num::flt2dec::strategy::dragon::format_exact(
        int a1,
        unsigned int *a2,
        _BYTE *a3,
        unsigned int a4,
        __int16 a5)
{
  unsigned int v5; // r6
  unsigned int v7; // r5
  unsigned int v8; // r2
  unsigned int v9; // r9
  unsigned int v10; // r0
  int *v11; // r8
  int v12; // r0
  unsigned int v13; // r4
  int v14; // r3
  unsigned int v15; // r2
  __int64 v16; // kr00_8
  __int16 v17; // r9
  int *v18; // r0
  __int16 v19; // r1
  _DWORD *v20; // r11
  unsigned int v21; // r10
  unsigned int v22; // r7
  unsigned int v23; // r0
  int v24; // r1
  unsigned int v25; // r9
  int v26; // r6
  int v27; // r0
  int v28; // r5
  int v29; // r1
  unsigned int v30; // r4
  int v31; // r6
  int v32; // r0
  unsigned int v33; // r4
  unsigned int v34; // r0
  unsigned int v35; // r3
  int v36; // r7
  int v37; // t1
  int v38; // r7
  unsigned int v39; // r8
  int v40; // r5
  unsigned int v41; // r7
  unsigned int v42; // r6
  int v43; // r3
  _DWORD *v44; // r3
  int v45; // r2
  unsigned int v46; // r7
  unsigned int v47; // r5
  int v48; // r4
  int v49; // r0
  unsigned int v50; // r0
  __int16 v51; // r2
  unsigned int v52; // r9
  unsigned int *v53; // r6
  unsigned int v54; // r7
  unsigned int v55; // r1
  unsigned int v56; // r4
  int v57; // r3
  unsigned int v59; // r3
  int v60; // r1
  unsigned int v61; // r6
  unsigned int v62; // r0
  int v63; // r5
  char v64; // r8
  _DWORD *v65; // r1
  char v66; // r8
  unsigned int v67; // r7
  int *v68; // r6
  int v69; // t1
  bool v70; // cf
  unsigned int v71; // r1
  int v72; // r3
  unsigned int v73; // r0
  unsigned int v74; // r4
  int v75; // r5
  _DWORD *v76; // r3
  int *v77; // r5
  char v78; // r6
  unsigned int v79; // r7
  int v80; // t1
  char v81; // cf
  unsigned int v82; // r3
  int v83; // r5
  unsigned int v84; // r0
  unsigned int v85; // r4
  int v86; // r6
  _DWORD *v87; // r1
  int *v88; // r5
  char v89; // r6
  unsigned int v90; // r7
  int v91; // t1
  char v92; // cf
  unsigned int v93; // r1
  unsigned int v94; // r0
  unsigned int v95; // r4
  int v96; // r5
  char v97; // r0
  _DWORD *v98; // r1
  int *v99; // r5
  char v100; // r6
  unsigned int v101; // r3
  int v102; // t1
  char v103; // cf
  int v104; // r1
  unsigned int v105; // r5
  _DWORD *v106; // r6
  unsigned int v107; // r3
  _DWORD *v109; // r2
  int v110; // r1
  unsigned int v111; // r3
  unsigned int v112; // r6
  int v113; // r1
  unsigned int v114; // r6
  unsigned int v115; // r5
  int v116; // r7
  int v117; // r1
  _BYTE *v118; // r0
  _BYTE *v119; // r2
  int v120; // r0
  char v121; // r5
  char **v122; // r2
  const char *v123; // r0
  char **v124; // r2
  unsigned int v125; // [sp+8h] [bp-36Ch]
  unsigned int v126; // [sp+Ch] [bp-368h]
  unsigned int v127; // [sp+10h] [bp-364h]
  unsigned int v128; // [sp+14h] [bp-360h]
  unsigned int v129; // [sp+18h] [bp-35Ch]
  unsigned int *v130; // [sp+1Ch] [bp-358h]
  _BYTE *v132; // [sp+24h] [bp-350h]
  __int16 v133; // [sp+28h] [bp-34Ch]
  unsigned int v134; // [sp+2Ch] [bp-348h] BYREF
  _DWORD v135[40]; // [sp+30h] [bp-344h] BYREF
  unsigned int v136; // [sp+D0h] [bp-2A4h]
  _DWORD src[40]; // [sp+D8h] [bp-29Ch] BYREF
  unsigned int v139; // [sp+178h] [bp-1FCh]
  _DWORD v140[40]; // [sp+180h] [bp-1F4h] BYREF
  unsigned int v141; // [sp+220h] [bp-154h]
  _DWORD v142[40]; // [sp+228h] [bp-14Ch] BYREF
  unsigned int v143; // [sp+2C8h] [bp-ACh]
  _DWORD dest[40]; // [sp+2D0h] [bp-A4h] BYREF
  unsigned int v146; // [sp+370h] [bp-4h]

  v5 = *a2;
  v7 = a2[1];
  if ( !*(_QWORD *)a2 )
  {
    v123 = aAssertionFaile_32;
    v124 = &off_2EEBF4;
    goto LABEL_205;
  }
  v8 = a2[2];
  v9 = a2[3];
  if ( !*((_QWORD *)a2 + 1) )
    core::panicking::panic((int)aAssertionFaile_33, 29, (int)&off_2EEC04);
  if ( !*((_QWORD *)a2 + 2) )
  {
    v123 = aAssertionFaile_34;
    v124 = &off_2EEC14;
LABEL_205:
    core::panicking::panic((int)v123, 28, (int)v124);
  }
  if ( __CFADD__(__CFADD__(v5, a2[4]), v7) | __CFADD__(a2[5], __CFADD__(v5, a2[4]) + v7) )
    core::panicking::panic((int)aAssertionFaile_35, 54, (int)&off_2EEC24);
  v134 = a4;
  if ( __PAIR64__(v7, v5) < __PAIR64__(v9, v8) )
    core::panicking::panic((int)aAssertionFaile_36, 55, (int)&off_2EEC34);
  v10 = v7;
  if ( v7 )
    v10 = v7;
  v11 = v135;
  v135[1] = v10;
  v12 = 2;
  if ( !v7 )
    v12 = 1;
  v13 = *((unsigned __int16 *)a2 + 12);
  v136 = v12;
  v135[0] = v5;
  memset(&v135[2], 0, 0x98u);
  memset(&src[1], 0, 0x9Cu);
  LOWORD(v14) = 19778;
  v15 = __clz(v5 - 1) + 32;
  if ( (__PAIR64__(v7, v5) - 1) >> 32 )
    v15 = __clz((__PAIR64__(v7, v5) - 1) >> 32);
  HIWORD(v14) = 19728;
  v16 = (int)((__int16)v13 - v15) * (__int64)v14 + 0x1344135080LL;
  v139 = 1;
  src[0] = 1;
  v17 = WORD2(v16);
  if ( (v13 & 0x8000u) != 0 )
  {
    core::num::bignum::Big32x40::mul_pow2(src, (__int16)-(__int16)v13);
    v132 = a3;
    if ( SWORD2(v16) > -1 )
      goto LABEL_14;
  }
  else
  {
    core::num::bignum::Big32x40::mul_pow2(v135, v13);
    v132 = a3;
    if ( SWORD2(v16) > -1 )
    {
LABEL_14:
      v18 = src;
      v19 = WORD2(v16);
      goto LABEL_17;
    }
  }
  v19 = -WORD2(v16);
  v18 = v135;
LABEL_17:
  core::num::flt2dec::strategy::dragon::mul_pow10(v18, v19);
  v20 = dest;
  v21 = v139;
  memcpy(dest, src, sizeof(dest));
  v22 = v134;
  v146 = v139;
  if ( v134 >= 0xA )
  {
    if ( v139 > 0x28 )
      goto LABEL_25;
    v22 = v134;
    v23 = v139;
    while ( 1 )
    {
      if ( v23 )
      {
        v24 = 0;
        v25 = -4 * v23;
        do
        {
          v26 = dest[v25 / 0xFFFFFFFC - 1];
          v27 = sub_2704F8(v26, v24, 1000000000, 0);
          v24 = v26 - 1000000000 * v27;
          dest[v25 / 0xFFFFFFFC - 1] = v27;
          v25 += 4;
        }
        while ( v25 );
      }
      v22 -= 9;
      if ( v22 <= 9 )
        break;
      v23 = v146;
      if ( v146 >= 0x29 )
        goto LABEL_25;
    }
    v17 = WORD2(v16);
  }
  v28 = dword_2BE758[v22];
  if ( !v28 )
    core::panicking::panic((int)aAssertionFaile_51, 27, (int)&off_2EF600);
  if ( v146 >= 0x29 )
    goto LABEL_25;
  if ( v146 )
  {
    v29 = 0;
    v30 = -4 * v146;
    do
    {
      v31 = dest[v30 / 0xFFFFFFFC - 1];
      v32 = sub_2704F8(v31, v29, v28, 0);
      v29 = v31 - v32 * v28;
      dest[v30 / 0xFFFFFFFC - 1] = v32;
      v30 += 4;
    }
    while ( v30 );
    v33 = v146;
  }
  else
  {
    v33 = 0;
  }
  v34 = v136;
  if ( v33 <= v136 )
    v33 = v136;
  if ( v33 > 0x28 )
    goto LABEL_199;
  if ( v33 )
  {
    v35 = v33;
    LOBYTE(v36) = 0;
    do
    {
      v37 = *v11++;
      v70 = __CFADD__((v36 & 1) != 0, *v20);
      v38 = ((v36 & 1) != 0) + *v20;
      *v20++ = v37 + v38;
      v36 = v70 | __CFADD__(v37, v38);
      --v35;
    }
    while ( v35 );
    v39 = v134;
    if ( v36 )
    {
      if ( v33 > 0x27 )
      {
        v34 = v33;
        goto LABEL_198;
      }
      dest[v33++] = 1;
    }
  }
  else
  {
    v33 = 0;
    v39 = v134;
  }
  v146 = v33;
  if ( v33 <= v21 )
    v33 = v21;
  if ( v33 >= 0x29 )
LABEL_199:
    core::slice::index::slice_end_index_len_fail();
  v40 = 4 - 4 * v33;
  do
  {
    if ( v40 == 4 )
      goto LABEL_53;
    v41 = *(_DWORD *)((char *)dest - v40);
    v42 = *(_DWORD *)((char *)src - v40);
    v40 += 4;
    v43 = v42 != v41;
    if ( v42 > v41 )
      v43 = -1;
  }
  while ( !v43 );
  if ( (unsigned __int8)v43 <= 1u )
  {
LABEL_53:
    ++v17;
    goto LABEL_64;
  }
  if ( v34 >= 0x29 )
LABEL_25:
    core::slice::index::slice_end_index_len_fail();
  if ( v34 )
  {
    v44 = v135;
    v45 = 4 * v34;
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
      if ( v34 > 0x27 )
        goto LABEL_198;
      v135[v34++] = v47;
    }
  }
  else
  {
    v34 = 0;
  }
  v136 = v34;
LABEL_64:
  v48 = a5;
  v49 = 0;
  v133 = v17;
  if ( v17 < a5 )
  {
LABEL_154:
    v52 = 0;
    goto LABEL_155;
  }
  v50 = v17 - a5;
  v51 = v17 - a5;
  v52 = v39;
  if ( v50 < v39 )
    v52 = v51;
  if ( !v52 )
  {
    v49 = 0;
    goto LABEL_154;
  }
  memcpy(v140, src, sizeof(v140));
  v141 = v21;
  core::num::bignum::Big32x40::mul_pow2(v140, 1u);
  memcpy(v142, src, sizeof(v142));
  v143 = v139;
  core::num::bignum::Big32x40::mul_pow2(v142, 2u);
  memcpy(dest, src, sizeof(dest));
  v146 = v139;
  core::num::bignum::Big32x40::mul_pow2(dest, 3u);
  v127 = v141;
  v53 = &v134;
  v54 = v136;
  v21 = v139;
  v128 = v143;
  v129 = v146;
  v55 = 0;
LABEL_69:
  if ( v54 >= 0x29 )
LABEL_201:
    core::slice::index::slice_end_index_len_fail();
  v56 = v55 + 1;
  v57 = 0;
  while ( v54 != v57 )
  {
    if ( v135[v57++] )
    {
      v59 = v129;
      v126 = v55;
      v130 = v53;
      if ( v54 > v129 )
        v59 = v54;
      if ( v59 >= 0x29 )
        goto LABEL_210;
      v60 = 4 - 4 * v59;
      while ( v60 != 4 )
      {
        v61 = *(_DWORD *)((char *)v135 - v60);
        v62 = *(_DWORD *)((char *)dest - v60);
        v60 += 4;
        v63 = v62 != v61;
        if ( v62 > v61 )
          v63 = -1;
        if ( v63 )
          goto LABEL_83;
      }
      LOBYTE(v63) = 0;
LABEL_83:
      v64 = 0;
      v125 = v56;
      if ( (unsigned __int8)v63 < 2u )
      {
        if ( !v59 )
          goto LABEL_88;
        v65 = v135;
        v66 = 1;
        v67 = v59;
        v68 = dest;
        do
        {
          v69 = *v68++;
          v70 = __CFADD__((v66 & 1) != 0, *v65) | __CFADD__(~v69, ((v66 & 1) != 0) + *v65);
          *v65++ += ~v69 + ((v66 & 1) != 0);
          v66 = v70;
          --v67;
        }
        while ( v67 );
        if ( v70 )
        {
LABEL_88:
          v64 = 8;
          v54 = v59;
          v136 = v59;
          goto LABEL_89;
        }
LABEL_212:
        core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2EF600);
      }
LABEL_89:
      v71 = v128;
      if ( v54 > v128 )
        v71 = v54;
      if ( v71 >= 0x29 )
        core::slice::index::slice_end_index_len_fail();
      v72 = 4 - 4 * v71;
      do
      {
        if ( v72 == 4 )
          goto LABEL_98;
        v73 = *(_DWORD *)((char *)v135 - v72);
        v74 = *(_DWORD *)((char *)v142 - v72);
        v72 += 4;
        v75 = v74 != v73;
        if ( v74 > v73 )
          v75 = -1;
      }
      while ( !v75 );
      if ( (unsigned __int8)v75 > 1u )
      {
        v71 = v54;
      }
      else
      {
LABEL_98:
        if ( v71 )
        {
          v76 = v135;
          v77 = v142;
          v78 = 1;
          v79 = v71;
          do
          {
            v80 = *v77++;
            v81 = __CFADD__((v78 & 1) != 0, *v76) | __CFADD__(~v80, ((v78 & 1) != 0) + *v76);
            *v76++ += ~v80 + ((v78 & 1) != 0);
            v78 = v81;
            --v79;
          }
          while ( v79 );
          if ( !v81 )
            goto LABEL_212;
        }
        v64 |= 4u;
        v136 = v71;
      }
      v82 = v127;
      if ( v71 > v127 )
        v82 = v71;
      if ( v82 >= 0x29 )
LABEL_210:
        core::slice::index::slice_end_index_len_fail();
      v83 = 4 - 4 * v82;
      do
      {
        if ( v83 == 4 )
          goto LABEL_114;
        v84 = *(_DWORD *)((char *)v135 - v83);
        v85 = *(_DWORD *)((char *)v140 - v83);
        v83 += 4;
        v86 = v85 != v84;
        if ( v85 > v84 )
          v86 = -1;
      }
      while ( !v86 );
      if ( (unsigned __int8)v86 > 1u )
      {
        v82 = v71;
      }
      else
      {
LABEL_114:
        if ( v82 )
        {
          v87 = v135;
          v88 = v140;
          v89 = 1;
          v90 = v82;
          do
          {
            v91 = *v88++;
            v92 = __CFADD__((v89 & 1) != 0, *v87) | __CFADD__(~v91, ((v89 & 1) != 0) + *v87);
            *v87++ += ~v91 + ((v89 & 1) != 0);
            v89 = v92;
            --v90;
          }
          while ( v90 );
          if ( !v92 )
            goto LABEL_212;
        }
        v64 += 2;
        v136 = v82;
      }
      v54 = v21;
      if ( v82 > v21 )
        v54 = v82;
      if ( v54 >= 0x29 )
        goto LABEL_201;
      v93 = -4 * v54;
      do
      {
        if ( !v93 )
        {
          v97 = v64;
          goto LABEL_130;
        }
        v94 = v130[v93 / 0xFFFFFFFC];
        v95 = src[v93 / 0xFFFFFFFC - 1];
        v93 += 4;
        v96 = v95 != v94;
        if ( v95 > v94 )
          v96 = -1;
      }
      while ( !v96 );
      v97 = v64;
      if ( (unsigned __int8)v96 > 1u )
      {
        v54 = v82;
      }
      else
      {
LABEL_130:
        if ( v54 )
        {
          v98 = v135;
          v99 = src;
          v100 = 1;
          v101 = v54;
          do
          {
            v102 = *v99++;
            v103 = __CFADD__((v100 & 1) != 0, *v98) | __CFADD__(~v102, ((v100 & 1) != 0) + *v98);
            *v98++ += ~v102 + ((v100 & 1) != 0);
            v100 = v103;
            --v101;
          }
          while ( v101 );
          v97 = v64;
          if ( !v103 )
            goto LABEL_212;
        }
        ++v97;
        v136 = v54;
      }
      v39 = v134;
      if ( v126 == v134 )
      {
        v120 = v134;
        v122 = &off_2EEC54;
        goto LABEL_196;
      }
      v132[v126] = v97 + 48;
      if ( v54 )
      {
        v104 = 4 * v54;
        v105 = 0;
        v106 = v135;
        do
        {
          v104 -= 4;
          v107 = (10LL * (unsigned int)*v106 + (unsigned __int64)v105) >> 32;
          *v106 = 10 * *v106 + v105;
          ++v106;
          v105 = v107;
        }
        while ( v104 );
        v53 = v130;
        v55 = v125;
        if ( v107 )
        {
          if ( v54 <= 0x27 )
          {
            v135[v54++] = v107;
            goto LABEL_144;
          }
          v34 = v54;
LABEL_198:
          core::panicking::panic_bounds_check(v34, 40, (int)&off_2EF600);
        }
LABEL_144:
        v136 = v54;
        if ( v125 == v52 )
        {
LABEL_147:
          v49 = 1;
          v48 = a5;
LABEL_155:
          if ( v21 >= 0x29 )
            goto LABEL_200;
          if ( v21 )
          {
            v109 = src;
            v110 = 4 * v21;
            v111 = 0;
            do
            {
              v110 -= 4;
              v112 = (5LL * (unsigned int)*v109 + (unsigned __int64)v111) >> 32;
              *v109 = 5 * *v109 + v111;
              ++v109;
              v111 = v112;
            }
            while ( v110 );
            if ( v112 )
            {
              if ( v21 > 0x27 )
              {
                v34 = v21;
                goto LABEL_198;
              }
              src[v21++] = v112;
            }
          }
          else
          {
            v21 = 0;
          }
          v139 = v21;
          if ( v136 > v21 )
            v21 = v136;
          if ( v21 >= 0x29 )
LABEL_200:
            core::slice::index::slice_end_index_len_fail();
          v113 = 4 - 4 * v21;
          while ( v113 != 4 )
          {
            v114 = *(_DWORD *)((char *)v135 - v113);
            v115 = *(_DWORD *)((char *)src - v113);
            v113 += 4;
            v116 = v115 != v114;
            if ( v115 > v114 )
              v116 = -1;
            if ( v116 )
            {
              if ( (unsigned __int8)v116 == 1 )
                goto LABEL_172;
LABEL_189:
              if ( v52 <= v39 )
              {
                *(_WORD *)(a1 + 8) = v133;
                *(_DWORD *)a1 = v132;
                *(_DWORD *)(a1 + 4) = v52;
                return a1;
              }
LABEL_215:
              core::slice::index::slice_end_index_len_fail();
            }
          }
          if ( !v49 )
            goto LABEL_189;
          v120 = v52 - 1;
          if ( v52 - 1 < v39 )
          {
            if ( (v132[v120] & 1) == 0 )
              goto LABEL_189;
LABEL_172:
            if ( v52 <= v39 )
            {
              v117 = 0;
              v118 = v132;
              while ( v52 != v117 )
              {
                v119 = &v118[v52];
                --v118;
                ++v117;
                if ( *(v119 - 1) != 57 )
                {
                  ++v118[v52];
                  if ( v52 > v52 - v117 + 1 )
                    memset(&v118[v52 + 1], 48, v117 - 1);
                  goto LABEL_189;
                }
              }
              if ( v52 )
              {
                *v132 = 49;
                v121 = 48;
                if ( v52 != 1 )
                  memset(v132 + 1, 48, v52 - 1);
              }
              else
              {
                v121 = 49;
              }
              if ( ++v133 > v48 && v52 < v39 )
                v132[v52++] = v121;
              goto LABEL_189;
            }
            goto LABEL_215;
          }
          v122 = &off_2EEC64;
LABEL_196:
          core::panicking::panic_bounds_check(v120, v39, (int)v122);
        }
      }
      else
      {
        v54 = 0;
        v53 = v130;
        v55 = v125;
        v136 = 0;
        if ( v125 == v52 )
          goto LABEL_147;
      }
      goto LABEL_69;
    }
  }
  if ( v52 < v55 )
    core::slice::index::slice_index_order_fail();
  if ( v52 > v39 )
    goto LABEL_215;
  if ( v52 != v55 )
    memset(&v132[v55], 48, v52 - v55);
  *(_WORD *)(a1 + 8) = v133;
  *(_DWORD *)a1 = v132;
  *(_DWORD *)(a1 + 4) = v52;
  return a1;
}
