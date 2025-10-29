int __fastcall <std::io::stdio::StdoutLock as std::io::Write>::write(int a1, _DWORD *a2, char *buf, size_t n)
{
  _DWORD *v4; // r4
  _DWORD *v6; // r9
  unsigned int *v7; // r5
  unsigned int v8; // r6
  int v10; // r0
  int v11; // r7
  char v12; // r0
  unsigned int v13; // r10
  size_t v14; // r2
  unsigned int v15; // r7
  int v16; // r0
  unsigned int v17; // r5
  char *v18; // r11
  int v19; // r0
  char **v20; // r2
  int v21; // r7
  int v22; // r1
  int v23; // r6
  int result; // r0
  char **v25; // r2
  char v26; // [sp+4h] [bp-8h] BYREF
  _BYTE v27[7]; // [sp+5h] [bp-7h]

  v4 = (_DWORD *)*a2;
  v6 = (_DWORD *)(*a2 + 12);
  if ( *v6 )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)&v26, (int)&off_2C92E8, (int)&off_2C9AF4);
  v7 = v4 + 4;
  v8 = n;
  v4[3] = -1;
  if ( !n || (v10 = memrchr(buf, 10)) == 0 )
  {
    v21 = v4[6];
    if ( v21 )
    {
      if ( *(_BYTE *)(v21 + v4[5] - 1) == 10 )
      {
        sub_1BCE1C((int)&v26, (int)(v4 + 4));
        v12 = v26;
        if ( v26 != 4 )
          goto LABEL_25;
        v21 = v4[6];
      }
      if ( *v7 - v21 > v8 )
      {
LABEL_24:
        memcpy((void *)(v4[5] + v21), buf, v8);
        v4[6] = v21 + v8;
        *(_DWORD *)(a1 + 4) = v8;
LABEL_35:
        v12 = 4;
        goto LABEL_36;
      }
    }
    else
    {
      v21 = 0;
      if ( *v7 > v8 )
        goto LABEL_24;
    }
    sub_780FC(a1, (int)(v4 + 4), buf, v8);
    goto LABEL_37;
  }
  v11 = v10;
  sub_1BCE1C((int)&v26, (int)(v4 + 4));
  v12 = v26;
  if ( v26 != 4 )
  {
LABEL_25:
    v22 = *(_DWORD *)v27;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v27[3];
    *(_DWORD *)(a1 + 1) = v22;
LABEL_36:
    *(_BYTE *)a1 = v12;
    goto LABEL_37;
  }
  v13 = v11 - (_DWORD)buf + 1;
  if ( v13 > v8 )
  {
    v20 = &off_2C99B0;
    goto LABEL_43;
  }
  v14 = v11 - (_DWORD)buf + 1;
  if ( v13 >= 0x7FFFFFFF )
    v14 = 0x7FFFFFFF;
  v15 = write(1, buf, v14);
  if ( v15 == -1 )
  {
    v16 = *_errno_location();
    v15 = v13;
    if ( v16 != 9 )
    {
      *(_DWORD *)(a1 + 4) = v16;
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      goto LABEL_37;
    }
  }
  if ( v15 )
  {
    if ( v13 <= v15 )
    {
      if ( v15 > v8 )
      {
        v25 = &off_2C99C0;
        goto LABEL_46;
      }
      v17 = *v7;
      v13 = v8 - v15;
    }
    else
    {
      v17 = *v7;
      v13 -= v15;
      if ( v13 > v17 )
      {
        if ( v15 <= v8 )
        {
          v8 -= v15;
          if ( v17 <= v8 )
          {
            v18 = &buf[v15];
            if ( v17 )
            {
              v19 = memrchr(v18, 10);
              if ( v19 )
              {
                v13 = v19 - (_DWORD)v18 + 1;
                if ( v13 > v17 )
                {
                  v8 = v17;
                  v20 = &off_2C99F0;
                  goto LABEL_43;
                }
              }
              else
              {
                v13 = v17;
              }
            }
            else
            {
              v17 = 0;
              v13 = 0;
            }
            goto LABEL_32;
          }
          v13 = v17;
          v20 = &off_2C99E0;
LABEL_43:
          core::slice::index::slice_end_index_len_fail(v13, v8, (int)v20);
        }
        v25 = &off_2C99D0;
LABEL_46:
        core::slice::index::slice_start_index_len_fail(v15, v8, (int)v25);
      }
    }
    v18 = &buf[v15];
LABEL_32:
    v23 = v4[6];
    if ( v17 - v23 < v13 )
      v13 = v17 - v23;
    memcpy((void *)(v4[5] + v23), v18, v13);
    v4[6] = v13 + v23;
    *(_DWORD *)(a1 + 4) = v13 + v15;
    goto LABEL_35;
  }
  *(_BYTE *)a1 = 4;
  *(_DWORD *)(a1 + 4) = 0;
LABEL_37:
  result = *v6 + 1;
  *v6 = result;
  return result;
}
