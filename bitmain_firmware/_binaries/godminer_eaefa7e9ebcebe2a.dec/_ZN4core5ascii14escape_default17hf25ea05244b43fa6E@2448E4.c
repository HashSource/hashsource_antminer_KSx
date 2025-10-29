int __fastcall core::ascii::escape_default(int result, unsigned __int8 a2)
{
  char v2; // r12
  int v3; // r2

  v2 = 2;
  v3 = 29788;
  switch ( a2 )
  {
    case 9u:
      break;
    case 0xAu:
      v3 = 28252;
      break;
    case 0xBu:
    case 0xCu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
    case 0x23u:
    case 0x24u:
    case 0x25u:
    case 0x26u:
      goto LABEL_5;
    case 0xDu:
      v3 = 29276;
      break;
    case 0x22u:
      v3 = 8796;
      break;
    case 0x27u:
      v3 = 10076;
      break;
    default:
      if ( a2 == 92 )
      {
        v3 = 23644;
      }
      else
      {
LABEL_5:
        if ( (unsigned int)a2 - 32 >= 0x5F )
        {
          v2 = 4;
          v3 = (byte_2B3ADF[a2 >> 4] << 16) | (byte_2B3ADF[a2 & 0xF] << 24) | 0x785C;
        }
        else
        {
          v2 = 1;
          v3 = a2;
        }
      }
      break;
  }
  *(_BYTE *)(result + 5) = v2;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)result = v3;
  return result;
}
