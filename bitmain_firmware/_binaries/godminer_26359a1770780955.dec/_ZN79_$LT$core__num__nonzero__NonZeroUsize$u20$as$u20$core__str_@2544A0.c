// Alternative name is '_ZN77_$LT$core..num..nonzero..NonZeroU32$u20$as$u20$core..str..traits..FromStr$GT$8from_str17h7533116bff693e10E'
int __fastcall <core::num::nonzero::NonZeroUsize as core::str::traits::FromStr>::from_str(
        int result,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v3; // r4
  int v4; // r3
  char v5; // lr
  unsigned int v6; // r3
  unsigned int v7; // r6
  int v8; // kr00_4
  int v9; // t1
  unsigned int v10; // r5

  if ( !a3 )
  {
    *(_BYTE *)(result + 1) = 0;
    *(_BYTE *)result = 1;
    return result;
  }
  v4 = *a2;
  if ( v4 == 45 )
  {
    v5 = 1;
    if ( a3 == 1 )
    {
LABEL_23:
      *(_BYTE *)(result + 1) = v5;
      *(_BYTE *)result = 1;
      return result;
    }
  }
  else if ( v4 == 43 )
  {
    if ( !--a3 )
    {
LABEL_21:
      *(_BYTE *)(result + 1) = 1;
      *(_BYTE *)result = 1;
      return result;
    }
    ++a2;
  }
  v6 = 0;
  if ( a3 < 9 )
  {
    while ( 1 )
    {
      v7 = *a2 - 48;
      if ( v7 > 9 )
        goto LABEL_21;
      --a3;
      ++a2;
      v6 = v7 + 10 * v6;
      if ( !a3 )
        goto LABEL_19;
    }
  }
  v5 = 2;
  do
  {
    v8 = 10 * v6;
    v9 = *a2++;
    v10 = v9 - 48;
    if ( (unsigned int)(v9 - 48) < 0xA )
      v3 = v10;
    if ( v10 > 9 )
    {
      v5 = 1;
      goto LABEL_23;
    }
    if ( !is_mul_ok(0xAu, v6) )
      goto LABEL_23;
    v6 = v8 + v3;
    if ( __CFADD__(v8, v3) )
      goto LABEL_23;
    --a3;
    v3 = v10;
  }
  while ( a3 );
LABEL_19:
  if ( v6 )
  {
    *(_DWORD *)(result + 4) = v6;
    *(_BYTE *)result = 0;
  }
  else
  {
    *(_BYTE *)(result + 1) = 4;
    *(_BYTE *)result = 1;
  }
  return result;
}
