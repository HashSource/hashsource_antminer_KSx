int __fastcall <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(
        unsigned __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5)
{
  unsigned int v5; // r12
  unsigned int v6; // r2

  if ( a4 < 0
    || (v5 = (a1 + a4) >> 32, LODWORD(a1) = a1 + a4, (int)((HIDWORD(a1) ^ v5) & ~(HIDWORD(a1) ^ HIDWORD(a4))) <= -1) )
  {
LABEL_10:
    core::option::expect_failed();
  }
  v6 = a5 + a2;
  if ( v6 > 0x3B9AC9FF )
  {
    a1 = __PAIR64__(v5, a1) + 1;
    if ( (int)((v5 ^ HIDWORD(a1)) & ~v5) <= -1 )
      goto LABEL_10;
    if ( v6 - 1000000000 > 0x3B9AC9FF )
      core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2E0BF0);
  }
  return a1;
}
