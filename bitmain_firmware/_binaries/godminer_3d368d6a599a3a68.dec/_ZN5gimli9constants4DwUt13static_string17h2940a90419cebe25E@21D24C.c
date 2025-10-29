const char *__fastcall gimli::constants::DwUt::static_string(unsigned __int8 *a1)
{
  int v1; // r0
  int v2; // r2
  int v3; // kr00_4
  const char *result; // r0

  v1 = *a1;
  v2 = v1 - 1;
  v3 = v1;
  result = (const char *)&unk_2ACC88;
  switch ( v2 )
  {
    case 0:
      return result;
    case 1:
      result = aDwUtType;
      break;
    case 2:
      result = (const char *)&unk_2ACC71;
      break;
    case 3:
      result = aDwUtSkeleton;
      break;
    case 4:
      result = aDwUtSplitCompi;
      break;
    case 5:
      result = aDwUtSplitType;
      break;
    default:
      if ( v3 == 128 )
      {
        result = (const char *)&unk_2ACC43;
      }
      else if ( v3 == 255 )
      {
        result = (const char *)&unk_2ACC36;
      }
      else
      {
        result = 0;
      }
      break;
  }
  return result;
}
