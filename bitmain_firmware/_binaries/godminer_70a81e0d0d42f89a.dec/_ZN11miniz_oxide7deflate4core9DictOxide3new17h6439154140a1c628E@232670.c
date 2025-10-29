unsigned int __fastcall miniz_oxide::deflate::core::DictOxide::new(unsigned int *a1, __int16 a2)
{
  void *v4; // r0
  unsigned int v5; // r5
  unsigned int v6; // r6
  unsigned int result; // r0

  v4 = (void *)_rust_alloc((size_t)&stru_28100.st_name + 2);
  if ( !v4 )
    alloc::alloc::handle_alloc_error();
  v5 = (unsigned int)v4;
  memset(v4, 0, (size_t)&stru_28100.st_name + 2);
  v6 = a2 & 0xFFF;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = v5;
  result = ((43691 * (v6 + 2)) >> 17) + 1;
  *a1 = result;
  a1[1] = ((43691 * ((v6 >> 2) + 2)) >> 17) + 1;
  a1[2] = 0;
  return result;
}
