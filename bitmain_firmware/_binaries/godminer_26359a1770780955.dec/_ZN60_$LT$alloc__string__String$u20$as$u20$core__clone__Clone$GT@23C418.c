void *__fastcall <alloc::string::String as core::clone::Clone>::clone(signed int *a1, int a2)
{
  signed int v2; // r4
  const void *v4; // r6
  int v5; // r7
  void *result; // r0

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(const void **)(a2 + 4);
  if ( v2 )
  {
    if ( v2 <= -1 )
      alloc::raw_vec::capacity_overflow();
    v5 = _rust_alloc(*(_DWORD *)(a2 + 8));
    if ( !v5 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v5 = 1;
  }
  result = memcpy((void *)v5, v4, v2);
  *a1 = v2;
  a1[1] = v5;
  a1[2] = v2;
  return result;
}
