_DWORD *__fastcall <std::panicking::begin_panic_handler::StrPanicPayload as core::panic::BoxMeUp>::take_box(int *a1)
{
  int v1; // r4
  int v2; // r5
  _DWORD *result; // r0

  v1 = *a1;
  v2 = a1[1];
  result = (_DWORD *)_rust_alloc(8u);
  if ( !result )
    alloc::alloc::handle_alloc_error();
  *result = v1;
  result[1] = v2;
  return result;
}
