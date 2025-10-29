size_t __fastcall std::sys::unix::os_str::Slice::clone_into(char *src, size_t n, size_t *a3)
{
  size_t v4; // r6
  size_t v5; // r9
  bool v7; // cf
  void *v10; // r0
  unsigned int v11; // r7
  size_t v12; // r5

  v4 = a3[2];
  v5 = a3[1];
  v7 = v4 >= n;
  if ( v4 >= n )
    v4 = n;
  v10 = (void *)a3[1];
  if ( v7 )
    a3[2] = n;
  memcpy(v10, src, v4);
  v11 = n - v4;
  v12 = v4;
  if ( *a3 - v4 < v11 )
  {
    sub_798B0(a3, v4, v11);
    v5 = a3[1];
    v12 = a3[2];
  }
  memcpy((void *)(v5 + v12), &src[v4], v11);
  a3[2] = v12 + v11;
  return v12 + v11;
}
