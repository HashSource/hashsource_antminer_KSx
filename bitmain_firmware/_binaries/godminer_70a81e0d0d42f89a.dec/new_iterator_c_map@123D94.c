_DWORD *__fastcall new_iterator_c_map(int a1)
{
  _DWORD *result; // r0

  result = malloc(0x18u);
  *result = sub_123BE4;
  result[2] = sub_123B68;
  result[3] = a1;
  result[4] = 0;
  result[1] = sub_123B84;
  result[5] = 0;
  return result;
}
