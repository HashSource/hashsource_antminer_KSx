unsigned int *__fastcall sub_1B2D5C(unsigned int *result)
{
  unsigned int v1; // r1
  unsigned int v2; // r1

  __dmb(0xBu);
  do
  {
    v1 = __ldrex(result);
    v2 = v1 - 1;
  }
  while ( __strex(v2, result) );
  if ( (v2 & 0xBFFFFFFF) == 0x80000000 )
    return (unsigned int *)std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers(result, v2);
  return result;
}
