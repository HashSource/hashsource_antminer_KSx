bool __fastcall <core::num::bignum::tests::Big8x3 as core::cmp::PartialEq>::eq(int a1, int a2)
{
  return bcmp((const void *)(a1 + 4), (const void *)(a2 + 4), 3u) == 0;
}
