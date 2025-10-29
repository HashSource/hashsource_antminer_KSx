_DWORD *__fastcall std::io::error::Error::_new(_DWORD *a1, char a2, int a3, int a4)
{
  _DWORD *result; // r0
  int v8; // [sp+8h] [bp-8h]

  LOBYTE(v8) = a2;
  result = (_DWORD *)_rust_alloc(0xCu);
  if ( !result )
    alloc::alloc::handle_alloc_error();
  a1[1] = result;
  *result = a3;
  result[1] = a4;
  result[2] = v8;
  *a1 = 3;
  return result;
}
