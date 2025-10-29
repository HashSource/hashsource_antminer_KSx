bool __fastcall <core::num::bignum::Big32x40 as core::cmp::PartialEq>::eq(const void *a1, const void *a2)
{
  return bcmp(a1, a2, 0xA0u) == 0;
}
