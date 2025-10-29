int __fastcall <core::num::nonzero::NonZeroI8 as core::str::traits::FromStr>::from_str(
        unsigned __int8 *a1,
        unsigned int a2)
{
  int v2; // r0
  unsigned int v3; // r1

  v2 = core::num::<impl i8>::from_str_radix(a1, a2, 0xAu);
  v3 = v2 & 0xFFFFFF00;
  if ( (v2 & 0xFF01) == 0 )
    v3 = 1024;
  return v3 | ((unsigned __int16)v2 < 0x100u) | v2 & 1;
}
