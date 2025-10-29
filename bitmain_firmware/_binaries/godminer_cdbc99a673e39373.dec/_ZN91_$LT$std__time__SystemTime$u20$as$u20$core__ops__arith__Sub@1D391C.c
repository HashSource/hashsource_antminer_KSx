int __fastcall <std::time::SystemTime as core::ops::arith::Sub<core::time::Duration>>::sub(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5)
{
  int v5; // r3
  __int64 v6; // r0
  int v7; // r2
  int v8; // r3

  v5 = HIDWORD(a1);
  if ( a4 < 0 || (v6 = a1 - a4, ((v5 ^ HIDWORD(a4)) & (v5 ^ HIDWORD(v6))) <= -1) )
LABEL_10:
    core::option::expect_failed();
  v7 = a2 - a5;
  if ( v7 < 0 )
  {
    v8 = (unsigned __int64)(v6 - 1) >> 32;
    LODWORD(v6) = v6 - 1;
    if ( (HIDWORD(v6) & (HIDWORD(v6) ^ v8)) <= -1 )
      goto LABEL_10;
    v7 += 1000000000;
  }
  if ( (unsigned int)v7 > 0x3B9AC9FF )
    core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2CBBF0);
  return v6;
}
