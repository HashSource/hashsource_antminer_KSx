void __fastcall std::sys_common::process::CommandEnv::set(int a1, void *src, signed int size, const void *a4, int a5)
{
  void *v9; // r0
  int v10; // r6
  bool v11; // zf
  int v12; // r4
  bool v13; // zf
  _DWORD v14[2]; // [sp+0h] [bp-28h] BYREF
  void *ptr; // [sp+8h] [bp-20h]
  int v16[3]; // [sp+10h] [bp-18h] BYREF
  int v17[3]; // [sp+1Ch] [bp-Ch] BYREF

  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow();
    v9 = (void *)_rust_alloc(size);
    if ( !v9 )
      alloc::alloc::handle_alloc_error();
    v10 = (int)v9;
    memcpy(v9, src, size);
    v11 = *(_BYTE *)(a1 + 13) == 0;
    if ( !*(_BYTE *)(a1 + 13) )
      v11 = size == 4;
    if ( v11 && *(_DWORD *)v10 == 1213481296 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    v10 = 1;
  }
  v16[2] = size;
  v16[1] = v10;
  v16[0] = size;
  if ( a5 )
  {
    if ( a5 <= -1 )
      alloc::raw_vec::capacity_overflow();
    v12 = _rust_alloc(a5);
    if ( !v12 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v12 = 1;
  }
  memcpy((void *)v12, a4, a5);
  v17[2] = a5;
  v17[1] = v12;
  v17[0] = a5;
  sub_1A0A00(v14, (int *)a1, v16, v17);
  if ( v14[0] )
  {
    v13 = ptr == 0;
    if ( ptr )
      v13 = v14[1] == 0;
    if ( !v13 )
      _rust_dealloc(ptr);
  }
}
