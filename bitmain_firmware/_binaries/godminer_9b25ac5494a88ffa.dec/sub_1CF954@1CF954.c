signed int **__fastcall sub_1CF954(_DWORD *a1, const void *a2, signed int size)
{
  int v6; // r6
  signed int *v7; // r0
  signed int **result; // r0
  signed int *v9; // [sp+0h] [bp-10h]
  signed int v10; // [sp+8h] [bp-8h]

  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow(a1, a2);
    v6 = _rust_alloc(size);
    if ( !v6 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v6 = 1;
  }
  memcpy((void *)v6, a2, size);
  v10 = size;
  v7 = (signed int *)_rust_alloc(0xCu);
  if ( !v7 )
    alloc::alloc::handle_alloc_error();
  *v7 = size;
  v7[1] = v6;
  v9 = v7;
  v7[2] = size;
  LOBYTE(v10) = 40;
  result = (signed int **)_rust_alloc(0xCu);
  if ( !result )
    alloc::alloc::handle_alloc_error();
  a1[1] = result;
  *result = v9;
  result[1] = (signed int *)&off_2DCFCC;
  result[2] = (signed int *)v10;
  *a1 = 3;
  return result;
}
