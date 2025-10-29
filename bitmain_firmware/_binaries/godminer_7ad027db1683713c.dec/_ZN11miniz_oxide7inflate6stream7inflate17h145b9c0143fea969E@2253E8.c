int __fastcall miniz_oxide::inflate::stream::inflate(
        int *a1,
        int a2,
        unsigned __int8 *src,
        unsigned int a4,
        char *dest,
        size_t a6,
        int a7)
{
  int v8; // r10
  char v10; // r6
  int v12; // r0
  int v13; // r7
  int v14; // r3
  bool v15; // zf
  int v16; // r5
  int result; // r0
  size_t v18; // r1
  bool v19; // zf
  bool v20; // nf
  int v21; // r2
  unsigned int v22; // r11
  int v23; // r0
  unsigned int *v24; // r4
  size_t v25; // r5
  unsigned int v26; // r6
  size_t v27; // r7
  int v28; // r3
  int v29; // r12
  size_t v30; // r2
  char *v31; // r6
  int v32; // r1
  int v33; // r0
  unsigned int v34; // r5
  size_t v35; // r9
  char *v36; // r11
  const void *v37; // r1
  char *v38; // r0
  int v39; // r4
  int v40; // r6
  unsigned int v41; // r5
  int v42; // r2
  int v43; // r0
  unsigned __int8 *v44; // r2
  bool v45; // cf
  int v46; // r1
  size_t v47; // r4
  size_t v48; // r9
  char *v49; // r11
  const void *v50; // r1
  char *v51; // r0
  int v52; // r8
  unsigned int v53; // r6
  unsigned int v54; // r5
  size_t v55; // r3
  bool v56; // r1
  bool v57; // cc
  unsigned int v58; // r3
  unsigned __int8 *v59; // r2
  int v60; // r1
  unsigned int v61; // r11
  size_t v62; // r8
  int v63; // r4
  unsigned int v64; // r5
  int *v65; // r1
  int v66; // r12
  size_t v67; // r4
  int v68; // r1
  size_t v69; // r9
  size_t v70; // r7
  unsigned int v71; // r11
  int v72; // r4
  unsigned int v73; // r8
  unsigned int v74; // r5
  unsigned int v75; // r0
  bool v76; // cc
  size_t v77; // r4
  int v78; // r0
  int *v79; // [sp+10h] [bp-2Ch]
  size_t v80; // [sp+14h] [bp-28h]
  unsigned int v81; // [sp+14h] [bp-28h]
  int v82; // [sp+14h] [bp-28h]
  size_t v83; // [sp+14h] [bp-28h]
  int v84; // [sp+18h] [bp-24h]
  char v85; // [sp+1Ch] [bp-20h]
  unsigned __int8 *v86; // [sp+20h] [bp-1Ch]
  int v87; // [sp+24h] [bp-18h]
  int v89; // [sp+2Ch] [bp-10h]
  int v90; // [sp+2Ch] [bp-10h]
  int v91; // [sp+2Ch] [bp-10h]
  unsigned int v92; // [sp+30h] [bp-Ch] BYREF
  unsigned __int8 v93; // [sp+34h] [bp-8h]
  size_t n; // [sp+38h] [bp-4h]

  if ( a7 == 3 )
    goto LABEL_16;
  v8 = a2 + 43752;
  v10 = 64;
  v12 = *(unsigned __int8 *)(a2 + 43762);
  v13 = *(char *)(a2 + 43760);
  if ( !*(_BYTE *)(a2 + 43761) )
    v10 = 8;
  if ( *(unsigned __int8 *)(a2 + 43761) < 2u )
    v10 |= 1u;
  *(_BYTE *)(a2 + 43762) = 0;
  if ( v13 < 0 )
  {
    *a1 = 1;
    a1[1] = -3;
    a1[2] = 0;
    a1[3] = 0;
    return -3;
  }
  v14 = *(unsigned __int8 *)(a2 + 43763);
  v15 = a7 == 4;
  if ( a7 != 4 )
    v15 = v14 == 0;
  if ( !v15 )
  {
LABEL_16:
    a1[1] = -2;
    *a1 = 1;
    a1[2] = 0;
    a1[3] = 0;
    return 0;
  }
  *(_BYTE *)(a2 + 43763) = a7 == 4 || v14 != 0;
  if ( a7 == 4 && v12 )
  {
    v16 = 0;
    miniz_oxide::inflate::core::decompress((int)&v92, a2 + 0x8000, src, a4, (int)dest, a6, 0, v10 | 4);
    result = v92;
    v18 = n;
    v19 = v93 == 0;
    v20 = (v93 & 0x80u) != 0;
    *(_BYTE *)(v8 + 8) = v93;
    if ( v20 )
    {
      v21 = -3;
      v16 = 1;
    }
    else if ( v19 )
    {
      v21 = 1;
    }
    else
    {
      v16 = 1;
      *(_BYTE *)(v8 + 8) = -1;
      v21 = -5;
    }
    *a1 = v16;
    a1[1] = v21;
    a1[2] = result;
    a1[3] = v18;
    return result;
  }
  v22 = *(_DWORD *)(a2 + 43756);
  if ( a7 != 4 )
    v10 |= 2u;
  v79 = a1;
  if ( v22 )
  {
    v24 = (unsigned int *)(a2 + 43752);
    v23 = *(_DWORD *)(a2 + 43752);
    v25 = a6;
    if ( v22 < a6 )
      v25 = *(_DWORD *)(a2 + 43756);
    v26 = v23 + v25;
    if ( __CFADD__(v23, v25) )
      core::slice::index::slice_index_order_fail(v23, v23 + v25, (int)&off_2CE4D4);
    if ( v26 <= 0x8000 )
    {
      memcpy(dest, (const void *)(a2 + v23), v25);
      *(_DWORD *)(v8 + 4) = v22 - v25;
      *v24 = v26 & 0x7FFF;
      *v79 = 0;
      v79[1] = v13 == 0 && v22 <= a6;
      v79[2] = 0;
      v79[3] = v25;
      return 0;
    }
    v78 = v23 + v25;
LABEL_98:
    core::slice::index::slice_end_index_len_fail(v78, 0x8000, (int)&off_2CE4D4);
  }
  v27 = a6;
  v85 = v10;
  v84 = a2 + 0x8000;
  miniz_oxide::inflate::core::decompress((int)&v92, a2 + 0x8000, src, a4, a2, 0x8000u, *(_DWORD *)v8, v10);
  v28 = v92;
  v29 = v93;
  v30 = n;
  v57 = v92 > a4;
  *(_BYTE *)(v8 + 8) = v93;
  if ( v57 )
LABEL_66:
    core::slice::index::slice_start_index_len_fail(v28, a4, (int)&off_2CE4C4);
  v31 = dest;
  v86 = src;
  if ( a7 == 4 )
  {
    if ( a4 )
    {
      v32 = 0;
      v89 = 0;
      while ( 1 )
      {
        v33 = *(_DWORD *)v8;
        v80 = v27;
        if ( v30 < v27 )
          v27 = v30;
        v34 = v33 + v27;
        *(_DWORD *)(v8 + 4) = v30;
        if ( __CFADD__(v33, v27) )
          goto LABEL_94;
        v35 = v30;
        if ( v34 > 0x8000 )
          goto LABEL_95;
        v36 = v31;
        v87 = v28 + v32;
        v37 = (const void *)(a2 + v33);
        v38 = v31;
        v39 = v29;
        v40 = v28;
        memcpy(v38, v37, v27);
        v41 = v34 & 0x7FFF;
        *(_DWORD *)(v8 + 4) = v35 - v27;
        v42 = v27 + v89;
        v43 = 1;
        *(_DWORD *)v8 = v41;
        if ( (v39 & 0x80u) != 0 )
          goto LABEL_89;
        if ( !v39 )
          break;
        if ( v80 <= v35 )
          goto LABEL_81;
        a4 -= v40;
        v89 += v27;
        v44 = &v86[v40];
        v31 = &v36[v27];
        v86 = v44;
        miniz_oxide::inflate::core::decompress((int)&v92, v84, v44, a4, a2, 0x8000u, v41, v85);
        v28 = v92;
        v27 = v80 - v27;
        v29 = v93;
        v30 = n;
        v45 = a4 >= v92;
        v32 = v87;
        *(_BYTE *)(v8 + 8) = v93;
        if ( !v45 )
          goto LABEL_66;
      }
      v77 = v80;
LABEL_84:
      v65 = v79;
      v43 = 0;
      v66 = 1;
      if ( v35 > v77 )
      {
        v43 = 1;
        v66 = -5;
      }
    }
    else
    {
      a4 = 0;
      v60 = 0;
      v91 = 0;
      while ( 1 )
      {
        v33 = *(_DWORD *)v8;
        v61 = a4;
        v62 = v27;
        if ( v30 < v27 )
          v27 = v30;
        v34 = v33 + v27;
        *(_DWORD *)(v8 + 4) = v30;
        if ( __CFADD__(v33, v27) )
          goto LABEL_94;
        v35 = v30;
        if ( v34 > 0x8000 )
          goto LABEL_95;
        v87 = v28 + v60;
        v63 = v29;
        v82 = v28;
        memcpy(v31, (const void *)(a2 + v33), v27);
        v64 = v34 & 0x7FFF;
        *(_DWORD *)(v8 + 4) = v35 - v27;
        v42 = v27 + v91;
        v43 = 1;
        *(_DWORD *)v8 = v64;
        if ( (v63 & 0x80u) != 0 )
          goto LABEL_89;
        if ( !v63 )
        {
          v77 = v62;
          goto LABEL_84;
        }
        v65 = v79;
        v66 = -5;
        if ( v63 == 1 )
          break;
        if ( v62 <= v35 )
          goto LABEL_93;
        v91 += v27;
        v67 = v62 - v27;
        a4 = v61 - v82;
        v31 += v27;
        v86 += v82;
        miniz_oxide::inflate::core::decompress((int)&v92, v84, v86, v61 - v82, a2, 0x8000u, v64, v85);
        v28 = v92;
        v27 = v67;
        v29 = v93;
        v30 = n;
        v45 = v61 - v82 >= v92;
        v60 = v87;
        *(_BYTE *)(v8 + 8) = v93;
        if ( !v45 )
          goto LABEL_66;
      }
      v43 = 1;
    }
    goto LABEL_93;
  }
  if ( a4 )
  {
    v46 = 0;
    v90 = 0;
    while ( 1 )
    {
      v33 = *(_DWORD *)v8;
      v47 = v27;
      if ( v30 < v27 )
        v27 = v30;
      v34 = v33 + v27;
      v81 = a4;
      *(_DWORD *)(v8 + 4) = v30;
      if ( __CFADD__(v33, v27) )
        goto LABEL_94;
      v48 = v30;
      if ( v34 > 0x8000 )
        goto LABEL_95;
      v49 = v31;
      v87 = v28 + v46;
      v50 = (const void *)(a2 + v33);
      v51 = v31;
      v52 = v29;
      v53 = v28;
      memcpy(v51, v50, v27);
      v54 = v34 & 0x7FFF;
      *(_DWORD *)(v8 + 4) = v48 - v27;
      v42 = v27 + v90;
      *(_DWORD *)v8 = v54;
      if ( (v52 & 0x80u) != 0 )
        break;
      v55 = v48;
      v90 += v27;
      v56 = v52 == 0;
      if ( !v52 )
        goto LABEL_91;
      a4 = v81 - v53;
      v57 = v81 > v53;
      if ( v81 != v53 )
        v57 = v47 > v48;
      if ( !v57 )
        goto LABEL_91;
      v58 = v81 - v53;
      v59 = &v86[v53];
      v31 = &v49[v27];
      v86 = v59;
      miniz_oxide::inflate::core::decompress((int)&v92, v84, v59, v58, a2, 0x8000u, v54, v85);
      v28 = v92;
      v27 = v47 - v27;
      v29 = v93;
      v30 = n;
      v45 = a4 >= v92;
      v46 = v87;
      *(_BYTE *)(v8 + 8) = v93;
      if ( !v45 )
        goto LABEL_66;
    }
    v43 = 1;
LABEL_89:
    v66 = -3;
    goto LABEL_92;
  }
  a4 = 0;
  v68 = 0;
  v69 = a6;
  v90 = 0;
  while ( 1 )
  {
    v33 = *(_DWORD *)v8;
    v83 = v69;
    if ( v30 < v69 )
      v69 = v30;
    v34 = v33 + v69;
    *(_DWORD *)(v8 + 4) = v30;
    if ( __CFADD__(v33, v69) )
LABEL_94:
      core::slice::index::slice_index_order_fail(v33, v34, (int)&off_2CE4D4);
    v70 = v30;
    if ( v34 > 0x8000 )
    {
LABEL_95:
      v78 = v34;
      goto LABEL_98;
    }
    v87 = v28 + v68;
    v71 = a4;
    v72 = v29;
    v73 = v28;
    memcpy(v31, (const void *)(a2 + v33), v69);
    v74 = v34 & 0x7FFF;
    *(_DWORD *)(v8 + 4) = v70 - v69;
    v42 = v69 + v90;
    v43 = 1;
    *(_DWORD *)v8 = v74;
    if ( (v72 & 0x80u) != 0 )
      goto LABEL_89;
    if ( v72 == 1 )
    {
LABEL_81:
      v66 = -5;
      goto LABEL_92;
    }
    v55 = v70;
    v90 += v69;
    v56 = v72 == 0;
    if ( !v72 )
      break;
    v75 = v73;
    v47 = v83;
    v45 = v71 >= v73;
    a4 = v71 - v73;
    v76 = a4 != 0 && v45;
    if ( a4 )
      v76 = v83 > v70;
    if ( !v76 )
      goto LABEL_91;
    v31 += v69;
    v86 += v75;
    miniz_oxide::inflate::core::decompress((int)&v92, v84, v86, a4, a2, 0x8000u, v74, v85);
    v28 = v92;
    v69 = v83 - v69;
    v29 = v93;
    v30 = n;
    v45 = a4 >= v92;
    v68 = v87;
    *(_BYTE *)(v8 + 8) = v93;
    if ( !v45 )
      goto LABEL_66;
  }
  v47 = v83;
LABEL_91:
  v66 = v55 <= v47 && v56;
  v43 = 0;
  v42 = v90;
LABEL_92:
  v65 = v79;
LABEL_93:
  *v65 = v43;
  v65[1] = v66;
  v65[2] = v87;
  v65[3] = v42;
  return v87;
}
