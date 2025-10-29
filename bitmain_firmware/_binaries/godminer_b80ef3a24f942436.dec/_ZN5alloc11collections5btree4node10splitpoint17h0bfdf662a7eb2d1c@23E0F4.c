int *__fastcall alloc::collections::btree::node::splitpoint(int *result, unsigned int a2)
{
  int v2; // r3

  v2 = 4;
  if ( a2 < 5 )
    goto LABEL_5;
  if ( a2 == 6 )
  {
    *result = 5;
    result[1] = 1;
    result[2] = 0;
  }
  else
  {
    if ( a2 == 5 )
    {
      v2 = 5;
LABEL_5:
      *result = v2;
      result[1] = 0;
      result[2] = a2;
      return result;
    }
    *result = 6;
    result[1] = 1;
    result[2] = a2 - 7;
  }
  return result;
}
