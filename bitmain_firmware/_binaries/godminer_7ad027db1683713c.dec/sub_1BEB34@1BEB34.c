int __fastcall sub_1BEB34(_BYTE *a1, unsigned int *a2, void *src, size_t n)
{
  unsigned int v5; // r4

  v5 = a2[2];
  if ( *a2 - v5 < n )
  {
    sub_77DD8(a2, a2[2], n);
    v5 = a2[2];
  }
  memcpy((void *)(a2[1] + v5), src, n);
  a2[2] = v5 + n;
  *a1 = 4;
  return 4;
}
