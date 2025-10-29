int __fastcall <std::io::stdio::Stdin as std::io::Read>::read(int a1, int *a2, char *dest, size_t n)
{
  int v4; // r4
  _BOOL4 v9; // r5
  int result; // r0
  unsigned int v11; // r1

  v4 = *a2;
  while ( !__ldrex((unsigned int *)v4) )
  {
    if ( !__strex(1u, (unsigned int *)v4) )
    {
      __dmb(0xBu);
      goto LABEL_5;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended((unsigned int *)v4);
LABEL_5:
  v9 = 0;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    v9 = !std::panicking::panic_count::is_zero_slow_path();
  sub_1CEB40(a1, (char **)(v4 + 8), dest, n);
  if ( !v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(v4 + 4) = 1;
  }
  result = 0;
  __dmb(0xBu);
  do
    v11 = __ldrex((unsigned int *)v4);
  while ( __strex(0, (unsigned int *)v4) );
  if ( v11 == 2 )
    return syscall(240, v4, 129, 1);
  return result;
}
