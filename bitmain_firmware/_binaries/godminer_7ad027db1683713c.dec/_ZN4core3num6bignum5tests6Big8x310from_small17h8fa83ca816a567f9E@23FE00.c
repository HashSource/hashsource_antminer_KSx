int __fastcall core::num::bignum::tests::Big8x3::from_small(int result, char a2)
{
  *(_BYTE *)(result + 4) = a2;
  *(_WORD *)(result + 5) = 0;
  *(_DWORD *)result = 1;
  return result;
}
