_DWORD *__fastcall object::read::pe::data_directory::DataDirectories::parse(
        _DWORD *result,
        int a2,
        unsigned int a3,
        unsigned int a4)
{
  if ( a4 >> 29 || 8 * a4 > a3 )
  {
    result[1] = aInvalidPeNumbe;
    result[2] = 34;
    *result = 1;
  }
  else
  {
    result[1] = a2;
    result[2] = a4;
    *result = 0;
  }
  return result;
}
