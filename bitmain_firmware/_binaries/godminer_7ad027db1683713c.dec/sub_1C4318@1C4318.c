int __fastcall sub_1C4318(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // r7
  unsigned int v6; // r0
  unsigned int v7; // r5
  const struct iovec *v8; // r6
  int v9; // r7
  int v10; // r2
  unsigned int v11; // r0
  int v12; // r7
  unsigned int v13; // r1
  unsigned int v14; // r4
  unsigned int v15; // r2
  bool v16; // zf
  struct iovec *v17; // r3
  const struct iovec *v18; // r1
  size_t v19; // r0
  size_t *p_iov_len; // r1
  size_t v21; // r2
  size_t iov_len; // t1
  char *iov_base; // r7
  char **v25; // r0
  char **v26; // r1
  _DWORD v27[6]; // [sp+0h] [bp-18h] BYREF

  if ( !a4 )
    goto LABEL_26;
  v5 = 8 * a4;
  v6 = 0;
  while ( !*(_DWORD *)(a3 + 4 + 8 * v6) )
  {
    v5 -= 8;
    ++v6;
    if ( !v5 )
    {
      v6 = ((a4 - 1) & 0x1FFFFFFF) + 1;
      break;
    }
  }
  if ( v6 > a4 )
    core::slice::index::slice_start_index_len_fail(v6, a4, (int)&off_2C9BF0);
  v7 = a4 - v6;
  if ( a4 == v6 )
  {
LABEL_26:
    *(_BYTE *)a1 = 4;
    return 4;
  }
  v8 = (const struct iovec *)(a3 + 8 * v6);
  while ( 1 )
  {
    v10 = v7;
    if ( v7 >= 0x400 )
      v10 = 1024;
    v11 = writev(2, v8, v10);
    if ( v11 == -1 )
      break;
    if ( !v11 )
    {
      *(_DWORD *)a1 = 2;
      *(_DWORD *)(a1 + 4) = &off_2C9C28;
      return 2;
    }
    v12 = 8 * v7;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = v8[v13].iov_len + v14;
      if ( v15 > v11 )
        break;
      v12 -= 8;
      ++v13;
      v14 = v15;
      if ( !v12 )
      {
        v14 = v15;
        v13 = ((v7 - 1) & 0x1FFFFFFF) + 1;
        break;
      }
    }
    v16 = v7 == v13;
    if ( v7 < v13 )
      core::slice::index::slice_start_index_len_fail(v13, v7, (int)&off_2C9BF0);
    v7 -= v13;
    v17 = (struct iovec *)&v8[v13];
    if ( v16 )
    {
      v8 += v13;
      if ( v11 != v14 )
      {
        v25 = &off_2C9C00;
        v26 = &off_2C9C08;
        goto LABEL_31;
      }
    }
    else
    {
      v18 = &v8[v13];
      v19 = v11 - v14;
      iov_len = v18->iov_len;
      p_iov_len = &v18->iov_len;
      v21 = iov_len;
      if ( iov_len < v19 )
      {
        v25 = &off_2CA830;
        v26 = &off_2CA838;
LABEL_31:
        v27[2] = v25;
        v27[3] = 1;
        v27[5] = 0;
        v27[0] = 0;
        v27[4] = aRustc9eb3afe9e;
        core::panicking::panic_fmt((int)v27, (int)v26);
      }
      iov_base = (char *)v17->iov_base;
      v8 = v17;
      *p_iov_len = v21 - v19;
      v17->iov_base = &iov_base[v19];
    }
LABEL_10:
    if ( !v7 )
      goto LABEL_26;
  }
  v9 = *_errno_location();
  if ( (unsigned __int8)std::sys::unix::decode_error_kind(v9) == 35 )
    goto LABEL_10;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = v9;
  return 0;
}
