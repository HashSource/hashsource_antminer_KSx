int __fastcall strbuffer_append_bytes(const void **a1, void *src, size_t n)
{
  unsigned int v4; // r6
  size_t v6; // r2
  char *v8; // r8
  void *v9; // r6
  char *v10; // r0
  char *v11; // r2
  size_t v12; // r5

  v4 = (unsigned int)a1[2];
  v6 = (size_t)a1[1];
  if ( v4 - v6 > n )
  {
    v8 = (char *)*a1;
LABEL_9:
    memcpy(&v8[v6], src, n);
    v11 = (char *)*a1;
    v12 = (size_t)a1[1] + n;
    a1[1] = (const void *)v12;
    v11[v12] = 0;
    return 0;
  }
  if ( !((n == -1) | (v4 >> 31)) && -2 - n >= v6 )
  {
    v9 = (void *)(2 * v4);
    if ( n + 1 + v6 >= (unsigned int)v9 )
      v9 = (void *)(n + 1 + v6);
    v10 = (char *)jsonp_malloc(v9);
    v8 = v10;
    if ( v10 )
    {
      memcpy(v10, *a1, (size_t)a1[1]);
      jsonp_free((void *)*a1);
      v6 = (size_t)a1[1];
      *a1 = v8;
      a1[2] = v9;
      goto LABEL_9;
    }
  }
  return -1;
}
