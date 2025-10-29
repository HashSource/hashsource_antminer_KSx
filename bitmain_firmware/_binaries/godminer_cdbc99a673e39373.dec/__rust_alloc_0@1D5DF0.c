void *__fastcall _rust_alloc_0(size_t size, size_t a2)
{
  int v3; // r0
  void *v4; // r1
  void *memptr; // [sp+4h] [bp-Ch] BYREF

  if ( a2 <= 8 && size >= a2 )
    return malloc(size);
  if ( a2 <= 4 )
    a2 = 4;
  memptr = 0;
  v3 = posix_memalign(&memptr, a2, size);
  v4 = memptr;
  if ( v3 )
    return 0;
  return v4;
}
