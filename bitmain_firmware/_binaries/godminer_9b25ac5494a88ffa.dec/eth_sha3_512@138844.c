int __fastcall eth_sha3_512(int a1, unsigned int a2, int a3, unsigned int a4)
{
  const char *v4; // r9
  unsigned __int64 v5; // d20
  int v6; // r4
  int *v8; // r2
  _QWORD *v9; // r2
  int v10; // r1
  char v11; // t1
  int *v12; // r3
  __int64 v13; // r8
  __int64 *v14; // r4
  __int64 v15; // r0
  int *v16; // r12
  __int64 v17; // r6
  __int64 *i; // r3
  int *v19; // r7
  unsigned int v20; // r1
  __int64 *v21; // r12
  _BYTE *v22; // r3
  unsigned int v23; // r4
  unsigned int v24; // r3
  __int64 v25; // r6
  __int64 *v26; // lr
  __int64 v27; // r2
  const char *v28; // r0
  int v29; // r1
  int v30; // r6
  unsigned __int8 *v31; // r12
  unsigned __int64 v32; // r2
  const char *v33; // r8
  int v34; // t1
  int v35; // t1
  char v36; // lr
  int *v37; // r1
  unsigned __int64 v38; // d17
  int v39; // r6
  int v40; // lr
  unsigned __int64 v41; // r4
  int *v42; // r9
  __int64 *v43; // r8
  int *v44; // r3
  __int64 *v45; // r2
  __int64 v46; // t1
  __int64 *v47; // lr
  __int64 *v48; // r6
  unsigned int j; // r12
  __int64 v50; // t1
  unsigned int v51; // r3
  unsigned int v52; // r1
  bool v53; // zf
  unsigned int v54; // r3
  char *v55; // r12
  int v56; // r1
  int v57; // r3
  char v58; // r0
  char v59; // t1
  char v60; // t1
  unsigned __int64 v61; // r6
  int *v62; // r3
  int v63; // r8
  const char *v64; // r11
  int *v65; // r9
  unsigned __int64 v66; // r0
  __int64 *v67; // r12
  __int64 v68; // r4
  __int64 *v69; // r3
  unsigned __int64 *v70; // r4
  int v71; // r12
  int *v72; // r5
  int v73; // r0
  signed __int64 v74; // r8
  _BYTE *v75; // r3
  int v76; // lr
  __int64 v77; // r2
  unsigned __int64 *v78; // lr
  unsigned __int64 v79; // r2
  const char *v80; // r0
  int v81; // r6
  unsigned __int64 v82; // r2
  int v83; // r1
  char *k; // r12
  int v85; // t1
  int v86; // t1
  int *v87; // r1
  unsigned __int64 v88; // d17
  int v89; // lr
  int v90; // r6
  __int64 *v91; // r7
  int *v92; // r11
  int *v93; // r3
  __int64 *v94; // r2
  __int64 v95; // t1
  __int64 *v96; // lr
  __int64 *v97; // r6
  int m; // r12
  __int64 v99; // t1
  unsigned int v100; // r3
  int v101; // r3
  const char *v102; // r1
  unsigned int v103; // r2
  char v104; // t1
  int *v106; // [sp+0h] [bp-134h]
  unsigned int v107; // [sp+Ch] [bp-128h]
  const char *v108; // [sp+10h] [bp-124h]
  __int64 v109; // [sp+18h] [bp-11Ch]
  __int64 v110; // [sp+18h] [bp-11Ch]
  int *v111; // [sp+20h] [bp-114h]
  const char *v112; // [sp+24h] [bp-110h]
  const char *v113; // [sp+28h] [bp-10Ch]
  const char *v114; // [sp+2Ch] [bp-108h]
  int v115; // [sp+30h] [bp-104h]
  unsigned int v116; // [sp+34h] [bp-100h]
  unsigned int v117; // [sp+38h] [bp-FCh]
  int v118; // [sp+3Ch] [bp-F8h]
  int v119; // [sp+40h] [bp-F4h] BYREF
  int v120; // [sp+44h] [bp-F0h]
  char v121; // [sp+67h] [bp-CDh] BYREF
  _QWORD s[25]; // [sp+68h] [bp-CCh] BYREF
  _BYTE v123[4]; // [sp+130h] [bp-4h] BYREF

  v117 = a2;
  v118 = a1;
  v115 = a3;
  v116 = a4;
  if ( a2 > 0x40 || !a1 )
    return -1;
  v6 = a4;
  if ( a4 )
    v6 = 1;
  if ( a3 )
    v6 = 0;
  if ( v6 )
    return -1;
  memset(s, 0, sizeof(s));
  if ( a4 <= 0x47 )
  {
    v8 = &v119;
    v4 = (const char *)&unk_29AB17;
  }
  v113 = (const char *)&unk_29AAF8;
  if ( a4 > 0x47 )
  {
    v114 = (const char *)&unk_29AB17;
    v111 = &v119;
    while ( 1 )
    {
      v9 = s;
      v10 = v115 - 1;
      while ( 1 )
      {
        v11 = *(_BYTE *)++v10;
        *(_BYTE *)v9 = v11 ^ v6;
        v9 = (_QWORD *)((char *)v9 + 1);
        if ( &s[9] == v9 )
          break;
        LOBYTE(v6) = *(_BYTE *)v9;
      }
      v12 = v111;
      v13 = s[0];
      *(_QWORD *)v111 = 0;
      *((_QWORD *)v12 + 1) = 0;
      v112 = (const char *)&unk_29AA40;
      *((_QWORD *)v12 + 2) = 0;
      v109 = 1;
      *((_QWORD *)v12 + 3) = 0;
      *((_QWORD *)v12 + 4) = 0;
      while ( 1 )
      {
        v14 = s;
        v15 = v13;
        v16 = v111;
        while ( 1 )
        {
          *(_QWORD *)v16 = 0;
          v16 += 2;
          v17 = 0;
          for ( i = v14; ; v15 = *i )
          {
            i += 5;
            v17 ^= v15;
            if ( v14 + 25 == i )
              break;
          }
          *((_QWORD *)v16 - 1) = v17;
          ++v14;
          if ( s == (_QWORD *)v16 )
            break;
          v15 = *v14;
        }
        v19 = v16;
        v20 = 1;
        v21 = s;
        v106 = v19;
        while ( 1 )
        {
          v22 = &v123[8 * (v20 % 5)];
          v23 = *((_DWORD *)v22 - 59);
          v24 = *((_DWORD *)v22 - 60);
          HIDWORD(v25) = (2 * v23) | (v24 >> 31);
          LODWORD(v25) = (2 * v24) | (v23 >> 31);
          v26 = v21;
          v27 = *((_QWORD *)&v119 + (v20 + 3) % 5) ^ v25;
          while ( 1 )
          {
            *v26 = v13 ^ v27;
            v26 += 5;
            if ( v26 == v21 + 25 )
              break;
            v13 = *v26;
          }
          ++v20;
          ++v21;
          if ( v20 == 6 )
            break;
          v13 = *v21;
        }
        v28 = asc_29AB00;
        v29 = 10;
        v30 = 1;
        v31 = (unsigned __int8 *)&unk_29AB18;
        v32 = s[1];
        v33 = v114;
        while ( 1 )
        {
          v36 = -(char)v30 & 0x3F;
          v37 = (int *)&s[v29];
          LODWORD(v5) = v30;
          v38 = vshld_u64(v32, v5);
          v39 = *v37;
          v32 >>= v36;
          v40 = v37[1];
          v41 = v38 | v32;
          LODWORD(v32) = *v37;
          *(_QWORD *)v37 = v41;
          if ( v33 == v28 )
            break;
          v34 = *(unsigned __int8 *)++v28;
          v29 = v34;
          HIDWORD(v32) = v40;
          v35 = *++v31;
          v30 = v35;
        }
        v42 = v111;
        v43 = s;
        v119 = v39;
        v120 = v40;
        do
        {
          v44 = v42;
          v45 = v43;
          do
          {
            v46 = *v45++;
            *(_QWORD *)v44 = v46;
            v44 += 2;
          }
          while ( v44 != v106 );
          v47 = v43;
          v48 = (__int64 *)v42;
          for ( j = 1; j != 6; *v47++ = *((_QWORD *)&v119 + ++j % 5) & ~*((_QWORD *)&v119 + v51) ^ v50 )
          {
            v50 = *v48++;
            v51 = j % 5;
          }
          v43 += 5;
        }
        while ( v123 != (_BYTE *)v43 );
        v13 = v109 ^ s[0];
        s[0] ^= v109;
        if ( v113 == v112 )
          break;
        v109 = *((_QWORD *)v112 + 1);
        v112 += 8;
      }
      v116 -= 72;
      v115 += 72;
      if ( v116 <= 0x47 )
        break;
      LOBYTE(v6) = s[0];
    }
    v4 = v114;
  }
  else
  {
    v111 = v8;
  }
  v52 = v116;
  v53 = v116 == 0;
  *((_BYTE *)s + v116) ^= 1u;
  HIBYTE(s[8]) = ~(HIBYTE(s[8]) ^ 0x7F);
  if ( !v53 )
  {
    v54 = v52 - 1;
    v55 = &v121;
    v56 = v115 - 1;
    v57 = v115 + v54;
    do
    {
      v59 = *(_BYTE *)++v56;
      v58 = v59;
      v60 = *++v55;
      *v55 = v60 ^ v58;
    }
    while ( v57 != v56 );
  }
  v61 = s[0];
  v108 = (const char *)&unk_29AA40;
  v62 = v111;
  v63 = -858993459;
  v64 = v4;
  *(_QWORD *)v111 = 0;
  *((_QWORD *)v62 + 1) = 0;
  v110 = 1;
  *((_QWORD *)v62 + 2) = 0;
  *((_QWORD *)v62 + 3) = 0;
  *((_QWORD *)v62 + 4) = 0;
  while ( 1 )
  {
    v65 = v111;
    v66 = v61;
    v67 = s;
    v114 = (const char *)s;
    while ( 1 )
    {
      v68 = 0;
      v69 = v67;
      *(_QWORD *)v65 = 0;
      v65 += 2;
      while ( 1 )
      {
        v69 += 5;
        v68 ^= v66;
        if ( v67 + 25 == v69 )
          break;
        v66 = *v69;
      }
      *((_QWORD *)v65 - 1) = v68;
      ++v67;
      if ( s == (_QWORD *)v65 )
        break;
      v66 = *v67;
    }
    v70 = s;
    v71 = 1;
    v72 = v65;
    v73 = v63;
    while ( 1 )
    {
      v74 = (unsigned int)(v71 + 3) * (unsigned __int64)(unsigned int)v73;
      v75 = &v123[8 * (v71 - 5 * ((unsigned int)(((unsigned int)v71 * (unsigned __int64)(unsigned int)v73) >> 32) >> 2))];
      LODWORD(v74) = *((_DWORD *)v75 - 59);
      v76 = v71 + 3 - 5 * (HIDWORD(v74) >> 2);
      HIDWORD(v74) = *((_DWORD *)v75 - 60);
      v107 = *((__int64 *)v75 - 30) >> 31;
      v77 = *((_QWORD *)&v119 + v76);
      v78 = v70;
      v79 = __PAIR64__(v107, v74 >> 31) ^ v77;
      while ( 1 )
      {
        *v78 = v61 ^ v79;
        v78 += 5;
        if ( v70 + 25 == v78 )
          break;
        v61 = *v78;
      }
      ++v71;
      ++v70;
      if ( v71 == 6 )
        break;
      v61 = *v70;
    }
    v63 = v73;
    v80 = asc_29AB00;
    v81 = 1;
    v82 = s[1];
    v83 = 10;
    for ( k = (char *)&unk_29AB18; ; ++k )
    {
      v87 = (int *)&s[v83];
      v88 = vshld_u64(v82, (unsigned int)v81);
      v82 >>= -(char)v81 & 0x3F;
      v89 = v87[1];
      v90 = *v87;
      *(_QWORD *)v87 = v88 | v82;
      LODWORD(v82) = v90;
      if ( v64 == v80 )
        break;
      v85 = *(unsigned __int8 *)++v80;
      v83 = v85;
      HIDWORD(v82) = v89;
      v86 = (unsigned __int8)k[1];
      v81 = v86;
    }
    v112 = v64;
    v91 = s;
    v92 = v111;
    v119 = v90;
    v120 = v89;
    do
    {
      v93 = v92;
      v94 = v91;
      do
      {
        v95 = *v94++;
        *(_QWORD *)v93 = v95;
        v93 += 2;
      }
      while ( v72 != v93 );
      v96 = v91;
      v97 = (__int64 *)v92;
      for ( m = 1;
            m != 6;
            *v96++ = *((_QWORD *)&v119
                     + m
                     - 5 * ((unsigned int)(((unsigned int)m * (unsigned __int64)(unsigned int)v63) >> 32) >> 2))
                   & ~*((_QWORD *)&v119 + v100)
                   ^ v99 )
      {
        v99 = *v97++;
        v100 = m - 5 * ((unsigned int)(((unsigned int)m * (unsigned __int64)(unsigned int)v63) >> 32) >> 2);
        ++m;
      }
      v91 += 5;
    }
    while ( v123 != (_BYTE *)v91 );
    v64 = v112;
    v61 = v110 ^ s[0];
    s[0] ^= v110;
    if ( v113 == v108 )
      break;
    v110 = *((_QWORD *)v108 + 1);
    v108 += 8;
  }
  if ( v117 )
  {
    v101 = v118 - 1;
    v102 = v114;
    v103 = v118 - 1 + v117;
    do
    {
      v104 = *v102++;
      *(_BYTE *)++v101 = v104;
    }
    while ( v103 != v101 );
  }
  return 0;
}
