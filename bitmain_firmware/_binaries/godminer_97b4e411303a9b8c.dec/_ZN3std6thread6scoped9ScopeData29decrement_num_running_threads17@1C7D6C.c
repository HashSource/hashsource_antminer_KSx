int __fastcall std::thread::scoped::ScopeData::decrement_num_running_threads(int result, int a2)
{
  unsigned int v2; // r1
  int v3; // r0
  unsigned int *v4; // r1
  unsigned int v5; // r2

  if ( a2 )
    *(_BYTE *)(result + 8) = 1;
  __dmb(0xBu);
  do
    v2 = __ldrex((unsigned int *)result);
  while ( __strex(v2 - 1, (unsigned int *)result) );
  if ( v2 == 1 )
  {
    v3 = *(_DWORD *)(result + 4);
    __dmb(0xBu);
    v4 = (unsigned int *)(v3 + 24);
    result = 1;
    do
      v5 = __ldrex(v4);
    while ( __strex(1u, v4) );
    if ( v5 == -1 )
      return syscall(240, v4, 129, 1);
  }
  return result;
}
