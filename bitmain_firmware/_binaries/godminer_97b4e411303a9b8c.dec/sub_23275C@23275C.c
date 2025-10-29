int __fastcall sub_23275C(_DWORD *a1, _DWORD *a2, char a3)
{
  _DWORD *v4; // r10
  int *v5; // r12
  int v7; // r11
  char v8; // r3
  unsigned int v9; // r0
  unsigned int v10; // r1
  _BOOL4 v11; // r9
  char v12; // r0
  unsigned int v13; // r7
  unsigned int v14; // r3
  _DWORD *v15; // r6
  int v16; // r1
  unsigned int v17; // r0
  unsigned int v18; // r5
  int v19; // r4
  unsigned int v20; // r0
  int v21; // r0
  unsigned int v22; // r7
  int *v23; // r5
  int *v24; // r0
  unsigned int v25; // r8
  unsigned int v26; // r7
  int *v27; // r1
  int v28; // r3
  int *v29; // r0
  unsigned __int8 v30; // r4
  size_t v31; // r1
  _BOOL4 v32; // r0
  char v33; // r0
  unsigned int v34; // r2
  bool v35; // cf
  unsigned int v36; // r3
  int v37; // r2
  int v38; // r2
  unsigned int v39; // r7
  unsigned int v40; // r7
  int v41; // r2
  int v42; // r7
  unsigned int v43; // r7
  unsigned int v44; // r7
  size_t v45; // r7
  unsigned int v46; // r2
  int v47; // lr
  int v48; // r6
  unsigned int v49; // r5
  int v50; // r4
  __int16 v51; // r0
  int v52; // r0
  _DWORD *v54; // r9
  unsigned int v55; // r2
  unsigned int v56; // r7
  size_t v57; // r2
  int v58; // r3
  unsigned int v59; // r7
  size_t v60; // r5
  int v61; // r6
  char v62; // r0
  unsigned int v63; // r2
  size_t v64; // r7
  int v65; // r3
  unsigned int v66; // r6
  unsigned int v67; // r2
  size_t v68; // r2
  unsigned int v69; // r7
  int v70; // r3
  unsigned int v71; // r5
  int v72; // r3
  size_t v73; // r5
  int v74; // r3
  int v75; // r12
  int v76; // r2
  unsigned int v77; // r4
  _DWORD *v78; // r0
  int v79; // r0
  int v80; // r3
  size_t v81; // r1
  size_t v82; // r4
  size_t v83; // r6
  size_t v84; // r7
  _DWORD *v86; // [sp+8h] [bp-24h]
  int v87; // [sp+Ch] [bp-20h]
  _DWORD *v88; // [sp+10h] [bp-1Ch]
  int v89; // [sp+14h] [bp-18h] BYREF
  int *v90; // [sp+18h] [bp-14h]
  size_t n; // [sp+1Ch] [bp-10h]
  unsigned int v92; // [sp+20h] [bp-Ch]
  unsigned int v93; // [sp+24h] [bp-8h]
  unsigned __int8 v94; // [sp+28h] [bp-4h]

  v4 = a1 + 16388;
  v5 = &elf_hash_chain[693];
  v7 = a1[16399];
  v8 = 1;
  if ( a2[4] == 1 )
  {
    v9 = a1[16396];
    v10 = a2[6];
    if ( v10 - v9 > (unsigned int)&elf_hash_chain[696] + 3 )
    {
      if ( v9 > 0xFFFEB343 )
        core::slice::index::slice_index_order_fail();
      if ( (unsigned int)&elf_hash_chain[693] + v9 > v10 )
        core::slice::index::slice_end_index_len_fail();
      v8 = 0;
      v7 = a2[5] + v9;
    }
  }
  v94 = v8;
  v11 = 0;
  v12 = *((_BYTE *)v4 + 2);
  v13 = v4[9];
  v14 = v4[10];
  n = 0;
  v90 = &elf_hash_chain[693];
  v89 = v7;
  if ( (v12 & 8) != 0 )
    v11 = (unsigned int)(v4[19] - v4[17]) <= v4[20];
  if ( v4[5] )
    core::panicking::panic((int)aAssertionFaile_2, 47, (int)&off_2E4074);
  v15 = a1 + 0x4000;
  v4[4] = 0;
  v16 = a1[16387];
  v4[5] = 0;
  if ( v16 != 8 )
  {
    v17 = a1[16385];
    if ( v17 < 0x10000 )
    {
      *((_BYTE *)a1 + v17) = *((unsigned __int8 *)a1 + v17) >> (v16 & 7);
      goto LABEL_14;
    }
LABEL_130:
    core::panicking::panic_bounds_check(v17, 0x10000, (int)&off_2E3FF4);
  }
  v17 = a1[16385];
  if ( v17 >= 0x10000 )
    goto LABEL_130;
  *((_BYTE *)a1 + v17) = 0;
  --*v15;
LABEL_14:
  v18 = 0;
  v88 = a1 + 0x4000;
  if ( (*v4 & 0x1000) != 0 && !v4[1] )
  {
    v19 = 2;
    v20 = *v4 & 0xFFF;
    if ( v20 >> 8 > 2 )
      v19 = 3;
    v18 = 0;
    v21 = v20 > 1;
    if ( (*v4 & 0x4000) == 0 )
      v21 = v19;
    v22 = v13 | (120 << (v14 & 0x1F));
    if ( v14 > 0xFFFFFFF7 )
    {
      v14 += 8;
    }
    else
    {
      v23 = 0;
      while ( 1 )
      {
        *((_BYTE *)v23 + v7) = v22;
        v22 >>= 8;
        if ( v14 <= 7 )
          break;
        v23 = (int *)((char *)v23 + 1);
        v14 -= 8;
        if ( &elf_hash_chain[693] == v23 )
        {
          v24 = &elf_hash_chain[693];
          goto LABEL_129;
        }
      }
      v7 = v89;
      v18 = (unsigned int)v23 + 1;
      v5 = v90;
    }
    v15 = a1 + 0x4000;
    v13 = v22
        | (((unsigned __int8)((-31
                             * ((((((v21 << 6) | 0x7800)
                                 - ((unsigned int)(2115 * (__int16)(((_WORD)v21 << 6) | 0x7800)) >> 16)) >> 1)
                               + ((unsigned int)(2115 * (__int16)(((_WORD)v21 << 6) | 0x7800)) >> 16)) >> 4)
                             + ((_BYTE)v21 << 6))
                            | ((_BYTE)v21 << 6))
          ^ 0x1F) << v14);
    v24 = v5;
    v14 += 8;
    if ( v18 > (unsigned int)v5 )
      v24 = (int *)v18;
    v92 = v13;
    while ( v24 != (int *)v18 )
    {
      *(_BYTE *)(v7 + v18++) = v13;
      v14 -= 8;
      v13 >>= 8;
      n = v18;
      if ( v14 <= 7 )
        goto LABEL_32;
    }
LABEL_129:
    core::panicking::panic_bounds_check((int)v24, (int)v5, (int)&off_2E3DC4);
  }
LABEL_32:
  v87 = (int)a1;
  v25 = v13 | ((a3 == 4) << (v14 & 0x1F));
  v26 = v14 + 1;
  v92 = v25;
  if ( v14 + 1 >= 8 )
  {
    v27 = v90;
    v28 = v89;
    v29 = v90;
    if ( v18 > (unsigned int)v90 )
      v29 = (int *)v18;
    while ( v29 != (int *)v18 )
    {
      *(_BYTE *)(v28 + v18++) = v25;
      v26 -= 8;
      v25 >>= 8;
      n = v18;
      v92 = v25;
      if ( v26 <= 7 )
        goto LABEL_37;
    }
    goto LABEL_126;
  }
LABEL_37:
  v30 = v94;
  v31 = v18;
  v32 = 0;
  v86 = a2;
  v93 = v26;
  if ( !v11 )
  {
    v33 = sub_231080(v4[14], &v89, v87, (v15[2] < 0x30u) | ((*v4 & 0x40000u) >> 18));
    if ( v33 == 2 )
      return 1;
    v31 = n;
    v15 = v88;
    v32 = v33 != 0;
  }
  v34 = v15[2];
  v35 = v34 >= 0x21;
  if ( v34 >= 0x21 )
    v35 = v31 - v18 + 1 >= v34;
  if ( !v35 )
  {
    if ( v11 )
      goto LABEL_44;
    goto LABEL_69;
  }
  if ( !v11 && (unsigned int)(v4[19] - v4[17]) > v4[20] )
  {
LABEL_69:
    if ( v32 )
      goto LABEL_72;
    v52 = v4[14];
    v94 = v30;
    v93 = v26;
    v92 = v25;
    n = v18;
    if ( (unsigned __int8)sub_231080(v52, &v89, v87, 1) != 2 )
      goto LABEL_72;
    return 1;
  }
LABEL_44:
  v94 = v30;
  n = v18;
  v92 = v25;
  if ( v26 < 6 )
    goto LABEL_50;
  v27 = v90;
  v36 = v26 + 2;
  v37 = v89;
  v29 = v90;
  if ( v18 > (unsigned int)v90 )
    v29 = (int *)v18;
  do
  {
    if ( v29 == (int *)v18 )
      goto LABEL_126;
    *(_BYTE *)(v37 + v18++) = v25;
    v36 -= 8;
    v25 >>= 8;
    n = v18;
    v92 = v25;
  }
  while ( v36 > 7 );
  if ( v36 )
  {
LABEL_50:
    if ( v18 >= (unsigned int)v90 )
      core::panicking::panic_bounds_check(v18, (int)v90, (int)&off_2E3DC4);
    *(_BYTE *)(v89 + v18++) = v25;
    v25 >>= 8;
    n = v18;
    v92 = v25;
  }
  v27 = v90;
  v29 = v90;
  if ( v18 > (unsigned int)v90 )
    v29 = (int *)v18;
  if ( v18 >= (unsigned int)v90 )
    goto LABEL_126;
  v38 = v89;
  v39 = *((unsigned __int16 *)v15 + 4) | v25;
  *(_BYTE *)(v89 + v18) = v39;
  v40 = v39 >> 8;
  n = v18 + 1;
  v92 = v40;
  if ( (int *)(v18 + 1) == v29 )
    goto LABEL_126;
  *(_BYTE *)(v38 + v18 + 1) = v40;
  v27 = v90;
  v41 = v89;
  v42 = *((unsigned __int16 *)v15 + 4);
  v92 = HIWORD(v25);
  v29 = v90;
  if ( v18 + 2 > (unsigned int)v90 )
    v29 = (int *)(v18 + 2);
  n = v18 + 2;
  if ( v18 + 2 >= (unsigned int)v90 )
    goto LABEL_126;
  v43 = v42 ^ 0xFFFF;
  *(_BYTE *)(v89 + v18 + 2) = v43 | BYTE2(v25);
  v44 = v43 >> 8;
  n = v18 + 3;
  v92 = v44;
  if ( (int *)(v18 + 3) == v29 )
    goto LABEL_126;
  *(_BYTE *)(v41 + v18 + 3) = v44;
  v45 = v18 + 4;
  v46 = 0;
  v47 = v88[2];
  v93 = 0;
  v92 = 0;
  n = v18 + 4;
  if ( v47 )
  {
    v48 = v89;
    v27 = v90;
    v49 = 0;
    v50 = 0;
    do
    {
      v51 = v4[17] + v50++;
      v46 |= *(unsigned __int8 *)(v4[21] + (v51 & 0x7FFF) + 0x20000) << v49;
      v29 = v27;
      v49 += 8;
      if ( v45 > (unsigned int)v27 )
        v29 = (int *)v45;
      do
      {
        if ( v29 == (int *)v45 )
          goto LABEL_126;
        *(_BYTE *)(v48 + v45++) = v46;
        v49 -= 8;
        v46 >>= 8;
        n = v45;
        v92 = v46;
      }
      while ( v49 > 7 );
      v93 = v49;
    }
    while ( v50 != v47 );
  }
LABEL_72:
  if ( a3 )
  {
    v54 = v86;
    if ( a3 == 4 )
    {
      if ( v93 )
      {
        v27 = v90;
        v29 = (int *)n;
        if ( n >= (unsigned int)v90 )
          goto LABEL_126;
        v55 = v92;
        *(_BYTE *)(v89 + n) = v92;
        n = (size_t)v29 + 1;
        v92 = v55 >> 8;
      }
      v56 = 0;
      if ( (*((_BYTE *)v4 + 1) & 0x10) != 0 )
      {
        v27 = v90;
        v57 = n;
        v29 = v90;
        if ( n > (unsigned int)v90 )
          v29 = (int *)n;
        if ( n >= (unsigned int)v90 )
          goto LABEL_126;
        v58 = v89;
        v59 = v92;
        v60 = n + 1;
        v61 = *(_DWORD *)(v87 + 65576);
        *(_BYTE *)(v89 + n) = v92 | HIBYTE(v61);
        v29 = v27;
        if ( v57 + 1 > (unsigned int)v27 )
          v29 = (int *)(v57 + 1);
        if ( v57 + 1 >= (unsigned int)v27 )
          goto LABEL_126;
        *(_BYTE *)(v58 + v60) = BYTE2(v61) | BYTE1(v59);
        v29 = v27;
        if ( v57 + 2 > (unsigned int)v27 )
          v29 = (int *)(v57 + 2);
        n = v57 + 2;
        if ( v57 + 2 >= (unsigned int)v27 )
          goto LABEL_126;
        *(_BYTE *)(v58 + v57 + 2) = BYTE1(v61) | BYTE2(v59);
        v29 = v27;
        if ( v57 + 3 > (unsigned int)v27 )
          v29 = (int *)(v57 + 3);
        n = v57 + 3;
        if ( v57 + 3 >= (unsigned int)v27 )
          goto LABEL_126;
        v62 = v61 | HIBYTE(v59);
        v56 = 0;
        *(_BYTE *)(v58 + v57 + 3) = v62;
        v93 = 0;
        n = v57 + 4;
        v92 = 0;
      }
    }
    else
    {
      v63 = v93 + 3;
      if ( v93 + 3 >= 8 )
      {
        v27 = v90;
        v64 = n;
        v65 = v89;
        v66 = v92;
        v29 = v90;
        if ( n > (unsigned int)v90 )
          v29 = (int *)n;
        while ( v29 != (int *)v64 )
        {
          *(_BYTE *)(v65 + v64++) = v66;
          v63 -= 8;
          v66 >>= 8;
          n = v64;
          v92 = v66;
          if ( v63 <= 7 )
            goto LABEL_97;
        }
        goto LABEL_126;
      }
LABEL_97:
      if ( v63 )
      {
        v27 = v90;
        v29 = (int *)n;
        if ( n >= (unsigned int)v90 )
          goto LABEL_126;
        v67 = v92;
        *(_BYTE *)(v89 + n) = v92;
        n = (size_t)v29 + 1;
        v92 = v67 >> 8;
      }
      v27 = v90;
      v68 = n;
      v29 = v90;
      if ( n > (unsigned int)v90 )
        v29 = (int *)n;
      if ( n >= (unsigned int)v90 )
        goto LABEL_126;
      v69 = v92;
      v70 = v89;
      v71 = v92 >> 8;
      *(_BYTE *)(v89 + n) = v92;
      n = v68 + 1;
      v92 = v71;
      if ( (int *)(v68 + 1) == v29 )
        goto LABEL_126;
      *(_BYTE *)(v70 + v68 + 1) = v71;
      v27 = v90;
      v72 = v89;
      v92 = HIWORD(v69);
      v29 = v90;
      n = v68 + 2;
      if ( v68 + 2 > (unsigned int)v90 )
        v29 = (int *)(v68 + 2);
      if ( v68 + 2 >= (unsigned int)v90
        || (*(_BYTE *)(v89 + v68 + 2) = -1, v92 = 255, n = v68 + 3, (int *)(v68 + 3) == v29) )
      {
LABEL_126:
        core::panicking::panic_bounds_check((int)v29, (int)v27, (int)&off_2E3DC4);
      }
      *(_BYTE *)(v72 + v68 + 3) = -1;
      v56 = 0;
      v92 = 0;
      n = v68 + 4;
    }
  }
  else
  {
    v56 = v93;
    v54 = v86;
  }
  memset((void *)v4[14], 0, 0x240u);
  memset((void *)(v4[14] + 576), 0, 0x40u);
  v73 = n;
  v74 = v4[17];
  v88[3] = 8;
  *v88 = 1;
  v75 = v94;
  v76 = v4[1];
  v77 = v92;
  v4[17] = v74 + v88[2];
  v88[1] = 0;
  v88[2] = 0;
  v4[9] = v77;
  v4[10] = v56;
  v4[1] = v76 + 1;
  if ( !v73 )
    return 0;
  v78 = (_DWORD *)v54[2];
  if ( v78 )
    *v78 = v4[7];
  v79 = v54[5];
  if ( v54[4] )
  {
    v80 = v4[8];
    if ( v75 )
    {
      v81 = v54[6];
      v82 = v81 - v80;
      v83 = v81 - v80;
      if ( v73 < v81 - v80 )
        v83 = v73;
      v84 = v83 + v80;
      if ( __CFADD__(v83, v80) )
        core::slice::index::slice_index_order_fail();
      if ( v84 > v81 )
        core::slice::index::slice_end_index_len_fail();
      if ( v83 > (unsigned int)&elf_hash_chain[697] )
        core::slice::index::slice_end_index_len_fail();
      memcpy((void *)(v79 + v80), (const void *)v4[11], v83);
      v4[8] = v84;
      if ( v73 > v82 )
      {
        v4[4] = v83;
        v4[5] = v73 - v83;
      }
    }
    else
    {
      v4[8] = v80 + v73;
    }
  }
  else
  {
    if ( v73 > (unsigned int)&elf_hash_chain[697] )
      core::slice::index::slice_end_index_len_fail();
    if ( !(*(int (__fastcall **)(int, _DWORD, size_t))(v54[6] + 16))(v79, v4[11], v73) )
    {
      v4[12] = -1;
      return 0;
    }
  }
  return 0;
}
