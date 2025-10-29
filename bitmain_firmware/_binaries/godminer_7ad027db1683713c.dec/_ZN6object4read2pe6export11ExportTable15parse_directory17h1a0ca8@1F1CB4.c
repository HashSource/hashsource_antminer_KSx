_DWORD *__fastcall object::read::pe::export::ExportTable::parse_directory(_DWORD *result, int a2, unsigned int a3)
{
  if ( a3 < 0x28 )
  {
    *result = aInvalidPeExpor_1;
    result[1] = 26;
  }
  else
  {
    result[1] = a2;
    *result = 0;
  }
  return result;
}
