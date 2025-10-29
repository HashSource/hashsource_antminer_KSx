unsigned int *__fastcall core::unicode::unicode_data::conversions::to_lower(unsigned int *result, unsigned int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  unsigned int v4; // lr
  bool v5; // cf
  unsigned int v6; // r2
  unsigned int v7; // r5
  int v8; // r4
  _DWORD *v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r1

  if ( a2 >= 0x80 )
  {
    v2 = 0;
    v3 = 1433;
    v4 = 1433;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v2 + (v3 >> 1);
        v7 = dword_2C4CD4[4 * v6];
        v8 = v7 != a2;
        if ( v7 < a2 )
          v8 = -1;
        if ( v8 != 1 )
          break;
        v4 = v6;
        v5 = v6 >= v2;
        v3 = v6 - v2;
        if ( v3 == 0 || !v5 )
          goto LABEL_4;
      }
      if ( (unsigned __int8)v8 != 255 )
        break;
      v2 = v6 + 1;
      v5 = v4 >= v6 + 1;
      v3 = v4 - (v6 + 1);
      if ( v3 == 0 || !v5 )
        goto LABEL_4;
    }
    v9 = &dword_2C4CD4[4 * v6];
    v10 = v9[1];
    v11 = v9[2];
    v12 = v9[3];
    *result = v10;
    result[1] = v11;
    result[2] = v12;
  }
  else
  {
    if ( (unsigned int)(unsigned __int8)a2 - 65 < 0x1A )
      a2 |= 0x20u;
LABEL_4:
    *result = a2;
    result[1] = 0;
    result[2] = 0;
  }
  return result;
}
