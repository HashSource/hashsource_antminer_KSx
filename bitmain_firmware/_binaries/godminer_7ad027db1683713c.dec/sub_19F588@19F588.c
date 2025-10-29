int __fastcall sub_19F588(int a1, void *src, size_t n)
{
  unsigned int *v5; // r5
  unsigned int v6; // r7

  v5 = *(unsigned int **)(*(_DWORD *)a1 + 8);
  v6 = v5[2];
  if ( *v5 - v6 < n )
  {
    sub_77DD8(v5, v5[2], n);
    v6 = v5[2];
  }
  memcpy((void *)(v5[1] + v6), src, n);
  v5[2] = v6 + n;
  return 0;
}
