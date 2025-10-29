void *__fastcall _rust_alloc_zeroed_0(size_t nmemb, size_t a2)
{
  bool v2; // cc
  int v4; // r5
  void *v5; // r6
  void *memptr; // [sp+4h] [bp-4h] BYREF

  v2 = a2 > 8;
  if ( a2 <= 8 )
    v2 = a2 > nmemb;
  if ( !v2 )
    return calloc(nmemb, 1u);
  v4 = 0;
  if ( a2 <= 4 )
    a2 = 4;
  memptr = 0;
  if ( !posix_memalign(&memptr, a2, nmemb) )
  {
    v5 = memptr;
    if ( memptr )
    {
      memset(memptr, 0, nmemb);
      return v5;
    }
  }
  return (void *)v4;
}
