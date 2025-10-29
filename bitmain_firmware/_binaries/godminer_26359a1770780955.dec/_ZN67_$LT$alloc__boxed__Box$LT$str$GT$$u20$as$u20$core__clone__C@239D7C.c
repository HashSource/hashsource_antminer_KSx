int __fastcall <alloc::boxed::Box<str> as core::clone::Clone>::clone(int a1)
{
  signed int v1; // r4
  const void *v2; // r5
  int v3; // r6

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(const void **)a1;
  if ( v1 )
  {
    if ( v1 <= -1 )
      alloc::raw_vec::capacity_overflow();
    v3 = _rust_alloc(*(_DWORD *)(a1 + 4));
    if ( !v3 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v3 = 1;
  }
  memcpy((void *)v3, v2, v1);
  return v3;
}
