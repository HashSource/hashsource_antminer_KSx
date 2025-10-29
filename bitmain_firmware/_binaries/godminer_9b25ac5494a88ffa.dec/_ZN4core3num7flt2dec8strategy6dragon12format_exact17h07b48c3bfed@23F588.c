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
  int v13; // r4
  int v14; // r3
  unsigned int v15; // r2
  __int64 v16; // kr00_8
  __int16 v17; // r9
  _DWORD *v18; // r0
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
  int v53; // r2
  int v54; // r2
  int v55; // r2
  unsigned int *v56; // r6
  unsigned int v57; // r7
  unsigned int v58; // r1
  unsigned int v59; // r4
  int v60; // r3
  unsigned int v62; // r3
  int v63; // r1
  unsigned int v64; // r6
  unsigned int v65; // r0
  int v66; // r5
  char v67; // r8
  _DWORD *v68; // r1
  char v69; // r8
  unsigned int v70; // r7
  int *v71; // r6
  int v72; // t1
  bool v73; // cf
  unsigned int v74; // r1
  int v75; // r3
  unsigned int v76; // r0
  unsigned int v77; // r4
  int v78; // r5
  _DWORD *v79; // r3
  int *v80; // r5
  char v81; // r6
  unsigned int v82; // r7
  int v83; // t1
  char v84; // cf
  unsigned int v85; // r3
  int v86; // r5
  unsigned int v87; // r0
  unsigned int v88; // r4
  int v89; // r6
  _DWORD *v90; // r1
  int *v91; // r5
  char v92; // r6
  unsigned int v93; // r7
  int v94; // t1
  char v95; // cf
  unsigned int v96; // r1
  unsigned int v97; // r0
  unsigned int v98; // r4
  int v99; // r5
  char v100; // r0
  _DWORD *v101; // r1
  int *v102; // r5
  char v103; // r6
  unsigned int v104; // r3
  int v105; // t1
  char v106; // cf
  int v107; // r1
  unsigned int v108; // r5
  _DWORD *v109; // r6
  unsigned int v110; // r3
  _DWORD *v112; // r2
  int v113; // r1
  unsigned int v114; // r3
  unsigned int v115; // r6
  int v116; // r1
  unsigned int v117; // r6
  unsigned int v118; // r5
  int v119; // r7
  int v120; // r1
  _BYTE *v121; // r0
  _BYTE *v122; // r2
  int v123; // r0
  char v124; // r5
  char **v125; // r2
  const char *v126; // r0
  char **v127; // r2
  unsigned int v128; // [sp+8h] [bp-36Ch]
  unsigned int v129; // [sp+Ch] [bp-368h]
  unsigned int v130; // [sp+10h] [bp-364h]
  unsigned int v131; // [sp+14h] [bp-360h]
  unsigned int v132; // [sp+18h] [bp-35Ch]
  unsigned int *v133; // [sp+1Ch] [bp-358h]
  _BYTE *v135; // [sp+24h] [bp-350h]
  __int16 v136; // [sp+28h] [bp-34Ch]
  unsigned int v137; // [sp+2Ch] [bp-348h] BYREF
  _DWORD v138[40]; // [sp+30h] [bp-344h] BYREF
  unsigned int v139; // [sp+D0h] [bp-2A4h]
  _DWORD src[40]; // [sp+D8h] [bp-29Ch] BYREF
  unsigned int v142; // [sp+178h] [bp-1FCh]
  _BYTE v143[160]; // [sp+180h] [bp-1F4h] BYREF
  unsigned int v144; // [sp+220h] [bp-154h]
  _BYTE v145[160]; // [sp+228h] [bp-14Ch] BYREF
  unsigned int v146; // [sp+2C8h] [bp-ACh]
  _DWORD dest[40]; // [sp+2D0h] [bp-A4h] BYREF
  unsigned int v149; // [sp+370h] [bp-4h]

  v5 = *a2;
  v7 = a2[1];
  if ( !*(_QWORD *)a2 )
  {
    v126 = aAssertionFaile_32;
    v127 = &off_2E2BF4;
    goto LABEL_205;
  }
  v8 = a2[2];
  v9 = a2[3];
  if ( !*((_QWORD *)a2 + 1) )
    core::panicking::panic((int)aAssertionFaile_33, 29, (int)&off_2E2C04);
  if ( !*((_QWORD *)a2 + 2) )
  {
    v126 = aAssertionFaile_34;
    v127 = &off_2E2C14;
LABEL_205:
    core::panicking::panic((int)v126, 28, (int)v127);
  }
  if ( __CFADD__(__CFADD__(v5, a2[4]), v7) | __CFADD__(a2[5], __CFADD__(v5, a2[4]) + v7) )
    core::panicking::panic((int)aAssertionFaile_35, 54, (int)&off_2E2C24);
  v137 = a4;
  if ( __PAIR64__(v7, v5) < __PAIR64__(v9, v8) )
    core::panicking::panic((int)aAssertionFaile_36, 55, (int)&off_2E2C34);
  v10 = v7;
  if ( v7 )
    v10 = v7;
  v11 = v138;
  v138[1] = v10;
  v12 = 2;
  if ( !v7 )
    v12 = 1;
  v13 = *((unsigned __int16 *)a2 + 12);
  v139 = v12;
  v138[0] = v5;
  memset(&v138[2], 0, 0x98u);
  memset(&src[1], 0, 0x9Cu);
  LOWORD(v14) = 19778;
  v15 = __clz(v5 - 1) + 32;
  if ( (__PAIR64__(v7, v5) - 1) >> 32 )
    v15 = __clz((__PAIR64__(v7, v5) - 1) >> 32);
  HIWORD(v14) = 19728;
  v16 = (int)((__int16)v13 - v15) * (__int64)v14 + 0x1344135080LL;
  v142 = 1;
  src[0] = 1;
  v17 = WORD2(v16);
  if ( (v13 & 0x8000u) != 0 )
  {
    core::num::bignum::Big32x40::mul_pow2(src, (__int16)-(__int16)v13, v16);
    v135 = a3;
    if ( SWORD2(v16) > -1 )
      goto LABEL_14;
  }
  else
  {
    core::num::bignum::Big32x40::mul_pow2(v138, v13, v16);
    v135 = a3;
    if ( SWORD2(v16) > -1 )
    {
LABEL_14:
      v18 = src;
      v19 = WORD2(v16);
      goto LABEL_17;
    }
  }
  v19 = -WORD2(v16);
  v18 = v138;
