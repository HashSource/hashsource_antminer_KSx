int __fastcall sub_1D08B8(int a1, size_t *a2, void *src, size_t n)
{
  size_t v5; // r7

  v5 = a2[2];
  if ( *a2 - v5 < n )
  {
    sub_79740(a2, a2[2], n);
    v5 = a2[2];
  }
  memcpy((void *)(a2[1] + v5), src, n);
  a2[2] = v5 + n;
  *(_DWORD *)(a1 + 4) = n;
  *(_BYTE *)a1 = 4;
  return 4;
}
