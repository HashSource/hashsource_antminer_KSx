const char *__fastcall gimli::constants::DwOrd::static_string(_BYTE *a1)
{
  int v1; // r1
  const char *result; // r0

  v1 = (unsigned __int8)*a1;
  if ( !*a1 )
    return aDwOrdRowMajor;
  result = 0;
  if ( v1 == 1 )
    return aDwOrdColMajor;
  return result;
}
