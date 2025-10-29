unsigned int __fastcall <std::io::stdio::StdoutRaw as std::io::Write>::write_all_vectored(
        unsigned int result,
        int a2,
        int a3,
        unsigned int a4)
{
  int v4; // r7
  _DWORD *v5; // r10
  int v6; // r8
  int v7; // r7
  unsigned int v8; // r5
  const struct iovec *v9; // r6
  int v10; // r2
  int v11; // r7
  unsigned int v12; // r1
  unsigned int v13; // r4
  unsigned int v14; // r2
  bool v15; // zf
  struct iovec *v16; // r3
  const struct iovec *v17; // r1
  size_t v18; // r0
  size_t *p_iov_len; // r1
  size_t v20; // r2
  size_t iov_len; // t1
  void *iov_base; // r7
  char **v23; // r0
  char **v24; // r1
  _DWORD v25[6]; // [sp+0h] [bp-18h] BYREF

  v5 = (_DWORD *)result;
  v6 = 4;
  if ( !a4 )
  {
LABEL_26:
    *v5 = v6;
    v5[1] = v4;
    return result;
  }
  v7 = 8 * a4;
  result = 0;
  while ( !*(_DWORD *)(a3 + 4 + 8 * result) )
  {
    v7 -= 8;
    ++result;
    if ( !v7 )
    {
      result = ((a4 - 1) & 0x1FFFFFFF) + 1;
      break;
    }
  }
  if ( result > a4 )
    core::slice::index::slice_start_index_len_fail();
  v8 = a4 - result;
  if ( a4 == result )
  {
    *v5 = 4;
    v5[1] = v7;
    return result;
  }
  v9 = (const struct iovec *)(a3 + 8 * result);
  while ( 1 )
  {
    v10 = v8;
    if ( v8 >= 0x400 )
      v10 = 1024;
    result = writev(1, v9, v10);
    if ( result == -1 )
      break;
    if ( !result )
    {
      v6 = 2;
LABEL_29:
      *v5 = v6;
      v5[1] = &off_2E0C28;
      return result;
    }
    v11 = 8 * v8;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = v9[v12].iov_len + v13;
      if ( v14 > result )
        break;
      v11 -= 8;
      ++v12;
      v13 = v14;
      if ( !v11 )
      {
        v13 = v14;
        v12 = ((v8 - 1) & 0x1FFFFFFF) + 1;
        break;
      }
    }
    v15 = v8 == v12;
    if ( v8 < v12 )
      core::slice::index::slice_start_index_len_fail();
    v8 -= v12;
    v16 = (struct iovec *)&v9[v12];
    if ( v15 )
    {
      v9 += v12;
      if ( result != v13 )
      {
        v23 = &off_2E0C00;
        v24 = &off_2E0C08;
        goto LABEL_34;
      }
    }
    else
    {
      v17 = &v9[v12];
      v18 = result - v13;
      iov_len = v17->iov_len;
      p_iov_len = &v17->iov_len;
      v20 = iov_len;
      if ( iov_len < v18 )
      {
        v23 = &off_2E1830;
        v24 = &off_2E1838;
LABEL_34:
        v25[2] = v23;
        v25[3] = 1;
        v25[5] = 0;
        v25[0] = 0;
        v25[4] = aRustc9eb3afe9e;
        core::panicking::panic_fmt((int)v25, (int)v24);
      }
      iov_base = v16->iov_base;
      *p_iov_len = v20 - v18;
      v9 = v16;
      result = (unsigned int)iov_base + v18;
      v16->iov_base = (void *)result;
    }
LABEL_10:
    if ( !v8 )
      goto LABEL_29;
  }
  v4 = *_errno_location();
  result = (unsigned __int8)std::sys::unix::decode_error_kind(v4);
  if ( (unsigned __int8)result == 35 )
    goto LABEL_10;
  v6 = 0;
  if ( v4 != 9 )
    goto LABEL_26;
  *(_BYTE *)v5 = 4;
  return 4;
}
