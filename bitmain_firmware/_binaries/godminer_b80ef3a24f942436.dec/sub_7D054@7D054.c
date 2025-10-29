unsigned int __fastcall sub_7D054(unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int result; // r0
  unsigned int v6; // r0
  int v7; // lr
  unsigned __int8 *v8; // r3
  _DWORD *i; // r1
  unsigned int v10; // r3

  result = 0;
  if ( a4 <= a2 )
  {
    if ( a4 >= 4 )
    {
      v7 = a4 - 4;
      v8 = &a1[a4 - 4];
      if ( v7 < 1 )
      {
        return *(_DWORD *)v8 == *(_DWORD *)&a3[v7];
      }
      else
      {
        for ( i = a3; *(_DWORD *)a1 == *i; ++i )
        {
          a1 += 4;
          if ( a1 >= v8 )
            return *(_DWORD *)v8 == *(_DWORD *)&a3[v7];
        }
      }
    }
    else
    {
      result = a4 == 0;
      if ( a4 )
      {
        if ( *a1 == *a3 )
        {
          result = a4 == 1;
          if ( a4 != 1 && a1[1] == a3[1] )
          {
            v6 = __clz(a4 - 2);
            if ( a4 == 2 )
            {
              return v6 >> 5;
            }
            else
            {
              v10 = __clz(a4 - 3);
              result = v6 >> 5;
              if ( a1[2] == a3[2] )
                return v10 >> 5;
            }
          }
        }
      }
    }
  }
  return result;
}
