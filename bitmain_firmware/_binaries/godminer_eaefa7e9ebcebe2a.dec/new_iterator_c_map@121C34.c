_DWORD *__fastcall new_iterator_c_map(int a1)
{
  _DWORD *result; // r0

  result = malloc(0x18u);
  *result = sub_121A84;
  result[2] = sub_121A08;
  result[3] = a1;
  result[4] = 0;
  result[1] = sub_121A24;
  result[5] = 0;
  return result;
}
