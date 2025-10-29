int __fastcall sub_1FABB8(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v2; // r5

  v2 = *a1;
  if ( core::fmt::Formatter::debug_lower_hex(a2) )
    return core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt(v2, a2);
  if ( core::fmt::Formatter::debug_upper_hex(a2) )
    return core::fmt::num::<impl core::fmt::UpperHex for u8>::fmt(v2, a2);
  return core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt(v2, a2);
}
