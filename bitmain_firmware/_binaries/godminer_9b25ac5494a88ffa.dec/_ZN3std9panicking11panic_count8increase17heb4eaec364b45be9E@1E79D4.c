unsigned int std::panicking::panic_count::increase()
{
  int v0; // r4
  _DWORD *addr; // r0

  do
    v0 = __ldrex((unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT);
  while ( __strex(v0 + 1, (unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT) );
  if ( v0 >= 0 )
  {
    addr = (_DWORD *)_tls_get_addr(&dword_2E4454);
    ++*addr;
  }
  return (unsigned int)v0 >> 31;
}
