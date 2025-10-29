unsigned int __fastcall <u32 as core::num::bignum::FullOps>::full_div_rem(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3)
{
  if ( !a2 )
    core::panicking::panic((int)aAttemptToDivid, 25, (int)&off_2CF5F0);
  return sub_25A4F8(a1, a3, a2);
}
