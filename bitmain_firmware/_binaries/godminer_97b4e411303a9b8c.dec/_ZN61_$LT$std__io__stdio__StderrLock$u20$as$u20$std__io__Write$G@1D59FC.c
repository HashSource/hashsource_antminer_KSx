int __fastcall <std::io::stdio::StderrLock as std::io::Write>::write_vectored(
        int *a1,
        int *a2,
        struct iovec *iovec,
        unsigned int a4)
{
  int v4; // r5
  size_t *p_iov_len; // r1
  int v7; // r0
  int v8; // r6
  size_t v9; // t1
  ssize_t v10; // r0
  int v11; // r1
  int result; // r0
  char v13[4]; // [sp+4h] [bp-4h] BYREF

  v4 = *a2;
  if ( *(_DWORD *)(*a2 + 12) )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v13, (int)&off_2DF2E8, (int)&off_2DFB54);
  *(_DWORD *)(v4 + 12) = -1;
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
  v10 = writev(2, iovec, a4);
  if ( v10 != -1 )
  {
    v11 = 4;
LABEL_13:
    *a1 = v11;
    a1[1] = v10;
    goto LABEL_14;
  }
  v10 = *_errno_location();
  v11 = 0;
  if ( v10 != 9 )
    goto LABEL_13;
  a1[1] = v8;
  *(_BYTE *)a1 = 4;
LABEL_14:
  result = *(_DWORD *)(v4 + 12) + 1;
  *(_DWORD *)(v4 + 12) = result;
  return result;
}
