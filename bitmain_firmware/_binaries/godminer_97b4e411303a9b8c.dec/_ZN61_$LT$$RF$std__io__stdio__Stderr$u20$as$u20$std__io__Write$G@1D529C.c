int __fastcall <&std::io::stdio::Stderr as std::io::Write>::flush(_DWORD *a1, unsigned int ***a2)
{
  unsigned int *v3; // r4
  unsigned int v4; // r6
  unsigned int v5; // r0
  bool v6; // cf
  unsigned int v7; // r0
  unsigned int v8; // r1
  int result; // r0
  unsigned int v11; // r1
  _BYTE v12[4]; // [sp+4h] [bp-4h] BYREF

  v3 = **a2;
  v4 = v3[1];
  if ( v4 == _tls_get_addr(&dword_2E6448) )
  {
    v5 = v3[2];
    v6 = __CFADD__(v5, 1);
    v7 = v5 + 1;
    if ( v6 )
      core::option::expect_failed();
    v8 = v7 - 1;
    v3[2] = v7;
  }
  else
  {
    while ( !__ldrex(v3) )
    {
      if ( !__strex(1u, v3) )
      {
        __dmb(0xBu);
        goto LABEL_7;
      }
    }
    __clrex();
    std::sys::unix::locks::futex_mutex::Mutex::lock_contended(v3);
LABEL_7:
    v3[1] = _tls_get_addr(&dword_2E6448);
    v3[2] = 1;
    v8 = 0;
  }
  if ( v3[3] )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v12, (int)&off_2DF2E8, (int)&off_2DFB64);
  result = 0;
  *a1 = 4;
  v3[2] = v8;
  v3[3] = 0;
  if ( !v8 )
  {
    v3[1] = 0;
    __dmb(0xBu);
    do
      v11 = __ldrex(v3);
    while ( __strex(0, v3) );
    if ( v11 == 2 )
      return syscall(240, v3, 129, 1);
  }
  return result;
}
