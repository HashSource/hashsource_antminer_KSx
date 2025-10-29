int __fastcall <std::io::stdio::StdoutLock as std::io::Write>::write(int a1, _DWORD *a2, char *buf, size_t n)
{
  _DWORD *v4; // r4
  _DWORD *v6; // r9
  size_t *v7; // r5
  int v10; // r0
  int v11; // r7
  char v12; // r0
  unsigned int v13; // r10
  size_t v14; // r2
  unsigned int v15; // r7
  int v16; // r0
  size_t v17; // r5
  size_t v18; // r10
  char *v19; // r11
  int v20; // r0
  int v21; // r7
  int v22; // r1
  int v23; // r6
  int result; // r0
  char v25; // [sp+4h] [bp-8h] BYREF
  _BYTE v26[7]; // [sp+5h] [bp-7h]

  v4 = (_DWORD *)*a2;
  v6 = (_DWORD *)(*a2 + 12);
  if ( *v6 )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)&v25, (int)&off_2DF2E8, (int)&off_2DFAF4);
  v7 = v4 + 4;
  v4[3] = -1;
  if ( !n || (v10 = memrchr(buf, 10, n)) == 0 )
  {
    v21 = v4[6];
    if ( v21 )
    {
      if ( *(_BYTE *)(v21 + v4[5] - 1) == 10 )
      {
        sub_1CFBF0((int)&v25, (int)(v4 + 4));
        v12 = v25;
        if ( v25 != 4 )
          goto LABEL_25;
        v21 = v4[6];
      }
      if ( *v7 - v21 > n )
      {
LABEL_24:
        memcpy((void *)(v4[5] + v21), buf, n);
        v4[6] = v21 + n;
        *(_DWORD *)(a1 + 4) = n;
LABEL_35:
        v12 = 4;
        goto LABEL_36;
      }
    }
    else
    {
      v21 = 0;
      if ( *v7 > n )
        goto LABEL_24;
    }
    sub_79BD4(a1, (int)(v4 + 4), buf, n);
    goto LABEL_37;
  }
  v11 = v10;
  sub_1CFBF0((int)&v25, (int)(v4 + 4));
  v12 = v25;
  if ( v25 != 4 )
  {
LABEL_25:
    v22 = *(_DWORD *)v26;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v26[3];
    *(_DWORD *)(a1 + 1) = v22;
LABEL_36:
    *(_BYTE *)a1 = v12;
    goto LABEL_37;
  }
  v13 = v11 - (_DWORD)buf + 1;
  if ( v13 > n )
    goto LABEL_42;
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
      if ( v15 > n )
        goto LABEL_43;
      v17 = *v7;
      v18 = n - v15;
    }
    else
    {
      v17 = *v7;
      v18 = v13 - v15;
      if ( v18 > v17 )
      {
        if ( v15 <= n )
        {
          if ( v17 > n - v15 )
LABEL_42:
            core::slice::index::slice_end_index_len_fail();
          v19 = &buf[v15];
          if ( v17 )
          {
            v20 = memrchr(v19, 10, v17);
            if ( v20 )
            {
              v18 = v20 - (_DWORD)v19 + 1;
              if ( v18 > v17 )
                goto LABEL_42;
            }
            else
            {
              v18 = v17;
            }
          }
          else
          {
            v17 = 0;
            v18 = 0;
          }
          goto LABEL_32;
        }
LABEL_43:
        core::slice::index::slice_start_index_len_fail();
      }
    }
    v19 = &buf[v15];
LABEL_32:
    v23 = v4[6];
    if ( v17 - v23 < v18 )
      v18 = v17 - v23;
    memcpy((void *)(v4[5] + v23), v19, v18);
    v4[6] = v18 + v23;
    *(_DWORD *)(a1 + 4) = v18 + v15;
    goto LABEL_35;
  }
  *(_BYTE *)a1 = 4;
  *(_DWORD *)(a1 + 4) = 0;
LABEL_37:
  result = *v6 + 1;
  *v6 = result;
  return result;
}
