unsigned int *__fastcall std::io::stdio::Stdin::lock(unsigned int **a1)
{
  unsigned int *v1; // r4

  v1 = *a1;
  while ( !__ldrex(v1) )
  {
    if ( !__strex(1u, v1) )
    {
      __dmb(0xBu);
      goto LABEL_5;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended(v1);
LABEL_5:
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    std::panicking::panic_count::is_zero_slow_path();
  return v1;
}
