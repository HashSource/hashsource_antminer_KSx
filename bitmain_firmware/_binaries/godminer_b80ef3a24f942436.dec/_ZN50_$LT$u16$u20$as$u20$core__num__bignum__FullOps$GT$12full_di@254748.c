int __fastcall <u16 as core::num::bignum::FullOps>::full_div_rem(unsigned __int16 a1, unsigned __int16 a2)
{
  if ( !a2 )
    core::panicking::panic((int)aAttemptToDivid, 25, (int)&off_2EF5F0);
  return sub_270BA8(a1, a2);
}
