int __fastcall sortValidator(int *a1, int a2)
{
  int v3; // r4
  int v4; // r11
  int v5; // r6
  char *v6; // r0
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // t1
  int v11; // r3
  int v12; // r4
  int v14; // r4
  int *v15; // r10
  int v16; // r3
  int v17; // r6
  int v18; // r0
  int v19; // r2
  char *v20; // r9
  unsigned int v21; // t1
  __int64 v22; // r0
  int v23; // r5
  char *v24; // r2
  __int64 *i; // r1
  char v26; // t1
  __int64 *j; // r3
  int v28; // t1
  char *v29; // r10
  int v30; // r9
  char *v31; // r2
  char *v32; // r5
  int v33; // r8
  size_t v34; // r3
  int v35; // r6
  size_t v36; // r11
  char *v37; // r9
  int v38; // r4
  char *v39; // r0
  _BYTE *v40; // r12
  char *v41; // lr
  char v42; // r2
  char v43; // t1
  char v44; // t1
  int v45; // r4
  char *v46; // r0
  size_t v47; // r4
  bool v48; // zf
  char *v49; // r3
  char *v50; // r2
  unsigned int *v51; // r9
  unsigned int v52; // t1
  int v53; // r10
  unsigned int *v54; // r9
  int v55; // r6
  unsigned int *v56; // r0
  unsigned int *v57; // r8
  size_t v58; // r6
  char *v59; // r5
  unsigned int v60; // t1
  __int64 v61; // r0
  int v62; // r4
  unsigned int v63; // r4
  void *v64; // r0
  int v65; // r9
  char *v66; // r10
  int v67; // r2
  size_t v68; // r5
  int v69; // r11
  size_t v70; // r2
  char *v71; // r5
  char *v72; // r9
  int v73; // r8
  size_t v74; // r3
  int v75; // r6
  size_t v76; // r11
  int v77; // r4
  char *v78; // r0
  _BYTE *v79; // r12
  char *v80; // lr
  char v81; // r2
  char v82; // t1
  char v83; // t1
  int v84; // r4
  char *v85; // r0
  size_t v86; // r4
  char *v87; // r3
  int v88; // lr
  char *v89; // r0
  unsigned int v90; // r2
  unsigned int v91; // r3
  char *v92; // r4
  void *v93; // r0
  void *v94; // r0
  int v95; // r1
  int v96; // r2
  int v97; // r3
  int v98; // r1
  int v99; // r2
  int v100; // r3
  __int64 *v101; // r3
  int v102; // t1
  unsigned int v103; // [sp+Ch] [bp-5E4h]
  size_t v104; // [sp+Ch] [bp-5E4h]
  void *v105; // [sp+10h] [bp-5E0h]
  unsigned int v106; // [sp+10h] [bp-5E0h]
  int v107; // [sp+14h] [bp-5DCh]
  int v108; // [sp+14h] [bp-5DCh]
  int v109; // [sp+18h] [bp-5D8h]
  int v110; // [sp+1Ch] [bp-5D4h]
  int v111; // [sp+1Ch] [bp-5D4h]
  int v112; // [sp+20h] [bp-5D0h]
  int v113; // [sp+20h] [bp-5D0h]
  char *ptr; // [sp+24h] [bp-5CCh]
  char *v115; // [sp+28h] [bp-5C8h]
  char *v116; // [sp+28h] [bp-5C8h]
  unsigned int nmemb; // [sp+2Ch] [bp-5C4h]
  size_t nmemba; // [sp+2Ch] [bp-5C4h]
  int v119; // [sp+34h] [bp-5BCh]
  size_t v120; // [sp+34h] [bp-5BCh]
  int v121; // [sp+38h] [bp-5B8h]
  unsigned int *v122; // [sp+38h] [bp-5B8h]
  int v123; // [sp+3Ch] [bp-5B4h]
  int v124; // [sp+40h] [bp-5B0h]
  int v125; // [sp+4Ch] [bp-5A4h]
  __int64 v126; // [sp+50h] [bp-5A0h] BYREF
  _BYTE v127[22]; // [sp+58h] [bp-598h] BYREF
  char v128; // [sp+6Eh] [bp-582h] BYREF
  _QWORD v129[4]; // [sp+70h] [bp-580h] BYREF
  _BYTE v130[31]; // [sp+90h] [bp-560h] BYREF
  char v131; // [sp+AFh] [bp-541h] BYREF
  _BYTE src[1328]; // [sp+B0h] [bp-540h] BYREF
  char v133; // [sp+5ECh] [bp-4h] BYREF
  char v134; // [sp+5EFh] [bp-1h] BYREF
  _DWORD v135[508]; // [sp+5F0h] [bp+0h] BYREF
  int v136; // [sp+DECh] [bp+7FCh] BYREF
  _BYTE v137[2000]; // [sp+DF0h] [bp+800h] BYREF
  int v138; // [sp+15ECh] [bp+FFCh] BYREF

  v3 = a1[1];
  v4 = *a1;
  v5 = v3 + 1;
  v105 = (void *)a1[2];
  v103 = sub_25BAE0(*a1, v3 + 1);
  compare_size = 3;
  expandArray(a2, (int)((v103 + 1) << v3) / 8, (int)v135, 2048, v103 + 1, 1u);
  v126 = 0;
  memset(v127, 0, sizeof(v127));
  ptr = (char *)malloc(0x4400u);
  v6 = (char *)malloc(0x4400u);
  v7 = v135;
  memset(v129, 0, 30);
  v115 = v6;
  v8 = 0;
  while ( ++v8 != 512 )
  {
    v9 = *v7;
    v10 = v7[1];
    ++v7;
    if ( v9 == v10 )
    {
LABEL_7:
      v12 = 1;
      goto LABEL_8;
    }
    v11 = v8;
    while ( ++v11 != 512 )
    {
      if ( v9 == v135[v11] )
        goto LABEL_7;
    }
  }
  v14 = 0;
  v15 = (int *)&v133;
  v16 = v103 + 7;
  if ( (int)(v103 + 7) < 0 )
    v16 = v103 + 14;
  v17 = v5 * (v16 >> 3);
  v18 = sub_25BAE0(512, v4);
  v19 = v4 + 7;
  v20 = ptr;
  if ( v4 >= 0 )
    v19 = v4;
  v112 = v17 + 4;
  v107 = v19 >> 3;
  v109 = v18;
  v110 = v18 * v4 / 8;
  do
  {
    v21 = v15[1];
    ++v15;
    v22 = sub_25BA0C(bswap32(v21), v109);
    v23 = v4 * HIDWORD(v22);
    sub_12704C(v105, v22, v137, v110);
    expandArray((int)&v137[v23 / 8], v107, (int)src, v17, v103, 0);
    if ( v17 )
    {
      v24 = src;
      for ( i = &v126; ; LOBYTE(v14) = *(_BYTE *)i )
      {
        v26 = *v24++;
        *(_BYTE *)i = v14 ^ v26;
        i = (__int64 *)((char *)i + 1);
        if ( v24 == &src[v17] )
          break;
      }
      v14 = (unsigned __int8)v126;
    }
    memcpy(v20, src, v17);
    *(_DWORD *)&v20[v17] = *v15;
    v20 += v112;
  }
  while ( v15 != &v136 );
  for ( j = &v126; ; j = (__int64 *)((char *)j + 1) )
  {
    if ( v14 )
    {
      v12 = 2;
      goto LABEL_8;
    }
    if ( j == (__int64 *)&v127[21] )
      break;
    v28 = *((unsigned __int8 *)j + 1);
    v14 = v28;
  }
  v29 = v115;
  nmemb = 512;
  v30 = 4;
  v125 = v4;
  v126 = 0;
  memset(v127, 0, sizeof(v127));
  v123 = 9;
  v121 = ~v17;
  while ( 1 )
  {
    v119 = v17 + v30 + v30;
    qsort(ptr, nmemb, v17 + v30, sub_12703C);
    v31 = &ptr[v17];
    v32 = &ptr[v17 + v30 + v17];
    nmemb = ((nmemb - 1) >> 1) + 1;
    v124 = 2 * v30;
    v33 = 0;
    v34 = v17;
    v35 = 2 * (v17 + v30);
    v36 = v30;
    v37 = v31;
    do
    {
      v38 = 2 * v33;
      if ( v34 )
      {
        v39 = &v32[-v34];
        v40 = v129;
        v41 = &v37[v121];
        do
        {
          v43 = *v39++;
          v42 = v43;
          v44 = *++v41;
          *v40++ = v42 ^ v44;
        }
        while ( v32 != v39 );
      }
      v116 = (char *)v34;
      ++v33;
      v45 = v119 * (v38 >> 1);
      v46 = &v29[v45];
      v47 = v45 + v34;
      memcpy(v46, v129, v34);
      memcpy(&v29[v47], v37, v36);
      v37 += v35;
      memcpy(&v29[v47 + v36], v32, v36);
      v32 += v35;
      v34 = (size_t)v116;
    }
    while ( v33 != nmemb );
    v17 = (int)v116;
    v30 = v124;
    v48 = v123-- == 1;
    compare_size += 3;
    if ( v48 )
      break;
    v49 = ptr;
    ptr = v29;
    v29 = v49;
  }
  v50 = &v116[(_DWORD)v29 - 4];
  v51 = (unsigned int *)&v136;
  v115 = v29;
  do
  {
    v52 = *((_DWORD *)v50 + 1);
    v50 += 4;
    v51[1] = bswap32(v52);
    ++v51;
  }
  while ( &v138 != (int *)v51 );
  v53 = 0;
  v120 = v17;
  v122 = v51;
  do
  {
    v54 = (unsigned int *)v137;
    v55 = 0;
    do
    {
      v56 = v54;
      v55 += 2 << v53;
      v54 += 2 << v53;
      sort_pair(v56, 1 << v53);
    }
    while ( v55 < 512 );
    ++v53;
  }
  while ( v53 != 9 );
  v57 = (unsigned int *)&v136;
  v58 = v120;
  v59 = v115;
  do
  {
    v60 = v57[1];
    ++v57;
    v61 = sub_25BA0C(v60, v109);
    v62 = v125 * HIDWORD(v61);
    sub_12704C(v105, v61, src, v110);
    expandArray((int)&src[v62 / 8], v107, (int)v130, v120, v103, 0);
    v63 = bswap32(*v57);
    memcpy(v59, v130, v120);
    *(_DWORD *)&v59[v120] = v63;
    v64 = abin2hex((int)v59, 34);
    v59 += v112;
    free(v64);
  }
  while ( v57 != v122 );
  v65 = 4;
  v66 = ptr;
  v106 = 512;
  v111 = compare_size + 3;
  nmemba = compare_size + 30;
  while ( 1 )
  {
    v113 = 2 * v65;
    v67 = v58 + 2 * v65;
    v68 = v58 + v67 - v65;
    v69 = 2 * (v67 - v65);
    v108 = v67;
    v70 = v65;
    v106 = ((v106 - 1) >> 1) + 1;
    v71 = &v115[v68];
    v72 = &v115[v58];
    v73 = 0;
    v74 = v58;
    v75 = v69;
    v76 = v70;
    do
    {
      v77 = 2 * v73;
      if ( v74 )
      {
        v78 = &v71[-v74];
        v79 = v129;
        v80 = &v72[~v120];
        do
        {
          v82 = *v78++;
          v81 = v82;
          v83 = *++v80;
          *v79++ = v81 ^ v83;
        }
        while ( v71 != v78 );
      }
      v104 = v74;
      ++v73;
      v84 = v108 * (v77 >> 1);
      v85 = &v66[v84];
      v86 = v84 + v74;
      memcpy(v85, v129, v74);
      memcpy(&v66[v86], v72, v76);
      v72 += v75;
      memcpy(&v66[v86 + v76], v71, v76);
      v71 += v75;
      v74 = v104;
    }
    while ( v106 != v73 );
    v58 = v104;
    v65 = v113;
    compare_size = v111;
    v111 += 3;
    if ( nmemba == v111 )
      break;
    v87 = v115;
    v115 = v66;
    v66 = v87;
  }
  v88 = 0;
  v89 = &v131;
  v90 = 0;
  v91 = 0;
  ptr = v66;
  do
  {
    if ( v91 <= 7 )
    {
      v92 = &v66[v104 + v88];
      v91 += 21;
      v88 += 4;
      v90 = (unsigned __int8)v92[3] | (v90 << 21) | ((unsigned __int8)v92[2] << 8) | ((v92[1] & 0x1F) << 16);
    }
    v91 -= 8;
    *++v89 = v90 >> v91;
  }
  while ( &v134 != v89 );
  v93 = abin2hex((int)src, 1344);
  free(v93);
  v94 = abin2hex((int)v66, v108);
  free(v94);
  v95 = *((_DWORD *)v66 + 1);
  v96 = *((_DWORD *)v66 + 2);
  v97 = *((_DWORD *)v66 + 3);
  LODWORD(v126) = *(_DWORD *)v66;
  HIDWORD(v126) = v95;
  *(_DWORD *)v127 = v96;
  *(_DWORD *)&v127[4] = v97;
  v98 = *((_DWORD *)v66 + 5);
  v99 = *((_DWORD *)v66 + 6);
  v100 = *((_DWORD *)v66 + 7);
  *(_DWORD *)&v127[8] = *((_DWORD *)v66 + 4);
  *(_DWORD *)&v127[12] = v98;
  *(_DWORD *)&v127[16] = v99;
  *(_WORD *)&v127[20] = v100;
  v101 = &v126;
  while ( 1 )
  {
    v102 = *(unsigned __int8 *)v101;
    v101 = (__int64 *)((char *)v101 + 1);
    v12 = v102;
    if ( v102 )
      break;
    if ( &v128 == (char *)v101 )
      goto LABEL_8;
  }
  v12 = 3;
LABEL_8:
  free(ptr);
  free(v115);
  return v12;
}
