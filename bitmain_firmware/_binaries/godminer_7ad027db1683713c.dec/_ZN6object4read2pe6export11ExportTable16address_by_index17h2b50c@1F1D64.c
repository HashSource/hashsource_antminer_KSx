_DWORD *__fastcall object::read::pe::export::ExportTable::address_by_index(_DWORD *result, int a2, unsigned int a3)
{
  int v3; // r1

  if ( *(_DWORD *)(a2 + 12) <= a3 )
  {
    *result = aInvalidPeExpor_2;
    result[1] = 31;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 8);
    *result = 0;
    result[1] = *(_DWORD *)(v3 + 4 * a3);
  }
  return result;
}
