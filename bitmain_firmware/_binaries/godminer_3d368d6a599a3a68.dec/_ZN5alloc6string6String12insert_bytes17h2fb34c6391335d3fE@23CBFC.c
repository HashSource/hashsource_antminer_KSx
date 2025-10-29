unsigned int __fastcall alloc::string::String::insert_bytes(size_t *a1, int a2, const void *a3, unsigned int a4)
{
  int v5; // r6
  size_t v9; // r1
  int v10; // r0
  size_t v11; // r2
  void *v12; // r7

  v5 = a1[2];
  if ( *a1 - v5 < a4 )
    sub_7D6EC(a1, v5, a4);
  v9 = a1[1];
  v10 = a4 + a2;
  v11 = v5 - a2;
  v12 = (void *)(v9 + a2);
  memmove((void *)(v9 + v10), v12, v11);
  memcpy(v12, a3, a4);
  a1[2] = v5 + a4;
  return v5 + a4;
}
