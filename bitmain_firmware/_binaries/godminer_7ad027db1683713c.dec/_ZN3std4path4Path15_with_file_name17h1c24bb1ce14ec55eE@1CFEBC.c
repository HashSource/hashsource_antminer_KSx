size_t __fastcall std::path::Path::_with_file_name(
        unsigned int *a1,
        const void *a2,
        signed int size,
        _BYTE *a4,
        size_t a5)
{
  int v9; // r5

  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow();
    v9 = _rust_alloc(size);
    if ( !v9 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v9 = 1;
  }
  memcpy((void *)v9, a2, size);
  *a1 = size;
  a1[1] = v9;
  a1[2] = size;
  return std::path::PathBuf::_set_file_name(a1, a4, a5);
}
