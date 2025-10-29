const char *__fastcall core::num::flt2dec::determine_sign(int a1, int a2, int a3)
{
  const char *result; // r0

  if ( *(_BYTE *)(a2 + 26) == 2 )
    return aLibraryCoreSrc;
  if ( a1 )
  {
    result = asc_2B5CCA;
    if ( !a3 )
      return (const char *)&unk_2B5CCB;
  }
  else
  {
    result = asc_2B5CCA;
    if ( !a3 )
      return aLibraryCoreSrc;
  }
  return result;
}
