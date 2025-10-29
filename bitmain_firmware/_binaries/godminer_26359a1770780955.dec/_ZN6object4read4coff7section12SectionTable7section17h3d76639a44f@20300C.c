_DWORD *__fastcall object::read::coff::section::SectionTable::section(_DWORD *result, _DWORD *a2, int a3)
{
  unsigned int v3; // r2
  int v4; // r1

  v3 = a3 - 1;
  if ( v3 >= a2[1] )
  {
    *result = aInvalidCoffPeS;
    result[1] = 29;
  }
  else
  {
    v4 = *a2 + 40 * v3;
    *result = 0;
    result[1] = v4;
  }
  return result;
}
