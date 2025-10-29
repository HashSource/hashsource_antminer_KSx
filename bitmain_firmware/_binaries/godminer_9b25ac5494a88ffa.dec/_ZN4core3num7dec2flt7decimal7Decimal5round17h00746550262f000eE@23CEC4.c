int __fastcall core::num::dec2flt::decimal::Decimal::round(int a1)
{
  unsigned int v1; // r2
  int result; // r0
  unsigned int v4; // lr
  unsigned int v5; // r4
  unsigned int i; // r3
  int v7; // kr08_4
  unsigned int v8; // r1
  bool v9; // zf

  v1 = *(_DWORD *)(a1 + 768);
  result = 0;
  if ( !v1 )
    return result;
  v4 = *(_DWORD *)(a1 + 772);
  if ( (v4 & 0x80000000) != 0 )
    return result;
  result = -1;
  if ( v4 > 0x12 )
    return result;
  result = 0;
  if ( !v4 )
  {
LABEL_15:
    v8 = *(unsigned __int8 *)(a1 + v4);
    v9 = v8 == 5;
    if ( v8 == 5 )
      v9 = v4 + 1 == v1;
    if ( v9 )
    {
      if ( !*(_BYTE *)(a1 + 776) && (!v4 || (*(_BYTE *)(v4 + a1 - 1) & 1) == 0) )
        return result;
    }
    else if ( v8 < 5 )
    {
      return result;
    }
    return ++result;
  }
  v5 = 0;
  for ( i = 0; i != v4; ++i )
  {
    v7 = result;
    result *= 10;
    v5 = (10 * __PAIR64__(v5, v7)) >> 32;
    if ( i < v1 )
    {
      if ( i >> 8 > 2 )
        core::panicking::panic_bounds_check(i, 768, (int)&off_2E2A94);
      v5 = (__PAIR64__(v5, result) + *(unsigned __int8 *)(a1 + i)) >> 32;
      result += *(unsigned __int8 *)(a1 + i);
    }
  }
  if ( v4 < v1 )
  {
    if ( v4 >> 8 > 2 )
      core::panicking::panic_bounds_check(*(_DWORD *)(a1 + 772), 768, (int)&off_2E2AA4);
    goto LABEL_15;
  }
  return result;
}
