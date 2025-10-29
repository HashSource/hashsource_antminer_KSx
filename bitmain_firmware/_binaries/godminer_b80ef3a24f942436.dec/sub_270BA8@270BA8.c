unsigned int __fastcall sub_270BA8(unsigned int result, unsigned int a2)
{
  unsigned int v2; // r12
  unsigned int v3; // r3

  if ( !a2 )
    return nullsub_1(0);
  if ( a2 != 1 )
  {
    if ( result >= a2 )
    {
      v2 = __clz(result);
      v3 = __clz(a2);
      return ((int (*)())((char *)sub_270D96 + -2 * (v3 - v2) + -4 * (v3 - v2) + -8 * (v3 - v2)))();
    }
    else
    {
      return 0;
    }
  }
  return result;
}
