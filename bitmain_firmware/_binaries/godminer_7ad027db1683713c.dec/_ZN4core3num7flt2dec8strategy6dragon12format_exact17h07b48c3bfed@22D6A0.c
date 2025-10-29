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
  unsigned int v24; // r1
  unsigned int v25; // r9
  unsigned int v26; // r6
  unsigned int v27; // r0
  unsigned int v28; // r5
  unsigned int v29; // r1
  unsigned int v30; // r4
  unsigned int v31; // r6
  unsigned int v32; // r0
  unsigned int v33; // r4
  unsigned int v34; // r3
  int v35; // r7
  int v36; // t1
  int v37; // r7
  unsigned int v38; // r8
  int v39; // r5
  unsigned int v40; // r7
  unsigned int v41; // r6
  int v42; // r3
  _DWORD *v43; // r3
  int v44; // r2
  unsigned int v45; // r7
  unsigned int v46; // r5
  int v47; // r4
  int v48; // r0
  unsigned int v49; // r0
  __int16 v50; // r2
  unsigned int v51; // r9
  unsigned int *v52; // r6
  unsigned int v53; // r7
  unsigned int v54; // r1
  unsigned int v55; // r4
  int v56; // r3
  unsigned int v58; // r3
  int v59; // r1
  unsigned int v60; // r6
  unsigned int v61; // r0
  int v62; // r5
  char v63; // r8
  _DWORD *v64; // r1
  char v65; // r8
  unsigned int v66; // r7
  int *v67; // r6
  int v68; // t1
  bool v69; // cf
  unsigned int v70; // r1
  int v71; // r3
  unsigned int v72; // r0
  unsigned int v73; // r4
  int v74; // r5
  _DWORD *v75; // r3
  int *v76; // r5
  char v77; // r6
  unsigned int v78; // r7
  int v79; // t1
  char v80; // cf
  int v81; // r5
  unsigned int v82; // r0
  unsigned int v83; // r4
  int v84; // r6
  _DWORD *v85; // r1
  int *v86; // r5
  char v87; // r6
  unsigned int v88; // r7
  int v89; // t1
  char v90; // cf
  unsigned int v91; // r1
  unsigned int v92; // r0
  unsigned int v93; // r4
  int v94; // r5
  char v95; // r0
  _DWORD *v96; // r1
  int *v97; // r5
  char v98; // r6
  unsigned int v99; // r3
  int v100; // t1
  char v101; // cf
  int v102; // r1
  unsigned int v103; // r5
  _DWORD *v104; // r6
  unsigned int v105; // r3
  _DWORD *v107; // r2
  int v108; // r1
  unsigned int v109; // r3
  unsigned int v110; // r6
  int v111; // r1
  unsigned int v112; // r6
  unsigned int v113; // r5
  int v114; // r7
  int v115; // r1
  _BYTE *v116; // r0
  _BYTE *v117; // r2
  int v118; // r0
  char v119; // r5
  char **v120; // r2
  const char *v121; // r0
  char **v122; // r2
  char **v123; // r2
  unsigned int v124; // [sp+8h] [bp-36Ch]
  unsigned int v125; // [sp+Ch] [bp-368h]
  unsigned int v126; // [sp+10h] [bp-364h]
  unsigned int v127; // [sp+14h] [bp-360h]
  unsigned int v128; // [sp+18h] [bp-35Ch]
  unsigned int *v129; // [sp+1Ch] [bp-358h]
  _BYTE *v131; // [sp+24h] [bp-350h]
  __int16 v132; // [sp+28h] [bp-34Ch]
  unsigned int v133; // [sp+2Ch] [bp-348h] BYREF
  _DWORD v134[40]; // [sp+30h] [bp-344h] BYREF
  unsigned int v135; // [sp+D0h] [bp-2A4h]
  _DWORD src[40]; // [sp+D8h] [bp-29Ch] BYREF
  unsigned int v138; // [sp+178h] [bp-1FCh]
  _DWORD v139[40]; // [sp+180h] [bp-1F4h] BYREF
  unsigned int v140; // [sp+220h] [bp-154h]
  _DWORD v141[40]; // [sp+228h] [bp-14Ch] BYREF
  unsigned int v142; // [sp+2C8h] [bp-ACh]
  _DWORD dest[40]; // [sp+2D0h] [bp-A4h] BYREF
  unsigned int v145; // [sp+370h] [bp-4h]

  v5 = *a2;
  v7 = a2[1];
  if ( !*(_QWORD *)a2 )
  {
    v121 = aAssertionFaile_32;
    v122 = &off_2CEBF4;
    goto LABEL_205;
  }
  v8 = a2[2];
  v9 = a2[3];
  if ( !*((_QWORD *)a2 + 1) )
    core::panicking::panic((int)aAssertionFaile_33, 29, (int)&off_2CEC04);
  if ( !*((_QWORD *)a2 + 2) )
  {
    v121 = aAssertionFaile_34;
    v122 = &off_2CEC14;
LABEL_205:
    core::panicking::panic((int)v121, 28, (int)v122);
  }
  if ( __CFADD__(__CFADD__(v5, a2[4]), v7) | __CFADD__(a2[5], __CFADD__(v5, a2[4]) + v7) )
    core::panicking::panic((int)aAssertionFaile_35, 54, (int)&off_2CEC24);
  v133 = a4;
  if ( __PAIR64__(v7, v5) < __PAIR64__(v9, v8) )
    core::panicking::panic((int)aAssertionFaile_36, 55, (int)&off_2CEC34);
  v10 = v7;
  if ( v7 )
    v10 = v7;
  v11 = v134;
  v134[1] = v10;
  v12 = 2;
  if ( !v7 )
    v12 = 1;
  v13 = *((unsigned __int16 *)a2 + 12);
  v135 = v12;
  v134[0] = v5;
  memset(&v134[2], 0, 0x98u);
  memset(&src[1], 0, 0x9Cu);
  LOWORD(v14) = 19778;
  v15 = __clz(v5 - 1) + 32;
  if ( (__PAIR64__(v7, v5) - 1) >> 32 )
    v15 = __clz((__PAIR64__(v7, v5) - 1) >> 32);
  HIWORD(v14) = 19728;
  v16 = (int)((__int16)v13 - v15) * (__int64)v14 + 0x1344135080LL;
  v138 = 1;
  src[0] = 1;
  v17 = WORD2(v16);
  if ( (v13 & 0x8000u) != 0 )
  {
    core::num::bignum::Big32x40::mul_pow2(src, (__int16)-(__int16)v13);
    v131 = a3;
    if ( SWORD2(v16) > -1 )
      goto LABEL_14;
  }
  else
  {
    core::num::bignum::Big32x40::mul_pow2(v134, v13);
    v131 = a3;
    if ( SWORD2(v16) > -1 )
    {
LABEL_14:
      v18 = src;
      v19 = WORD2(v16);
      goto LABEL_17;
    }
  }
  v19 = -WORD2(v16);
  v18 = v134;
