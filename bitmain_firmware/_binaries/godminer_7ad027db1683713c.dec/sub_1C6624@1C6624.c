int __fastcall sub_1C6624(int a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned __int8 *v4; // r6
  unsigned int v5; // r11
  int v8; // r1
  unsigned int v9; // r8
  int v10; // r3
  unsigned int v11; // r12
  unsigned __int8 *v12; // r9
  unsigned int v13; // r1
  unsigned __int8 *v14; // lr
  unsigned int v15; // r0
  int v16; // r4
  unsigned int v17; // kr00_4
  int v18; // r4
  bool v19; // cf
  unsigned int v20; // r4
  unsigned int v21; // r1
  __int16 v22; // lr
  unsigned int v23; // r2
  unsigned __int8 *v24; // r12
  int v25; // lr
  int v26; // r10
  unsigned int v27; // r9
  unsigned __int8 *v28; // r4
  unsigned int v29; // r2
  bool v30; // zf
  unsigned int v32; // [sp+4h] [bp-38h]
  unsigned int v33; // [sp+8h] [bp-34h]
  unsigned int v34; // [sp+10h] [bp-2Ch]
  unsigned int v35; // [sp+10h] [bp-2Ch]
  unsigned int v36; // [sp+14h] [bp-28h]
  int v37; // [sp+18h] [bp-24h]
  int v38; // [sp+1Ch] [bp-20h]
  int v39; // [sp+20h] [bp-1Ch]
  int v40; // [sp+24h] [bp-18h]
  char v41; // [sp+28h] [bp-14h] BYREF
  int v42; // [sp+29h] [bp-13h]
  int v43; // [sp+2Dh] [bp-Fh]
  int v44; // [sp+31h] [bp-Bh]
  int v45; // [sp+35h] [bp-7h]

  v4 = (unsigned __int8 *)*a2;
  v5 = a2[1];
  if ( !v5 )
    goto LABEL_41;
  v8 = *v4;
  *a2 = (unsigned int)(v4 + 1);
  a2[1] = v5 - 1;
  if ( v8 != 91 )
    goto LABEL_41;
  sub_1C5D80((int)&v41, (int)a2, v5 - 1, a4);
  if ( !v41 )
    goto LABEL_41;
  v9 = a2[1];
  LOWORD(v10) = v45;
  v37 = v42;
  v38 = v43;
  v39 = v44;
  v40 = v45;
  v11 = *a2;
  if ( !v9 )
    goto LABEL_21;
  v12 = (unsigned __int8 *)(v11 + 1);
  if ( *(_BYTE *)v11 != 37 )
    goto LABEL_21;
  v13 = v9 - 1;
  v10 = 0;
  v14 = (unsigned __int8 *)(v11 + 1);
  v15 = 0;
  v34 = v9 - 1;
  v16 = 0;
  if ( v9 == 1 )
    goto LABEL_9;
LABEL_7:
  v11 = *v14 - 48;
  v16 = 0;
  if ( v11 < 0xA )
  {
    --v13;
    v16 = 1;
    ++v14;
  }
LABEL_9:
  while ( v16 == 1 )
  {
    v17 = v15;
    v15 *= 10;
    v18 = 0;
    if ( !is_mul_ok(v17, 0xAu) )
      goto LABEL_18;
    v19 = __CFADD__(v15, v11);
    v15 += v11;
    if ( v19 )
      goto LABEL_18;
    --v10;
    v16 = 0;
    if ( v13 )
      goto LABEL_7;
  }
  if ( v10 )
  {
    v18 = 1;
    v12 = v14;
    v34 = v13;
  }
  else
  {
    v18 = 0;
  }
LABEL_18:
  v11 = *a2;
  if ( v18 == 1 )
  {
    v9 = v34;
    v11 = (unsigned int)v12;
    if ( !v34 )
      goto LABEL_41;
  }
  else
  {
LABEL_21:
    v15 = 0;
    if ( !v9 )
      goto LABEL_41;
  }
  v20 = v11 + 1;
  if ( *(_BYTE *)v11 == 93 )
  {
    v21 = v9 - 1;
    v22 = 0;
    if ( v9 != 1 && *(_BYTE *)(v11 + 1) == 58 )
    {
      v23 = v9 - 2;
      v24 = (unsigned __int8 *)(v11 + 2);
      v25 = 0;
      LOWORD(v10) = 0;
      v35 = v9 - 1;
      v36 = v20;
      v33 = v9 - 2;
      v32 = (unsigned int)v24;
      while ( 1 )
      {
        v26 = 0;
        if ( v23
          && (v27 = v23 - 1,
              v28 = v24 + 1,
              v26 = 0,
              v9 = *v24 - 48,
              *a2 = (unsigned int)(v24 + 1),
              a2[1] = v23 - 1,
              v9 < 0xA) )
        {
          v26 = 1;
        }
        else
        {
          v27 = v23;
          v28 = v24;
          *a2 = (unsigned int)v24;
          a2[1] = v23;
        }
        if ( v26 != 1 )
          break;
        v29 = 10 * (unsigned __int16)v10;
        if ( HIWORD(v29) )
          goto LABEL_37;
        v10 = (unsigned __int16)v29 + (unsigned __int16)v9;
        v30 = HIWORD(v9) == 0;
        if ( !HIWORD(v9) )
          v30 = (unsigned __int16)v10 == v10;
        if ( !v30 )
          goto LABEL_37;
        --v25;
        v23 = v27;
        v24 = v28;
      }
      if ( !v25 )
      {
LABEL_37:
        v22 = 0;
        *a2 = v32;
        a2[1] = v33;
        goto LABEL_38;
      }
      v22 = 1;
LABEL_38:
      v20 = v36;
      v21 = v35;
      if ( v22 == 1 )
        goto LABEL_40;
    }
    *a2 = v20;
    a2[1] = v21;
    if ( v22 )
    {
LABEL_40:
      *(_DWORD *)(a1 + 24) = v15;
      *(_WORD *)(a1 + 28) = v10;
      *(_DWORD *)(a1 + 4) = v37;
      *(_DWORD *)(a1 + 16) = v40;
      *(_DWORD *)(a1 + 12) = v39;
      *(_DWORD *)(a1 + 8) = v38;
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)a1 = 1;
      return 1;
    }
  }
LABEL_41:
  *a2 = (unsigned int)v4;
  a2[1] = v5;
  *(_DWORD *)a1 = 0;
  return 0;
}
