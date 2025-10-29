const char *__fastcall <core::char::convert::ParseCharError as core::error::Error>::description(_BYTE *a1)
{
  const char *v1; // r2

  v1 = aCannotParseCha;
  if ( *a1 )
    return aTooManyCharact;
  return v1;
}
