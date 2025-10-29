int *__fastcall object::read::pe::export::ExportTable::target_by_index(int *result, int a2, unsigned int a3)
{
  if ( *(_DWORD *)(a2 + 12) > a3 )
    return (int *)object::read::pe::export::ExportTable::target_from_address(
                    result,
                    (const char *)a2,
                    *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * a3),
                    *(_DWORD *)(a2 + 8));
  *result = 3;
  result[1] = (int)aInvalidPeExpor_2;
  result[2] = 31;
  return result;
}
