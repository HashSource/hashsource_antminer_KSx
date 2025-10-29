int __fastcall sub_22A5DC(int a1, int a2)
{
  char *v4; // r1
  int v5; // r4
  char *v7; // kr00_4
  unsigned int v8; // r0
  char *v9; // r1
  int v10; // r0
  _DWORD v11[3]; // [sp+4h] [bp-Ch] BYREF

  if ( !a1 )
    return 0;
  v5 = 1;
  if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1, 39) )
    return v5;
  while ( 2 )
  {
    v7 = v4;
    v8 = 48;
    v9 = (char *)&loc_110000 + 2;
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
        v8 = 116;
        v9 = (char *)&loc_110000 + 2;
        goto LABEL_20;
      case 10:
        v8 = 110;
        v9 = (char *)&loc_110000 + 2;
        goto LABEL_20;
      case 13:
        v8 = 114;
        v9 = (char *)&loc_110000 + 2;
        goto LABEL_20;
      case 34:
        a2 = 1114112;
        if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1, 34) )
          return v5;
        continue;
      case 39:
        goto LABEL_14;
      default:
        v9 = v7;
        if ( a2 == 92 )
        {
LABEL_14:
          v8 = a2;
          v9 = (char *)&loc_110000 + 2;
LABEL_20:
          v11[0] = v8;
          v11[1] = v9;
          v11[2] = 5;
          while ( 1 )
          {
            v10 = <core::char::EscapeDebug as core::iter::traits::iterator::Iterator>::next(v11);
            if ( v10 == 1114112 )
              break;
            if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1, v10) )
              return v5;
          }
          a2 = 1114112;
          continue;
        }
        if ( a2 != 1114112 )
        {
LABEL_11:
          if ( core::unicode::unicode_data::grapheme_extend::lookup(a2, v9)
            || !core::unicode::printable::is_printable(a2) )
          {
            v9 = (char *)a2;
            v8 = (__clz(a2 | 1) >> 2) ^ 7;
          }
          else
          {
            v9 = (char *)&loc_110000;
            v8 = a2;
          }
          goto LABEL_20;
        }
        return <core::fmt::Formatter as core::fmt::Write>::write_char(a1, 39);
    }
  }
}
