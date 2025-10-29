_DWORD *__fastcall gimli::read::abbrev::Abbreviations::empty(_DWORD *result)
{
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 8;
  result[5] = 0;
  return result;
}
