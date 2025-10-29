int __fastcall <std::time::Instant as core::ops::arith::AddAssign<core::time::Duration>>::add_assign(
        int result,
        __int64 a2,
        int a3)
{
  __int64 v4; // kr00_8
  unsigned int v5; // r2
  unsigned int v6; // r2

  if ( a2 < 0
    || (v4 = *(_QWORD *)result + a2,
        ((*(_DWORD *)(result + 4) ^ HIDWORD(v4)) & ~(*(_DWORD *)(result + 4) ^ HIDWORD(a2))) <= -1) )
  {
LABEL_10:
    core::option::expect_failed();
  }
  v5 = *(_DWORD *)(result + 8) + a3;
  if ( v5 <= 0x3B9AC9FF )
  {
    *(_QWORD *)result = v4;
    *(_DWORD *)(result + 8) = v5;
  }
  else
  {
    if ( (int)((HIDWORD(v4) ^ ((unsigned __int64)(v4 + 1) >> 32)) & ~HIDWORD(v4)) <= -1 )
      goto LABEL_10;
    v6 = v5 - 1000000000;
    if ( v6 > 0x3B9AC9FF )
      core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2DFBF0);
    *(_QWORD *)result = v4 + 1;
    *(_DWORD *)(result + 8) = v6;
  }
  return result;
}
