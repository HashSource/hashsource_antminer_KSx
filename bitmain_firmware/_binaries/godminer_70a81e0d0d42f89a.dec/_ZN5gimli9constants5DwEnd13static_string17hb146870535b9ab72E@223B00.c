const char *__fastcall gimli::constants::DwEnd::static_string(unsigned __int8 *a1)
{
  int v1; // r2
  const char *result; // r0

  v1 = *a1;
  result = 0;
  if ( v1 <= 1 )
  {
    if ( v1 )
      return aDwEndBig;
    else
      return aDwEndDef;
  }
  else
  {
    switch ( v1 )
    {
      case 2:
        return aDwEndLittle;
      case 64:
        return (const char *)&unk_2B0AC6;
      case 255:
        return (const char *)&unk_2B0AB8;
    }
  }
  return result;
}
