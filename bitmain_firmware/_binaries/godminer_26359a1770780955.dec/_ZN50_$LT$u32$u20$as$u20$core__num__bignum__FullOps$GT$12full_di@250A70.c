int __fastcall <u32 as core::num::bignum::FullOps>::full_div_rem(int a1, int a2, int a3)
{
  if ( !a2 )
    core::panicking::panic((int)aAttemptToDivid, 25, (int)&off_2E45F0);
  return sub_26C7C0(a1, a3, a2, 0);
}
