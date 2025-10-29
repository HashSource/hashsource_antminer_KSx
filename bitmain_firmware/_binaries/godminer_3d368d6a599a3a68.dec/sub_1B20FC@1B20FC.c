int __fastcall sub_1B20FC(int a1, void *src, size_t n)
{
  size_t *v5; // r5
  size_t v6; // r7

  v5 = *(size_t **)(*(_DWORD *)a1 + 8);
  v6 = v5[2];
  if ( *v5 - v6 < n )
  {
    sub_798B0(v5, v5[2], n);
    v6 = v5[2];
  }
  memcpy((void *)(v5[1] + v6), src, n);
  v5[2] = v6 + n;
  return 0;
}
