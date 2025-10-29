int __fastcall <core::time::Duration as core::ops::arith::Mul<u32>>::mul(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v3; // r5
  unsigned int v4; // r7
  unsigned int v5; // kr18_4
  __int64 v6; // r0
  bool v7; // cf
  int result; // r0
  unsigned __int64 v9; // kr20_8

  v3 = (HIDWORD(a1) * (unsigned __int64)a3) >> 32;
  v4 = a1 * a3;
  v5 = (a1 * (unsigned __int64)a3) >> 32;
  LODWORD(a1) = ((((unsigned int)a1 * (unsigned __int64)a3) >> 32) + HIDWORD(a1) * a3) >> 32;
  if ( !is_mul_ok(HIDWORD(a1), a3) )
    v3 = 1;
  if ( v3 | (unsigned int)a1
    || (v6 = sub_26D2D0(a3 * a2, (a3 * (unsigned __int64)a2) >> 32, 1000000000, 0),
        v7 = __CFADD__(v4, (_DWORD)v6),
        v9 = __PAIR64__(v5, v4) + (unsigned int)v6,
        result = v4 + v6,
        __CFADD__(v7, v5) | __CFADD__(HIDWORD(v6), HIDWORD(v9))) )
  {
    core::option::expect_failed();
  }
  return result;
}
