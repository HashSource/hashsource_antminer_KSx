// Alternative name is '_ZN3std5panic12always_abort17hdfa07668b37c70a0E'
int *std::panicking::panic_count::set_always_abort()
{
  int *result; // r0
  unsigned int v1; // r1

  result = &std::panicking::panic_count::GLOBAL_PANIC_COUNT;
  do
    v1 = __ldrex((unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT);
  while ( __strex(v1 | 0x80000000, (unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT) );
  return result;
}
