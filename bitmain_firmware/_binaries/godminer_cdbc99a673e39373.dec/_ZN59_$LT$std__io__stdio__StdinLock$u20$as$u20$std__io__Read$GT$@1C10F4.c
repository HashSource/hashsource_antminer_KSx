ssize_t __fastcall <std::io::stdio::StdinLock as std::io::Read>::read_vectored(
        int a1,
        _DWORD *a2,
        struct iovec *iovec,
        unsigned int a4)
{
  _DWORD *v4; // r7
  int v5; // r6
  struct iovec *v6; // r9
  size_t *p_iov_len; // r2
  int v9; // r1
  unsigned int v10; // r0
  size_t v11; // t1
  unsigned int v12; // r4
  unsigned int v13; // r5
  unsigned int v14; // r8
  int v15; // r4
  ssize_t result; // r0
  char *v17; // r10
  unsigned int v18; // r0
  size_t v19; // r2
  size_t v20; // r11
  char *v21; // r4
  int v22; // r5
  int v23; // r7
  bool v24; // cc
  _BYTE *iov_base; // r0
  size_t iov_len; // r10
  size_t v27; // r6
  unsigned int v28; // [sp+0h] [bp-Ch]
  _DWORD *v29; // [sp+4h] [bp-8h]
  int v30; // [sp+8h] [bp-4h]

  v4 = (_DWORD *)*a2;
  v5 = a4;
  v6 = iovec;
  if ( a4 )
  {
    p_iov_len = &iovec->iov_len;
    v9 = 8 * a4;
    v10 = 0;
    do
    {
      v11 = *p_iov_len;
      p_iov_len += 2;
      v9 -= 8;
      v10 += v11;
    }
    while ( v9 );
    v12 = v4[3];
    v13 = v4[4];
    v14 = v4[5];
    if ( v13 != v14 )
      goto LABEL_12;
  }
  else
  {
    v10 = 0;
    v12 = v4[3];
    v13 = v4[4];
    v14 = v4[5];
    if ( v13 != v14 )
      goto LABEL_12;
  }
  if ( v10 >= v12 )
  {
    v15 = 0;
    if ( a4 >= 0x400 )
      v5 = 1024;
    v4[4] = 0;
    v4[5] = 0;
    result = readv(0, v6, v5);
    if ( result == -1 )
    {
      result = *_errno_location();
      if ( result == 9 )
      {
        *(_BYTE *)a1 = 4;
        *(_DWORD *)(a1 + 4) = 0;
        return 0;
      }
    }
    else
    {
      v15 = 4;
    }
    *(_DWORD *)a1 = v15;
    *(_DWORD *)(a1 + 4) = result;
    return result;
  }
LABEL_12:
  v29 = v4;
  v30 = a1;
  if ( v13 >= v14 )
  {
    v18 = v4[6];
    if ( v12 < v18 )
      core::slice::index::slice_start_index_len_fail();
    v17 = (char *)v4[2];
    v13 = 0;
    memset(&v17[v18], 0, v12 - v18);
    v19 = v12;
    if ( v12 >= 0x7FFFFFFF )
      v19 = 0x7FFFFFFF;
    v14 = read(0, v17, v19);
    if ( v14 == -1 )
    {
      result = *_errno_location();
      v14 = 0;
      if ( result != 9 )
      {
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = result;
        return result;
      }
    }
    v4[4] = 0;
    if ( v12 <= v14 )
      v12 = v14;
    v4[5] = v14;
    v4[6] = v12;
  }
  else
  {
    v17 = (char *)v4[2];
  }
  v20 = v14 - v13;
  v21 = &v17[v13];
  v28 = v13;
  v22 = 8 * v5;
  v23 = 0;
  do
  {
    if ( !v22 )
      break;
    iov_base = v6->iov_base;
    iov_len = v6->iov_len;
    v27 = v20;
    if ( iov_len < v20 )
      v27 = v6->iov_len;
    if ( v27 == 1 )
    {
      if ( !iov_len )
        core::panicking::panic_bounds_check(0, 0, (int)&off_2CAA94);
      *iov_base = *v21;
    }
    else
    {
      memcpy(iov_base, v21, v27);
    }
    ++v6;
    v23 += v27;
    v21 += v27;
    v22 -= 8;
    v24 = v20 > iov_len;
    v20 -= v27;
  }
  while ( v24 );
  *(_BYTE *)v30 = 4;
  *(_DWORD *)(v30 + 4) = v23;
  if ( v23 + v28 < v14 )
    v14 = v23 + v28;
  v29[4] = v14;
  return (ssize_t)v29;
}
