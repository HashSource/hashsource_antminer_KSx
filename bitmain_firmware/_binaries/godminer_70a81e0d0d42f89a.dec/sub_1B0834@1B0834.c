int __fastcall sub_1B0834(int a1, char a2)
{
  int result; // r0
  unsigned int v4; // r1

  if ( !a2
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(a1 + 4) = 1;
  }
  result = 0;
  __dmb(0xBu);
  do
    v4 = __ldrex((unsigned int *)a1);
  while ( __strex(0, (unsigned int *)a1) );
  if ( v4 == 2 )
    return syscall(240, a1, 129, 1);
  return result;
}
