_DWORD *__fastcall <alloc::boxed::Box<dyn core::error::Error> as core::convert::From<alloc::string::String>>::from(
        int *a1)
{
  _DWORD *result; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r4

  result = (_DWORD *)_rust_alloc(0xCu);
  if ( !result )
    alloc::alloc::handle_alloc_error();
  v3 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  *result = v3;
  result[1] = v4;
  result[2] = v5;
  return result;
}
