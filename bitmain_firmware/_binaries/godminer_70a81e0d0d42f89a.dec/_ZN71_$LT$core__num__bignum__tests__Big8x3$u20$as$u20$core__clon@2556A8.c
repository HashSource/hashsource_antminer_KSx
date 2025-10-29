int __fastcall <core::num::bignum::tests::Big8x3 as core::clone::Clone>::clone(int result, int *a2)
{
  char v2; // r2
  int v3; // r3

  v2 = *((_BYTE *)a2 + 6);
  v3 = *a2;
  *(_WORD *)(result + 4) = *((_WORD *)a2 + 2);
  *(_BYTE *)(result + 6) = v2;
  *(_DWORD *)result = v3;
  return result;
}
