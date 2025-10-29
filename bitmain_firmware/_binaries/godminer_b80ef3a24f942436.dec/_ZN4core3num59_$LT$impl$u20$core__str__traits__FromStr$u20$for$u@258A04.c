bool __fastcall core::num::<impl core::str::traits::FromStr for u8>::from_str(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 v2; // r4
  unsigned int v3; // r2
  int v4; // r1
  int v6; // lr
  unsigned int v7; // r1
  unsigned int v8; // r3
  int v9; // r3
  unsigned int v10; // lr
  int v11; // t1
  unsigned int v12; // r5
  unsigned int v13; // r2

  if ( !a2 )
    return 1;
  v3 = a2;
  v4 = *a1;
  if ( v4 == 45 )
  {
    v6 = 1;
    if ( v3 == 1 )
      return v6;
  }
  else if ( v4 == 43 )
  {
    if ( !--v3 )
      return 1;
    ++a1;
  }
  if ( v3 < 3 )
  {
    v7 = 0;
    do
    {
      v8 = *a1 - 48;
      if ( v8 > 9 )
        break;
      --v3;
      ++a1;
      v7 = v8 + 10 * v7;
    }
    while ( v3 );
    return v8 > 9;
  }
  LOBYTE(v9) = 0;
  while ( 1 )
  {
    v10 = v3;
    if ( !v3 )
      return 0;
    v11 = *a1++;
    v12 = v11 - 48;
    if ( (unsigned int)(v11 - 48) < 0xA )
      v2 = v12;
    if ( v12 > 9 )
      break;
    v13 = 10 * (unsigned __int8)v9;
    if ( !(v13 >> 8) )
    {
      v9 = (unsigned __int8)v13 + v2;
      v3 = v10 - 1;
      v2 = v12;
      if ( (unsigned __int8)v9 == v9 )
        continue;
    }
    return v10 != 0;
  }
  return v3 != 0;
}
