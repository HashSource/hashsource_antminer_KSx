int __fastcall core::num::<impl core::str::traits::FromStr for u16>::from_str(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int16 v2; // r4
  int v3; // r2
  int v4; // r2
  int v5; // r3
  unsigned int v6; // r2
  int v8; // t1
  unsigned int v9; // r6
  unsigned int v10; // r5
  unsigned int v11; // r3
  int v12; // r6

  if ( !a2 )
  {
    v4 = 0;
    return v4 | 1;
  }
  v3 = *a1;
  if ( v3 == 45 )
  {
    v4 = 256;
    if ( a2 != 1 )
      goto LABEL_8;
    return v4 | 1;
  }
  if ( v3 == 43 )
  {
    if ( !--a2 )
      return 257;
    ++a1;
  }
LABEL_8:
  if ( a2 < 5 )
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
        return v5 << 16;
    }
    return 257;
  }
  v5 = 0;
  while ( a2 )
  {
    v8 = *a1++;
    v9 = 5 * (unsigned __int16)v5;
    v10 = v8 - 48;
    v11 = 10 * (unsigned __int16)v5;
    v12 = (unsigned __int16)(v9 >> 15);
    if ( HIWORD(v11) )
      v12 = 1;
    if ( v10 < 0xA )
      v2 = v10;
    if ( v10 > 9 )
      return 257;
    v4 = 512;
    if ( !v12 )
    {
      --a2;
      v5 = (unsigned __int16)v11 + v2;
      v2 = v10;
      if ( (unsigned __int16)v5 == v5 )
        continue;
    }
    return v4 | 1;
  }
  return v5 << 16;
}
