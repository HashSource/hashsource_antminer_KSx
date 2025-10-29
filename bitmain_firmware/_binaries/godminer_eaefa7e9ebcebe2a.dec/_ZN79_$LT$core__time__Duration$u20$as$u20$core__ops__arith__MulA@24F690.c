unsigned int __fastcall <core::time::Duration as core::ops::arith::MulAssign<u32>>::mul_assign(
        unsigned int *a1,
        unsigned int a2)
{
  unsigned __int64 v4; // r2
  int v5; // r9
  int v6; // r0
  unsigned int v7; // kr08_4
  unsigned __int64 v8; // kr10_8
  __int64 v9; // r0
  unsigned int result; // r0

  v4 = a1[1] * (unsigned __int64)a2;
  v5 = *a1 * a2;
  v7 = (*(_QWORD *)a1 * (unsigned __int64)a2) >> 32;
  v6 = (((*a1 * (unsigned __int64)a2) >> 32) + (unsigned int)v4) >> 32;
  if ( !is_mul_ok(a1[1], a2) )
    HIDWORD(v4) = 1;
  if ( HIDWORD(v4) | v6
    || (v8 = a1[2] * (unsigned __int64)a2,
        v9 = sub_26C8C0(v8, HIDWORD(v8), 1000000000, 0),
        (__CFADD__(__CFADD__(v5, (_DWORD)v9), v7)
       | __CFADD__((__PAIR64__(v7, v5) + v9) >> 32, __CFADD__(v5, (_DWORD)v9) + v7)) == 1) )
  {
    core::option::expect_failed();
  }
  *(_QWORD *)a1 = __PAIR64__(v7, v5) + v9;
  result = ((int)v8 - 1000000000 * (int)v9) % 0x3B9ACA00u;
  a1[2] = result;
  return result;
}
