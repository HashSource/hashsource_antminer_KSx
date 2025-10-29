int __fastcall <&std::io::stdio::Stdout as std::io::Write>::flush(_DWORD *a1, unsigned int ***a2)
{
  unsigned int *v3; // r4
  unsigned int v4; // r6
  unsigned int v5; // r0
  bool v6; // cf
  int v7; // r0
  int v9; // r1
  unsigned int v10; // r1
  int result; // r0
  unsigned int v12; // r1
  _DWORD v13[3]; // [sp+8h] [bp-10h] BYREF
  _BYTE v14[4]; // [sp+14h] [bp-4h] BYREF

  v3 = **a2;
  v4 = v3[1];
  if ( v4 == _tls_get_addr(&dword_2E5448) )
  {
    v5 = v3[2];
    v6 = __CFADD__(v5, 1);
    v7 = v5 + 1;
    if ( v6 )
      core::option::expect_failed();
  }
  else
  {
    while ( !__ldrex(v3) )
    {
      if ( !__strex(1u, v3) )
      {
        __dmb(0xBu);
        goto LABEL_8;
      }
    }
    __clrex();
    std::sys::unix::locks::futex_mutex::Mutex::lock_contended(v3);
LABEL_8:
    v3[1] = _tls_get_addr(&dword_2E5448);
    v7 = 1;
  }
  v3[2] = v7;
  if ( v3[3] )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v14, (int)&off_2DE2E8, (int)&off_2DEB14);
  v3[3] = -1;
  sub_1CF990((int)v13, (int)(v3 + 4));
  if ( LOBYTE(v13[0]) == 4 )
  {
    *a1 = 4;
  }
  else
  {
    v9 = v13[1];
    *a1 = v13[0];
    a1[1] = v9;
  }
  v10 = v3[3];
  result = v3[2] - 1;
  v3[2] = result;
  v3[3] = v10 + 1;
  if ( !result )
  {
    result = 0;
    v3[1] = 0;
    __dmb(0xBu);
    do
      v12 = __ldrex(v3);
    while ( __strex(0, v3) );
    if ( v12 == 2 )
      return syscall(240, v3, 129, 1);
  }
  return result;
}