LABEL_17:
  core::num::flt2dec::strategy::dragon::mul_pow10(v18, v19);
  v20 = dest;
  v21 = v138;
  memcpy(dest, src, sizeof(dest));
  v22 = v133;
  v145 = v138;
  if ( v133 >= 0xA )
  {
    if ( v138 > 0x28 )
    {
      v23 = v138;
      goto LABEL_25;
    }
    v22 = v133;
    v23 = v138;
    while ( 1 )
    {
      if ( v23 )
      {
        v24 = 0;
        v25 = -4 * v23;
        do
        {
          v26 = dest[v25 / 0xFFFFFFFC - 1];
          v27 = sub_25A4F8(v26, v24, 0x3B9ACA00u);
          v24 = v26 - 1000000000 * v27;
          dest[v25 / 0xFFFFFFFC - 1] = v27;
          v25 += 4;
        }
        while ( v25 );
      }
      v22 -= 9;
      if ( v22 <= 9 )
        break;
      v23 = v145;
      if ( v145 >= 0x29 )
        goto LABEL_25;
    }
    v17 = WORD2(v16);
  }
  v28 = dword_29E208[v22];
  if ( !v28 )
    core::panicking::panic((int)aAssertionFaile_51, 27, (int)&off_2CF600);
  v23 = v145;
  if ( v145 >= 0x29 )
    goto LABEL_25;
  if ( v145 )
  {
    v29 = 0;
    v30 = -4 * v145;
    do
    {
      v31 = dest[v30 / 0xFFFFFFFC - 1];
      v32 = sub_25A4F8(v31, v29, v28);
      v29 = v31 - v32 * v28;
      dest[v30 / 0xFFFFFFFC - 1] = v32;
      v30 += 4;
    }
    while ( v30 );
    v33 = v145;
  }
  else
  {
    v33 = 0;
  }
  v23 = v135;
  if ( v33 <= v135 )
    v33 = v135;
  if ( v33 > 0x28 )
    goto LABEL_199;
  if ( v33 )
  {
    v34 = v33;
    LOBYTE(v35) = 0;
    do
    {
      v36 = *v11++;
      v69 = __CFADD__((v35 & 1) != 0, *v20);
      v37 = ((v35 & 1) != 0) + *v20;
      *v20++ = v36 + v37;
      v35 = v69 | __CFADD__(v36, v37);
      --v34;
    }
    while ( v34 );
    v38 = v133;
    if ( v35 )
    {
      if ( v33 > 0x27 )
      {
        v23 = v33;
        goto LABEL_198;
      }
      dest[v33++] = 1;
    }
  }
  else
  {
    v33 = 0;
    v38 = v133;
  }
  v145 = v33;
  if ( v33 <= v21 )
    v33 = v21;
  if ( v33 >= 0x29 )
