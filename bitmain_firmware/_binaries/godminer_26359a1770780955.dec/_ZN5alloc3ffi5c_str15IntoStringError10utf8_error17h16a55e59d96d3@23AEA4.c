_DWORD *__fastcall alloc::ffi::c_str::IntoStringError::utf8_error(_DWORD *result, int a2)
{
  int v2; // r2
  int v3; // r1

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 12);
  *result = v2;
  result[1] = v3;
  return result;
}
