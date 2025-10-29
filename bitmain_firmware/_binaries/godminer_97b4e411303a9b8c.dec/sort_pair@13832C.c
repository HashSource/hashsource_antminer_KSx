unsigned int *__fastcall sort_pair(unsigned int *result, unsigned int a2)
{
  unsigned int *v2; // r2
  unsigned int *v3; // r5
  unsigned int *v4; // r4
  unsigned int v5; // r3
  unsigned int v6; // lr
  unsigned int v7; // t1
  unsigned int v8; // r12
  unsigned int v9; // t1
  bool v10; // cf
  unsigned int *v11; // r2

  v2 = &result[a2];
  if ( a2 )
  {
    v3 = result - 1;
    v4 = v2 - 1;
    v5 = 0;
    while ( 1 )
    {
      v7 = v3[1];
      ++v3;
      v6 = v7;
      v9 = v4[1];
      ++v4;
      v8 = v9;
      v10 = v6 >= v9;
      if ( v6 > v9 )
        break;
      ++v5;
      if ( !v10 || a2 == v5 )
        return result;
    }
    result += v5;
    v11 = &v2[v5];
    while ( 1 )
    {
      ++v5;
      *result++ = v8;
      *v11++ = v6;
      if ( a2 <= v5 )
        break;
      v8 = *v11;
      v6 = *result;
    }
  }
  return result;
}
