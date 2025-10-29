const char *__fastcall core::num::<impl core::error::Error for core::num::dec2flt::ParseFloatError>::description(
        _BYTE *a1)
{
  const char *v1; // r2

  v1 = aCannotParseFlo;
  if ( *a1 )
    return aInvalidFloatLi;
  return v1;
}
