int __fastcall <std::time::Instant as core::ops::arith::SubAssign<core::time::Duration>>::sub_assign(
        int result,
        __int64 a2,
        int a3)
{
  int v4; // lr
  __int64 v5; // kr00_8

  if ( a2 < 0
    || (v5 = *(_QWORD *)result - a2,
        LODWORD(a2) = HIDWORD(v5),
        v4 = v5,
        ((*(_DWORD *)(result + 4) ^ HIDWORD(a2)) & (*(_DWORD *)(result + 4) ^ HIDWORD(v5))) <= -1) )
  {
LABEL_11:
    core::option::expect_failed();
  }
  HIDWORD(a2) = *(_DWORD *)(result + 8) - a3;
  if ( a2 < 0 )
  {
    v4 = v5 - 1;
    if ( (int)(HIDWORD(v5) & (HIDWORD(v5) ^ ((unsigned __int64)(v5 - 1) >> 32))) <= -1 )
      goto LABEL_11;
    HIDWORD(a2) += 1000000000;
    LODWORD(a2) = (unsigned __int64)(v5 - 1) >> 32;
  }
  if ( HIDWORD(a2) > 0x3B9AC9FF )
    core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2EABF0);
  *(_DWORD *)result = v4;
  *(_QWORD *)(result + 4) = a2;
  return result;
}
