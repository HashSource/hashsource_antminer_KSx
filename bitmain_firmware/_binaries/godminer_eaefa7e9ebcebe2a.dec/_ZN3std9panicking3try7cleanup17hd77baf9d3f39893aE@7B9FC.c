__int64 __fastcall std::panicking::try::cleanup(void *ptr)
{
  __int64 v1; // r4
  unsigned int v2; // r1
  _DWORD *addr; // r0
  __int64 v5; // [sp+0h] [bp-8h] BYREF

  _rust_panic_cleanup((int)&v5, ptr);
  v1 = v5;
  do
    v2 = __ldrex((unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT);
  while ( __strex(v2 - 1, (unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT) );
  addr = (_DWORD *)_tls_get_addr(&dword_2E5460);
  --*addr;
  return v1;
}
