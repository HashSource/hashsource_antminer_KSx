int __fastcall sub_1B182C(unsigned int **a1, const void *a2, size_t n)
{
  unsigned int *v3; // r6
  unsigned int v5; // r0
  int v6; // r5

  v3 = *a1;
  v5 = **a1;
  v6 = ((v5 + (unsigned __int64)n) >> 32) | (v5 + n > 0x27);
  if ( !v6 )
  {
    memcpy((char *)v3 + v5 + 4, a2, n);
    *v3 += n;
  }
  return v6;
}
