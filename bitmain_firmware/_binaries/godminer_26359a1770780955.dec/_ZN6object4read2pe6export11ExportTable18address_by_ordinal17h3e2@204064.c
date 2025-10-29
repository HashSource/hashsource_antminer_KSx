_DWORD *__fastcall object::read::pe::export::ExportTable::address_by_ordinal(_DWORD *result, _DWORD *a2, int a3)
{
  unsigned int v3; // r2
  int v4; // r1

  v3 = a3 - *(_DWORD *)(a2[9] + 16);
  if ( a2[3] <= v3 )
  {
    *result = aInvalidPeExpor_2;
    result[1] = 31;
  }
  else
  {
    v4 = a2[2];
    *result = 0;
    result[1] = *(_DWORD *)(v4 + 4 * v3);
  }
  return result;
}
