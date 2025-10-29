unsigned int **__fastcall sub_1AE728(unsigned int **result)
{
  unsigned int *v1; // r12
  unsigned int v2; // r2

  v1 = *result;
  __dmb(0xBu);
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 - 1, v1) );
  if ( v2 == 1 )
  {
    __dmb(0xBu);
    return (unsigned int **)sub_1B5F90(*result);
  }
  return result;
}
