_DWORD *__fastcall <adler::algo::U32X4 as core::ops::arith::AddAssign>::add_assign(_DWORD *result, _DWORD *a2)
{
  int v2; // r6
  int v3; // r2
  int v4; // r3

  v2 = result[3] + a2[3];
  v3 = result[1] + a2[1];
  v4 = result[2] + a2[2];
  *result += *a2;
  result[1] = v3;
  result[2] = v4;
  result[3] = v2;
  return result;
}
