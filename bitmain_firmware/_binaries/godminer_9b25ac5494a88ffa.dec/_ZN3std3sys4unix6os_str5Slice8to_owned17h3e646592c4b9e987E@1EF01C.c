void *__fastcall std::sys::unix::os_str::Slice::to_owned(signed int *a1, const void *a2, signed int size)
{
  int v6; // r7
  void *result; // r0

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
  result = memcpy((void *)v6, a2, size);
  *a1 = size;
  a1[1] = v6;
  a1[2] = size;
  return result;
}
