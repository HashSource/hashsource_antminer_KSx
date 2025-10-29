_DWORD *__fastcall core::str::<impl str>::escape_unicode(_DWORD *result, int a2, int a3)
{
  result[6] = 1114112;
  result[3] = 1114112;
  *result = a2 + a3;
  result[1] = a2;
  return result;
}
