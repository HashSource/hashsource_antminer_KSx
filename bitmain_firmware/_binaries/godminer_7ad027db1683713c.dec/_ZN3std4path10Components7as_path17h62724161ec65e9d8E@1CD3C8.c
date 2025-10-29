_BYTE *__fastcall std::path::Components::as_path(int a1)
{
  int v1; // r7
  _BYTE *v3; // r4
  unsigned int v4; // r5
  int v5; // r9
  int v6; // r8
  _DWORD *v7; // r10
  unsigned int v8; // r6
  int v9; // r0
  int v10; // r0
  int v11; // r11
  bool v12; // zf
  bool v13; // zf
  unsigned int v14; // r0
  int v15; // r1
  bool v16; // zf
  unsigned int v17; // r0
  int v18; // r0
  unsigned int v19; // r1
  _BOOL4 v20; // r0
  int v21; // r2
  int v22; // r2
  unsigned int v23; // r0
  _DWORD *v25; // [sp+0h] [bp-4Ch]
  unsigned int v26; // [sp+4h] [bp-48h]
  _BYTE *v27; // [sp+8h] [bp-44h] BYREF
  unsigned int v28; // [sp+Ch] [bp-40h]
  char v29; // [sp+10h] [bp-3Ch]
  _BYTE v30[23]; // [sp+11h] [bp-3Bh] BYREF
  _DWORD dest[9]; // [sp+28h] [bp-24h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 8);
  v3 = *(_BYTE **)a1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v1 != 6 )
    memcpy(dest, (const void *)(a1 + 9), 0x13u);
  v5 = (int)&v27;
  v6 = *(unsigned __int8 *)(a1 + 28);
  v7 = (_DWORD *)*(unsigned __int8 *)(a1 + 29);
  v8 = *(unsigned __int8 *)(a1 + 30);
  v29 = v1;
  v28 = v4;
  v27 = v3;
  memcpy(v30, dest, 0x13u);
  v30[21] = v8;
  v30[20] = (_BYTE)v7;
  v30[19] = v6;
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
    v9 = 0;
    while ( v3[v9] != 47 )
    {
      if ( v4 == ++v9 )
        goto LABEL_12;
    }
    if ( v9 )
      goto LABEL_12;
    --v4;
    ++v3;
  }
  while ( v4 );
  while ( 1 )
  {
    v4 = 0;
LABEL_12:
    v28 = v4;
    v27 = v3;
LABEL_13:
    if ( v7 != (_DWORD *)2 )
      return v3;
LABEL_14:
    v10 = v5 + 24;
    v11 = v5 + 16;
    if ( v1 == 6 )
    {
      v10 = 16;
      v11 = 8;
    }
    v5 = v6 != 1;
    if ( !v6 )
      v5 = -1;
    v26 = v8;
    if ( v6 )
      break;
    v6 = v1 & 7;
    v7 = &v27;
    v25 = (_DWORD *)v10;
    v18 = (unsigned __int8)v5;
    if ( (unsigned __int8)v5 == 255 )
      goto LABEL_51;
LABEL_48:
    v12 = v18 == 0;
    v19 = 0;
    v20 = 0;
    if ( !v12 )
    {
      v21 = 0;
      if ( v1 != 6 )
        goto LABEL_52;
      goto LABEL_57;
    }
LABEL_51:
    while ( 1 )
    {
      v20 = sub_1CD7F8((int)&v27);
      v19 = v26;
      v21 = 0;
      if ( v1 != 6 )
        break;
LABEL_57:
      if ( v4 <= v20 + v19 + v21 )
        return v3;
      sub_1CD930((int)dest, (int)&v27);
      if ( LOBYTE(dest[3]) != 10 )
        return v3;
      v8 = v4 - dest[0];
      if ( v4 < dest[0] )
        goto LABEL_75;
      v28 = v4 - dest[0];
      v4 -= dest[0];
      v18 = (unsigned __int8)v5;
      if ( (unsigned __int8)v5 != 255 )
        goto LABEL_48;
    }
LABEL_52:
    v21 = 6;
    switch ( v1 )
    {
      case 0:
        v21 = *(_DWORD *)v11 + 4;
        goto LABEL_57;
      case 1:
        v22 = *(_DWORD *)v11;
        if ( *v25 )
          v22 = *v25 + *(_DWORD *)v11 + 1;
        v21 = v22 + 8;
        goto LABEL_57;
      case 2:
        goto LABEL_57;
      default:
        break;
    }
    while ( 2 )
    {
      v14 = 0;
      while ( v3[v14] != 47 )
      {
        if ( v4 == ++v14 )
        {
          v15 = 0;
          v14 = v4;
          if ( !v4 )
            goto LABEL_42;
          goto LABEL_38;
        }
      }
      v15 = 1;
      if ( !v14 )
        goto LABEL_42;
LABEL_38:
      v16 = v14 == 1;
      if ( v14 == 1 )
        v16 = *v3 == 46;
      if ( !v16 )
        goto LABEL_12;
LABEL_42:
      v17 = v14 + v15;
      if ( v4 < v17 )
        core::slice::index::slice_start_index_len_fail(v17, v4, (int)&off_2C9F3C);
      v4 -= v17;
      v3 += v17;
      if ( v4 )
        continue;
      break;
    }
  }
  v12 = (unsigned __int8)v5 == 255;
  if ( (unsigned __int8)v5 != 255 )
    v12 = (unsigned __int8)v5 == 0;
  if ( v12 )
  {
    v13 = (unsigned __int8)v5 == 255;
    if ( (unsigned __int8)v5 != 255 )
      v13 = (unsigned __int8)v5 == 0;
    if ( v13 )
    {
      if ( v4 > sub_1CD7F8((int)&v27) + v8 )
      {
        while ( 1 )
        {
          sub_1CD930((int)dest, (int)&v27);
          if ( LOBYTE(dest[3]) != 10 )
            break;
          v8 = v4 - dest[0];
          if ( v4 < dest[0] )
            goto LABEL_75;
          v28 = v4 - dest[0];
          v4 -= dest[0];
          if ( v8 <= sub_1CD7F8((int)&v27) + v26 )
            return v3;
        }
      }
    }
    else if ( v4 > v8 )
    {
      while ( 1 )
      {
        sub_1CD930((int)dest, (int)&v27);
        if ( LOBYTE(dest[3]) != 10 )
          break;
        v8 = v4 - dest[0];
        if ( v4 < dest[0] )
          goto LABEL_75;
        v4 -= dest[0];
        v28 = v8;
        if ( v8 <= v26 )
          return v3;
      }
    }
    return v3;
  }
  if ( v4 )
  {
    while ( 1 )
    {
      sub_1CD930((int)dest, (int)&v27);
      if ( LOBYTE(dest[3]) != 10 )
        return v3;
      v23 = v4 - dest[0];
      if ( v4 < dest[0] )
        break;
      v4 -= dest[0];
      v28 = v23;
      if ( !v23 )
        return v3;
    }
    v8 = v4 - dest[0];
LABEL_75:
    core::slice::index::slice_end_index_len_fail(v8, v4, (int)&off_2C9F4C);
  }
  return v3;
}
