int __fastcall std::sys::unix::locks::futex_condvar::Condvar::wait_timeout(
        int *a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        int a5)
{
  int v5; // r7
  unsigned int v10; // r1
  int v11; // r5

  v5 = *a1;
  __dmb(0xBu);
  do
    v10 = __ldrex(a2);
  while ( __strex(0, a2) );
  if ( v10 == 2 )
    syscall(240, a2, 129, 1);
  v11 = std::sys::unix::futex::futex_wait(a1, v5, a3, a4, a5);
  while ( !__ldrex(a2) )
  {
    if ( !__strex(1u, a2) )
    {
      __dmb(0xBu);
      return v11;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended(a2);
  return v11;
}
