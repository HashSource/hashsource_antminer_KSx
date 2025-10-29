int __fastcall sub_23BC7C(size_t **a1, void *src, size_t n)
{
  size_t *v3; // r5
  int v6; // r7

  v3 = *a1;
  v6 = (*a1)[2];
  if ( **a1 - v6 < n )
  {
    sub_7D8EC(v3, v6, n);
    v6 = v3[2];
  }
  memcpy((void *)(v3[1] + v6), src, n);
  v3[2] = v6 + n;
  return 0;
}
