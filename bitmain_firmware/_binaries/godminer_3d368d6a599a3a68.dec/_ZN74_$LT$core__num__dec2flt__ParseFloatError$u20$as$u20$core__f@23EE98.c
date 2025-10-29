int __fastcall <core::num::dec2flt::ParseFloatError as core::fmt::Display>::fmt(_BYTE *a1, int a2)
{
  const char *v3; // r1
  int v4; // r2

  v3 = aCannotParseFlo;
  if ( *a1 )
    v3 = aInvalidFloatLi;
  v4 = 21;
  if ( !*a1 )
    v4 = 36;
  return core::fmt::Formatter::pad(a2, v3, v4);
}
