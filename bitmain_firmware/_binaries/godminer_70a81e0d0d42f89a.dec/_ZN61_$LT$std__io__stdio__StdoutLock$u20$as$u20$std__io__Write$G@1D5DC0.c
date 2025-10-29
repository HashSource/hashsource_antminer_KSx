int __fastcall <std::io::stdio::StdoutLock as std::io::Write>::write_all(int a1, _DWORD *a2, char *buf, size_t n)
{
  _DWORD *v4; // r4
  _DWORD *v6; // r9
  size_t *v7; // r7
  size_t v8; // r6
  char *v9; // r11
  int v10; // r0
  size_t v11; // r10
  int v12; // r5
  int v13; // r5
  char v14; // r0
  char *v15; // r7
  unsigned int v16; // r5
  char **v17; // r8
  size_t v18; // r2
  unsigned int v19; // r0
  int v20; // r1
  int v21; // r5
  int v22; // r1
  int result; // r0
  size_t *v24; // [sp+4h] [bp-10h]
  int v25; // [sp+8h] [bp-Ch]
  char v26; // [sp+Ch] [bp-8h] BYREF
  _BYTE v27[7]; // [sp+Dh] [bp-7h]

  v4 = (_DWORD *)*a2;
  v6 = (_DWORD *)(*a2 + 12);
  if ( *v6 )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)&v26, (int)&off_2E02E8, (int)&off_2E0B24);
  v7 = v4 + 4;
  v8 = n;
  v9 = buf;
  v4[3] = -1;
  if ( n && (v10 = memrchr(buf, 10, n)) != 0 )
  {
    v11 = v10 - (_DWORD)v9 + 1;
    if ( v11 > v8 )
      core::panicking::panic((int)aAssertionFaile, 35, (int)&off_2E0A10);
    v12 = v4[6];
    if ( v12 )
    {
      if ( *v7 - v12 <= v11 )
      {
        sub_79EE4((int)&v26, (int)(v4 + 4), v9, v11);
        v14 = v26;
        if ( v26 != 4 )
          goto LABEL_32;
      }
      else
      {
        memcpy((void *)(v4[5] + v12), v9, v11);
        v4[6] = v12 + v11;
      }
      sub_1D1340((int)&v26, (int)(v4 + 4));
      v14 = v26;
      if ( v26 == 4 )
      {
        v20 = v4[6];
        v24 = v4 + 4;
        v25 = a1;
        goto LABEL_30;
      }
LABEL_32:
      v22 = *(_DWORD *)v27;
      *(_DWORD *)(a1 + 4) = *(_DWORD *)&v27[3];
      *(_DWORD *)(a1 + 1) = v22;
      *(_BYTE *)a1 = v14;
      goto LABEL_35;
    }
    v24 = v4 + 4;
    v25 = a1;
    if ( v10 - (_DWORD)v9 == -1 )
    {
LABEL_26:
      v20 = 0;
LABEL_30:
      v7 = v24;
      v8 -= v11;
      v9 += v11;
      if ( *v24 - v20 > v8 )
      {
        v21 = v20;
        memcpy((void *)(v4[5] + v20), v9, v8);
        v4[6] = v21 + v8;
        *(_BYTE *)v25 = 4;
        goto LABEL_35;
      }
      a1 = v25;
LABEL_34:
      sub_79EE4(a1, (int)v7, v9, v8);
      goto LABEL_35;
    }
    v15 = v9;
    v16 = v10 - (_DWORD)v9 + 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = v16;
        if ( v16 >= 0x7FFFFFFF )
          v18 = 0x7FFFFFFF;
        v19 = write(1, v15, v18);
        if ( v19 == -1 )
          break;
        if ( !v19 )
        {
          LOBYTE(v20) = 2;
          v17 = &off_2E0C28;
          goto LABEL_38;
        }
        if ( v16 < v19 )
          core::slice::index::slice_start_index_len_fail();
        v16 -= v19;
        v15 += v19;
        if ( !v16 )
          goto LABEL_26;
      }
      v17 = (char **)*_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v17) != 35 )
        break;
      if ( !v16 )
        goto LABEL_26;
    }
    v20 = 0;
    if ( v17 == (char **)9 )
      goto LABEL_30;
LABEL_38:
    *(_BYTE *)(v25 + 3) = 0;
    *(_WORD *)(v25 + 1) = 0;
    *(_DWORD *)(v25 + 4) = v17;
    *(_BYTE *)v25 = v20;
  }
  else
  {
    v13 = v4[6];
    if ( v13 )
    {
      if ( *(_BYTE *)(v13 + v4[5] - 1) == 10 )
      {
        sub_1D1340((int)&v26, (int)(v4 + 4));
        v14 = v26;
        if ( v26 != 4 )
          goto LABEL_32;
        v13 = v4[6];
      }
      if ( *v7 - v13 <= v8 )
        goto LABEL_34;
    }
    else
    {
      v13 = 0;
      if ( *v7 <= v8 )
        goto LABEL_34;
    }
    memcpy((void *)(v4[5] + v13), v9, v8);
    v4[6] = v13 + v8;
    *(_BYTE *)a1 = 4;
  }
LABEL_35:
  result = *v6 + 1;
  *v6 = result;
  return result;
}
