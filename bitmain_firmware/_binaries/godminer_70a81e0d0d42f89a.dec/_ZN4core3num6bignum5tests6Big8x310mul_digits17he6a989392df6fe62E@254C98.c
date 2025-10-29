int __fastcall core::num::bignum::tests::Big8x3::mul_digits(int result, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // r3
  int v4; // r6
  unsigned int v5; // r3
  int v6; // r8
  unsigned int v7; // r12
  int v8; // r5
  _BYTE *v9; // r7
  __int16 v10; // r9
  unsigned int v11; // r7
  int v12; // r11
  char *v13; // lr
  char *v14; // r12
  unsigned __int16 v15; // r4
  int v16; // r10
  unsigned __int16 v17; // r4
  unsigned __int16 v18; // r7
  unsigned __int16 v19; // r7
  unsigned int v20; // r7
  int v21; // r7
  unsigned int v22; // r7
  unsigned __int8 *v23; // r2
  int v24; // r4
  int v25; // r9
  unsigned __int8 *v26; // r7
  __int16 v27; // r11
  unsigned int v28; // r6
  int v29; // r7
  char *v30; // r6
  char *v31; // r8
  unsigned __int16 v32; // r5
  int v33; // lr
  unsigned __int16 v34; // r5
  unsigned __int16 v35; // r7
  unsigned int v36; // r4
  int v37; // r7
  unsigned int v38; // r7
  int v39; // r3
  int v40; // t1
  __int16 v41; // r1
  int v42; // r0
  int v43; // r0
  __int16 v44; // [sp+4h] [bp-30h]
  __int16 v45; // [sp+14h] [bp-20h]
  int v46; // [sp+1Ch] [bp-18h]
  int v47; // [sp+20h] [bp-14h]
  __int16 v48; // [sp+24h] [bp-10h]
  unsigned int v49; // [sp+28h] [bp-Ch]
  int v50; // [sp+2Ch] [bp-8h]
  __int16 v51; // [sp+30h] [bp-4h] BYREF
  char v52; // [sp+32h] [bp-2h]

  v3 = *(_DWORD *)result;
  v52 = 0;
  v51 = 0;
  if ( v3 < a3 )
  {
    if ( v3 < 4 )
    {
      v4 = result + 4;
      v5 = result + 4 + v3;
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = 0;
        do
        {
          v9 = (_BYTE *)(v4 + v8);
          if ( v4 + v8 == v5 )
            goto LABEL_49;
          v10 = (unsigned __int8)*v9;
          ++v8;
        }
        while ( !*v9 );
        v11 = v6 + v8 - 1;
        v12 = 4 - (v6 + v8);
        if ( v11 > 3 )
          v12 = 0;
        if ( v11 >= 3 )
        {
          v42 = v6 + v8 - 1;
          goto LABEL_60;
        }
        v13 = (char *)&v51 + v6;
        v49 = v7;
        v14 = &v13[v8];
        v15 = *a2 * v10 + *((unsigned __int8 *)&v51 + v6 + v8 - 1);
        v13[v8 - 1] = v15;
        v16 = HIBYTE(v15);
        if ( a3 != 1 )
        {
          if ( v12 == 1 )
          {
            v42 = v6 + v8;
            goto LABEL_60;
          }
          v17 = a2[1] * v10 + v16 + (unsigned __int8)v13[v8];
          v13[v8] += a2[1] * v10 + v16;
          v16 = HIBYTE(v17);
          if ( a3 != 2 )
          {
            if ( v12 == 2 )
            {
              v43 = v6 + v8;
LABEL_58:
              v42 = v43 + 1;
              goto LABEL_60;
            }
            v18 = a2[2] * v10 + v16 + (unsigned __int8)v14[1];
            v14[1] = v18;
            v16 = HIBYTE(v18);
            if ( a3 != 3 )
            {
              if ( v12 == 3 )
              {
                v42 = v6 + v8 + 2;
LABEL_60:
                core::panicking::panic_bounds_check(v42, 3, (int)&off_2E6618);
              }
              v19 = a2[3] * v10 + v16 + (unsigned __int8)v14[2];
              v14[2] = v19;
              v16 = HIBYTE(v19);
            }
          }
        }
        v7 = v49;
        v20 = a3;
        if ( v16 )
        {
          if ( a3 - 1 + v6 + v8 > 2 )
            core::panicking::panic_bounds_check(a3 + v6 + v8 - 1, 3, (int)&off_2E6618);
          *((_BYTE *)&v51 + a3 + v6 + v8 - 1) = v16;
          v20 = a3 + 1;
        }
        v4 += v8;
        v21 = v6 + v20 + v8;
        v6 += v8;
        v22 = v21 - 1;
        if ( v49 <= v22 )
          v7 = v22;
      }
    }
LABEL_61:
    core::slice::index::slice_end_index_len_fail();
  }
  if ( v3 >= 4 )
    goto LABEL_61;
  v23 = &a2[a3];
  if ( v3 )
  {
    v50 = result + v3 + 4;
    v44 = *(unsigned __int8 *)(result + 6);
    v7 = 0;
    v45 = *(unsigned __int8 *)(result + 5);
    v24 = 0;
    v48 = *(unsigned __int8 *)(result + 4);
LABEL_26:
    v25 = 0;
    while ( 1 )
    {
      v26 = &a2[v25];
      if ( &a2[v25] == v23 )
        break;
      v27 = *v26;
      ++v25;
      if ( *v26 )
      {
        v28 = v24 + v25 - 1;
        v29 = 4 - (v24 + v25);
        if ( v28 > 3 )
          v29 = 0;
        if ( v28 >= 3 )
        {
          v42 = v24 + v25 - 1;
          goto LABEL_60;
        }
        v30 = (char *)&v51 + v24;
        v47 = v24;
        v31 = (char *)&v51 + v24 + v25;
        v46 = v24 + v25;
        v32 = v48 * v27 + (unsigned __int8)*(v31 - 1);
        *(v31 - 1) = v32;
        v33 = HIBYTE(v32);
        if ( result + 5 != v50 )
        {
          if ( v29 == 1 )
          {
            v42 = v24 + v25;
            goto LABEL_60;
          }
          v34 = v45 * v27 + v33 + (unsigned __int8)v30[v25];
          v30[v25] = v34;
          v33 = HIBYTE(v34);
          if ( result + 6 != v50 )
          {
            if ( v29 == 2 )
            {
              v43 = v24 + v25;
              goto LABEL_58;
            }
            v35 = v44 * v27 + v33 + (unsigned __int8)v31[1];
            v31[1] = v35;
            v33 = HIBYTE(v35);
          }
        }
        v36 = v3;
        if ( v33 )
        {
          if ( v3 - 1 + v47 + v25 > 2 )
          {
            v42 = v3 + v47 + v25 - 1;
            goto LABEL_60;
          }
          *((_BYTE *)&v51 + v3 + v47 + v25 - 1) = v33;
          v36 = v3 + 1;
        }
        a2 += v25;
        v37 = v47 + v36 + v25;
        v24 = v46;
        v38 = v37 - 1;
        if ( v7 <= v38 )
          v7 = v38;
        goto LABEL_26;
      }
    }
  }
  else
  {
    v7 = 0;
    v39 = 0;
    while ( a2 != v23 )
    {
      v40 = *a2++;
      ++v39;
      if ( v40 && v7 <= v39 - 1 )
        v7 = v39 - 1;
    }
  }
LABEL_49:
  v41 = v51;
  *(_BYTE *)(result + 6) = v52;
  *(_WORD *)(result + 4) = v41;
  *(_DWORD *)result = v7;
  return result;
}
