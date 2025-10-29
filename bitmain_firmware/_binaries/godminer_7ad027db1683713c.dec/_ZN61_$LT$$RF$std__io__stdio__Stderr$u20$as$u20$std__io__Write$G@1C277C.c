int __fastcall <&std::io::stdio::Stderr as std::io::Write>::write_all_vectored(
        int a1,
        unsigned int ***a2,
        int a3,
        unsigned int a4)
{
  unsigned int *v7; // r4
  unsigned int v8; // r6
  unsigned int v9; // r0
  bool v10; // cf
  int v11; // r0
  bool v13; // zf
  int v14; // r1
  unsigned int v15; // r1
  int result; // r0
  unsigned int v17; // r1
  int v18; // [sp+8h] [bp-10h] BYREF
  int v19; // [sp+Ch] [bp-Ch]
  _BYTE v20[4]; // [sp+14h] [bp-4h] BYREF

  v7 = **a2;
  v8 = v7[1];
  if ( v8 == _tls_get_addr(&dword_2D0424) )
  {
    v9 = v7[2];
    v10 = __CFADD__(v9, 1);
    v11 = v9 + 1;
    if ( v10 )
      core::option::expect_failed((int)aLockCountOverf, 38, (int)&off_2CA0F4);
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
    v7[1] = _tls_get_addr(&dword_2D0424);
    v11 = 1;
  }
  v7[2] = v11;
  if ( v7[3] )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v20, (int)&off_2C92E8, (int)&off_2C9B84);
  v7[3] = -1;
  sub_1C4318((int)&v18, (int)(v7 + 4), a3, a4);
  v13 = (unsigned __int8)v18 == 0;
  if ( !(_BYTE)v18 )
    v13 = v19 == 9;
  if ( v13 )
  {
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v14 = v19;
    *(_DWORD *)a1 = v18;
    *(_DWORD *)(a1 + 4) = v14;
  }
  v15 = v7[3];
  result = v7[2] - 1;
  v7[2] = result;
  v7[3] = v15 + 1;
  if ( !result )
  {
    result = 0;
    v7[1] = 0;
    __dmb(0xBu);
    do
      v17 = __ldrex(v7);
    while ( __strex(0, v7) );
    if ( v17 == 2 )
      return syscall(240, v7, 129, 1);
  }
  return result;
}