LABEL_17:
  core::num::flt2dec::strategy::dragon::mul_pow10((int)v18, v19);
  v20 = dest;
  v21 = v142;
  memcpy(dest, src, sizeof(dest));
  v22 = v137;
  v149 = v142;
  if ( v137 >= 0xA )
  {
    if ( v142 > 0x28 )
      goto LABEL_25;
    v22 = v137;
    v23 = v142;
    while ( 1 )
    {
      if ( v23 )
      {
        v24 = 0;
        v25 = -4 * v23;
        do
        {
          v26 = dest[v25 / 0xFFFFFFFC - 1];
          v27 = sub_26C3E0(v26, v24, 1000000000, 0);
          v24 = v26 - 1000000000 * v27;
          dest[v25 / 0xFFFFFFFC - 1] = v27;
          v25 += 4;
        }
        while ( v25 );
      }
      v22 -= 9;
      if ( v22 <= 9 )
        break;
      v23 = v149;
      if ( v149 >= 0x29 )
        goto LABEL_25;
    }
    v17 = WORD2(v16);
  }
  v28 = dword_2B29B8[v22];
  if ( !v28 )
    core::panicking::panic((int)aAssertionFaile_51, 27, (int)&off_2E3600);
  if ( v149 >= 0x29 )
    goto LABEL_25;
  if ( v149 )
  {
    v29 = 0;
    v30 = -4 * v149;
    do
    {
      v31 = dest[v30 / 0xFFFFFFFC - 1];
      v32 = sub_26C3E0(v31, v29, v28, 0);
      v29 = v31 - v32 * v28;
      dest[v30 / 0xFFFFFFFC - 1] = v32;
      v30 += 4;
    }
    while ( v30 );
    v33 = v149;
  }
  else
  {
    v33 = 0;
  }
  v34 = v139;
  if ( v33 <= v139 )
    v33 = v139;
  if ( v33 > 0x28 )
    goto LABEL_199;
  if ( v33 )
  {
    v35 = v33;
    LOBYTE(v36) = 0;
    do
    {
      v37 = *v11++;
      v73 = __CFADD__((v36 & 1) != 0, *v20);
      v38 = ((v36 & 1) != 0) + *v20;
      *v20++ = v37 + v38;
      v36 = v73 | __CFADD__(v37, v38);
      --v35;
    }
    while ( v35 );
    v39 = v137;
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
    v39 = v137;
  }
  v149 = v33;
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
    v44 = v138;
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
      v138[v34++] = v47;
    }
  }
  else
  {
    v34 = 0;
  }
  v139 = v34;
