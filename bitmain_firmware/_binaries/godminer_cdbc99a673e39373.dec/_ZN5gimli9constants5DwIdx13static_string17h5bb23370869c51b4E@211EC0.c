const char *__fastcall gimli::constants::DwIdx::static_string(unsigned __int16 *a1)
{
  int v1; // r0
  int v2; // r2
  int v3; // kr00_4
  const char *result; // r0

  v1 = *a1;
  v2 = v1 - 1;
  v3 = v1;
  result = aDwIdxCompileUn;
  switch ( v2 )
  {
    case 0:
      return result;
    case 1:
      result = aDwIdxTypeUnit;
      break;
    case 2:
      result = aDwIdxDieOffset;
      break;
    case 3:
      result = aDwIdxParent;
      break;
    case 4:
      result = aDwIdxTypeHash;
      break;
    default:
      if ( v3 == 0x2000 )
      {
        result = aDwIdxLoUser;
      }
      else if ( v3 == 0x3FFF )
      {
        result = aDwIdxHiUser;
      }
      else
      {
        result = 0;
      }
      break;
  }
  return result;
}
