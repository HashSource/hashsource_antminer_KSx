unsigned int __fastcall sub_7D2E4(int a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int result; // r0
  unsigned __int8 *v6; // lr
  unsigned int v7; // r0
  int v8; // r12
  unsigned __int8 *v9; // r3
  _DWORD *i; // r1
  unsigned int v11; // r1

  result = 0;
  if ( a2 >= a4 )
  {
    v6 = (unsigned __int8 *)(a1 + a2 - a4);
    if ( a4 >= 4 )
    {
      v8 = a4 - 4;
      v9 = &v6[a4 - 4];
      if ( v8 < 1 )
      {
        return *(_DWORD *)v9 == *(_DWORD *)&a3[v8];
      }
      else
      {
        for ( i = a3; *(_DWORD *)v6 == *i; ++i )
        {
          v6 += 4;
          if ( v6 >= v9 )
            return *(_DWORD *)v9 == *(_DWORD *)&a3[v8];
        }
      }
    }
    else
    {
      result = a4 == 0;
      if ( a4 )
      {
        if ( *v6 == *a3 )
        {
          result = a4 == 1;
          if ( a4 != 1 && v6[1] == a3[1] )
          {
            v7 = __clz(a4 - 2);
            if ( a4 == 2 )
            {
              return v7 >> 5;
            }
            else
            {
              v11 = __clz(a4 - 3);
              result = v7 >> 5;
              if ( v6[2] == a3[2] )
                return v11 >> 5;
            }
          }
        }
      }
    }
  }
  return result;
}
