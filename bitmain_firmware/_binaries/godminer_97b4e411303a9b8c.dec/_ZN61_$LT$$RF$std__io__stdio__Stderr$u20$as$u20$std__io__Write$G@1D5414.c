int __fastcall <&std::io::stdio::Stderr as std::io::Write>::write_all(int a1, unsigned int ***a2, void *a3)
{
  unsigned int *v5; // r4
  unsigned int v6; // r5
  unsigned int v7; // r0
  bool v8; // cf
  int v9; // r0
  int result; // r0
  unsigned int v12; // r1
  unsigned int *v13; // [sp+4h] [bp-4h] BYREF

  v5 = **a2;
  v6 = v5[1];
  if ( v6 == _tls_get_addr(&dword_2E6448) )
  {
    v7 = v5[2];
    v8 = __CFADD__(v7, 1);
    v9 = v7 + 1;
    if ( v8 )
      core::option::expect_failed();
  }
  else
  {
    while ( !__ldrex(v5) )
    {
      if ( !__strex(1u, v5) )
      {
        __dmb(0xBu);
        goto LABEL_8;
      }
    }
    __clrex();
    std::sys::unix::locks::futex_mutex::Mutex::lock_contended(v5);
LABEL_8:
    v5[1] = _tls_get_addr(&dword_2E6448);
    v9 = 1;
  }
  v5[2] = v9;
  v13 = v5;
  <std::io::stdio::StderrLock as std::io::Write>::write_all(a1, (int)&v13, a3);
  result = v5[2] - 1;
  v5[2] = result;
  if ( !result )
  {
    result = 0;
    v5[1] = 0;
    __dmb(0xBu);
    do
      v12 = __ldrex(v5);
    while ( __strex(0, v5) );
    if ( v12 == 2 )
      return syscall(240, v5, 129, 1);
  }
  return result;
}
