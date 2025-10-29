int __fastcall core::num::bignum::tests::Big8x3::add_small(int result, unsigned __int8 a2)
{
  int v2; // r2
  unsigned int v3; // r1
  int v4; // r2
  int v5; // r2

  v2 = *(unsigned __int8 *)(result + 4) + a2;
  v3 = 1;
  *(_BYTE *)(result + 4) = v2;
  if ( (unsigned __int8)v2 != v2 )
  {
    v4 = *(unsigned __int8 *)(result + 5) + 1;
    v3 = 2;
    *(_BYTE *)(result + 5) = v4;
    if ( (unsigned __int8)v4 != v4 )
    {
      v5 = *(unsigned __int8 *)(result + 6) + 1;
      v3 = 3;
      *(_BYTE *)(result + 6) = v5;
      if ( (unsigned __int8)v5 != v5 )
        core::panicking::panic_bounds_check(3, 3, (int)&off_2E4618);
    }
  }
  if ( v3 > *(_DWORD *)result )
    *(_DWORD *)result = v3;
  return result;
}
