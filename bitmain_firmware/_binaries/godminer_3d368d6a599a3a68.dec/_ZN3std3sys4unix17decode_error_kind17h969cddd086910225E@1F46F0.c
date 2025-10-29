int __fastcall std::sys::unix::decode_error_kind(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = a1 - 1;
  result = 34;
  switch ( v1 )
  {
    case 0:
    case 12:
      result = 1;
      break;
    case 1:
      result = 0;
      break;
    case 3:
      result = 35;
      break;
    case 6:
      return result;
    case 10:
      result = 13;
      break;
    case 11:
      result = 38;
      break;
    case 15:
      result = 28;
      break;
    case 16:
      result = 12;
      break;
    case 17:
      result = 31;
      break;
    case 19:
      result = 14;
      break;
    case 20:
      result = 15;
      break;
    case 21:
      result = 20;
      break;
    case 25:
      result = 29;
      break;
    case 26:
      result = 27;
      break;
    case 27:
      result = 24;
      break;
    case 28:
      result = 25;
      break;
    case 29:
      result = 17;
      break;
    case 30:
      result = 32;
      break;
    case 31:
      result = 11;
      break;
    case 34:
      result = 30;
      break;
    case 35:
      result = 33;
      break;
    case 37:
      result = 36;
      break;
    case 38:
      result = 16;
      break;
    case 39:
      result = 18;
      break;
    case 97:
      result = 8;
      break;
    case 98:
      result = 9;
      break;
    case 99:
      result = 10;
      break;
    case 100:
      result = 5;
      break;
    case 102:
      result = 6;
      break;
    case 103:
      result = 3;
      break;
    case 106:
      result = 7;
      break;
    case 109:
      result = 22;
      break;
    case 110:
      result = 2;
      break;
    case 112:
      result = 4;
      break;
    case 115:
      result = 19;
      break;
    case 121:
      result = 26;
      break;
    default:
      result = 40;
      break;
  }
  return result;
}
