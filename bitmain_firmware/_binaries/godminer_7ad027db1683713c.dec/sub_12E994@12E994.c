int __fastcall sub_12E994(const void **a1, int *a2, void *dest, size_t n)
{
  int v8; // r2

  memcpy(dest, *a1, n);
  v8 = *a2;
  *a1 = (char *)*a1 + n;
  *a2 = v8 - n;
  return 1;
}
