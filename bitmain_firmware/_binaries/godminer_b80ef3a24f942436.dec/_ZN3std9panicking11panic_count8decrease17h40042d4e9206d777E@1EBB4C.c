_DWORD *std::panicking::panic_count::decrease()
{
  unsigned int v0; // r1
  _DWORD *result; // r0

  do
    v0 = __ldrex((unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT);
  while ( __strex(v0 - 1, (unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT) );
  result = (_DWORD *)_tls_get_addr(&dword_2F0440);
  --*result;
  return result;
}
