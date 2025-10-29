ssize_t __fastcall <std::io::stdio::StderrRaw as std::io::Write>::write_vectored(
        int a1,
        int a2,
        struct iovec *iovec,
        unsigned int a4)
{
  size_t *p_iov_len; // r2
  unsigned int v7; // r0
  int v8; // r5
  size_t v9; // t1
  ssize_t result; // r0
  int v11; // r1

  if ( a4 )
  {
    p_iov_len = &iovec->iov_len;
    v7 = 8 * a4;
    v8 = 0;
    do
    {
      v9 = *p_iov_len;
      p_iov_len += 2;
      v7 -= 8;
      v8 += v9;
    }
    while ( v7 );
  }
  else
  {
    v8 = 0;
  }
  if ( a4 >= 0x400 )
    a4 = 1024;
  result = writev(2, iovec, a4);
  if ( result == -1 )
  {
    result = *_errno_location();
    v11 = 0;
    if ( result == 9 )
    {
      *(_DWORD *)(a1 + 4) = v8;
      *(_BYTE *)a1 = 4;
      return 4;
    }
  }
  else
  {
    v11 = 4;
  }
  *(_DWORD *)a1 = v11;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
