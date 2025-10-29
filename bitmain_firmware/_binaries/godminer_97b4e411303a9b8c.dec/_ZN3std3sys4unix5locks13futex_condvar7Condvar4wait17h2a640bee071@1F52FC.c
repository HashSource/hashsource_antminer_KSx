unsigned int __fastcall std::sys::unix::locks::futex_condvar::Condvar::wait(int *a1, unsigned int *a2)
{
  int v2; // r6
  unsigned int v5; // r1
  unsigned int result; // r0

  v2 = *a1;
  __dmb(0xBu);
  do
    v5 = __ldrex(a2);
  while ( __strex(0, a2) );
  if ( v5 == 2 )
    syscall(240, a2, 129, 1);
  while ( *a1 == v2 && syscall(240, a1, 137, v2, 0, 0, -1) <= -1 && *_errno_location() == 4 )
    ;
  result = 1;
  while ( !__ldrex(a2) )
  {
    if ( !__strex(1u, a2) )
    {
      __dmb(0xBu);
      return result;
    }
  }
  __clrex();
  return std::sys::unix::locks::futex_mutex::Mutex::lock_contended(a2);
}
