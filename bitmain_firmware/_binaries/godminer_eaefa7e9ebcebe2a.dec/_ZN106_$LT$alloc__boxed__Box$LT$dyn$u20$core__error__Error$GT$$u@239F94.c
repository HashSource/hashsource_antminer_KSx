signed int *__fastcall <alloc::boxed::Box<dyn core::error::Error> as core::convert::From<&str>>::from(
        const void *a1,
        signed int size)
{
  int v4; // r5
  signed int *result; // r0

  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow();
    v4 = _rust_alloc(size);
    if ( !v4 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v4 = 1;
  }
  memcpy((void *)v4, a1, size);
  result = (signed int *)_rust_alloc(0xCu);
  if ( !result )
    alloc::alloc::handle_alloc_error();
  *result = size;
  result[1] = v4;
  result[2] = size;
  return result;
}
