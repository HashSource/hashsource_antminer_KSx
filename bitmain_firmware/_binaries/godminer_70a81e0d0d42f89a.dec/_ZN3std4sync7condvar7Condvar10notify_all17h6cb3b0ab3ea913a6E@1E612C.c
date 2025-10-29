int __fastcall std::sync::condvar::Condvar::notify_all(unsigned int *a1)
{
  unsigned int v2; // r0

  do
    v2 = __ldrex(a1);
  while ( __strex(v2 + 1, a1) );
  return syscall(240, a1, 129, 0x7FFFFFFF);
}
