int __fastcall <std::process::Command as std::os::unix::process::CommandExt>::groups(
        int a1,
        const void *a2,
        unsigned int a3)
{
  _BOOL4 v6; // r0
  size_t v7; // r6
  int v8; // r7
  void *v9; // r0
  bool v10; // zf

  if ( a3 )
  {
    v6 = a3 < 0x20000000;
    if ( a3 > 0x1FFFFFFF || (v7 = 4 * a3, (a3 & 0x20000000) != 0) )
      alloc::raw_vec::capacity_overflow(v6, a2);
    if ( 4 * a3 )
    {
      v8 = _rust_alloc(4 * a3);
      if ( !v8 )
LABEL_16:
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v8 = 4 * v6;
      if ( !(4 * v6) )
        goto LABEL_16;
    }
  }
  else
  {
    v8 = 4;
    v7 = 0;
  }
  memcpy((void *)v8, a2, v7);
  v9 = *(void **)(a1 + 24);
  v10 = v9 == 0;
  if ( v9 )
    v10 = *(_DWORD *)(a1 + 28) == 0;
  if ( !v10 )
    _rust_dealloc(v9);
  *(_DWORD *)(a1 + 24) = v8;
  *(_DWORD *)(a1 + 28) = a3;
  return a1;
}
