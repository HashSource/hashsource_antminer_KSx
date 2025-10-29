unsigned int __fastcall sub_25A998(unsigned int result, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r12
  unsigned int v4; // r3

  if ( !a2 )
    return nullsub_1(0);
  if ( a2 == 1 )
  {
    *a3 = 0;
  }
  else if ( result < a2 )
  {
    *a3 = result;
    return 0;
  }
  else
  {
    v3 = __clz(result);
    v4 = __clz(a2);
    return ((unsigned int (*)(void))((char *)sub_25AB7C + -2 * (v4 - v3) + -4 * (v4 - v3) + -8 * (v4 - v3)))();
  }
  return result;
}
