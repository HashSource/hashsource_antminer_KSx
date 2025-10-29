int __fastcall sub_19B964(int a1, int a2)
{
  if ( core::fmt::Formatter::debug_lower_hex(a2) )
    return core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt(a1, a2);
  if ( core::fmt::Formatter::debug_upper_hex(a2) )
    return core::fmt::num::<impl core::fmt::UpperHex for isize>::fmt(a1, a2);
  return core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt(a1, a2);
}
