const char *__fastcall gimli::constants::DwCc::static_string(unsigned __int8 *a1)
{
  int v1; // r0
  int v2; // r2
  int v3; // kr00_4
  const char *result; // r0

  v1 = *a1;
  v2 = v1 - 1;
  v3 = v1;
  result = aDwCcNormal;
  switch ( v2 )
  {
    case 0:
      return result;
    case 1:
      result = (const char *)&unk_29B2AA;
      break;
    case 2:
      result = (const char *)&unk_29B29E;
      break;
    case 3:
      result = aDwCcPassByRefe;
      break;
    case 4:
      result = aDwCcPassByValu;
      break;
    default:
      if ( v3 == 64 )
      {
        result = aDwCcLoUser;
      }
      else if ( v3 == 255 )
      {
        result = (const char *)&unk_29B25A;
      }
      else
      {
        result = 0;
      }
      break;
  }
  return result;
}
