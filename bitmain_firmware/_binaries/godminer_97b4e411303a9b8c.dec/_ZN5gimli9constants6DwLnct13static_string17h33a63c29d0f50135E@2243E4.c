const char *__fastcall gimli::constants::DwLnct::static_string(unsigned __int16 *a1)
{
  int v1; // r0
  int v2; // r2
  int v3; // kr00_4
  const char *result; // r0

  v1 = *a1;
  v2 = v1 - 1;
  v3 = v1;
  result = aDwLnctPath;
  switch ( v2 )
  {
    case 0:
      return result;
    case 1:
      result = aDwLnctDirector;
      break;
    case 2:
      result = aDwLnctTimestam;
      break;
    case 3:
      result = (const char *)&unk_2AF953;
      break;
    case 4:
      result = aDwLnctMd5;
      break;
    default:
      if ( v3 == 0x2000 )
      {
        result = aDwLnctLoUser;
      }
      else if ( v3 == 0x3FFF )
      {
        result = aDwLnctHiUser;
      }
      else
      {
        result = 0;
      }
      break;
  }
  return result;
}
