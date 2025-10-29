int __fastcall memchr::memmem::Searcher::new(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v5; // r8
  unsigned int v6; // r1
  unsigned int v7; // r4
  int v8; // r4
  int v9; // r8
  char v10; // r1
  unsigned int v11; // r7
  unsigned __int8 *v12; // r5
  unsigned __int8 *v13; // r9
  int v14; // lr
  int v15; // r6
  int v16; // r3
  int v17; // t1
  unsigned int v18; // r0
  unsigned int v19; // r6
  unsigned __int8 *v20; // r5
  unsigned __int8 v21; // lr
  char v22; // r0
  unsigned __int8 *v23; // r3
  int v24; // r7
  int v25; // r12
  int v26; // t1
  int v28; // r1
  int v29; // r4
  int v30; // lr
  unsigned __int8 v31; // r0
  int v32; // r0
  bool v33; // nf
  char v34; // r5
  int v35; // r6
  char v36; // r0
  unsigned int v37; // r0
  unsigned int v38; // r0
  int v39; // r5
  int v40; // r9
  int v41; // r3
  int v42; // r1
  int v43; // r6
  unsigned int v44; // r5
  unsigned int v45; // r3
  bool v46; // cc
  int v47; // r3
  unsigned int v48; // r1
  unsigned int v49; // r2
  int v50; // r8
  int v51; // r10
  int v52; // r3
  int v53; // r6
  int v54; // r5
  unsigned int v55; // r11
  unsigned int v56; // r1
  unsigned int v57; // r3
  bool v58; // cf
  int v59; // r3
  unsigned int v60; // r0
  bool v61; // cc
  unsigned int v62; // r3
  unsigned int v63; // r8
  unsigned int v64; // r10
  unsigned int v65; // r9
  int v66; // r2
  int (__fastcall *v67)(int *, int, int, unsigned int, int, unsigned int); // r1
  unsigned int v68; // r3
  unsigned __int8 *v69; // r5
  int v70; // r6
  int v71; // r1
  unsigned int v72; // r2
  unsigned __int8 *v73; // r5
  unsigned __int8 *v74; // r6
  int v75; // r1
  int v77; // [sp+Ch] [bp-30h]
  unsigned int v79; // [sp+10h] [bp-2Ch]
  int v80; // [sp+14h] [bp-28h]
  unsigned int v81; // [sp+14h] [bp-28h]
  int v82; // [sp+18h] [bp-24h]
  unsigned int v83; // [sp+18h] [bp-24h]
  char v85; // [sp+22h] [bp-1Ah] BYREF
  char v86; // [sp+23h] [bp-19h] BYREF
  _DWORD v87[6]; // [sp+24h] [bp-18h] BYREF

  v5 = a4;
  v6 = 0;
  v7 = 0;
  if ( a4 - 256 < 0xFFFFFF02 )
    goto LABEL_18;
  v8 = *a3;
  if ( byte_2AC26B[a3[1]] >= (unsigned int)byte_2AC26B[v8] )
  {
    v9 = a3[1];
    v82 = 0;
    v80 = 1;
  }
  else
  {
    v9 = *a3;
    v82 = 1;
    v80 = 0;
    v8 = a3[1];
  }
  v10 = 0;
  v11 = 2;
  v12 = a3;
  v13 = &a3[a4];
  v14 = 0;
  while ( (v10 & 1) != 0 )
  {
    v15 = v14;
    if ( v12 == v13 )
      goto LABEL_16;
LABEL_11:
    v17 = *v12++;
    v16 = v17;
    v14 = v15 + 1;
    v18 = byte_2AC26B[v17];
    if ( v18 < byte_2AC26B[v8] )
    {
      v9 = v8;
      v11 = 0;
      v10 = 1;
      v80 = v82;
      v8 = v16;
      v82 = (unsigned __int8)v15;
    }
    else
    {
      v11 = 0;
      v10 = 1;
      if ( v16 != v8 && v18 < byte_2AC26B[v9] )
      {
        v9 = v16;
        v80 = (unsigned __int8)v15;
      }
    }
  }
  if ( v13 - v12 > v11 )
  {
    v15 = v14 + v11;
    v12 += v11;
    goto LABEL_11;
  }
LABEL_16:
  v7 = v82;
  v6 = v80;
  v85 = v82;
  v86 = v80;
  if ( v82 == v80 )
  {
    v87[2] = 0;
    sub_7D51C((int)&v85, (int)&v86, v87);
  }
  v5 = a4;
LABEL_18:
  if ( !v5 )
  {
    *(_BYTE *)(a1 + 41) = v6;
    *(_BYTE *)(a1 + 40) = v7;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 1;
    *(_DWORD *)(a1 + 16) = 2;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)a1 = a3;
    *(_DWORD *)(a1 + 4) = 0;
    return 2;
  }
  v19 = 1;
  v20 = &a3[v5];
  v21 = *a3;
  v22 = 0;
  v23 = a3;
  v24 = 1;
  v25 = *a3;
  while ( 2 )
  {
    if ( (v22 & 1) != 0 )
    {
      if ( v23 == v20 )
        break;
      goto LABEL_21;
    }
    if ( v20 - v23 > v19 )
    {
      v23 += v19;
LABEL_21:
      v26 = *v23++;
      v24 *= 2;
      v19 = 0;
      v25 = v26 + 2 * v25;
      v22 = 1;
      continue;
    }
    break;
  }
  if ( v5 == 1 )
  {
    *(_BYTE *)(a1 + 41) = v6;
    *(_BYTE *)(a1 + 40) = v7;
    *(_DWORD *)(a1 + 32) = v25;
    *(_DWORD *)(a1 + 36) = v24;
    *(_DWORD *)(a1 + 16) = 3;
    *(_BYTE *)(a1 + 8) = v21;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)a1 = a3;
    *(_DWORD *)(a1 + 4) = 1;
    return 3;
  }
  v81 = v6;
  v28 = 0;
  v83 = v7;
  v29 = 0;
  v30 = 0;
  do
  {
    v31 = a3[v28++];
    v32 = v31 & 0x3F;
    v34 = v32 - 32;
    v33 = v32 - 32 < 0;
    v35 = 1 << v32;
    v36 = 32 - v32;
    if ( !v33 )
      v35 = 0;
    v29 |= v35;
    v37 = 1u >> v36;
    if ( !v33 )
      v37 = 1 << v34;
    v30 |= v37;
  }
  while ( v5 != v28 );
  v38 = 0;
  v39 = 1;
  v40 = 1;
  v41 = 1;
  v42 = 0;
  do
  {
    v43 = v41;
    if ( v42 + v38 >= v5 )
      core::panicking::panic_bounds_check(v42 + v38, v5, (int)&off_2E37A8);
    v44 = a3[v39];
    v45 = a3[v42 + v38];
    v46 = v44 > v45;
    if ( v44 < v45 )
    {
      v41 = v43 + 1;
      v40 = 1;
      v42 = 0;
      v38 = v43;
    }
    else
    {
      v47 = v42 + 1;
      if ( v46 )
      {
        v41 = v47 + v43;
        v42 = 0;
        v40 = v41 - v38;
      }
      else
      {
        v42 = v47 - v40;
        if ( v47 == v40 )
          v43 += v40;
        else
          v42 = v47;
        v41 = v43;
      }
    }
    v39 = v41 + v42;
  }
  while ( v41 + v42 < v5 );
  v48 = v5;
  v49 = 0;
  v50 = 1;
  v51 = 1;
  v52 = 1;
  v53 = 0;
  v79 = v38;
  v77 = a1;
  do
  {
    v54 = v52;
    v55 = v48;
    if ( v53 + v49 >= v48 )
      core::panicking::panic_bounds_check(v53 + v49, v48, (int)&off_2E37A8);
    v56 = a3[v50];
    v57 = a3[v53 + v49];
    v58 = v56 >= v57;
    if ( v56 > v57 )
    {
      v52 = v54 + 1;
      v51 = 1;
      v53 = 0;
      v49 = v54;
    }
    else
    {
      v59 = v53 + 1;
      if ( v58 )
      {
        v53 = v59 - v51;
        if ( v59 == v51 )
          v54 += v51;
        else
          v53 = v59;
        v52 = v54;
      }
      else
      {
        v52 = v59 + v54;
        v51 = v52 - v49;
        v53 = 0;
      }
    }
    v50 = v52 + v53;
    v48 = v55;
  }
  while ( v52 + v53 < v55 );
  v60 = v40;
  v61 = v79 > v49;
  if ( v79 > v49 )
    v49 = v79;
  v62 = v55 - v49;
  if ( !v61 )
    v60 = v51;
  v63 = v55 - v49;
  if ( v49 > v62 )
    v63 = v49;
  if ( v55 <= 2 * v49 )
  {
    v65 = v49;
    v64 = v55;
    v60 = v63;
    v66 = 1;
  }
  else
  {
    if ( v49 > v55 )
      core::panicking::panic((int)aAssertionFaile_22, 35, (int)&off_2E3768);
    v64 = v55;
    if ( v62 < v60 )
      core::slice::index::slice_end_index_len_fail();
    v65 = v49;
    if ( v60 < v49 )
      goto LABEL_67;
    v68 = v49;
    if ( v49 > 3 )
    {
      v72 = v49 - 4;
      v73 = &a3[v60 - 4 + v65];
      if ( (int)(v65 - 4) < 1 )
      {
LABEL_84:
        v75 = *(_DWORD *)&a3[v72];
        v66 = 0;
        if ( *(_DWORD *)v73 != v75 )
          goto LABEL_67;
      }
      else
      {
        v74 = a3;
        while ( *(_DWORD *)&v74[v60] == *(_DWORD *)v74 )
        {
          v74 += 4;
          if ( &v74[v60] >= v73 )
            goto LABEL_84;
        }
LABEL_67:
        v66 = 1;
        v60 = v63;
      }
    }
    else
    {
      v69 = a3;
      while ( v68 )
      {
        v70 = v69[v60];
        v71 = *v69;
        --v68;
        ++v69;
        if ( v70 != v71 )
          goto LABEL_67;
      }
      v66 = 0;
    }
  }
  v67 = 0;
  if ( a2 )
  {
    if ( v83 >= v64 )
      core::panicking::panic_bounds_check(v83, v64, (int)&off_2E3748);
    if ( v81 >= v64 )
      core::panicking::panic_bounds_check(v81, v64, (int)&off_2E3758);
    v67 = sub_210128;
    if ( byte_2AC26B[a3[v83]] >= 0xFBu )
      v67 = 0;
  }
  *(_BYTE *)(v77 + 40) = v83;
  *(_DWORD *)(v77 + 16) = v66;
  *(_DWORD *)(v77 + 20) = v60;
  *(_DWORD *)(v77 + 24) = v65;
  *(_BYTE *)(v77 + 41) = v81;
  *(_DWORD *)(v77 + 32) = v25;
  *(_DWORD *)(v77 + 36) = v24;
  *(_DWORD *)(v77 + 8) = v29;
  *(_DWORD *)(v77 + 12) = v30;
  *(_DWORD *)(v77 + 44) = v67;
  *(_DWORD *)v77 = a3;
  *(_DWORD *)(v77 + 4) = v64;
  return v77 + 16;
}
