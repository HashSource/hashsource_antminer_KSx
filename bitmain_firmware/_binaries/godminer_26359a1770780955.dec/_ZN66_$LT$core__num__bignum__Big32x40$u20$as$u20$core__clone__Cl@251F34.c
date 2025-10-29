void *__fastcall <core::num::bignum::Big32x40 as core::clone::Clone>::clone(_DWORD *a1, _DWORD *a2)
{
  int v3; // r5
  void *result; // r0

  v3 = a2[40];
  result = memcpy(a1, a2, 0xA0u);
  a1[40] = v3;
  return result;
}
