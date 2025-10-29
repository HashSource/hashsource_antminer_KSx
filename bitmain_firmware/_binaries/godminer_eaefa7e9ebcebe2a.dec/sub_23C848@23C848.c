int __fastcall sub_23C848(int *a1)
{
  int v1; // r1
  size_t v3; // r5
  void *v4; // r0
  int v5; // r6

  v1 = *a1;
  v3 = a1[2];
  if ( *a1 <= v3 )
    return a1[1];
  v4 = (void *)a1[1];
  if ( v3 )
  {
    v5 = _rust_realloc(v4, v1, 1, v3);
    if ( !v5 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v5 = 1;
    _rust_dealloc(v4);
  }
  *a1 = v3;
  a1[1] = v5;
  return v5;
}
