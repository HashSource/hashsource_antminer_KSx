unsigned int __fastcall <core::time::Duration as core::ops::arith::Mul<u32>>::mul(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // r5
  unsigned int v4; // r7
  unsigned int v5; // kr18_4
  unsigned int v6; // r2
  int v7; // r1
  unsigned int result; // r0

  v3 = (HIDWORD(a1) * (unsigned __int64)a3) >> 32;
  v4 = a1 * a3;
  v5 = (a1 * (unsigned __int64)a3) >> 32;
  LODWORD(a1) = ((((unsigned int)a1 * (unsigned __int64)a3) >> 32) + HIDWORD(a1) * a3) >> 32;
  if ( !is_mul_ok(HIDWORD(a1), a3) )
    v3 = 1;
  if ( v3 | (unsigned int)a1
    || (v6 = sub_25A4F8(a3 * a2, (a3 * (unsigned __int64)a2) >> 32, 0x3B9ACA00u),
        result = v4 + v6,
        __CFADD__(__CFADD__(v4, v6), v5) | __CFADD__(v7, (__PAIR64__(v5, v4) + v6) >> 32)) )
  {
    core::option::expect_failed((int)aOverflowWhenMu, 44, (int)&off_2CF538);
  }
  return result;
}
