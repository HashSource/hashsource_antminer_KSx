unsigned int *__fastcall std::io::stdio::Stdin::lines(unsigned int *a1)
{
  while ( !__ldrex(a1) )
  {
    if ( !__strex(1u, a1) )
    {
      __dmb(0xBu);
      goto LABEL_4;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended(a1);
LABEL_4:
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    std::panicking::panic_count::is_zero_slow_path();
  return a1;
}
