int __fastcall eth_sha3_256(int a1, unsigned int a2, int a3, unsigned int a4)
{
  const char *v4; // r10
  int v5; // r4
  const char *v7; // r9
  int *v8; // r2
  char *v9; // r2
  int v10; // r1
  char v11; // t1
  int *v12; // r3
  __int64 v13; // r8
  __int64 *v14; // r4
  __int64 v15; // r0
  int *v16; // r10
  __int64 v17; // r6
  __int64 *i; // r3
  __int64 *v19; // r3
  __int64 *v20; // r12
  unsigned int v21; // r1
  _BYTE *v22; // r3
  unsigned int v23; // r4
  unsigned int v24; // r3
  int v25; // r5
  __int64 v26; // r6
  __int64 *v27; // lr
  __int64 v28; // r2
  const char *v29; // r0
  int v30; // r1
  char v31; // r6
  unsigned __int64 v32; // r2
  char *v33; // r12
  const char *v34; // r7
  int v35; // t1
  int *v36; // r1
  int v37; // lr
  unsigned __int64 v38; // r4
  int v39; // r6
  __int64 *v40; // r7
  int *v41; // r8
  int *v42; // r3
  __int64 *v43; // r2
  __int64 v44; // t1
  __int64 *v45; // r6
  __int64 *v46; // lr
  unsigned int j; // r12
  __int64 v48; // t1
  unsigned int v49; // r3
  bool v50; // cc
  unsigned int v51; // r1
  bool v52; // zf
  unsigned int v53; // r3
  char *v54; // r12
  int v55; // r1
  int v56; // r3
  char v57; // r0
  char v58; // t1
  char v59; // t1
  __int64 v60; // r6
  int *v61; // r3
  int v62; // r8
  const char *v63; // r11
  int *v64; // r10
  __int64 v65; // r0
  __int64 *v66; // r12
  __int64 v67; // r4
  __int64 *v68; // r3
  __int64 *v69; // r4
  int v70; // r12
  int *v71; // r5
  int v72; // r0
  unsigned __int64 v73; // r10
  _BYTE *v74; // r3
  int v75; // lr
  __int64 v76; // r10
  __int64 v77; // r2
  __int64 *v78; // lr
  __int64 v79; // r8
  __int64 v80; // r2
  const char *v81; // r0
  const char *v82; // r11
  int v83; // r6
  int v84; // r1
  unsigned __int64 v85; // r2
  char *k; // r12
  int v87; // t1
  int v88; // t1
  int *v89; // r1
  unsigned __int64 v90; // d17
  int v91; // lr
  int v92; // r6
  char *v93; // r7
  int *v94; // r11
  int *v95; // r3
  __int64 *v96; // r2
  __int64 v97; // t1
  __int64 *v98; // lr
  __int64 *v99; // r6
  int m; // r12
  __int64 v101; // t1
  unsigned int v102; // r3
  int v103; // r3
  const char *v104; // r1
  unsigned int v105; // r2
  char v106; // t1
  const char *v108; // [sp+4h] [bp-130h]
  const char *v109; // [sp+8h] [bp-12Ch]
  int v110; // [sp+Ch] [bp-128h]
  __int64 v111; // [sp+10h] [bp-124h]
  int *v112; // [sp+18h] [bp-11Ch]
  const char *v113; // [sp+1Ch] [bp-118h]
  const char *v114; // [sp+20h] [bp-114h]
  const char *v115; // [sp+24h] [bp-110h]
  int v116; // [sp+28h] [bp-10Ch]
  int v117; // [sp+2Ch] [bp-108h]
  int v118; // [sp+30h] [bp-104h]
  unsigned int v119; // [sp+34h] [bp-100h]
  unsigned int v120; // [sp+38h] [bp-FCh]
  int v121; // [sp+3Ch] [bp-F8h]
  int v122; // [sp+40h] [bp-F4h] BYREF
  int v123; // [sp+44h] [bp-F0h]
  char v124; // [sp+67h] [bp-CDh] BYREF
  _QWORD s[25]; // [sp+68h] [bp-CCh] BYREF
  _BYTE v126[4]; // [sp+130h] [bp-4h] BYREF

  v120 = a2;
  v121 = a1;
  v118 = a3;
  v119 = a4;
  if ( a2 > 0x20 || !a1 )
    return -1;
  v5 = a4;
  if ( a4 )
    v5 = 1;
  if ( a3 )
    v5 = 0;
  if ( v5 )
    return -1;
  v7 = (const char *)s;
  memset(s, 0, sizeof(s));
  if ( a4 <= 0x87 )
  {
    v8 = &v122;
    v4 = (const char *)&unk_29AFB7;
  }
  v114 = (const char *)&unk_29AF98;
  if ( a4 > 0x87 )
  {
    v4 = (const char *)&unk_29AFB7;
    v108 = (const char *)s;
    v112 = &v122;
    while ( 1 )
    {
      v9 = (char *)v108;
      v10 = v118 - 1;
      while ( 1 )
      {
        v11 = *(_BYTE *)++v10;
        *v9++ = v11 ^ v5;
        if ( &s[17] == (_QWORD *)v9 )
          break;
        LOBYTE(v5) = *v9;
      }
      v12 = v112;
      v13 = s[0];
      *(_QWORD *)v112 = 0;
      *((_QWORD *)v12 + 1) = 0;
      v113 = (const char *)&unk_29AEE0;
      *((_QWORD *)v12 + 2) = 0;
      v111 = 1;
      *((_QWORD *)v12 + 3) = 0;
      v115 = v4;
      *((_QWORD *)v12 + 4) = 0;
      while ( 1 )
      {
        v14 = (__int64 *)v108;
        v15 = v13;
        v16 = v112;
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
          v19 = (__int64 *)v108;
          ++v14;
          *((_QWORD *)v16 - 1) = v17;
          if ( v19 == (__int64 *)v16 )
            break;
          v15 = *v14;
        }
        v20 = v19;
        v21 = 1;
        while ( 1 )
        {
          v22 = &v126[8 * (v21 % 5)];
          v23 = *((_DWORD *)v22 - 59);
          v24 = *((_DWORD *)v22 - 60);
          v25 = 2 * v24;
          HIDWORD(v26) = (2 * v23) | (v24 >> 31);
          LODWORD(v26) = (2 * v24) | (v23 >> 31);
          v27 = v20;
          v28 = *((_QWORD *)&v122 + (v21 + 3) % 5) ^ v26;
          while ( 1 )
          {
            *v27 = v13 ^ v28;
            v27 += 5;
            if ( v27 == v20 + 25 )
              break;
            v13 = *v27;
          }
          ++v21;
          ++v20;
          if ( v21 == 6 )
            break;
          v13 = *v20;
        }
        v29 = asc_29AFA0;
        v30 = 10;
        v109 = (const char *)(v25 | (v23 >> 31));
        v110 = HIDWORD(v26);
        v31 = 1;
        v32 = s[1];
        v33 = (char *)&unk_29AFB8;
        v34 = v115;
        while ( 1 )
        {
          v36 = (int *)&v108[8 * v30];
          v37 = *v36;
          v38 = (v32 << v31) | (v32 >> (-v31 & 0x3F));
          v39 = v36[1];
          LODWORD(v32) = *v36;
          *(_QWORD *)v36 = v38;
          if ( v34 == v29 )
            break;
          HIDWORD(v32) = v39;
          v35 = *(unsigned __int8 *)++v29;
          v30 = v35;
          LOBYTE(v35) = *++v33;
          v31 = v35;
        }
        v40 = (__int64 *)v108;
        v41 = v112;
        v122 = v37;
        v123 = v39;
        do
        {
          v42 = v41;
          v43 = v40;
          do
          {
            v44 = *v43++;
            *(_QWORD *)v42 = v44;
            v42 += 2;
          }
          while ( v42 != v16 );
          v45 = v40;
          v46 = (__int64 *)v41;
          for ( j = 1; j != 6; *v45++ = *((_QWORD *)&v122 + ++j % 5) & ~*((_QWORD *)&v122 + v49) ^ v48 )
          {
            v48 = *v46++;
            v49 = j % 5;
          }
          v40 += 5;
        }
        while ( v126 != (_BYTE *)v40 );
        v13 = v111 ^ s[0];
        s[0] ^= v111;
        if ( v114 == v113 )
          break;
        v111 = *((_QWORD *)v113 + 1);
        v113 += 8;
      }
      v4 = v115;
      v50 = v119 - 136 > 0x87;
      v119 -= 136;
      v118 += 136;
      if ( !v50 )
        break;
      LOBYTE(v5) = s[0];
    }
    v7 = v108;
  }
  else
  {
    v112 = v8;
  }
  v51 = v119;
  v52 = v119 == 0;
  *((_BYTE *)s + v119) ^= 1u;
  HIBYTE(s[16]) = ~(HIBYTE(s[16]) ^ 0x7F);
  if ( !v52 )
  {
    v53 = v51 - 1;
    v54 = &v124;
    v55 = v118 - 1;
    v56 = v118 + v53;
    do
    {
      v58 = *(_BYTE *)++v55;
      v57 = v58;
      v59 = *++v54;
      *v54 = v59 ^ v57;
    }
    while ( v56 != v55 );
  }
  v60 = s[0];
  v109 = (const char *)&unk_29AEE0;
  v61 = v112;
  v62 = -858993459;
  v63 = v4;
  *(_QWORD *)v112 = 0;
  *((_QWORD *)v61 + 1) = 0;
  v111 = 1;
  *((_QWORD *)v61 + 2) = 0;
  *((_QWORD *)v61 + 3) = 0;
  *((_QWORD *)v61 + 4) = 0;
  while ( 1 )
  {
    v64 = v112;
    v65 = v60;
    v66 = (__int64 *)v7;
    v115 = v7;
    while ( 1 )
    {
      v67 = 0;
      v68 = v66;
      *(_QWORD *)v64 = 0;
      v64 += 2;
      while ( 1 )
      {
        v68 += 5;
        v67 ^= v65;
        if ( v66 + 25 == v68 )
          break;
        v65 = *v68;
      }
      *((_QWORD *)v64 - 1) = v67;
      ++v66;
      if ( v7 == (const char *)v64 )
        break;
      v65 = *v66;
    }
    v69 = (__int64 *)v7;
    v70 = 1;
    v71 = v64;
    v72 = v62;
    v108 = v63;
    v113 = v7;
    while ( 1 )
    {
      v73 = (unsigned int)(v70 + 3) * (unsigned __int64)(unsigned int)v72;
      v74 = &v126[8 * (v70 - 5 * ((unsigned int)(((unsigned int)v70 * (unsigned __int64)(unsigned int)v72) >> 32) >> 2))];
      LODWORD(v76) = *((_DWORD *)v74 - 59);
      v75 = v70 + 3 - 5 * (HIDWORD(v73) >> 2);
      HIDWORD(v76) = *((_DWORD *)v74 - 60);
      HIDWORD(v79) = *((__int64 *)v74 - 30) >> 31;
      v77 = *((_QWORD *)&v122 + v75);
      v78 = v69;
      LODWORD(v79) = v76 >> 31;
      v80 = v77 ^ v79;
      while ( 1 )
      {
        *v78 = v60 ^ v80;
        v78 += 5;
        if ( v69 + 25 == v78 )
          break;
        v60 = *v78;
      }
      ++v70;
      ++v69;
      if ( v70 == 6 )
        break;
      v60 = *v69;
    }
    v116 = v76 >> 31;
    v117 = HIDWORD(v79);
    v62 = v72;
    v81 = asc_29AFA0;
    v82 = v108;
    v83 = 1;
    v7 = v113;
    v84 = 10;
    v85 = s[1];
    for ( k = (char *)&unk_29AFB8; ; ++k )
    {
      v89 = (int *)&v7[8 * v84];
      v90 = vshld_u64(v85, (unsigned int)v83);
      v85 >>= -(char)v83 & 0x3F;
      v91 = v89[1];
      v92 = *v89;
      *(_QWORD *)v89 = v90 | v85;
      LODWORD(v85) = v92;
      if ( v82 == v81 )
        break;
      v87 = *(unsigned __int8 *)++v81;
      v84 = v87;
      HIDWORD(v85) = v91;
      v88 = (unsigned __int8)k[1];
      v83 = v88;
    }
    v113 = v82;
    v93 = (char *)v7;
    v94 = v112;
    v122 = v92;
    v108 = v7 + 200;
    v123 = v91;
    do
    {
      v95 = v94;
      v96 = (__int64 *)v93;
      do
      {
        v97 = *v96++;
        *(_QWORD *)v95 = v97;
        v95 += 2;
      }
      while ( v71 != v95 );
      v98 = (__int64 *)v93;
      v99 = (__int64 *)v94;
      for ( m = 1;
            m != 6;
            *v98++ = *((_QWORD *)&v122
                     + m
                     - 5 * ((unsigned int)(((unsigned int)m * (unsigned __int64)(unsigned int)v62) >> 32) >> 2))
                   & ~*((_QWORD *)&v122 + v102)
                   ^ v101 )
      {
        v101 = *v99++;
        v102 = m - 5 * ((unsigned int)(((unsigned int)m * (unsigned __int64)(unsigned int)v62) >> 32) >> 2);
        ++m;
      }
      v93 += 40;
    }
    while ( v108 != v93 );
    v63 = v113;
    v60 = v111 ^ s[0];
    s[0] ^= v111;
    if ( v114 == v109 )
      break;
    v111 = *((_QWORD *)v109 + 1);
    v109 += 8;
  }
  if ( v120 )
  {
    v103 = v121 - 1;
    v104 = v115;
    v105 = v121 - 1 + v120;
    do
    {
      v106 = *v104++;
      *(_BYTE *)++v103 = v106;
    }
    while ( v105 != v103 );
  }
  return 0;
}
