unsigned int __fastcall <core::num::nonzero::NonZeroI16 as core::str::traits::FromStr>::from_str(
        unsigned __int8 *a1,
        unsigned int a2)
{
  unsigned int v2; // r0
  int v3; // r1

  v2 = core::num::<impl i16>::from_str_radix(a1, a2, 0xAu);
  v3 = v2 & 0xFF00;
  if ( (v2 & 1) == 0 )
    v3 = 1024;
  return v3 | v2 & 0xFFFF0000 | v2 & 1 | (v2 < 0x10000);
}
