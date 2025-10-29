void *__fastcall std::sys::common::alloc::realloc_fallback(int a1, void *a2, size_t a3, size_t a4, size_t size)
{
  size_t v5; // r5
  void *v8; // r7
  void *memptr; // [sp+4h] [bp-4h] BYREF

  v5 = size;
  if ( a4 > 8 || size < a4 )
  {
    if ( a4 <= 4 )
      a4 = 4;
    v8 = 0;
    memptr = 0;
    if ( posix_memalign(&memptr, a4, size) )
      return v8;
    v8 = memptr;
    if ( memptr )
    {
LABEL_4:
      if ( a3 < size )
        v5 = a3;
      memcpy(v8, a2, v5);
      free(a2);
      return v8;
    }
  }
  else
  {
    v8 = malloc(size);
    if ( v8 )
      goto LABEL_4;
  }
  return 0;
}
