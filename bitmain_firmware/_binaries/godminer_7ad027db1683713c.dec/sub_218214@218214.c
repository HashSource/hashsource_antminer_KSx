int __fastcall sub_218214(_DWORD *a1, int a2)
{
  int v4; // r4
  unsigned int v6; // r0
  char *v7; // r1
  int v8; // r0
  _DWORD v9[3]; // [sp+4h] [bp-Ch] BYREF

  if ( !a1 )
    return 0;
  v4 = 1;
  if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1) )
    return v4;
  while ( 2 )
  {
    v6 = 48;
    v7 = (char *)&loc_110000 + 2;
    switch ( a2 )
    {
      case 0:
        goto LABEL_20;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 11:
      case 12:
      case 14:
      case 15:
      case 16:
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
      case 32:
      case 33:
      case 35:
      case 36:
      case 37:
      case 38:
        goto LABEL_11;
      case 9:
        v6 = 116;
        v7 = (char *)&loc_110000 + 2;
        goto LABEL_20;
      case 10:
        v6 = 110;
        v7 = (char *)&loc_110000 + 2;
        goto LABEL_20;
      case 13:
        v6 = 114;
        v7 = (char *)&loc_110000 + 2;
        goto LABEL_20;
      case 34:
        a2 = 1114112;
        if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1) )
          return v4;
        continue;
      case 39:
        goto LABEL_14;
      default:
        if ( a2 == 92 )
        {
LABEL_14:
          v6 = a2;
          v7 = (char *)&loc_110000 + 2;
LABEL_20:
          v9[0] = v6;
          v9[1] = v7;
          v9[2] = 5;
          while ( 1 )
          {
            <core::char::EscapeDebug as core::iter::traits::iterator::Iterator>::next((int)v9);
            if ( v8 == 1114112 )
              break;
            if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1) )
              return v4;
          }
          a2 = 1114112;
          continue;
        }
        if ( a2 != 1114112 )
        {
LABEL_11:
          if ( core::unicode::unicode_data::grapheme_extend::lookup(a2) || !core::unicode::printable::is_printable(a2) )
          {
            v7 = (char *)a2;
            v6 = (__clz(a2 | 1) >> 2) ^ 7;
          }
          else
          {
            v7 = (char *)&loc_110000;
            v6 = a2;
          }
          goto LABEL_20;
        }
        return <core::fmt::Formatter as core::fmt::Write>::write_char(a1);
    }
  }
}
