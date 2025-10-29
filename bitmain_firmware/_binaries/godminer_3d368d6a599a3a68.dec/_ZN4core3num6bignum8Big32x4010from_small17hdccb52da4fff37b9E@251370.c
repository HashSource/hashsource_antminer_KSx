int __fastcall core::num::bignum::Big32x40::from_small(_DWORD *a1, int a2)
{
  memset(a1 + 1, 0, 0x9Cu);
  *a1 = a2;
  a1[40] = 1;
  return 1;
}
