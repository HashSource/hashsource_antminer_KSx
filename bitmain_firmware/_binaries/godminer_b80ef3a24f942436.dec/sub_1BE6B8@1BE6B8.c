bool __fastcall sub_1BE6B8(_DWORD *a1)
{
  _BOOL4 result; // r0

  switch ( *a1 )
  {
    case 2:
      result = 1;
      break;
    case 3:
      result = 1;
      break;
    case 4:
      result = 1;
      break;
    case 5:
    case 7:
      result = 1;
      break;
    case 6:
      result = a1[3] >= 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
