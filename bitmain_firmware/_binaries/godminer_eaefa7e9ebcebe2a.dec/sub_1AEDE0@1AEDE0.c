unsigned int *__fastcall sub_1AEDE0(unsigned int *result)
{
  unsigned int v1; // r12
  unsigned int *v2; // r2
  unsigned int v3; // r3

  v1 = *result;
  v2 = (unsigned int *)result[1];
  __dmb(0xBu);
  do
    v3 = __ldrex(v2);
  while ( __strex(v1, v2) );
  if ( v3 == 3 )
    return (unsigned int *)syscall(240, result[1], 129, 0x7FFFFFFF);
  return result;
}
