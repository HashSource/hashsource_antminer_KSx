_BYTE *__fastcall std::path::Components::as_path(int a1)
{
  int v1; // r7
  _BYTE *v3; // r4
  unsigned int v4; // r5
  int v5; // r9
  int v6; // r8
  _DWORD *v7; // r10
  unsigned int v8; // r6
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r11
  bool v13; // zf
  bool v14; // zf
  int v15; // r1
  unsigned int v16; // r6
  unsigned int v17; // r0
  bool v18; // zf
  unsigned int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r2
  int v23; // r2
  unsigned int v24; // r0
  unsigned int v25; // r6
  _DWORD *v27; // [sp+0h] [bp-4Ch]
  unsigned int v28; // [sp+4h] [bp-48h]
  _BYTE *v29; // [sp+8h] [bp-44h] BYREF
  unsigned int v30; // [sp+Ch] [bp-40h]
  char v31; // [sp+10h] [bp-3Ch]
  _BYTE v32[23]; // [sp+11h] [bp-3Bh] BYREF
  _DWORD dest[9]; // [sp+28h] [bp-24h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 8);
  v3 = *(_BYTE **)a1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v1 != 6 )
    memcpy(dest, (const void *)(a1 + 9), 0x13u);
  v5 = (int)&v29;
  v6 = *(unsigned __int8 *)(a1 + 28);
  v7 = (_DWORD *)*(unsigned __int8 *)(a1 + 29);
  v8 = *(unsigned __int8 *)(a1 + 30);
  v31 = v1;
  v30 = v4;
  v29 = v3;
  memcpy(v32, dest, 0x13u);
  v32[21] = v8;
  v32[20] = (_BYTE)v7;
  v32[19] = v6;
  if ( v6 != 2 )
    goto LABEL_13;
  if ( !v4 )
  {
    v4 = 0;
    if ( v7 == (_DWORD *)2 )
      goto LABEL_14;
    return v3;
  }
  do
  {
    v10 = 0;
    while ( v3[v10] != 47 )
    {
      if ( v4 == ++v10 )
      {
        v9 = 0;
        goto LABEL_12;
      }
    }
    v9 = 1;
    if ( v10 )
      goto LABEL_12;
    --v4;
    ++v3;
  }
  while ( v4 );
  while ( 1 )
  {
    v4 = 0;
LABEL_12:
    v30 = v4;
    v29 = v3;
LABEL_13:
    if ( v7 != (_DWORD *)2 )
      return v3;
LABEL_14:
    v11 = v5 + 24;
    v12 = v5 + 16;
    if ( v1 == 6 )
    {
      v11 = 16;
      v12 = 8;
    }
    v5 = v6 != 1;
    if ( !v6 )
      v5 = -1;
    v28 = v8;
    if ( v6 )
      break;
    v6 = v1 & 7;
    v7 = &v29;
    v27 = (_DWORD *)v11;
    v20 = (unsigned __int8)v5;
    if ( (unsigned __int8)v5 == 255 )
      goto LABEL_51;
LABEL_48:
    v13 = v20 == 0;
    v9 = 0;
    v21 = 0;
    if ( !v13 )
    {
      v22 = 0;
      if ( v1 != 6 )
        goto LABEL_52;
      goto LABEL_57;
    }
LABEL_51:
    while ( 1 )
    {
      v21 = sub_1E036C(&v29, v9);
      v9 = v28;
      v22 = 0;
      if ( v1 != 6 )
        break;
LABEL_57:
      if ( v4 <= v21 + v9 + v22 )
        return v3;
      sub_1E04A4(dest, &v29);
      if ( LOBYTE(dest[3]) != 10 )
        return v3;
      v8 = v4 - dest[0];
      if ( v4 < dest[0] )
LABEL_74:
        core::slice::index::slice_end_index_len_fail();
      v30 = v4 - dest[0];
      v4 -= dest[0];
      v20 = (unsigned __int8)v5;
      if ( (unsigned __int8)v5 != 255 )
        goto LABEL_48;
    }
LABEL_52:
    v22 = 6;
    switch ( v1 )
    {
      case 0:
        v22 = *(_DWORD *)v12 + 4;
        goto LABEL_57;
      case 1:
        v23 = *(_DWORD *)v12;
        if ( *v27 )
          v23 = *v27 + *(_DWORD *)v12 + 1;
        v22 = v23 + 8;
        goto LABEL_57;
      case 2:
        goto LABEL_57;
      default:
        break;
    }
    while ( 2 )
    {
      v17 = 0;
      while ( v3[v17] != 47 )
      {
        if ( v4 == ++v17 )
        {
          v9 = 0;
          v17 = v4;
          if ( !v4 )
            goto LABEL_42;
          goto LABEL_38;
        }
      }
      v9 = 1;
      if ( !v17 )
        goto LABEL_42;
LABEL_38:
      v18 = v17 == 1;
      if ( v17 == 1 )
        v18 = *v3 == 46;
      if ( !v18 )
        goto LABEL_12;
LABEL_42:
      v19 = v17 + v9;
      if ( v4 < v19 )
        core::slice::index::slice_start_index_len_fail();
      v4 -= v19;
      v3 += v19;
      if ( v4 )
        continue;
      break;
    }
  }
  v13 = (unsigned __int8)v5 == 255;
  if ( (unsigned __int8)v5 != 255 )
    v13 = (unsigned __int8)v5 == 0;
  if ( v13 )
  {
    v14 = (unsigned __int8)v5 == 255;
    if ( (unsigned __int8)v5 != 255 )
      v14 = (unsigned __int8)v5 == 0;
    if ( v14 )
    {
      if ( v4 > sub_1E036C(&v29, v9) + v8 )
      {
        while ( 1 )
        {
          sub_1E04A4(dest, &v29);
          if ( LOBYTE(dest[3]) != 10 )
            break;
          v16 = v4 - dest[0];
          if ( v4 < dest[0] )
            goto LABEL_74;
          v30 = v4 - dest[0];
          v4 -= dest[0];
          if ( v16 <= sub_1E036C(&v29, v15) + v28 )
            return v3;
        }
      }
    }
    else if ( v4 > v8 )
    {
      while ( 1 )
      {
        sub_1E04A4(dest, &v29);
        if ( LOBYTE(dest[3]) != 10 )
          break;
        v25 = v4 - dest[0];
        if ( v4 < dest[0] )
          goto LABEL_74;
        v4 -= dest[0];
        v30 = v25;
        if ( v25 <= v28 )
          return v3;
      }
    }
    return v3;
  }
  if ( v4 )
  {
    while ( 1 )
    {
      sub_1E04A4(dest, &v29);
      if ( LOBYTE(dest[3]) != 10 )
        return v3;
      v24 = v4 - dest[0];
      if ( v4 < dest[0] )
        goto LABEL_74;
      v4 -= dest[0];
      v30 = v24;
      if ( !v24 )
        return v3;
    }
  }
  return v3;
}
