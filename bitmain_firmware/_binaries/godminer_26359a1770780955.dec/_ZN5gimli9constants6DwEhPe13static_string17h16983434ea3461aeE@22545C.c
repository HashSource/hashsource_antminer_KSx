const char *__fastcall gimli::constants::DwEhPe::static_string(unsigned __int8 *a1)
{
  int v1; // r3
  const char *result; // r0
  const char *v3; // r12

  v1 = *a1;
  result = 0;
  v3 = aDwEhPeUleb128;
  switch ( v1 )
  {
    case 0:
      return (const char *)&unk_2AF603;
    case 1:
      return v3;
    case 2:
      return (const char *)&unk_2AF67C;
    case 3:
      return (const char *)&unk_2AF66D;
    case 4:
      return (const char *)&unk_2AF65E;
    case 5:
    case 6:
    case 7:
    case 8:
    case 13:
    case 14:
    case 15:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
      return result;
    case 9:
      return (const char *)&unk_2AA94C;
    case 10:
      return (const char *)&unk_2AF64F;
    case 11:
      return (const char *)&unk_2AF640;
    case 12:
      return aDwEhPeSdata8;
    case 16:
      return aDwEhPePcrel;
    case 32:
      return (const char *)&unk_2AA93C;
    case 48:
      return (const char *)&unk_2AA92C;
    case 64:
      return (const char *)&unk_2AA91C;
    case 80:
      return (const char *)&unk_2AA90C;
    case 128:
      return aDwEhPeIndirect;
    default:
      if ( v1 != 255 )
        return result;
      return aDwEhPeOmit;
  }
}
