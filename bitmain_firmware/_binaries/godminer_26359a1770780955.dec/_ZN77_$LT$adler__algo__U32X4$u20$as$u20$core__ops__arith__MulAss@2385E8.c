int *__fastcall <adler::algo::U32X4 as core::ops::arith::MulAssign<u32>>::mul_assign(int *result, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r12
  int v5; // r1

  v2 = result[1] * a2;
  v3 = *result * a2;
  v4 = result[2] * a2;
  v5 = result[3] * a2;
  *result = v3;
  result[1] = v2;
  result[2] = v4;
  result[3] = v5;
  return result;
}
