int __fastcall <&std::io::stdio::Stdout as std::io::Write>::write_vectored(
        int a1,
        unsigned int ***a2,
        struct iovec *a3,
        unsigned int a4)
{
  unsigned int *v7; // r4
  unsigned int v8; // r5
  unsigned int v9; // r0
  bool v10; // cf
  int v11; // r0
  unsigned int v13; // r1
  int result; // r0
  unsigned int v15; // r1
  _BYTE v16[4]; // [sp+4h] [bp-4h] BYREF

  v7 = **a2;
  v8 = v7[1];
  if ( v8 == _tls_get_addr(&dword_2E5448) )
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
    v7[1] = _tls_get_addr(&dword_2E5448);
    v11 = 1;
  }
  v7[2] = v11;
  if ( v7[3] )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v16, (int)&off_2DE2E8, (int)&off_2DEB04);
  v7[3] = -1;
  sub_1CF4B4(a1, (int)(v7 + 4), a3, a4);
  v13 = v7[3];
  result = v7[2] - 1;
  v7[2] = result;
  v7[3] = v13 + 1;
  if ( !result )
  {
    result = 0;
    v7[1] = 0;
    __dmb(0xBu);
    do
      v15 = __ldrex(v7);
    while ( __strex(0, v7) );
    if ( v15 == 2 )
      return syscall(240, v7, 129, 1);
  }
  return result;
}
