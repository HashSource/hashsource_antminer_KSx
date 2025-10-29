int __fastcall memchr::memmem::SearcherRev::new(int result, _BYTE *a2, unsigned int a3, int a4)
{
  unsigned int v4; // r8
  unsigned int v5; // r11
  unsigned int v6; // r12
  unsigned int v7; // lr
  int v8; // r10
  int v9; // r6
  int v10; // r5
  int v11; // r3
  unsigned int v12; // r9
  char v13; // r5
  int v14; // r5
  bool v15; // nf
  char v16; // r6
  int v17; // r4
  char v18; // r5
  unsigned int v19; // r5
  unsigned int v20; // lr
  unsigned int v21; // r0
  unsigned int v22; // r5
  unsigned int v23; // r8
  unsigned int v24; // r12
  unsigned int v25; // r3
  unsigned int v26; // r7
  unsigned int v27; // r4
  unsigned int v28; // r3
  unsigned int v29; // r3
  unsigned int v30; // r7
  int v31; // r10
  unsigned int v32; // r5
  unsigned int v33; // r4
  unsigned int v34; // r3
  unsigned int v35; // r3
  bool v36; // cf
  unsigned int v37; // r5
  _BYTE *v38; // r3
  unsigned int v39; // r7
  char v40; // r4
  int v41; // t1
  unsigned __int8 *v42; // r3
  int v43; // r6
  int v44; // r4
  int *v45; // r10
  _DWORD *v46; // r7
  int v47; // r7
  int v48; // r0
  int v49; // [sp+4h] [bp-8h]
  int v50; // [sp+8h] [bp-4h]

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      LOBYTE(v5) = *a2;
      v8 = 3;
      goto LABEL_51;
    }
    v11 = 0;
    v5 = 0;
    v12 = 0;
    do
    {
      v13 = a2[v11++];
      v14 = v13 & 0x3F;
      v16 = v14 - 32;
      v15 = v14 - 32 < 0;
      v17 = 1 << v14;
      v18 = 32 - v14;
      if ( !v15 )
        v17 = 0;
      v5 |= v17;
      v19 = 1u >> v18;
      if ( !v15 )
        v19 = 1 << v16;
      v12 |= v19;
    }
    while ( a3 != v11 );
    v20 = a3 - 1;
    v49 = result;
    v21 = 1;
    v22 = 0;
    v23 = a3;
    v24 = a3 - 1;
    while ( 1 )
    {
      v25 = v23 + ~v22;
      if ( v25 >= a3 )
LABEL_70:
        core::panicking::panic_bounds_check(v25, a3, (int)&off_2E27B8);
      v26 = v24;
      v24 += ~v22;
      if ( v24 >= a3 )
        break;
      v27 = (unsigned __int8)a2[v24];
      v28 = (unsigned __int8)a2[v25];
      if ( v27 < v28 )
      {
        v24 = v26 - 1;
        v21 = 1;
        v22 = 0;
        v23 = v26;
      }
      else if ( v27 <= v28 )
      {
        v29 = v22 + 1;
        v22 = v22 + 1 - v21;
        if ( v22 )
          v22 = v29;
        if ( v29 == v21 )
          v26 -= v21;
        v24 = v26;
      }
      else
      {
        v21 = v23 - v24;
        v22 = 0;
      }
      if ( v24 <= v22 )
      {
        v30 = 0;
        v31 = 1;
        v6 = a3;
        while ( 1 )
        {
          v25 = v6 + ~v30;
          if ( v25 >= a3 )
            goto LABEL_70;
          v32 = v20;
          v20 += ~v30;
          if ( v20 >= a3 )
            break;
          v33 = (unsigned __int8)a2[v20];
          v34 = (unsigned __int8)a2[v25];
          if ( v33 > v34 )
          {
            v20 = v32 - 1;
            v31 = 1;
            v30 = 0;
            v6 = v32;
          }
          else if ( v33 >= v34 )
          {
            v35 = v30 + 1;
            v30 = v30 + 1 - v31;
            if ( v30 )
              v30 = v35;
            if ( v35 == v31 )
              v32 -= v31;
            v20 = v32;
          }
          else
          {
            v31 = v6 - v20;
            v30 = 0;
          }
          if ( v20 <= v30 )
          {
            v36 = v23 >= v6;
            if ( v23 < v6 )
              v6 = v23;
            v37 = a3 - v6;
            if ( v36 )
              v21 = v31;
            v4 = a3 - v6;
            if ( v6 > v37 )
              v4 = v6;
            if ( a3 <= 2 * v37 )
            {
              v7 = v12 >> 8;
              v50 = (v5 >> 8) | (v12 << 24);
              v8 = 1;
            }
            else
            {
              if ( v6 > a3 )
                core::panicking::panic((int)aAssertionFaile_22, 35, (int)&off_2E2788);
              if ( v6 < v21 )
                core::slice::index::slice_start_index_len_fail();
              if ( v37 > v21 )
                goto LABEL_47;
              v42 = &a2[v6];
              if ( v37 > 3 )
              {
                v45 = (int *)&a2[a3 - 4 - v21];
                if ( (int)(v37 - 4) < 1 )
                {
LABEL_67:
                  v47 = *v45;
                  v8 = 0;
                  if ( v47 != *(_DWORD *)&v42[v37 - 4] )
                    goto LABEL_47;
                }
                else
                {
                  v46 = &a2[v6];
                  while ( *(_DWORD *)((char *)v46 - v21) == *v46 )
                  {
                    if ( (_DWORD *)((char *)++v46 - v21) >= v45 )
                      goto LABEL_67;
                  }
LABEL_47:
                  v8 = 1;
                  v21 = v4;
                }
              }
              else
              {
                while ( v37 )
                {
                  v43 = v42[-v21];
                  --v37;
                  v44 = *v42++;
                  if ( v43 != v44 )
                    goto LABEL_47;
                }
                v8 = 0;
              }
              v4 = v21;
              v7 = v12 >> 8;
              v50 = (v5 >> 8) | (v12 << 24);
            }
            result = v49;
LABEL_51:
            v38 = &a2[a3];
            v39 = 1;
            v40 = 0;
            v9 = 1;
            v10 = (unsigned __int8)a2[a3 - 1];
            while ( 1 )
            {
              if ( (v40 & 1) != 0 )
              {
                if ( v38 == a2 )
                  goto LABEL_57;
              }
              else
              {
                if ( v38 - a2 <= v39 )
                {
LABEL_57:
                  a4 = v50;
                  goto LABEL_58;
                }
                v38 -= v39;
              }
              v41 = (unsigned __int8)*--v38;
              v9 *= 2;
              v39 = 0;
              v10 = v41 + 2 * v10;
              v40 = 1;
            }
          }
        }
        v48 = v20;
LABEL_73:
        core::panicking::panic_bounds_check(v48, a3, (int)&off_2E27C8);
      }
    }
    v48 = v24;
    goto LABEL_73;
  }
  v9 = 1;
  v8 = 2;
  v10 = 0;
LABEL_58:
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 17) = a4;
  *(_DWORD *)(result + 24) = v8;
  *(_DWORD *)(result + 28) = v4;
  *(_DWORD *)(result + 32) = v6;
  *(_BYTE *)(result + 16) = v5;
  *(_DWORD *)result = v10;
  *(_DWORD *)(result + 4) = v9;
  *(_DWORD *)(result + 12) = a3;
  *(_WORD *)(result + 21) = v7;
  *(_BYTE *)(result + 23) = BYTE2(v7);
  return result;
}
