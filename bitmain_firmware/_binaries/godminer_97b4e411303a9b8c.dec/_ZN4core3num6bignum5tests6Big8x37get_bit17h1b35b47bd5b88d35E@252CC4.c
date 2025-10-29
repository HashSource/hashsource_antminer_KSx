int __fastcall core::num::bignum::tests::Big8x3::get_bit(int a1, unsigned int a2)
{
  int v3; // r0

  v3 = a2 >> 3;
  if ( a2 > 0x17 )
    core::panicking::panic_bounds_check(v3, 3, (int)&off_2E5618);
  return (*(unsigned __int8 *)(a1 + v3 + 4) >> (a2 & 7)) & 1;
}
