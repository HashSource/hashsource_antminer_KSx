_DWORD *__fastcall new_iterator_c_map(int a1)
{
  _DWORD *result; // r0

  result = malloc(0x18u);
  *result = sub_121984;
  result[2] = sub_121908;
  result[3] = a1;
  result[4] = 0;
  result[1] = sub_121924;
  result[5] = 0;
  return result;
}
