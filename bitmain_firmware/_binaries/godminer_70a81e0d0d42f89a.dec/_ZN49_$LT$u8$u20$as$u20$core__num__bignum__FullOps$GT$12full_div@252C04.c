int __fastcall <u8 as core::num::bignum::FullOps>::full_div_rem(unsigned __int8 a1, unsigned __int8 a2, __int16 a3)
{
  if ( !a2 )
    core::panicking::panic((int)aAttemptToDivid, 25, (int)&off_2E65F0);
  return sub_26F0D0((unsigned __int16)(a1 | (unsigned __int16)(a3 << 8)), a2);
}
