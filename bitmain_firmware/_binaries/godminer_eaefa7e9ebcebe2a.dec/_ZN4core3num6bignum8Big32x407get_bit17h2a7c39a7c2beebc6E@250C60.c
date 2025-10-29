int __fastcall core::num::bignum::Big32x40::get_bit(int a1, unsigned int a2)
{
  int v3; // r0

  v3 = a2 >> 5;
  if ( a2 >> 8 > 4 )
    core::panicking::panic_bounds_check(v3, 40, (int)&off_2E4600);
  return (*(_DWORD *)(a1 + 4 * v3) >> (a2 & 0x1F)) & 1;
}
