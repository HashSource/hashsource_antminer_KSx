void *__fastcall <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(
        signed int *a1,
        _DWORD *a2)
{
  const void *v3; // r6
  signed int v4; // r5
  void *result; // r0
  int v6; // r7

  v3 = (const void *)a2[1];
  v4 = a2[2];
  if ( *a2 )
  {
    result = (void *)a2[3];
    *a1 = (signed int)v3;
    a1[1] = v4;
    a1[2] = (signed int)result;
  }
  else
  {
    if ( v4 )
    {
      if ( v4 <= -1 )
        alloc::raw_vec::capacity_overflow();
      v6 = _rust_alloc(a2[2]);
      if ( !v6 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v6 = 1;
    }
    result = memcpy((void *)v6, v3, v4);
    *a1 = v4;
    a1[1] = v6;
    a1[2] = v4;
  }
  return result;
}
