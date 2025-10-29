bool __fastcall <core::num::nonzero::NonZeroU8 as core::str::traits::FromStr>::from_str(
        unsigned __int8 *a1,
        unsigned int a2)
{
  unsigned __int8 v2; // r4
  int v3; // r2
  _BOOL4 v4; // lr
  char v5; // r3
  unsigned int v6; // r2
  int v7; // r2
  unsigned int v8; // lr
  int v9; // t1
  unsigned int v10; // r5
  unsigned int v11; // r1

  if ( a2 )
  {
    v3 = *a1;
    if ( v3 == 45 )
    {
      v5 = 1;
      v4 = 1;
      if ( a2 == 1 )
        return v4 || v5 == 0;
    }
    else if ( v3 == 43 )
    {
      if ( !--a2 )
      {
        v5 = 1;
        v4 = 1;
        return v4 || v5 == 0;
      }
      ++a1;
    }
    if ( a2 >= 3 )
    {
      LOBYTE(v7) = 0;
      v5 = 2;
      while ( 1 )
      {
        v8 = a2;
        if ( !a2 )
        {
          v5 = v7;
          goto LABEL_26;
        }
        v9 = *a1++;
        v10 = v9 - 48;
        if ( (unsigned int)(v9 - 48) < 0xA )
          v2 = v10;
        if ( v10 > 9 )
          break;
        v11 = 10 * (unsigned __int8)v7;
        if ( !(v11 >> 8) )
        {
          v7 = (unsigned __int8)v11 + v2;
          a2 = v8 - 1;
          v2 = v10;
          if ( (unsigned __int8)v7 == v7 )
            continue;
        }
        goto LABEL_26;
      }
      v5 = 1;
LABEL_26:
      v4 = v8 != 0;
    }
    else
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = *a1 - 48;
        if ( v6 > 9 )
          break;
        --a2;
        ++a1;
        v5 = v6 + 10 * v5;
        if ( !a2 )
          goto LABEL_22;
      }
      v5 = 1;
LABEL_22:
      v4 = v6 > 9;
    }
  }
  else
  {
    v4 = 1;
    v5 = 0;
  }
  return v4 || v5 == 0;
}
