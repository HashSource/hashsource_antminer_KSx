// Alternative name is '_ZN5alloc6string13FromUtf8Error10into_bytes17h3cd1d36b86e9753eE'
_DWORD *__fastcall alloc::ffi::c_str::FromVecWithNulError::into_bytes(_DWORD *result, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1

  v2 = a2[2];
  v3 = a2[3];
  v4 = a2[4];
  *result = v2;
  result[1] = v3;
  result[2] = v4;
  return result;
}
