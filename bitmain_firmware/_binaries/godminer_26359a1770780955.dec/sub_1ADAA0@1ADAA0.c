int __fastcall sub_1ADAA0(int *a1)
{
  int v1; // r4
  int result; // r0
  unsigned int v3; // r1

  v1 = *a1;
  if ( !*((_BYTE *)a1 + 4)
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(v1 + 4) = 1;
  }
  result = 0;
  __dmb(0xBu);
  do
    v3 = __ldrex((unsigned int *)v1);
  while ( __strex(0, (unsigned int *)v1) );
  if ( v3 == 2 )
    return syscall(240, v1, 129, 1);
  return result;
}
