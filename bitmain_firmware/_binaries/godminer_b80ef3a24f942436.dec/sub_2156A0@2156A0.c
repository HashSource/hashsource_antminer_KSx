int __fastcall sub_2156A0(__int64 **a1, int a2)
{
  __int64 *v2; // r5

  v2 = *a1;
  if ( core::fmt::Formatter::debug_lower_hex(a2) )
    return core::fmt::num::<impl core::fmt::LowerHex for u64>::fmt(v2, a2);
  if ( core::fmt::Formatter::debug_upper_hex(a2) )
    return core::fmt::num::<impl core::fmt::UpperHex for i64>::fmt(v2, a2);
  return core::fmt::num::imp::<impl core::fmt::Display for i64>::fmt(v2, a2);
}