LABEL_199:
    core::slice::index::slice_end_index_len_fail(v33, 40, (int)&off_2CF600);
  v39 = 4 - 4 * v33;
  do
  {
    if ( v39 == 4 )
      goto LABEL_53;
    v40 = *(_DWORD *)((char *)dest - v39);
    v41 = *(_DWORD *)((char *)src - v39);
    v39 += 4;
    v42 = v41 != v40;
    if ( v41 > v40 )
      v42 = -1;
  }
  while ( !v42 );
  if ( (unsigned __int8)v42 <= 1u )
  {
LABEL_53:
    ++v17;
    goto LABEL_64;
  }
  if ( v23 >= 0x29 )
LABEL_25:
    core::slice::index::slice_end_index_len_fail(v23, 40, (int)&off_2CF600);
  if ( v23 )
  {
    v43 = v134;
    v44 = 4 * v23;
    v45 = 0;
    do
    {
      v44 -= 4;
      v46 = (10LL * (unsigned int)*v43 + (unsigned __int64)v45) >> 32;
      *v43 = 10 * *v43 + v45;
      ++v43;
      v45 = v46;
    }
    while ( v44 );
    if ( v46 )
    {
      if ( v23 > 0x27 )
        goto LABEL_198;
      v134[v23++] = v46;
    }
  }
  else
  {
    v23 = 0;
  }
  v135 = v23;
LABEL_64:
  v47 = a5;
  v48 = 0;
  v132 = v17;
  if ( v17 < a5 )
  {
LABEL_154:
    v51 = 0;
    goto LABEL_155;
  }
  v49 = v17 - a5;
  v50 = v17 - a5;
  v51 = v38;
  if ( v49 < v38 )
    v51 = v50;
  if ( !v51 )
  {
    v48 = 0;
    goto LABEL_154;
  }
  memcpy(v139, src, sizeof(v139));
  v140 = v21;
  core::num::bignum::Big32x40::mul_pow2(v139, 1u);
  memcpy(v141, src, sizeof(v141));
  v142 = v138;
  core::num::bignum::Big32x40::mul_pow2(v141, 2u);
  memcpy(dest, src, sizeof(dest));
  v145 = v138;
  core::num::bignum::Big32x40::mul_pow2(dest, 3u);
  v126 = v140;
  v52 = &v133;
  v53 = v135;
  v21 = v138;
  v127 = v142;
  v128 = v145;
  v54 = 0;
LABEL_69:
  if ( v53 >= 0x29 )
