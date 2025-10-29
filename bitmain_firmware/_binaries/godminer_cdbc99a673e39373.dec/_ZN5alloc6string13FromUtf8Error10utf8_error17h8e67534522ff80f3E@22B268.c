_DWORD *__fastcall alloc::string::FromUtf8Error::utf8_error(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // r1

  v2 = *a2;
  v3 = a2[1];
  *result = v2;
  result[1] = v3;
  return result;
}
