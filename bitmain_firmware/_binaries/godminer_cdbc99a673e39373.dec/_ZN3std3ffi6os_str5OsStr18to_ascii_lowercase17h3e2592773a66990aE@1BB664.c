signed int *__fastcall std::ffi::os_str::OsStr::to_ascii_lowercase(signed int *result, const void *a2, signed int size)
{
  signed int *v4; // r5
  void *v6; // r0
  signed int v7; // r6
  int v8; // r1

  v4 = result;
  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow(result, a2);
    v6 = (void *)_rust_alloc(size);
    if ( !v6 )
      alloc::alloc::handle_alloc_error();
    v7 = (signed int)v6;
    memcpy(v6, a2, size);
    result = 0;
    do
    {
      v8 = *((unsigned __int8 *)result + v7);
      if ( (unsigned int)(v8 - 65) < 0x1A )
        LOBYTE(v8) = v8 | 0x20;
      *((_BYTE *)result + v7) = v8;
      result = (signed int *)((char *)result + 1);
    }
    while ( (signed int *)size != result );
    *v4 = size;
    v4[1] = v7;
    v4[2] = size;
  }
  else
  {
    *result = 0;
    result[1] = 1;
    result[2] = 0;
  }
  return result;
}
