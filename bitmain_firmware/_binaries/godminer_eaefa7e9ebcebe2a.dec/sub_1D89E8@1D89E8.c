int __fastcall sub_1D89E8(int a1, unsigned int *a2)
{
  unsigned __int8 *v2; // r6
  unsigned int v3; // r11
  int v6; // r1
  unsigned int v7; // r8
  int v8; // r3
  unsigned int v9; // r12
  unsigned __int8 *v10; // r9
  unsigned int v11; // r1
  unsigned __int8 *v12; // lr
  unsigned int v13; // r0
  int v14; // r4
  unsigned int v15; // kr00_4
  int v16; // r4
  bool v17; // cf
  unsigned int v18; // r4
  unsigned int v19; // r1
  __int16 v20; // lr
  unsigned int v21; // r2
  unsigned __int8 *v22; // r12
  int v23; // lr
  int v24; // r10
  unsigned int v25; // r9
  unsigned __int8 *v26; // r4
  unsigned int v27; // r2
  bool v28; // zf
  unsigned __int8 *v30; // [sp+4h] [bp-38h]
  unsigned int v31; // [sp+8h] [bp-34h]
  unsigned int v32; // [sp+10h] [bp-2Ch]
  unsigned int v33; // [sp+10h] [bp-2Ch]
  unsigned int v34; // [sp+14h] [bp-28h]
  int v35; // [sp+18h] [bp-24h]
  int v36; // [sp+1Ch] [bp-20h]
  int v37; // [sp+20h] [bp-1Ch]
  int v38; // [sp+24h] [bp-18h]
  char v39; // [sp+28h] [bp-14h] BYREF
  int v40; // [sp+29h] [bp-13h]
  int v41; // [sp+2Dh] [bp-Fh]
  int v42; // [sp+31h] [bp-Bh]
  int v43; // [sp+35h] [bp-7h]

  v2 = (unsigned __int8 *)*a2;
  v3 = a2[1];
  if ( !v3 )
    goto LABEL_41;
  v6 = *v2;
  *a2 = (unsigned int)(v2 + 1);
  a2[1] = v3 - 1;
  if ( v6 != 91 )
    goto LABEL_41;
  sub_1D8144((int)&v39, a2);
  if ( !v39 )
    goto LABEL_41;
  v7 = a2[1];
  LOWORD(v8) = v43;
  v35 = v40;
  v36 = v41;
  v37 = v42;
  v38 = v43;
  v9 = *a2;
  if ( !v7 )
    goto LABEL_21;
  v10 = (unsigned __int8 *)(v9 + 1);
  if ( *(_BYTE *)v9 != 37 )
    goto LABEL_21;
  v11 = v7 - 1;
  v8 = 0;
  v12 = (unsigned __int8 *)(v9 + 1);
  v13 = 0;
  v32 = v7 - 1;
  v14 = 0;
  if ( v7 == 1 )
    goto LABEL_9;
LABEL_7:
  v9 = *v12 - 48;
  v14 = 0;
  if ( v9 < 0xA )
  {
    --v11;
    v14 = 1;
    ++v12;
  }
LABEL_9:
  while ( v14 == 1 )
  {
    v15 = v13;
    v13 *= 10;
    v16 = 0;
    if ( !is_mul_ok(v15, 0xAu) )
      goto LABEL_18;
    v17 = __CFADD__(v13, v9);
    v13 += v9;
    if ( v17 )
      goto LABEL_18;
    --v8;
    v14 = 0;
    if ( v11 )
      goto LABEL_7;
  }
  if ( v8 )
  {
    v16 = 1;
    v10 = v12;
    v32 = v11;
  }
  else
  {
    v16 = 0;
  }
LABEL_18:
  v9 = *a2;
  if ( v16 == 1 )
  {
    v7 = v32;
    v9 = (unsigned int)v10;
    if ( !v32 )
      goto LABEL_41;
  }
  else
  {
LABEL_21:
    v13 = 0;
    if ( !v7 )
      goto LABEL_41;
  }
  v18 = v9 + 1;
  if ( *(_BYTE *)v9 == 93 )
  {
    v19 = v7 - 1;
    v20 = 0;
    if ( v7 != 1 && *(_BYTE *)(v9 + 1) == 58 )
    {
      v21 = v7 - 2;
      v22 = (unsigned __int8 *)(v9 + 2);
      v23 = 0;
      LOWORD(v8) = 0;
      v33 = v7 - 1;
      v34 = v18;
      v31 = v7 - 2;
      v30 = v22;
      while ( 1 )
      {
        v24 = 0;
        if ( v21
          && (v25 = v21 - 1,
              v26 = v22 + 1,
              v24 = 0,
              v7 = *v22 - 48,
              *a2 = (unsigned int)(v22 + 1),
              a2[1] = v21 - 1,
              v7 < 0xA) )
        {
          v24 = 1;
        }
        else
        {
          v25 = v21;
          v26 = v22;
          *a2 = (unsigned int)v22;
          a2[1] = v21;
        }
        if ( v24 != 1 )
          break;
        v27 = 10 * (unsigned __int16)v8;
        if ( HIWORD(v27) )
          goto LABEL_37;
        v8 = (unsigned __int16)v27 + (unsigned __int16)v7;
        v28 = HIWORD(v7) == 0;
        if ( !HIWORD(v7) )
          v28 = (unsigned __int16)v8 == v8;
        if ( !v28 )
          goto LABEL_37;
        --v23;
        v21 = v25;
        v22 = v26;
      }
      if ( !v23 )
      {
LABEL_37:
        v20 = 0;
        *a2 = (unsigned int)v30;
        a2[1] = v31;
        goto LABEL_38;
      }
      v20 = 1;
LABEL_38:
      v18 = v34;
      v19 = v33;
      if ( v20 == 1 )
        goto LABEL_40;
    }
    *a2 = v18;
    a2[1] = v19;
    if ( v20 )
    {
LABEL_40:
      *(_DWORD *)(a1 + 24) = v13;
      *(_WORD *)(a1 + 28) = v8;
      *(_DWORD *)(a1 + 4) = v35;
      *(_DWORD *)(a1 + 16) = v38;
      *(_DWORD *)(a1 + 12) = v37;
      *(_DWORD *)(a1 + 8) = v36;
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)a1 = 1;
      return 1;
    }
  }
LABEL_41:
  *a2 = (unsigned int)v2;
  a2[1] = v3;
  *(_DWORD *)a1 = 0;
  return 0;
}
