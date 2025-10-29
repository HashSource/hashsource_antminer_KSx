int __fastcall <&std::io::stdio::Stderr as std::io::Write>::write_vectored(
        int a1,
        unsigned int ***a2,
        const struct iovec *a3,
        unsigned int a4)
{
  unsigned int *v7; // r4
  unsigned int v8; // r5
  unsigned int v9; // r0
  bool v10; // cf
  int v11; // r0
  size_t *p_iov_len; // r1
  int v14; // r0
  int v15; // r5
  size_t v16; // t1
  ssize_t v17; // r0
  int v18; // r1
  unsigned int v19; // r1
  int result; // r0
  unsigned int v21; // r1
  char v22[4]; // [sp+4h] [bp-4h] BYREF

  v7 = **a2;
  v8 = v7[1];
  if ( v8 == _tls_get_addr(&dword_2D1424) )
  {
    v9 = v7[2];
    v10 = __CFADD__(v9, 1);
    v11 = v9 + 1;
    if ( v10 )
      core::option::expect_failed();
  }
  else
  {
    while ( !__ldrex(v7) )
    {
      if ( !__strex(1u, v7) )
      {
        __dmb(0xBu);
        goto LABEL_8;
      }
    }
    __clrex();
    std::sys::unix::locks::futex_mutex::Mutex::lock_contended(v7);
LABEL_8:
    v7[1] = _tls_get_addr(&dword_2D1424);
    v11 = 1;
  }
  v7[2] = v11;
  if ( v7[3] )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v22, (int)&off_2CA2E8, (int)&off_2CAB54);
  v7[3] = -1;
  if ( a4 )
  {
    p_iov_len = &a3->iov_len;
    v14 = 8 * a4;
    v15 = 0;
    do
    {
      v16 = *p_iov_len;
      p_iov_len += 2;
      v14 -= 8;
      v15 += v16;
    }
    while ( v14 );
  }
  else
  {
    v15 = 0;
  }
  if ( a4 >= 0x400 )
    a4 = 1024;
  v17 = writev(2, a3, a4);
  if ( v17 == -1 )
  {
    v17 = *_errno_location();
    v18 = 0;
    if ( v17 == 9 )
    {
      *(_DWORD *)(a1 + 4) = v15;
      *(_BYTE *)a1 = 4;
      goto LABEL_22;
    }
  }
  else
  {
    v18 = 4;
  }
  *(_DWORD *)a1 = v18;
  *(_DWORD *)(a1 + 4) = v17;
LABEL_22:
  v19 = v7[3];
  result = v7[2] - 1;
  v7[2] = result;
  v7[3] = v19 + 1;
  if ( !result )
  {
    result = 0;
    v7[1] = 0;
    __dmb(0xBu);
    do
      v21 = __ldrex(v7);
    while ( __strex(0, v7) );
    if ( v21 == 2 )
      return syscall(240, v7, 129, 1);
  }
  return result;
}
