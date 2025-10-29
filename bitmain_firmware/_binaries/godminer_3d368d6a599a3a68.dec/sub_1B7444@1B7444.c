void __fastcall sub_1B7444(int a1, int *a2)
{
  unsigned __int8 *v2; // r2
  unsigned __int8 *v3; // r8
  unsigned int v4; // r5
  unsigned __int8 *v5; // r8
  unsigned int v6; // t1
  unsigned __int8 *v7; // r9
  char *v8; // r0
  unsigned __int8 *v9; // lr
  int v10; // r1
  int v11; // r3
  unsigned __int8 *v12; // r3
  unsigned int v13; // r11
  int v14; // r10
  int v15; // r5
  unsigned int v16; // r2
  unsigned int v17; // r4
  unsigned int v18; // r6
  unsigned int v19; // r6
  int v20; // r4
  unsigned __int8 *v21; // r2
  int v22; // r12
  int v23; // r6
  signed __int8 v24; // r6
  signed __int8 v25; // r6
  unsigned int v26; // r5
  char *v27; // r3
  unsigned __int8 *v28; // r7
  unsigned int v29; // r3
  char v30; // r1
  int v31; // r6
  char v32; // r0
  __int16 v33; // r1
  int v34; // r3
  unsigned int v35; // r3
  int v36; // r2
  char v37; // r0
  __int16 v38; // [sp+4h] [bp-40h]
  int v39; // [sp+8h] [bp-3Ch]
  unsigned int v40; // [sp+Ch] [bp-38h]
  int v41; // [sp+10h] [bp-34h]
  int v42; // [sp+14h] [bp-30h]
  int v43; // [sp+18h] [bp-2Ch]
  unsigned int v45; // [sp+20h] [bp-24h] BYREF
  void *ptr; // [sp+24h] [bp-20h]
  int v47; // [sp+28h] [bp-1Ch]
  int v48; // [sp+30h] [bp-14h]
  __int16 v49; // [sp+34h] [bp-10h]
  int v50; // [sp+38h] [bp-Ch]
  __int16 v51; // [sp+3Ch] [bp-8h]
  int v52; // [sp+3Eh] [bp-6h]
  __int16 v53; // [sp+42h] [bp-2h]

  v2 = (unsigned __int8 *)a2[1];
  v3 = (unsigned __int8 *)*a2;
  if ( !v2 )
  {
    *(_DWORD *)(a1 + 8) = v3;
    *(_DWORD *)(a1 + 12) = 0;
    v30 = 19;
LABEL_37:
    *(_BYTE *)a1 = v30;
    return;
  }
  v6 = *v3;
  v5 = v3 + 1;
  v4 = v6;
  v7 = v2 - 1;
  *a2 = (int)v5;
  a2[1] = (int)(v2 - 1);
  if ( !v6 )
  {
    v45 = 0;
    v47 = 0;
    ptr = (void *)2;
    goto LABEL_39;
  }
  v43 = a1;
  v8 = (char *)_rust_alloc(4 * v4);
  if ( !v8 )
    alloc::alloc::handle_alloc_error();
  v47 = 0;
  v10 = 0;
  v42 = 0;
  v11 = 0;
  ptr = v8;
  v45 = v4;
  v40 = v4;
  while ( 2 )
  {
    if ( !v7 )
    {
      LOBYTE(v16) = 0;
      v9 = v5;
LABEL_42:
      v31 = 0;
      v51 = v53;
      v32 = 19;
      v50 = v52;
LABEL_43:
      v33 = v51;
      v34 = v50;
      *(_DWORD *)(v43 + 8) = v9;
      v49 = v33;
      v48 = v34;
      *(_DWORD *)(v43 + 12) = v31;
      *(_WORD *)(v43 + 6) = v33;
      *(_DWORD *)(v43 + 2) = v34;
      *(_BYTE *)(v43 + 1) = v16;
      *(_BYTE *)v43 = v32;
      if ( v45 )
        goto LABEL_44;
      return;
    }
    v41 = v11 + 1;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v16 = v12[(_DWORD)v5];
      if ( v15 == 63 && v16 >= 2 )
      {
        v31 = v39;
        a2[1] = (int)&v7[~(unsigned int)v12];
        v32 = 6;
        *a2 = (int)&v12[(_DWORD)v5 + 1];
        LOBYTE(v16) = 0;
        goto LABEL_43;
      }
      v17 = v16 & 0x7F;
      v18 = v17 << (v15 & 0x3F);
      if ( (v15 & 0x3F) - 32 >= 0 )
        v18 = 0;
      v13 |= v18;
      v19 = v17 >> (32 - (v15 & 0x3F));
      if ( (v15 & 0x3F) - 32 >= 0 )
        v19 = v17 << ((v15 & 0x3F) - 32);
      v14 |= v19;
      if ( (char)v16 > -1 )
        break;
      ++v12;
      v15 += 7;
      if ( v7 == v12 )
      {
        v9 = &v7[(_DWORD)v5];
        *a2 = (int)&v7[(_DWORD)v5];
        a2[1] = 0;
        goto LABEL_42;
      }
    }
    v20 = 0xFFFF;
    v21 = &v12[(_DWORD)v5];
    a2[1] = v7 - 1 - v12;
    v22 = (int)&v12[(_DWORD)v5 + 1];
    if ( v13 < 0xFFFF )
      v20 = v13;
    if ( v14 )
      v20 = 0xFFFF;
    v23 = v42;
    *a2 = v22;
    if ( v20 == 1 )
      v23 = v42 + 1;
    if ( v7 - 1 != v12 )
    {
      v42 = v23;
      v24 = v21[1];
      v5 = v21 + 2;
      *a2 = (int)(v21 + 2);
      v22 = v24 & 0x7F;
      a2[1] = v7 - 2 - v12;
      if ( v24 > -1 )
      {
        v7 = (unsigned __int8 *)(v7 - 2 - v12);
        goto LABEL_28;
      }
      if ( v7 - 2 == v12 )
      {
        v22 = (int)(v21 + 2);
      }
      else
      {
        v25 = *v5;
        v5 = v21 + 3;
        *a2 = (int)(v21 + 3);
        a2[1] = v7 - 3 - v12;
        v22 |= (v25 & 0x7F) << 7;
        if ( v25 > -1 )
        {
          v7 = (unsigned __int8 *)(v7 - 3 - v12);
LABEL_28:
          v38 = v22;
          v26 = v40;
          if ( v10 != v45 )
            goto LABEL_30;
          goto LABEL_29;
        }
        if ( v7 - 3 != v12 )
        {
          v28 = (unsigned __int8 *)(v7 - v12);
          v29 = *v5;
          v26 = v40;
          v5 = v21 + 4;
          v7 = v28 - 4;
          *a2 = (int)(v21 + 4);
          a2[1] = (int)(v28 - 4);
          if ( v29 <= 3 )
          {
            v38 = v22 | ((_WORD)v29 << 14);
            if ( v10 != v45 )
            {
LABEL_30:
              *(_WORD *)&v8[4 * v10] = v20;
              v27 = &v8[4 * v10++];
              v9 = (unsigned __int8 *)v13;
              *((_WORD *)v27 + 1) = v38;
              v11 = v41;
              v47 = v10;
              v39 = v14;
              if ( v41 != v26 )
                continue;
              a1 = v43;
              if ( v42 == 1 )
              {
                v35 = v45;
                v36 = v47;
                *(_DWORD *)(v43 + 8) = ptr;
                v30 = 75;
                *(_DWORD *)(v43 + 4) = v35;
                *(_DWORD *)(v43 + 12) = v36;
                goto LABEL_37;
              }
LABEL_39:
              *(_BYTE *)a1 = 68;
              if ( !v45 )
                return;
LABEL_44:
              _rust_dealloc(ptr);
              return;
            }
LABEL_29:
            sub_1B6DC8(&v45, v10);
            v8 = (char *)ptr;
            v10 = v47;
            goto LABEL_30;
          }
          v37 = 6;
          goto LABEL_51;
        }
        v22 = (int)(v21 + 3);
      }
    }
    break;
  }
  v37 = 19;
LABEL_51:
  *(_DWORD *)(v43 + 12) = 0;
  *(_DWORD *)(v43 + 8) = v22;
  *(_WORD *)(v43 + 2) = v38;
  *(_BYTE *)v43 = v37;
  if ( v45 )
    goto LABEL_44;
}
