int __fastcall sub_1DA7C0(_DWORD *a1, int a2)
{
  int v2; // r7
  struct addrinfo *v4; // r0
  _DWORD *v5; // r2
  _DWORD *v6; // r3
  _DWORD *v7; // r4
  unsigned int v8; // r1
  int v9; // r2
  unsigned __int64 v10; // r0
  int v11; // r6
  int v12; // r8
  __int16 v13; // r11
  int v14; // r9
  char **v15; // r6
  int v16; // r0
  int v17; // r2
  unsigned int *v18; // r12
  int v19; // r1
  _DWORD *v20; // r0
  unsigned int v21; // r1
  _DWORD *v22; // r0
  int v23; // r3
  int v24; // r10
  __int16 v25; // r9
  int v26; // r7
  char **v27; // r8
  unsigned int *v28; // r11
  int v29; // r1
  int v30; // r1
  char **v31; // r2
  const char *v32; // r0
  char **v34; // [sp+0h] [bp-34h]
  const char *v35; // [sp+4h] [bp-30h]
  int v36; // [sp+8h] [bp-2Ch]
  int v37; // [sp+Ch] [bp-28h]
  int v38; // [sp+10h] [bp-24h]
  int v39; // [sp+14h] [bp-20h]
  struct addrinfo *ai; // [sp+18h] [bp-1Ch]
  __int16 v41; // [sp+1Ch] [bp-18h]
  int v42; // [sp+20h] [bp-14h] BYREF
  int v43; // [sp+24h] [bp-10h]
  int v44; // [sp+28h] [bp-Ch]
  _BYTE v45[6]; // [sp+2Ch] [bp-8h]

  v4 = *(struct addrinfo **)a2;
  v5 = *(_DWORD **)(a2 + 4);
  if ( v5 )
  {
    v41 = *(_WORD *)(a2 + 8);
    while ( 1 )
    {
      v6 = (_DWORD *)v5[5];
      v7 = (_DWORD *)v5[7];
      v8 = v5[4];
      v9 = *(unsigned __int16 *)v6;
      if ( v9 == 10 )
        break;
      if ( v9 == 2 )
      {
        ai = v4;
        if ( v8 >= 0x10 )
        {
          v12 = v6[1];
          v13 = 0;
          LOWORD(v14) = v41;
          v15 = &off_2DFE00;
          goto LABEL_11;
        }
        v30 = 66;
        v31 = &off_2DFE1C;
        v32 = aAssertionFaile_20;
LABEL_34:
        core::panicking::panic((int)v32, v30, (int)v31);
      }
      v5 = v7;
      if ( !v7 )
        goto LABEL_6;
    }
    ai = v4;
    if ( v8 <= 0x1B )
    {
      v30 = 67;
      v31 = &off_2DFE0C;
      v32 = aAssertionFaile_19;
      goto LABEL_34;
    }
    v13 = 1;
    *(_DWORD *)&v45[2] = v6[2];
    v15 = (char **)v6[3];
    v14 = HIWORD(*(_DWORD *)&v45[2]);
    v2 = v6[5];
    v12 = *(_DWORD *)v45;
    v39 = v6[1];
    v37 = v6[4];
    v38 = v6[6];
LABEL_11:
    v16 = _rust_alloc(0x80u);
    if ( !v16 )
      alloc::alloc::handle_alloc_error();
    v17 = v16;
    *(_WORD *)(v16 + 28) = v41;
    *(_DWORD *)(v16 + 12) = v37;
    *(_DWORD *)(v16 + 8) = v15;
    v11 = 1;
    *(_DWORD *)(v16 + 20) = v39;
    *(_WORD *)(v16 + 6) = v14;
    *(_DWORD *)(v16 + 2) = v12;
    *(_WORD *)v16 = v13;
    *(_DWORD *)(v16 + 16) = v2;
    *(_DWORD *)(v16 + 24) = v38;
    v44 = 1;
    v43 = v16;
    v42 = 4;
    if ( v7 )
    {
      v18 = (unsigned int *)&v42;
      v11 = 1;
      v34 = &off_2DFE1C;
      v35 = aAssertionFaile_20;
      do
      {
        v20 = v7;
        while ( 1 )
        {
          v7 = (_DWORD *)v20[7];
          v21 = v20[4];
          v22 = (_DWORD *)v20[5];
          v23 = *(unsigned __int16 *)v22;
          if ( v23 == 10 )
          {
            if ( v21 > 0x1B )
            {
              v25 = 1;
              v39 = v22[1];
              *(_DWORD *)&v45[2] = v22[2];
              v27 = (char **)v22[3];
              v24 = *(_DWORD *)v45;
              v26 = HIWORD(*(_DWORD *)&v45[2]);
              v38 = v22[4];
              v37 = v22[5];
              v36 = v22[6];
              if ( v42 == v11 )
                goto LABEL_25;
              goto LABEL_14;
            }
            v29 = 67;
            v35 = aAssertionFaile_19;
            v34 = &off_2DFE0C;
LABEL_31:
            core::panicking::panic((int)v35, v29, (int)v34);
          }
          if ( v23 == 2 )
            break;
          v20 = v7;
          if ( !v7 )
            goto LABEL_26;
        }
        if ( v21 < 0x10 )
        {
          v29 = 66;
          goto LABEL_31;
        }
        v24 = v22[1];
        v25 = 0;
        LOWORD(v26) = v41;
        v27 = &off_2DFE00;
        if ( v42 == v11 )
        {
LABEL_25:
          v28 = v18;
          sub_79A14(v18, v11, 1);
          v17 = v43;
          v18 = v28;
        }
LABEL_14:
        *(_WORD *)(v17 + 32 * v11) = v25;
        v19 = v17 + 32 * v11++;
        *(_WORD *)(v19 + 28) = v41;
        *(_DWORD *)(v19 + 12) = v38;
        *(_DWORD *)(v19 + 16) = v37;
        *(_DWORD *)(v19 + 20) = v39;
        *(_DWORD *)(v19 + 8) = v27;
        *(_DWORD *)(v19 + 24) = v36;
        *(_WORD *)(v19 + 6) = v26;
        *(_DWORD *)(v19 + 2) = v24;
        v44 = v11;
      }
      while ( v7 );
    }
LABEL_26:
    freeaddrinfo(ai);
    v10 = __PAIR64__(v42, v43);
  }
  else
  {
LABEL_6:
    freeaddrinfo(v4);
    v10 = 4;
    v11 = 0;
  }
  *a1 = HIDWORD(v10);
  a1[1] = v10;
  a1[2] = v10 + 32 * v11;
  a1[3] = v10;
  return v10;
}
