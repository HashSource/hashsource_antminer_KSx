int __fastcall core::str::pattern::StrSearcher::new(int a1, int a2, int a3, _BYTE *s1, size_t a5)
{
  size_t v7; // r4
  unsigned int v8; // r8
  int v9; // r5
  size_t v10; // r11
  size_t v12; // r12
  int v13; // lr
  int result; // r0
  unsigned int v15; // r4
  int v16; // r1
  char *v17; // r7
  char v18; // t1
  int v19; // r6
  bool v20; // nf
  char v21; // r2
  int v22; // r5
  char v23; // r6
  unsigned int v24; // r6
  int v25; // r3
  size_t v26; // r12
  unsigned int v27; // r7
  int v28; // r6
  int v29; // r0
  unsigned int v30; // r5
  unsigned int v31; // r0
  int v32; // r3
  unsigned int v33; // r0
  unsigned int v34; // r7
  unsigned int v35; // r0
  unsigned int v36; // r0
  int v37; // r7
  int v38; // r0
  int v39; // r3
  int v40; // r0
  int v41; // r6
  unsigned int v42; // r7
  unsigned int v43; // r0
  int v44; // r0
  int v45; // r2
  int v46; // r3
  int v47; // r0
  unsigned int v48; // r12
  int v49; // r7
  int v50; // r6
  unsigned int v51; // r1
  unsigned int v52; // r0
  unsigned int v53; // r1
  int v54; // r0
  int v55; // r6
  int v56; // r2
  int v57; // r0
  unsigned int v58; // r5
  int v59; // r7
  int v60; // r3
  unsigned int v61; // r0
  unsigned int v62; // r1
  int v63; // r0
  int v64; // r7
  char v65; // r5
  int v66; // r5
  bool v67; // nf
  char v68; // r2
  int v69; // r4
  char v70; // r5
  unsigned int v71; // r5
  char **v72; // r2
  _DWORD *v74; // [sp+8h] [bp-4h]

  if ( !a5 )
  {
    *(_DWORD *)(a1 + 48) = a2;
    *(_DWORD *)(a1 + 52) = a3;
    *(_DWORD *)(a1 + 56) = s1;
    *(_DWORD *)(a1 + 60) = 0;
    *(_BYTE *)(a1 + 14) = 0;
    *(_WORD *)(a1 + 12) = 257;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = a3;
    return 0;
  }
  v7 = 0;
  if ( a5 != 1 )
  {
    v28 = 1;
    v29 = 1;
    v30 = 0;
    v8 = 1;
    do
    {
      v32 = v29;
      v33 = v30 + v7;
      if ( v30 + v7 >= a5 )
        goto LABEL_87;
      v34 = (unsigned __int8)s1[v28];
      v35 = (unsigned __int8)s1[v33];
      if ( v34 < v35 )
      {
        v31 = v32 + v30;
        v30 = 0;
        v29 = v31 + 1;
        v8 = v29 - v7;
      }
      else if ( v34 == v35 )
      {
        v36 = v30 + 1;
        v30 = v30 + 1 - v8;
        if ( v30 )
          v30 = v36;
        if ( v36 == v8 )
          v32 += v36;
        v29 = v32;
      }
      else
      {
        v29 = v32 + 1;
        v30 = 0;
        v8 = 1;
        v7 = v32;
      }
      v28 = v29 + v30;
    }
    while ( v29 + v30 < a5 );
    v10 = 0;
    v37 = 1;
    v38 = 1;
    v39 = 0;
    v9 = 1;
    while ( 1 )
    {
      v41 = v38;
      v33 = v39 + v10;
      if ( v39 + v10 >= a5 )
        break;
      v42 = (unsigned __int8)s1[v37];
      v43 = (unsigned __int8)s1[v33];
      if ( v42 > v43 )
      {
        v40 = v41 + v39;
        v39 = 0;
        v38 = v40 + 1;
        v9 = v38 - v10;
      }
      else if ( v42 == v43 )
      {
        v44 = v39 + 1;
        v39 = v39 + 1 - v9;
        if ( v39 )
          v39 = v44;
        if ( v44 == v9 )
          v41 += v44;
        v38 = v41;
      }
      else
      {
        v38 = v41 + 1;
        v39 = 0;
        v9 = 1;
        v10 = v41;
      }
      v37 = v38 + v39;
      if ( v38 + v39 >= a5 )
        goto LABEL_4;
    }
LABEL_87:
    v72 = &off_2EF420;
    goto LABEL_90;
  }
  v8 = 1;
  v9 = 1;
  v10 = 0;
LABEL_4:
  if ( v7 > v10 )
    v10 = v7;
  else
    v8 = v9;
  if ( v10 > a5 )
    goto LABEL_93;
  if ( __CFADD__(v8, v10) )
    core::slice::index::slice_index_order_fail();
  v74 = (_DWORD *)a1;
  if ( v8 + v10 > a5 )
    goto LABEL_93;
  if ( !bcmp(s1, &s1[v8], v10) )
  {
    v45 = 0;
    v46 = 1;
    v47 = 1;
    v48 = 0;
    v13 = a3;
    do
    {
      v49 = v47 + v45;
      if ( v47 + v45 >= a5 )
        break;
      v50 = v47;
      v33 = a5 - v45 + ~v47;
      if ( v33 >= a5 )
      {
LABEL_88:
        v72 = &off_2EF430;
        goto LABEL_90;
      }
      v51 = ~v45 + a5 - v48;
      if ( v51 >= a5 )
      {
LABEL_89:
        v33 = v51;
        v72 = &off_2EF440;
LABEL_90:
        core::panicking::panic_bounds_check(v33, a5, (int)v72);
      }
      v52 = (unsigned __int8)s1[v33];
      v53 = (unsigned __int8)s1[v51];
      if ( v52 < v53 )
      {
        v47 = v49 + 1;
        v45 = 0;
        v46 = v49 + 1 - v48;
      }
      else if ( v52 == v53 )
      {
        v54 = v45 + 1;
        v45 = v45 + 1 - v46;
        if ( v45 )
          v45 = v54;
        if ( v54 == v46 )
          v50 += v54;
        v47 = v50;
      }
      else
      {
        v47 = v50 + 1;
        v45 = 0;
        v46 = 1;
        v48 = v50;
      }
    }
    while ( v46 != v8 );
    v55 = 0;
    v56 = 1;
    v57 = 1;
    v58 = 0;
    do
    {
      v59 = v57 + v55;
      if ( v57 + v55 >= a5 )
        break;
      v60 = v57;
      v33 = a5 - v55 + ~v57;
      if ( v33 >= a5 )
        goto LABEL_88;
      v51 = ~v55 + a5 - v58;
      if ( v51 >= a5 )
        goto LABEL_89;
      v61 = (unsigned __int8)s1[v33];
      v62 = (unsigned __int8)s1[v51];
      if ( v61 > v62 )
      {
        v57 = v59 + 1;
        v55 = 0;
        v56 = v59 + 1 - v58;
      }
      else if ( v61 == v62 )
      {
        v63 = v55 + 1;
        v55 = v55 + 1 - v56;
        if ( v55 )
          v55 = v63;
        if ( v63 == v56 )
          v60 += v63;
        v57 = v60;
      }
      else
      {
        v57 = v60 + 1;
        v55 = 0;
        v56 = 1;
        v58 = v60;
      }
    }
    while ( v56 != v8 );
    if ( v48 > v58 )
      v58 = v48;
    if ( v8 <= a5 )
    {
      v26 = a5 - v58;
      if ( v8 )
      {
        v25 = 0;
        v64 = 0;
        result = 0;
        v16 = 0;
        do
        {
          v65 = s1[v64++];
          v66 = v65 & 0x3F;
          v68 = v66 - 32;
          v67 = v66 - 32 < 0;
          v69 = 1 << v66;
          v70 = 32 - v66;
          if ( !v67 )
            v69 = 0;
          result |= v69;
          v71 = 1u >> v70;
          if ( !v67 )
            v71 = 1 << v68;
          v16 |= v71;
        }
        while ( v8 != v64 );
      }
      else
      {
        v8 = 0;
        result = 0;
        v16 = 0;
        v25 = 0;
      }
      v27 = a5;
      goto LABEL_86;
    }
LABEL_93:
    core::slice::index::slice_end_index_len_fail();
  }
  v12 = a5 - v10;
  v13 = a3;
  result = 0;
  if ( v10 > a5 - v10 )
    v12 = v10;
  v15 = a5;
  v16 = 0;
  v17 = s1;
  do
  {
    v18 = *v17++;
    v19 = v18 & 0x3F;
    v21 = v19 - 32;
    v20 = v19 - 32 < 0;
    v22 = 1 << v19;
    v23 = 32 - v19;
    if ( !v20 )
      v22 = 0;
    result |= v22;
    v24 = 1u >> v23;
    if ( !v20 )
      v24 = 1 << v21;
    v16 |= v24;
    --v15;
  }
  while ( v15 );
  v8 = v12 + 1;
  v25 = -1;
  v26 = v10;
  v27 = -1;
LABEL_86:
  v74[12] = a2;
  v74[10] = v27;
  v74[13] = v13;
  v74[14] = s1;
  v74[15] = a5;
  *v74 = 1;
  v74[2] = result;
  v74[3] = v16;
  v74[4] = v10;
  v74[5] = v26;
  v74[6] = v8;
  v74[7] = 0;
  v74[8] = v13;
  v74[9] = v25;
  return result;
}
