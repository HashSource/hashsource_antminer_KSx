const char *__fastcall gimli::constants::DwMacro::static_string(unsigned __int8 *a1)
{
  int v1; // r0
  int v2; // r2
  int v3; // kr00_4
  const char *result; // r0

  v1 = *a1;
  v2 = v1 - 1;
  v3 = v1;
  result = aDwMacroDefine;
  switch ( v2 )
  {
    case 0:
      return result;
    case 1:
      result = aDwMacroUndef;
      break;
    case 2:
      result = aDwMacroStartFi;
      break;
    case 3:
      result = aDwMacroEndFile;
      break;
    case 4:
      result = aDwMacroDefineS_1;
      break;
    case 5:
      result = aDwMacroUndefSt_0;
      break;
    case 6:
      result = (const char *)&unk_2B12B8;
      break;
    case 7:
      result = aDwMacroDefineS_0;
      break;
    case 8:
      result = aDwMacroUndefSu;
      break;
    case 9:
      result = aDwMacroImportS;
      break;
    case 10:
      result = aDwMacroDefineS;
      break;
    case 11:
      result = aDwMacroUndefSt;
      break;
    default:
      if ( v3 == 224 )
      {
        result = aDwMacroLoUser;
      }
      else if ( v3 == 255 )
      {
        result = aDwMacroHiUser;
      }
      else
      {
        result = 0;
      }
      break;
  }
  return result;
}
