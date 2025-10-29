void __fastcall std::sys_common::process::CommandEnv::set(int a1, int src, signed int size, const void *a4, int a5)
{
  const void *v7; // r4
  void *v9; // r0
  size_t v10; // r6
  int v11; // r0
  bool v12; // zf
  int v13; // r4
  bool v14; // zf
  _DWORD v15[2]; // [sp+0h] [bp-28h] BYREF
  void *ptr; // [sp+8h] [bp-20h]
  size_t v17[3]; // [sp+10h] [bp-18h] BYREF
  size_t v18[3]; // [sp+1Ch] [bp-Ch] BYREF

  v7 = (const void *)src;
  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow(a1, src);
    v9 = (void *)_rust_alloc(size);
    if ( !v9 )
      alloc::alloc::handle_alloc_error();
    v10 = (size_t)v9;
    memcpy(v9, v7, size);
    v11 = *(unsigned __int8 *)(a1 + 13);
    v12 = v11 == 0;
    if ( !*(_BYTE *)(a1 + 13) )
      v12 = size == 4;
    if ( v12 )
    {
      v11 = *(_DWORD *)v10;
      src = 1213481296;
      if ( *(_DWORD *)v10 == 1213481296 )
      {
        v11 = 1;
        *(_BYTE *)(a1 + 13) = 1;
      }
    }
  }
  else
  {
    v11 = 1;
    v10 = 1;
  }
  v17[2] = size;
  v17[1] = v10;
  v17[0] = size;
  if ( a5 )
  {
    if ( a5 <= -1 )
      alloc::raw_vec::capacity_overflow(v11, src);
    v13 = _rust_alloc(a5);
    if ( !v13 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v13 = 1;
  }
  memcpy((void *)v13, a4, a5);
  v18[2] = a5;
  v18[1] = v13;
  v18[0] = a5;
  sub_1B2DC4(v15, (int *)a1, v17, v18);
  if ( v15[0] )
  {
    v14 = ptr == 0;
    if ( ptr )
      v14 = v15[1] == 0;
    if ( !v14 )
      _rust_dealloc(ptr);
  }
}
