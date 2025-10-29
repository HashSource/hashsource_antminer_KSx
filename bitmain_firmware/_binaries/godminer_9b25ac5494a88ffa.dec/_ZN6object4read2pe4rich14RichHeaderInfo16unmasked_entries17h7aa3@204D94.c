_DWORD *__fastcall object::read::pe::rich::RichHeaderInfo::unmasked_entries(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[4];
  *result = v2 + 8 * v3;
  result[1] = v2;
  result[2] = v4;
  return result;
}
