int (*std::alloc::take_alloc_error_hook())()
{
  unsigned int v0; // r1
  int (*result)(); // r0

  __dmb(0xBu);
  do
    v0 = __ldrex((unsigned int *)&off_30CC84);
  while ( __strex(0, (unsigned int *)&off_30CC84) );
  __dmb(0xBu);
  result = sub_1E7900;
  if ( v0 )
    return (int (*)())v0;
  return result;
}
