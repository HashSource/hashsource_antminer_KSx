bool __fastcall sub_110044(int a1, char a2, void *src, size_t n)
{
  _BYTE srca[2]; // [sp+8h] [bp-14h] BYREF
  _BYTE dest[18]; // [sp+Ah] [bp-12h] BYREF

  srca[1] = a2;
  srca[0] = 114;
  memcpy(dest, src, n);
  return sub_10FCC0(a1, 59, srca, n + 2, 0, 0) == 0;
}
