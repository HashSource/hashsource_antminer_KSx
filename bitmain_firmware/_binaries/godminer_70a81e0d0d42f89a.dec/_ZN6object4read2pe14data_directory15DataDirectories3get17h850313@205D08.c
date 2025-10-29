_DWORD *__fastcall object::read::pe::data_directory::DataDirectories::get(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r3
  _DWORD *result; // r0

  v2 = a1[1];
  result = 0;
  if ( v2 > a2 )
  {
    result = (_DWORD *)(*a1 + 8 * a2);
    if ( !*result )
      return 0;
  }
  return result;
}
