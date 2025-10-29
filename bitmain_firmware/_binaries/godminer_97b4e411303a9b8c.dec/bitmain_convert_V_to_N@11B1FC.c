int bitmain_convert_V_to_N()
{
  double v0; // d0

  switch ( dword_30BCF8 )
  {
    case 34:
      return (int)(1215.89444 - v0 * 59.931507);
    case 65:
    case 66:
      return (int)(765.411764 - v0 * 35.833333);
    case 67:
      return (int)(933.240365 - v0 * 59.806034);
    case 97:
      return (int)(1144.50226 - v0 * 52.243589);
    case 98:
    case 100:
    case 101:
    case 102:
      return (int)(0.0 - v0);
    case 106:
      return (int)(1133.0 - v0 * 70.83);
    case 113:
    case 114:
    case 117:
    case 119:
      return (int)(1190.93534 - v0 * 78.742588);
    case 115:
    case 120:
      return (int)(1280.57782 - v0 * 73.979365);
    case 116:
    case 118:
      return (int)(1156.10758 - v0 * 76.090494);
    case 193:
    case 194:
      if ( dword_30BCFC == -2147482880 || (unsigned __int8)dword_30BCFC <= 3u )
        return (int)(1275.0 - v0 * 85.0);
      else
        return (int)(1083.75 - v0 * 70.8333333);
    default:
      return -1;
  }
}
