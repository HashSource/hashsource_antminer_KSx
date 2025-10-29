int __fastcall sub_19A798(unsigned __int8 *a1, int a2)
{
  if ( core::fmt::Formatter::debug_lower_hex(a2) )
    return core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt(a1, a2);
  if ( core::fmt::Formatter::debug_upper_hex(a2) )
    return core::fmt::num::<impl core::fmt::UpperHex for u8>::fmt(a1, a2);
  return core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt(a1, a2);
}
