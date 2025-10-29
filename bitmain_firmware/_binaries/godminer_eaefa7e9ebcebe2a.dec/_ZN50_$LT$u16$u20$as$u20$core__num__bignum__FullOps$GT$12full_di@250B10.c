int __fastcall <u16 as core::num::bignum::FullOps>::full_div_rem(unsigned __int16 a1, unsigned __int16 a2)
{
  if ( !a2 )
    core::panicking::panic((int)aAttemptToDivid, 25, (int)&off_2E45F0);
  return sub_26CF70(a1, a2);
}
