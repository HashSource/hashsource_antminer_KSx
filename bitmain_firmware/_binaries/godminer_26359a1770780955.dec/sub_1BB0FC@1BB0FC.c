int __fastcall sub_1BB0FC(int a1, unsigned int **a2, int a3)
{
  int v3; // lr
  int v5; // r10
  unsigned int *v6; // r0
  unsigned int v7; // r7
  unsigned int v8; // r1
  char v9; // r2
  unsigned int v11; // r2
  unsigned int *v12; // r3
  unsigned int v13; // r5
  char v14; // r8
  bool v15; // cf
  unsigned int v16; // r11
  unsigned int v18; // r12
  char v19; // r0
  unsigned int v20; // r0
  int v21; // r6
  unsigned int v22; // r1
  char v23; // r1
  int v24; // r7
  unsigned int v25; // r12
  int v26; // r1
  int v27; // r5
  int v28; // r0
  int v29; // r1
  char v30; // lr
  _BOOL4 v31; // r7
  int v32; // r0
  bool v33; // zf
  char v34; // r7
  unsigned int v35; // r5
  int v36; // r1
  char *v37; // [sp+4h] [bp-38h]
  int v38; // [sp+8h] [bp-34h]
  char v39; // [sp+Ch] [bp-30h]
  char v40; // [sp+10h] [bp-2Ch]
  __int16 v41; // [sp+18h] [bp-24h]
  char v42; // [sp+1Ah] [bp-22h]
  __int16 v43; // [sp+1Ch] [bp-20h]
  char v44; // [sp+1Eh] [bp-1Eh]
  __int64 v45; // [sp+20h] [bp-1Ch]
  unsigned int v46; // [sp+27h] [bp-15h]
  _BYTE v47[11]; // [sp+30h] [bp-Ch]

  v5 = a1 + 16;
  v6 = *a2;
  v7 = (unsigned int)a2[1];
  if ( v7 < 4 )
  {
    v8 = (unsigned int)v6 >> 8;
    v9 = 19;
LABEL_8:
    *(_BYTE *)(v5 + 7) = 0;
    *(_WORD *)(v5 + 5) = 0;
    *(_DWORD *)(v5 + 1) = v8;
    *(_BYTE *)(a1 + 11) = v42;
    *(_WORD *)(a1 + 9) = v41;
    *(_BYTE *)(a1 + 16) = (_BYTE)v6;
    *(_DWORD *)(a1 + 12) = v3;
    *(_BYTE *)(a1 + 8) = v9;
    *(_DWORD *)a1 = 1;
    return 1;
  }
  v12 = v6 + 1;
  v11 = *v6;
  v13 = v7 - 4;
  v14 = 4;
  v15 = __CFADD__(*v6, 16);
  *a2 = v6 + 1;
  a2[1] = (unsigned int *)(v7 - 4);
  if ( v15 )
  {
    if ( v11 != -1 )
    {
      v8 = 0;
      v9 = 16;
      goto LABEL_8;
    }
    if ( v13 >= 8 )
    {
      v18 = v6[2];
      v13 = v7 - 12;
      v16 = *v12;
      v12 = v6 + 3;
      *a2 = v6 + 3;
      a2[1] = (unsigned int *)(v7 - 12);
      if ( !v18 )
      {
        v14 = 8;
        if ( v13 < v16 )
          goto LABEL_5;
        goto LABEL_13;
      }
      v8 = 0;
      v9 = 53;
    }
    else
    {
      HIBYTE(v46) = (unsigned int)(v6 + 1) >> 24;
      *(_WORD *)((char *)&v46 + 1) = (unsigned int)v12 >> 8;
      LOBYTE(v6) = (_BYTE)v6 + 4;
      LOBYTE(v46) = (_BYTE)v6;
      v47[7] = (_BYTE)v6;
      v43 = *(_WORD *)v47;
      v3 = *(__int64 *)v47 >> 24;
      v8 = v46 >> 8;
      v9 = 19;
      v44 = v47[2];
    }
    v41 = v43;
    v42 = v44;
    goto LABEL_8;
  }
  v16 = v11;
  if ( v13 < v11 )
  {
LABEL_5:
    *(_DWORD *)(a1 + 12) = v12;
LABEL_14:
    *(_DWORD *)(a1 + 16) = v12;
    *(_DWORD *)(a1 + 20) = 0;
LABEL_15:
    v19 = 19;
LABEL_16:
    *(_BYTE *)(a1 + 8) = v19;
    *(_DWORD *)a1 = 1;
    return 1;
  }
LABEL_13:
  *a2 = (unsigned int *)((char *)v12 + v16);
  a2[1] = (unsigned int *)(v13 - v16);
  if ( v16 < 2 )
    goto LABEL_14;
  v20 = (unsigned int)v12 + 2;
  v21 = *(unsigned __int16 *)v12;
  if ( (unsigned int)(v21 - 4) < 0xFFFFFFFE )
  {
    v19 = 17;
    *(_QWORD *)v5 = *(unsigned __int16 *)v12;
    goto LABEL_16;
  }
  v22 = v16 - 2;
  if ( v11 >= 0xFFFFFFF0 )
  {
    if ( v22 < 8 )
    {
      HIBYTE(v45) = (_BYTE)v12 + 2;
      *(_WORD *)&v47[8] = v20 >> 8;
      v47[10] = ((unsigned int)v12 + 2) >> 24;
      *(_QWORD *)v47 = v45;
      v20 = *(_DWORD *)&v47[7];
      v11 = v45 >> 24;
      v23 = 19;
      goto LABEL_33;
    }
    if ( *(unsigned int *)((char *)v12 + 6) )
    {
      v23 = 53;
      goto LABEL_33;
    }
    v24 = *(_DWORD *)v20;
    v25 = v16 - 10;
    v12 = (unsigned int *)((char *)v12 + 10);
  }
  else
  {
    if ( v22 < 4 )
    {
      v23 = 19;
LABEL_33:
      *(_BYTE *)(a1 + 11) = v47[2];
      *(_WORD *)(a1 + 9) = *(_WORD *)v47;
      *(_DWORD *)(a1 + 12) = v11;
      *(_DWORD *)(a1 + 16) = v20;
      *(_DWORD *)(a1 + 20) = 0;
      *(_BYTE *)(a1 + 8) = v23;
      *(_DWORD *)a1 = 1;
      return 1;
    }
    v24 = *(unsigned int *)((char *)v12 + 2);
    v25 = v16 - 6;
    v12 = (unsigned int *)((char *)v12 + 6);
  }
  if ( !v25 )
    goto LABEL_14;
  v26 = *(unsigned __int8 *)v12;
  if ( v25 == 1 )
  {
    *(_DWORD *)(a1 + 16) = (char *)v12 + 1;
    *(_DWORD *)(a1 + 20) = 0;
    goto LABEL_15;
  }
  v38 = v24;
  v27 = 2 * v26;
  v40 = *(_BYTE *)v12;
  v28 = *((unsigned __int8 *)v12 + 1) + (unsigned __int8)(2 * v26);
  v39 = *((_BYTE *)v12 + 1);
  v29 = (unsigned __int8)v28;
  v30 = v28;
  v31 = (unsigned __int8)v28 != v28;
  v32 = 24;
  if ( v11 < 0xFFFFFFF0 )
    v32 = 12;
  v33 = (unsigned __int8)v27 == v27;
  if ( (unsigned __int8)v27 == v27 )
    v33 = !v31;
  if ( !v33 )
  {
    v19 = 48;
    *(_BYTE *)(a1 + 9) = v30;
    goto LABEL_16;
  }
  if ( v30 )
  {
    v34 = v30;
    v35 = v25 - 2;
    v37 = (char *)v12 + 2;
    sub_26CC14(v32, v29);
    if ( v36 )
      LOBYTE(v36) = v34 - v36;
    if ( v35 < (unsigned __int8)v36 )
    {
      *(_DWORD *)(v5 + 4) = 0;
      *(_DWORD *)v5 = v37;
      goto LABEL_15;
    }
    *(_BYTE *)(a1 + 28) = v39;
    *(_BYTE *)(a1 + 24) = v40;
    *(_DWORD *)(a1 + 4) = &v37[(unsigned __int8)v36];
    *(_DWORD *)(a1 + 8) = v35 - (unsigned __int8)v36;
    *(_DWORD *)(a1 + 12) = a3;
    *(_DWORD *)(a1 + 16) = v16;
    *(_WORD *)(a1 + 26) = v21;
    *(_BYTE *)(a1 + 25) = v14;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 20) = v38;
    return v38;
  }
  else
  {
    *(_DWORD *)a1 = 1;
    *(_BYTE *)(a1 + 8) = 48;
    return 48;
  }
}
