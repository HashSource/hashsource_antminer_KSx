_DWORD *__fastcall std::env::temp_dir(_DWORD *a1)
{
  _DWORD *result; // r0
  int v3; // r1
  size_t v4; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v5; // [sp+8h] [bp-8h]
  int v6; // [sp+Ch] [bp-4h]

  std::env::_var_os(&v4, aTmpdir, 6u);
  result = v5;
  if ( v5 )
  {
    v3 = v6;
    *a1 = v4;
    a1[1] = result;
    a1[2] = v3;
  }
  else
  {
    result = (_DWORD *)_rust_alloc(4u);
    if ( !result )
      alloc::alloc::handle_alloc_error();
    *result = 1886221359;
    *a1 = 4;
    a1[1] = result;
    a1[2] = 4;
  }
  return result;
}
