_DWORD *__fastcall alloc::string::String::into_raw_parts(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  *result = v3;
  result[1] = v4;
  result[2] = v2;
  return result;
}
