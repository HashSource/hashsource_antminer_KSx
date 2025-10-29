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
  unsigned int v18; // r0
  int v19; // r2
  char *v20; // r9
  unsigned int v21; // t1
  unsigned int v22; // r0
  int v23; // r1
  int v24; // r5
  char *v25; // r2
  __int64 *i; // r1
  char v27; // t1
  __int64 *j; // r3
  int v29; // t1
  char *v30; // r10
  int v31; // r9
  char *v32; // r2
  char *v33; // r5
  int v34; // r8
  size_t v35; // r3
  int v36; // r6
  size_t v37; // r11
  char *v38; // r9
  int v39; // r4
  char *v40; // r0
  _BYTE *v41; // r12
  char *v42; // lr
  char v43; // r2
  char v44; // t1
  char v45; // t1
  int v46; // r4
  char *v47; // r0
  size_t v48; // r4
  bool v49; // zf
  char *v50; // r3
  char *v51; // r2
  unsigned int *v52; // r9
  unsigned int v53; // t1
  int v54; // r10
  unsigned int *v55; // r9
  int v56; // r6
  unsigned int *v57; // r0
  unsigned int *v58; // r8
  size_t v59; // r6
  char *v60; // r5
  int v61; // t1
  unsigned int v62; // r0
  int v63; // r1
  int v64; // r4
  unsigned int v65; // r4
  void *v66; // r0
  int v67; // r9
  char *v68; // r10
  int v69; // r2
  size_t v70; // r5
  int v71; // r11
  size_t v72; // r2
  char *v73; // r5
  char *v74; // r9
  int v75; // r8
  size_t v76; // r3
  int v77; // r6
  size_t v78; // r11
  int v79; // r4
  char *v80; // r0
  _BYTE *v81; // r12
  char *v82; // lr
  char v83; // r2
  char v84; // t1
  char v85; // t1
  int v86; // r4
  char *v87; // r0
  size_t v88; // r4
  char *v89; // r3
  int v90; // lr
  char *v91; // r0
  unsigned int v92; // r2
  unsigned int v93; // r3
  char *v94; // r4
  void *v95; // r0
  void *v96; // r0
  int v97; // r1
  int v98; // r2
  int v99; // r3
  int v100; // r1
  int v101; // r2
  int v102; // r3
  __int64 *v103; // r3
  int v104; // t1
  unsigned int v105; // [sp+Ch] [bp-5E4h]
  size_t v106; // [sp+Ch] [bp-5E4h]
  void *v107; // [sp+10h] [bp-5E0h]
  unsigned int v108; // [sp+10h] [bp-5E0h]
  int v109; // [sp+14h] [bp-5DCh]
  int v110; // [sp+14h] [bp-5DCh]
  int v111; // [sp+18h] [bp-5D8h]
  int v112; // [sp+1Ch] [bp-5D4h]
  int v113; // [sp+1Ch] [bp-5D4h]
  int v114; // [sp+20h] [bp-5D0h]
  int v115; // [sp+20h] [bp-5D0h]
  char *ptr; // [sp+24h] [bp-5CCh]
  char *v117; // [sp+28h] [bp-5C8h]
  char *v118; // [sp+28h] [bp-5C8h]
  unsigned int nmemb; // [sp+2Ch] [bp-5C4h]
  size_t nmemba; // [sp+2Ch] [bp-5C4h]
  int v121; // [sp+34h] [bp-5BCh]
  size_t v122; // [sp+34h] [bp-5BCh]
  int v123; // [sp+38h] [bp-5B8h]
  unsigned int *v124; // [sp+38h] [bp-5B8h]
  int v125; // [sp+3Ch] [bp-5B4h]
  int v126; // [sp+40h] [bp-5B0h]
  int v127; // [sp+4Ch] [bp-5A4h]
  __int64 v128; // [sp+50h] [bp-5A0h] BYREF
  _BYTE v129[22]; // [sp+58h] [bp-598h] BYREF
  char v130; // [sp+6Eh] [bp-582h] BYREF
  _QWORD v131[4]; // [sp+70h] [bp-580h] BYREF
  _BYTE v132[31]; // [sp+90h] [bp-560h] BYREF
  char v133; // [sp+AFh] [bp-541h] BYREF
  _BYTE src[1328]; // [sp+B0h] [bp-540h] BYREF
  char v135; // [sp+5ECh] [bp-4h] BYREF
  char v136; // [sp+5EFh] [bp-1h] BYREF
  _DWORD v137[508]; // [sp+5F0h] [bp+0h] BYREF
  int v138; // [sp+DECh] [bp+7FCh] BYREF
  _BYTE v139[2000]; // [sp+DF0h] [bp+800h] BYREF
  int v140; // [sp+15ECh] [bp+FFCh] BYREF

  v3 = a1[1];
  v4 = *a1;
  v5 = v3 + 1;
  v107 = (void *)a1[2];
  v105 = sub_25A970(*a1, v3 + 1);
  compare_size = 3;
  expandArray(a2, (int)((v105 + 1) << v3) / 8, (int)v137, 2048, v105 + 1, 1u);
  v128 = 0;
  memset(v129, 0, sizeof(v129));
  ptr = (char *)malloc(0x4400u);
  v6 = (char *)malloc(0x4400u);
  v7 = v137;
  memset(v131, 0, 30);
  v117 = v6;
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
      if ( v9 == v137[v11] )
        goto LABEL_7;
    }
  }
  v14 = 0;
  v15 = (int *)&v135;
  v16 = v105 + 7;
  if ( (int)(v105 + 7) < 0 )
    v16 = v105 + 14;
  v17 = v5 * (v16 >> 3);
  v18 = sub_25A970(512, v4);
  v19 = v4 + 7;
  v20 = ptr;
  if ( v4 >= 0 )
    v19 = v4;
  v114 = v17 + 4;
  v109 = v19 >> 3;
  v111 = v18;
  v112 = (int)(v18 * v4) / 8;
  do
  {
    v21 = v15[1];
    ++v15;
    v22 = sub_25A89C(bswap32(v21), v111);
    v24 = v4 * v23;
    sub_125EDC(v107, v22, v139, v112);
    expandArray((int)&v139[v24 / 8], v109, (int)src, v17, v105, 0);
    if ( v17 )
    {
      v25 = src;
      for ( i = &v128; ; LOBYTE(v14) = *(_BYTE *)i )
      {
        v27 = *v25++;
        *(_BYTE *)i = v14 ^ v27;
        i = (__int64 *)((char *)i + 1);
        if ( v25 == &src[v17] )
          break;
      }
      v14 = (unsigned __int8)v128;
    }
    memcpy(v20, src, v17);
    *(_DWORD *)&v20[v17] = *v15;
    v20 += v114;
  }
  while ( v15 != &v138 );
  for ( j = &v128; ; j = (__int64 *)((char *)j + 1) )
  {
    if ( v14 )
    {
      v12 = 2;
      goto LABEL_8;
    }
    if ( j == (__int64 *)&v129[21] )
      break;
    v29 = *((unsigned __int8 *)j + 1);
    v14 = v29;
  }
  v30 = v117;
  nmemb = 512;
  v31 = 4;
  v127 = v4;
  v128 = 0;
  memset(v129, 0, sizeof(v129));
  v125 = 9;
  v123 = ~v17;
  while ( 1 )
  {
    v121 = v17 + v31 + v31;
    qsort(ptr, nmemb, v17 + v31, sub_125ECC);
    v32 = &ptr[v17];
    v33 = &ptr[v17 + v31 + v17];
    nmemb = ((nmemb - 1) >> 1) + 1;
    v126 = 2 * v31;
    v34 = 0;
    v35 = v17;
    v36 = 2 * (v17 + v31);
    v37 = v31;
    v38 = v32;
    do
    {
      v39 = 2 * v34;
      if ( v35 )
      {
        v40 = &v33[-v35];
        v41 = v131;
        v42 = &v38[v123];
        do
        {
          v44 = *v40++;
          v43 = v44;
          v45 = *++v42;
          *v41++ = v43 ^ v45;
        }
        while ( v33 != v40 );
      }
      v118 = (char *)v35;
      ++v34;
      v46 = v121 * (v39 >> 1);
      v47 = &v30[v46];
      v48 = v46 + v35;
      memcpy(v47, v131, v35);
      memcpy(&v30[v48], v38, v37);
      v38 += v36;
      memcpy(&v30[v48 + v37], v33, v37);
      v33 += v36;
      v35 = (size_t)v118;
    }
    while ( v34 != nmemb );
    v17 = (int)v118;
    v31 = v126;
    v49 = v125-- == 1;
    compare_size += 3;
    if ( v49 )
      break;
    v50 = ptr;
    ptr = v30;
    v30 = v50;
  }
  v51 = &v118[(_DWORD)v30 - 4];
  v52 = (unsigned int *)&v138;
  v117 = v30;
  do
  {
    v53 = *((_DWORD *)v51 + 1);
    v51 += 4;
    v52[1] = bswap32(v53);
    ++v52;
  }
  while ( &v140 != (int *)v52 );
  v54 = 0;
  v122 = v17;
  v124 = v52;
  do
  {
    v55 = (unsigned int *)v139;
    v56 = 0;
    do
    {
      v57 = v55;
      v56 += 2 << v54;
      v55 += 2 << v54;
      sort_pair(v57, 1 << v54);
    }
    while ( v56 < 512 );
    ++v54;
  }
  while ( v54 != 9 );
  v58 = (unsigned int *)&v138;
  v59 = v122;
  v60 = v117;
  do
  {
    v61 = v58[1];
    ++v58;
    v62 = sub_25A89C(v61, v111);
    v64 = v127 * v63;
    sub_125EDC(v107, v62, src, v112);
    expandArray((int)&src[v64 / 8], v109, (int)v132, v122, v105, 0);
    v65 = bswap32(*v58);
    memcpy(v60, v132, v122);
    *(_DWORD *)&v60[v122] = v65;
    v66 = abin2hex((int)v60, 34);
    v60 += v114;
    free(v66);
  }
  while ( v58 != v124 );
  v67 = 4;
  v68 = ptr;
  v108 = 512;
  v113 = compare_size + 3;
  nmemba = compare_size + 30;
  while ( 1 )
  {
    v115 = 2 * v67;
    v69 = v59 + 2 * v67;
    v70 = v59 + v69 - v67;
    v71 = 2 * (v69 - v67);
    v110 = v69;
    v72 = v67;
    v108 = ((v108 - 1) >> 1) + 1;
    v73 = &v117[v70];
    v74 = &v117[v59];
    v75 = 0;
    v76 = v59;
    v77 = v71;
    v78 = v72;
    do
    {
      v79 = 2 * v75;
      if ( v76 )
      {
        v80 = &v73[-v76];
        v81 = v131;
        v82 = &v74[~v122];
        do
        {
          v84 = *v80++;
          v83 = v84;
          v85 = *++v82;
          *v81++ = v83 ^ v85;
        }
        while ( v73 != v80 );
      }
      v106 = v76;
      ++v75;
      v86 = v110 * (v79 >> 1);
      v87 = &v68[v86];
      v88 = v86 + v76;
      memcpy(v87, v131, v76);
      memcpy(&v68[v88], v74, v78);
      v74 += v77;
      memcpy(&v68[v88 + v78], v73, v78);
      v73 += v77;
      v76 = v106;
    }
    while ( v108 != v75 );
    v59 = v106;
    v67 = v115;
    compare_size = v113;
    v113 += 3;
    if ( nmemba == v113 )
      break;
    v89 = v117;
    v117 = v68;
    v68 = v89;
  }
  v90 = 0;
  v91 = &v133;
  v92 = 0;
  v93 = 0;
  ptr = v68;
  do
  {
    if ( v93 <= 7 )
    {
      v94 = &v68[v106 + v90];
      v93 += 21;
      v90 += 4;
      v92 = (unsigned __int8)v94[3] | (v92 << 21) | ((unsigned __int8)v94[2] << 8) | ((v94[1] & 0x1F) << 16);
    }
    v93 -= 8;
    *++v91 = v92 >> v93;
  }
  while ( &v136 != v91 );
  v95 = abin2hex((int)src, 1344);
  free(v95);
  v96 = abin2hex((int)v68, v110);
  free(v96);
  v97 = *((_DWORD *)v68 + 1);
  v98 = *((_DWORD *)v68 + 2);
  v99 = *((_DWORD *)v68 + 3);
  LODWORD(v128) = *(_DWORD *)v68;
  HIDWORD(v128) = v97;
  *(_DWORD *)v129 = v98;
  *(_DWORD *)&v129[4] = v99;
  v100 = *((_DWORD *)v68 + 5);
  v101 = *((_DWORD *)v68 + 6);
  v102 = *((_DWORD *)v68 + 7);
  *(_DWORD *)&v129[8] = *((_DWORD *)v68 + 4);
  *(_DWORD *)&v129[12] = v100;
  *(_DWORD *)&v129[16] = v101;
  *(_WORD *)&v129[20] = v102;
  v103 = &v128;
  while ( 1 )
  {
    v104 = *(unsigned __int8 *)v103;
    v103 = (__int64 *)((char *)v103 + 1);
    v12 = v104;
    if ( v104 )
      break;
    if ( &v130 == (char *)v103 )
      goto LABEL_8;
  }
  v12 = 3;
LABEL_8:
  free(ptr);
  free(v117);
  return v12;
}
