const char *__fastcall gimli::constants::DwLne::static_string(unsigned __int8 *a1)
{
  int v1; // r0
  int v2; // r2
  int v3; // kr00_4
  const char *result; // r0

  v1 = *a1;
  v2 = v1 - 1;
  v3 = v1;
  result = aDwLneEndSequen;
  switch ( v2 )
  {
    case 0:
      return result;
    case 1:
      result = aDwLneSetAddres;
      break;
    case 2:
      result = aDwLneDefineFil;
      break;
    case 3:
      result = aDwLneSetDiscri;
      break;
    default:
      if ( v3 == 128 )
      {
        result = aDwLneLoUser;
      }
      else if ( v3 == 255 )
      {
        result = aDwLneHiUser;
      }
      else
      {
        result = 0;
      }
      break;
  }
  return result;
}
