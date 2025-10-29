unsigned int __fastcall core::time::<impl core::ops::arith::Mul<core::time::Duration> for u32>::mul(
        unsigned int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // r3
  unsigned int v7; // kr08_4
  unsigned int v8; // r7
  unsigned int v9; // r6
  unsigned int v10; // r2
  int v11; // r1
  unsigned int result; // r0

  v7 = a4 * a1;
  v5 = (a4 * (unsigned __int64)a1) >> 32;
  v8 = a3 * a1;
  v9 = ((a3 * (unsigned __int64)a1) >> 32) + v7;
  if ( !is_mul_ok(a4, a1) )
    v5 = 1;
  if ( v5 | ((((a3 * (unsigned __int64)a1) >> 32) + v7) >> 32)
    || (v10 = sub_25A4F8(a5 * a1, (a5 * (unsigned __int64)a1) >> 32, 0x3B9ACA00u),
        result = v8 + v10,
        (__CFADD__(__CFADD__(v8, v10), v9) | __CFADD__(v11, (__PAIR64__(v9, v8) + v10) >> 32)) == 1) )
  {
    core::option::expect_failed((int)aOverflowWhenMu, 44, (int)&off_2CF538);
  }
  return result;
}
