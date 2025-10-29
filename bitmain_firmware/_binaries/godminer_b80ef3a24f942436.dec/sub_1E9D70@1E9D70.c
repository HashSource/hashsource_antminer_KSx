unsigned int *sub_1E9D70()
{
  int v0; // r0
  unsigned int *v1; // r4
  int addr; // r0
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  _BYTE v9[4]; // [sp+4h] [bp-4h] BYREF

  v0 = *(unsigned __int8 *)_tls_get_addr(&dword_2F0430);
  if ( v0 != 1 )
  {
    v1 = 0;
    if ( v0 )
      return v1;
    addr = _tls_get_addr(&dword_2F0438);
    std::sys::unix::thread_local_dtor::register_dtor(addr, (int)sub_1FA024);
    *(_BYTE *)_tls_get_addr(&dword_2F0430) = 1;
  }
  if ( *(_DWORD *)_tls_get_addr(&dword_2F0438) )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v9, (int)&off_2E92E8, (int)&off_2EA1D4);
  v3 = (_DWORD *)_tls_get_addr(&dword_2F0438);
  v4 = v3[2];
  *v3 = -1;
  if ( v4 == 2 )
  {
    v1 = std::thread::Thread::new(0, 2);
    v5 = _tls_get_addr(&dword_2F0438);
    *(_DWORD *)(v5 + 4) = v1;
    *(_DWORD *)(v5 + 8) = 0;
  }
  else
  {
    v1 = *(unsigned int **)(_tls_get_addr(&dword_2F0438) + 4);
  }
  do
    v6 = __ldrex(v1);
  while ( __strex(v6 + 1, v1) );
  if ( v6 <= -1 )
    __und(0xFDEEu);
  v7 = (_DWORD *)_tls_get_addr(&dword_2F0438);
  ++*v7;
  return v1;
}
