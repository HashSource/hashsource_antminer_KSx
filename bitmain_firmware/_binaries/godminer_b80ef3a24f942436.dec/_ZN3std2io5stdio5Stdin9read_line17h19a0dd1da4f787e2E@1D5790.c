int __fastcall std::io::stdio::Stdin::read_line(int *a1, int *a2, unsigned int *a3)
{
  int v3; // r4
  _BOOL4 v7; // r7
  int result; // r0
  unsigned int v9; // r1
  int v10; // [sp+0h] [bp-8h] BYREF
  bool v11; // [sp+4h] [bp-4h]

  v3 = *a2;
  while ( !__ldrex((unsigned int *)v3) )
  {
    if ( !__strex(1u, (unsigned int *)v3) )
    {
      __dmb(0xBu);
      goto LABEL_5;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended((unsigned int *)v3);
LABEL_5:
  v7 = 0;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    v7 = !std::panicking::panic_count::is_zero_slow_path();
  v11 = v7;
  v10 = v3;
  <std::io::stdio::StdinLock as std::io::BufRead>::read_line(a1, (int)&v10, a3);
  if ( !v7
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(v3 + 4) = 1;
  }
  result = 0;
  __dmb(0xBu);
  do
    v9 = __ldrex((unsigned int *)v3);
  while ( __strex(0, (unsigned int *)v3) );
  if ( v9 == 2 )
    return syscall(240, v3, 129, 1);
  return result;
}
