_DWORD *__fastcall object::read::pe::export::ExportTable::target_by_index(_DWORD *result, int a2, unsigned int a3)
{
  if ( *(_DWORD *)(a2 + 12) > a3 )
    return (_DWORD *)object::read::pe::export::ExportTable::target_from_address(result);
  *result = 3;
  result[1] = aInvalidPeExpor_2;
  result[2] = 31;
  return result;
}
