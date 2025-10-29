int __fastcall <std::sync::mpmc::zero::ZeroToken as core::fmt::Debug>::fmt(unsigned int *a1, int a2)
{
  unsigned int v4; // [sp+4h] [bp-4h] BYREF

  v4 = *a1;
  if ( core::fmt::Formatter::debug_lower_hex(a2) )
    return core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt(&v4, a2);
  if ( core::fmt::Formatter::debug_upper_hex(a2) )
    return core::fmt::num::<impl core::fmt::UpperHex for isize>::fmt(&v4, a2);
  return core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(&v4, a2);
}