LABEL_201:
    core::slice::index::slice_end_index_len_fail(v53, 40, (int)&off_2CF600);
  v55 = v54 + 1;
  v56 = 0;
  while ( v53 != v56 )
  {
    if ( v134[v56++] )
    {
      v58 = v128;
      v125 = v54;
      v129 = v52;
      if ( v53 > v128 )
        v58 = v53;
      if ( v58 >= 0x29 )
        goto LABEL_210;
      v59 = 4 - 4 * v58;
      while ( v59 != 4 )
      {
        v60 = *(_DWORD *)((char *)v134 - v59);
        v61 = *(_DWORD *)((char *)dest - v59);
        v59 += 4;
        v62 = v61 != v60;
        if ( v61 > v60 )
          v62 = -1;
        if ( v62 )
          goto LABEL_83;
      }
      LOBYTE(v62) = 0;
LABEL_83:
      v63 = 0;
      v124 = v55;
      if ( (unsigned __int8)v62 < 2u )
      {
        if ( !v58 )
          goto LABEL_88;
        v64 = v134;
        v65 = 1;
        v66 = v58;
        v67 = dest;
        do
        {
          v68 = *v67++;
          v69 = __CFADD__((v65 & 1) != 0, *v64) | __CFADD__(~v68, ((v65 & 1) != 0) + *v64);
          *v64++ += ~v68 + ((v65 & 1) != 0);
          v65 = v69;
          --v66;
        }
        while ( v66 );
        if ( v69 )
        {
LABEL_88:
          v63 = 8;
          v53 = v58;
          v135 = v58;
          goto LABEL_89;
        }
LABEL_212:
        core::panicking::panic((int)aAssertionFaile_49, 26, (int)&off_2CF600);
      }
LABEL_89:
      v70 = v127;
      if ( v53 > v127 )
        v70 = v53;
      if ( v70 >= 0x29 )
        core::slice::index::slice_end_index_len_fail(v70, 40, (int)&off_2CF600);
      v71 = 4 - 4 * v70;
      do
      {
        if ( v71 == 4 )
          goto LABEL_98;
        v72 = *(_DWORD *)((char *)v134 - v71);
        v73 = *(_DWORD *)((char *)v141 - v71);
        v71 += 4;
        v74 = v73 != v72;
        if ( v73 > v72 )
          v74 = -1;
      }
      while ( !v74 );
      if ( (unsigned __int8)v74 > 1u )
      {
        v70 = v53;
      }
      else
      {
LABEL_98:
        if ( v70 )
        {
          v75 = v134;
          v76 = v141;
          v77 = 1;
          v78 = v70;
          do
          {
            v79 = *v76++;
            v80 = __CFADD__((v77 & 1) != 0, *v75) | __CFADD__(~v79, ((v77 & 1) != 0) + *v75);
            *v75++ += ~v79 + ((v77 & 1) != 0);
            v77 = v80;
            --v78;
          }
          while ( v78 );
          if ( !v80 )
            goto LABEL_212;
        }
        v63 |= 4u;
        v135 = v70;
      }
      v58 = v126;
      if ( v70 > v126 )
        v58 = v70;
      if ( v58 >= 0x29 )
LABEL_210:
        core::slice::index::slice_end_index_len_fail(v58, 40, (int)&off_2CF600);
      v81 = 4 - 4 * v58;
      do
      {
        if ( v81 == 4 )
          goto LABEL_114;
        v82 = *(_DWORD *)((char *)v134 - v81);
        v83 = *(_DWORD *)((char *)v139 - v81);
        v81 += 4;
        v84 = v83 != v82;
        if ( v83 > v82 )
          v84 = -1;
      }
      while ( !v84 );
      if ( (unsigned __int8)v84 > 1u )
      {
        v58 = v70;
      }
      else
      {
LABEL_114:
        if ( v58 )
        {
          v85 = v134;
          v86 = v139;
          v87 = 1;
          v88 = v58;
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
            goto LABEL_212;
        }
        v63 += 2;
        v135 = v58;
      }
      v53 = v21;
      if ( v58 > v21 )
        v53 = v58;
      if ( v53 >= 0x29 )
        goto LABEL_201;
      v91 = -4 * v53;
      do
      {
        if ( !v91 )
        {
          v95 = v63;
          goto LABEL_130;
        }
        v92 = v129[v91 / 0xFFFFFFFC];
        v93 = src[v91 / 0xFFFFFFFC - 1];
        v91 += 4;
        v94 = v93 != v92;
        if ( v93 > v92 )
          v94 = -1;
      }
      while ( !v94 );
      v95 = v63;
      if ( (unsigned __int8)v94 > 1u )
      {
        v53 = v58;
      }
      else
      {
LABEL_130:
        if ( v53 )
        {
          v96 = v134;
          v97 = src;
          v98 = 1;
          v99 = v53;
          do
          {
            v100 = *v97++;
            v101 = __CFADD__((v98 & 1) != 0, *v96) | __CFADD__(~v100, ((v98 & 1) != 0) + *v96);
            *v96++ += ~v100 + ((v98 & 1) != 0);
            v98 = v101;
            --v99;
          }
          while ( v99 );
          v95 = v63;
          if ( !v101 )
            goto LABEL_212;
        }
        ++v95;
        v135 = v53;
      }
      v38 = v133;
      if ( v125 == v133 )
      {
        v118 = v133;
        v120 = &off_2CEC54;
        goto LABEL_196;
      }
      v131[v125] = v95 + 48;
      if ( v53 )
      {
        v102 = 4 * v53;
        v103 = 0;
        v104 = v134;
        do
        {
          v102 -= 4;
          v105 = (10LL * (unsigned int)*v104 + (unsigned __int64)v103) >> 32;
          *v104 = 10 * *v104 + v103;
          ++v104;
          v103 = v105;
        }
        while ( v102 );
        v52 = v129;
        v54 = v124;
        if ( v105 )
        {
          if ( v53 <= 0x27 )
          {
            v134[v53++] = v105;
            goto LABEL_144;
          }
          v23 = v53;
LABEL_198:
          core::panicking::panic_bounds_check(v23, 40, (int)&off_2CF600);
        }
LABEL_144:
        v135 = v53;
        if ( v124 == v51 )
        {
LABEL_147:
          v48 = 1;
          v47 = a5;
LABEL_155:
          if ( v21 >= 0x29 )
            goto LABEL_200;
          if ( v21 )
          {
            v107 = src;
            v108 = 4 * v21;
            v109 = 0;
            do
            {
              v108 -= 4;
              v110 = (5LL * (unsigned int)*v107 + (unsigned __int64)v109) >> 32;
              *v107 = 5 * *v107 + v109;
              ++v107;
              v109 = v110;
            }
            while ( v108 );
            if ( v110 )
            {
              if ( v21 > 0x27 )
              {
                v23 = v21;
                goto LABEL_198;
              }
              src[v21++] = v110;
            }
          }
          else
          {
            v21 = 0;
          }
          v138 = v21;
          if ( v135 > v21 )
            v21 = v135;
          if ( v21 >= 0x29 )
LABEL_200:
            core::slice::index::slice_end_index_len_fail(v21, 40, (int)&off_2CF600);
          v111 = 4 - 4 * v21;
          while ( v111 != 4 )
          {
            v112 = *(_DWORD *)((char *)v134 - v111);
            v113 = *(_DWORD *)((char *)src - v111);
            v111 += 4;
            v114 = v113 != v112;
            if ( v113 > v112 )
              v114 = -1;
            if ( v114 )
            {
              if ( (unsigned __int8)v114 == 1 )
                goto LABEL_172;
LABEL_189:
              if ( v51 <= v38 )
              {
                *(_WORD *)(a1 + 8) = v132;
                *(_DWORD *)a1 = v131;
                *(_DWORD *)(a1 + 4) = v51;
                return a1;
              }
              v123 = &off_2CEC84;
LABEL_217:
              core::slice::index::slice_end_index_len_fail(v51, v38, (int)v123);
            }
          }
          if ( !v48 )
            goto LABEL_189;
          v118 = v51 - 1;
          if ( v51 - 1 < v38 )
          {
            if ( (v131[v118] & 1) == 0 )
              goto LABEL_189;
LABEL_172:
            if ( v51 <= v38 )
            {
              v115 = 0;
              v116 = v131;
              while ( v51 != v115 )
              {
                v117 = &v116[v51];
                --v116;
                ++v115;
                if ( *(v117 - 1) != 57 )
                {
                  ++v116[v51];
                  if ( v51 > v51 - v115 + 1 )
                    memset(&v116[v51 + 1], 48, v115 - 1);
                  goto LABEL_189;
                }
              }
              if ( v51 )
              {
                *v131 = 49;
                v119 = 48;
                if ( v51 != 1 )
                  memset(v131 + 1, 48, v51 - 1);
              }
              else
              {
                v119 = 49;
              }
              if ( ++v132 > v47 && v51 < v38 )
                v131[v51++] = v119;
              goto LABEL_189;
            }
            v123 = &off_2CEC74;
            goto LABEL_217;
          }
          v120 = &off_2CEC64;
LABEL_196:
          core::panicking::panic_bounds_check(v118, v38, (int)v120);
        }
      }
      else
      {
        v53 = 0;
        v52 = v129;
        v54 = v124;
        v135 = 0;
        if ( v124 == v51 )
          goto LABEL_147;
      }
      goto LABEL_69;
    }
  }
  if ( v51 < v54 )
    core::slice::index::slice_index_order_fail(v54, v51, (int)&off_2CEC44);
  if ( v51 > v38 )
  {
    v123 = &off_2CEC44;
    goto LABEL_217;
  }
  if ( v51 != v54 )
    memset(&v131[v54], 48, v51 - v54);
  *(_WORD *)(a1 + 8) = v132;
  *(_DWORD *)a1 = v131;
  *(_DWORD *)(a1 + 4) = v51;
  return a1;
}
