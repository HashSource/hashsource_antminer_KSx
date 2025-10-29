int __fastcall <&std::io::stdio::Stderr as std::io::Write>::write(
        int a1,
        unsigned int ***a2,
        const void *a3,
        unsigned int a4)
{
  unsigned int *v7; // r4
  unsigned int v8; // r7
  unsigned int v9; // r0
  bool v10; // cf
  int v11; // r0
  size_t v13; // r2
  ssize_t v14; // r0
  int v15; // r1
  unsigned int v16; // r1
  int result; // r0
  unsigned int v18; // r1
  _BYTE v19[4]; // [sp+4h] [bp-4h] BYREF

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
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v19, (int)&off_2DE2E8, (int)&off_2DEB44);
  v13 = a4;
  v7[3] = -1;
  if ( a4 >= 0x7FFFFFFF )
    v13 = 0x7FFFFFFF;
  v14 = write(2, a3, v13);
  if ( v14 == -1 )
  {
    v14 = *_errno_location();
    v15 = 0;
    if ( v14 == 9 )
    {
      *(_DWORD *)(a1 + 4) = a4;
      *(_BYTE *)a1 = 4;
      goto LABEL_17;
    }
  }
  else
  {
    v15 = 4;
  }
  *(_DWORD *)a1 = v15;
  *(_DWORD *)(a1 + 4) = v14;
LABEL_17:
  v16 = v7[3];
  result = v7[2] - 1;
  v7[2] = result;
  v7[3] = v16 + 1;
  if ( !result )
  {
    result = 0;
    v7[1] = 0;
    __dmb(0xBu);
    do
      v18 = __ldrex(v7);
    while ( __strex(0, v7) );
    if ( v18 == 2 )
      return syscall(240, v7, 129, 1);
  }
  return result;
}
