// Alternative name is '_ZN128_$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$4from17h52d358a4f0209502E'
signed int *__fastcall <alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync> as core::convert::From<alloc::borrow::Cow<str>>>::from(
        _DWORD *a1)
{
  const void *v1; // r6
  signed int v2; // r4
  signed int v3; // r7
  int v4; // r5
  signed int *result; // r0

  v1 = (const void *)a1[1];
  v2 = a1[2];
  if ( *a1 )
  {
    v3 = a1[3];
    v4 = a1[2];
    v2 = a1[1];
  }
  else
  {
    if ( v2 )
    {
      if ( v2 <= -1 )
        alloc::raw_vec::capacity_overflow();
      v4 = _rust_alloc(a1[2]);
      if ( !v4 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v4 = 1;
    }
    memcpy((void *)v4, v1, v2);
    v3 = v2;
  }
  result = (signed int *)_rust_alloc(0xCu);
  if ( !result )
    alloc::alloc::handle_alloc_error();
  *result = v2;
  result[1] = v4;
  result[2] = v3;
  return result;
}
