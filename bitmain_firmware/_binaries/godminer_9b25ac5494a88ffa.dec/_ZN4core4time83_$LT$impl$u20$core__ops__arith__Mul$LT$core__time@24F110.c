int __fastcall core::time::<impl core::ops::arith::Mul<core::time::Duration> for u32>::mul(
        unsigned int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // r3
  int v7; // kr08_4
  int v8; // r7
  unsigned int v9; // r6
  __int64 v10; // r0
  bool v11; // cf
  int result; // r0
  unsigned __int64 v13; // kr20_8

  v7 = a4 * a1;
  v5 = (a4 * (unsigned __int64)a1) >> 32;
  v8 = a3 * a1;
  v9 = ((a3 * (unsigned __int64)a1) >> 32) + v7;
  if ( !is_mul_ok(a4, a1) )
    v5 = 1;
  if ( v5 | ((((a3 * (unsigned __int64)a1) >> 32) + (unsigned int)v7) >> 32)
    || (v10 = sub_26C3E0(a5 * a1, (a5 * (unsigned __int64)a1) >> 32, 1000000000, 0),
        v11 = __CFADD__(v8, (_DWORD)v10),
        v13 = __PAIR64__(v9, v8) + (unsigned int)v10,
        result = v8 + v10,
        (__CFADD__(v11, v9) | __CFADD__(HIDWORD(v10), HIDWORD(v13))) == 1) )
  {
    core::option::expect_failed();
  }
  return result;
}
