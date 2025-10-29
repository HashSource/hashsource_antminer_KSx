int __fastcall std::path::<impl core::convert::From<&std::path::Path> for alloc::boxed::Box<std::path::Path>>::from(
        const void *a1,
        signed int size)
{
  int v4; // r6

  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow(a1, size);
    v4 = _rust_alloc(size);
    if ( !v4 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v4 = 1;
  }
  memcpy((void *)v4, a1, size);
  return v4;
}
