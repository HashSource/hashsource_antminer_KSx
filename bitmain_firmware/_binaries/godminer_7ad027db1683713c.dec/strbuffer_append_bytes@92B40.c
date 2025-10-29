int __fastcall strbuffer_append_bytes(const void **a1, void *src, size_t n)
{
  unsigned int v4; // r6
  _BYTE *v6; // r2
  const void *v8; // r8
  char *v9; // r6
  void *v10; // r0
  const void *v11; // r2
  char *v12; // r5

  v4 = (unsigned int)a1[2];
  v6 = a1[1];
  if ( v4 - (unsigned int)v6 > n )
  {
    v8 = *a1;
LABEL_9:
    memcpy(&v6[(_DWORD)v8], src, n);
    v11 = *a1;
    v12 = (char *)a1[1] + n;
    a1[1] = v12;
    v12[(_DWORD)v11] = 0;
    return 0;
  }
  if ( !((n == -1) | (v4 >> 31)) && -2 - n >= (unsigned int)v6 )
  {
    v9 = (char *)(2 * v4);
    if ( &v6[n + 1] >= v9 )
      v9 = &v6[n + 1];
    v10 = jsonp_malloc(v9);
    v8 = v10;
    if ( v10 )
    {
      memcpy(v10, *a1, (size_t)a1[1]);
      jsonp_free((void *)*a1);
      v6 = a1[1];
      *a1 = v8;
      a1[2] = v9;
      goto LABEL_9;
    }
  }
  return -1;
}
