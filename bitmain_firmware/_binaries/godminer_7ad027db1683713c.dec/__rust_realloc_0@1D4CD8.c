void *__fastcall _rust_realloc_0(void *ptr, size_t a2, size_t a3, size_t size)
{
  bool v4; // cc
  size_t v5; // r5
  int v8; // r7
  void *v9; // r6
  void *memptr; // [sp+4h] [bp-4h] BYREF

  v4 = a3 > 8;
  v5 = size;
  if ( a3 <= 8 )
    v4 = a3 > size;
  if ( !v4 )
    return realloc(ptr, size);
  if ( a3 <= 4 )
    a3 = 4;
  v8 = 0;
  memptr = 0;
  if ( !posix_memalign(&memptr, a3, size) )
  {
    v9 = memptr;
    if ( memptr )
    {
      if ( a2 < v5 )
        v5 = a2;
      memcpy(memptr, ptr, v5);
      free(ptr);
      return v9;
    }
  }
  return (void *)v8;
}
