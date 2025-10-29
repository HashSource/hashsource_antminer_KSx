int __fastcall sub_200F84(int *a1, int a2)
{
  int v2; // r5

  v2 = *a1;
  if ( core::fmt::Formatter::debug_lower_hex(a2) )
    return core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt(v2, a2);
  if ( core::fmt::Formatter::debug_upper_hex(a2) )
    return core::fmt::num::<impl core::fmt::UpperHex for u8>::fmt(v2, a2);
  return core::fmt::num::imp::<impl core::fmt::Display for i8>::fmt(v2, a2);
}
