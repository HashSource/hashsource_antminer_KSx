int __fastcall core::num::diy_float::Fp::mul(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // r7
  unsigned __int64 v3; // kr00_8
  unsigned __int64 v4; // kr10_8
  unsigned __int64 v5; // kr18_8

  v2 = a1[1];
  v3 = a2[1] * (unsigned __int64)*a1;
  v4 = *a2 * (unsigned __int64)v2;
  v5 = (unsigned int)v4 + ((*a2 * (unsigned __int64)*a1) >> 32) + (unsigned int)v3;
  return HIDWORD(v5) + __CFADD__((_DWORD)v5, 0x80000000) + a2[1] * v2 + HIDWORD(v4) + HIDWORD(v3);
}
