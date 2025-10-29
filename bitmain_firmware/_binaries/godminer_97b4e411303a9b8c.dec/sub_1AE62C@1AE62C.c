int __fastcall sub_1AE62C(int a1)
{
  int result; // r0
  unsigned int *v2; // r12
  unsigned int *v3; // t1
  unsigned int v4; // r2

  v3 = *(unsigned int **)(a1 + 104);
  result = a1 + 104;
  v2 = v3;
  if ( v3 )
  {
    __dmb(0xBu);
    do
      v4 = __ldrex(v2);
    while ( __strex(v4 - 1, v2) );
    if ( v4 == 1 )
    {
      __dmb(0xBu);
      return sub_1B6930(result);
    }
  }
  return result;
}
