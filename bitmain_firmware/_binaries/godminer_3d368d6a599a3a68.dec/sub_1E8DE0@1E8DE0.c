void __fastcall __noreturn sub_1E8DE0(int a1, int a2)
{
  int v4; // r1
  _DWORD *addr; // r0
  _DWORD v6[2]; // [sp+0h] [bp-8h] BYREF

  do
    v4 = __ldrex((unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT);
  while ( __strex(v4 + 1, (unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT) );
  if ( v4 >= 0 )
  {
    addr = (_DWORD *)_tls_get_addr(&dword_2E5460);
    ++*addr;
  }
  v6[0] = a1;
  v6[1] = a2;
  rust_panic(v6, &off_2DF424);
}
