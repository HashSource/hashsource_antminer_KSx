int __fastcall <core::char::convert::ParseCharError as core::fmt::Display>::fmt(_BYTE *a1, int *a2)
{
  char *v3; // r1
  unsigned int v4; // r2

  v3 = aCannotParseCha;
  if ( *a1 )
    v3 = aTooManyCharact;
  v4 = 29;
  if ( !*a1 )
    v4 = 35;
  return core::fmt::Formatter::pad(a2, v3, v4);
}
