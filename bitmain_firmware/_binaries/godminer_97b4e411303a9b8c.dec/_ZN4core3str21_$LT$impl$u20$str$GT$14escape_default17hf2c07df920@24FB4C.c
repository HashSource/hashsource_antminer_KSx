_DWORD *__fastcall core::str::<impl str>::escape_default(_DWORD *result, int a2, int a3)
{
  *result = a2 + a3;
  result[6] = (char *)&loc_110000 + 3;
  result[3] = (char *)&loc_110000 + 3;
  result[1] = a2;
  return result;
}