LABEL_64:
  v48 = a5;
  v49 = 0;
  v136 = v17;
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
  memcpy(v143, src, sizeof(v143));
  v144 = v21;
  core::num::bignum::Big32x40::mul_pow2(v143, 1, v53);
  memcpy(v145, src, sizeof(v145));
  v146 = v142;
  core::num::bignum::Big32x40::mul_pow2(v145, 2, v54);
  memcpy(dest, src, sizeof(dest));
  v149 = v142;
  core::num::bignum::Big32x40::mul_pow2(dest, 3, v55);
  v130 = v144;
  v56 = &v137;
  v57 = v139;
  v21 = v142;
  v131 = v146;
  v132 = v149;
  v58 = 0;
LABEL_69:
  if ( v57 >= 0x29 )
LABEL_201:
    core::slice::index::slice_end_index_len_fail();
  v59 = v58 + 1;
  v60 = 0;
  while ( v57 != v60 )
  {
    if ( v138[v60++] )
    {
      v62 = v132;
      v129 = v58;
      v133 = v56;
      if ( v57 > v132 )
        v62 = v57;
      if ( v62 >= 0x29 )
        goto LABEL_210;
      v63 = 4 - 4 * v62;
      while ( v63 != 4 )
      {
        v64 = *(_DWORD *)((char *)v138 - v63);
        v65 = *(_DWORD *)((char *)dest - v63);
        v63 += 4;
        v66 = v65 != v64;
        if ( v65 > v64 )
          v66 = -1;
        if ( v66 )
          goto LABEL_83;
      }
      LOBYTE(v66) = 0;
LABEL_83:
      v67 = 0;
      v128 = v59;
      if ( (unsigned __int8)v66 < 2u )
      {
        if ( !v62 )
          goto LABEL_88;
        v68 = v138;
        v69 = 1;
        v70 = v62;
        v71 = dest;
        do
        {
          v72 = *v71++;
          v73 = __CFADD__((v69 & 1) != 0, *v68) | __CFADD__(~v72, ((v69 & 1) != 0) + *v68);
          *v68++ += ~v72 + ((v69 & 1) != 0);
          v69 = v73;
          --v70;
        }
        while ( v70 );
        if ( v73 )
        {
LABEL_88:
          v67 = 8;
          v57 = v62;
          v139 = v62;
          goto LABEL_89;
        }
LABEL_212:
        core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2E3600);
      }
LABEL_89:
      v74 = v131;
      if ( v57 > v131 )
        v74 = v57;
      if ( v74 >= 0x29 )
        core::slice::index::slice_end_index_len_fail();
      v75 = 4 - 4 * v74;
      do
      {
        if ( v75 == 4 )
          goto LABEL_98;
        v76 = *(_DWORD *)((char *)v138 - v75);
        v77 = *(_DWORD *)&v145[-v75];
        v75 += 4;
        v78 = v77 != v76;
        if ( v77 > v76 )
          v78 = -1;
      }
      while ( !v78 );
      if ( (unsigned __int8)v78 > 1u )
      {
        v74 = v57;
      }
      else
      {
LABEL_98:
        if ( v74 )
        {
          v79 = v138;
          v80 = (int *)v145;
          v81 = 1;
          v82 = v74;
          do
          {
            v83 = *v80++;
            v84 = __CFADD__((v81 & 1) != 0, *v79) | __CFADD__(~v83, ((v81 & 1) != 0) + *v79);
            *v79++ += ~v83 + ((v81 & 1) != 0);
            v81 = v84;
            --v82;
          }
          while ( v82 );
          if ( !v84 )
            goto LABEL_212;
        }
        v67 |= 4u;
        v139 = v74;
      }
      v85 = v130;
      if ( v74 > v130 )
        v85 = v74;
      if ( v85 >= 0x29 )
LABEL_210:
        core::slice::index::slice_end_index_len_fail();
      v86 = 4 - 4 * v85;
      do
      {
        if ( v86 == 4 )
          goto LABEL_114;
        v87 = *(_DWORD *)((char *)v138 - v86);
        v88 = *(_DWORD *)&v143[-v86];
        v86 += 4;
        v89 = v88 != v87;
        if ( v88 > v87 )
          v89 = -1;
      }
      while ( !v89 );
      if ( (unsigned __int8)v89 > 1u )
      {
        v85 = v74;
      }
      else
      {
LABEL_114:
        if ( v85 )
        {
          v90 = v138;
          v91 = (int *)v143;
          v92 = 1;
          v93 = v85;
          do
          {
            v94 = *v91++;
            v95 = __CFADD__((v92 & 1) != 0, *v90) | __CFADD__(~v94, ((v92 & 1) != 0) + *v90);
            *v90++ += ~v94 + ((v92 & 1) != 0);
            v92 = v95;
            --v93;
          }
          while ( v93 );
          if ( !v95 )
            goto LABEL_212;
        }
        v67 += 2;
        v139 = v85;
      }
      v57 = v21;
      if ( v85 > v21 )
        v57 = v85;
      if ( v57 >= 0x29 )
        goto LABEL_201;
      v96 = -4 * v57;
      do
      {
        if ( !v96 )
        {
          v100 = v67;
          goto LABEL_130;
        }
        v97 = v133[v96 / 0xFFFFFFFC];
        v98 = src[v96 / 0xFFFFFFFC - 1];
        v96 += 4;
        v99 = v98 != v97;
        if ( v98 > v97 )
          v99 = -1;
      }
      while ( !v99 );
      v100 = v67;
      if ( (unsigned __int8)v99 > 1u )
      {
        v57 = v85;
      }
      else
      {
LABEL_130:
        if ( v57 )
        {
          v101 = v138;
          v102 = src;
          v103 = 1;
          v104 = v57;
          do
          {
            v105 = *v102++;
            v106 = __CFADD__((v103 & 1) != 0, *v101) | __CFADD__(~v105, ((v103 & 1) != 0) + *v101);
            *v101++ += ~v105 + ((v103 & 1) != 0);
            v103 = v106;
            --v104;
          }
          while ( v104 );
          v100 = v67;
          if ( !v106 )
            goto LABEL_212;
        }
        ++v100;
        v139 = v57;
      }
      v39 = v137;
      if ( v129 == v137 )
      {
        v123 = v137;
        v125 = &off_2E2C54;
        goto LABEL_196;
      }
      v135[v129] = v100 + 48;
      if ( v57 )
      {
        v107 = 4 * v57;
        v108 = 0;
        v109 = v138;
        do
        {
          v107 -= 4;
          v110 = (10LL * (unsigned int)*v109 + (unsigned __int64)v108) >> 32;
          *v109 = 10 * *v109 + v108;
          ++v109;
          v108 = v110;
        }
        while ( v107 );
        v56 = v133;
        v58 = v128;
        if ( v110 )
        {
          if ( v57 <= 0x27 )
          {
            v138[v57++] = v110;
            goto LABEL_144;
          }
          v34 = v57;
LABEL_198:
          core::panicking::panic_bounds_check(v34, 40, (int)&off_2E3600);
        }
LABEL_144:
        v139 = v57;
        if ( v128 == v52 )
        {
LABEL_147:
          v49 = 1;
          v48 = a5;
LABEL_155:
          if ( v21 >= 0x29 )
            goto LABEL_200;
          if ( v21 )
          {
            v112 = src;
            v113 = 4 * v21;
            v114 = 0;
            do
            {
              v113 -= 4;
              v115 = (5LL * (unsigned int)*v112 + (unsigned __int64)v114) >> 32;
              *v112 = 5 * *v112 + v114;
              ++v112;
              v114 = v115;
            }
            while ( v113 );
            if ( v115 )
            {
              if ( v21 > 0x27 )
              {
                v34 = v21;
                goto LABEL_198;
              }
              src[v21++] = v115;
            }
          }
          else
          {
            v21 = 0;
          }
          v142 = v21;
          if ( v139 > v21 )
            v21 = v139;
          if ( v21 >= 0x29 )
LABEL_200:
            core::slice::index::slice_end_index_len_fail();
          v116 = 4 - 4 * v21;
          while ( v116 != 4 )
          {
            v117 = *(_DWORD *)((char *)v138 - v116);
            v118 = *(_DWORD *)((char *)src - v116);
            v116 += 4;
            v119 = v118 != v117;
            if ( v118 > v117 )
              v119 = -1;
            if ( v119 )
            {
              if ( (unsigned __int8)v119 == 1 )
                goto LABEL_172;
LABEL_189:
              if ( v52 <= v39 )
              {
                *(_WORD *)(a1 + 8) = v136;
                *(_DWORD *)a1 = v135;
                *(_DWORD *)(a1 + 4) = v52;
                return a1;
              }
LABEL_215:
              core::slice::index::slice_end_index_len_fail();
            }
          }
          if ( !v49 )
            goto LABEL_189;
          v123 = v52 - 1;
          if ( v52 - 1 < v39 )
          {
            if ( (v135[v123] & 1) == 0 )
              goto LABEL_189;
LABEL_172:
            if ( v52 <= v39 )
            {
              v120 = 0;
              v121 = v135;
              while ( v52 != v120 )
              {
                v122 = &v121[v52];
                --v121;
                ++v120;
                if ( *(v122 - 1) != 57 )
                {
                  ++v121[v52];
                  if ( v52 > v52 - v120 + 1 )
                    memset(&v121[v52 + 1], 48, v120 - 1);
                  goto LABEL_189;
                }
              }
              if ( v52 )
              {
                *v135 = 49;
                v124 = 48;
                if ( v52 != 1 )
                  memset(v135 + 1, 48, v52 - 1);
              }
              else
              {
                v124 = 49;
              }
              if ( ++v136 > v48 && v52 < v39 )
                v135[v52++] = v124;
              goto LABEL_189;
            }
            goto LABEL_215;
          }
          v125 = &off_2E2C64;
LABEL_196:
          core::panicking::panic_bounds_check(v123, v39, (int)v125);
        }
      }
      else
      {
        v57 = 0;
        v56 = v133;
        v58 = v128;
        v139 = 0;
        if ( v128 == v52 )
          goto LABEL_147;
      }
      goto LABEL_69;
    }
  }
  if ( v52 < v58 )
    core::slice::index::slice_index_order_fail();
  if ( v52 > v39 )
    goto LABEL_215;
  if ( v52 != v58 )
    memset(&v135[v58], 48, v52 - v58);
  *(_WORD *)(a1 + 8) = v136;
  *(_DWORD *)a1 = v135;
  *(_DWORD *)(a1 + 4) = v52;
  return a1;
}
