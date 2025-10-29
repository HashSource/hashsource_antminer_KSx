_DWORD *__fastcall alloc::ffi::c_str::CString::into_bytes(_DWORD *result, int a2, int a3)
{
  *result = a3;
  if ( a3 )
    --a3;
  result[1] = a2;
  result[2] = a3;
  return result;
}
