_DWORD *__fastcall object::read::pe::data_directory::DataDirectories::enumerate(_DWORD *result, int *a2)
{
  int v2; // r3
  int v3; // r1

  v2 = *a2;
  v3 = a2[1];
  result[2] = 0;
  *result = v2 + 8 * v3;
  result[1] = v2;
  return result;
}
