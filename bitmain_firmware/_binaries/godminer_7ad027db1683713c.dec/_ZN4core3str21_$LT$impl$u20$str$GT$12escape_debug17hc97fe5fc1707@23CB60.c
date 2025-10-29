char *__fastcall core::str::<impl str>::escape_debug(signed int a1, char *a2, int a3)
{
  _DWORD *v5; // r4
  char *v6; // r6
  unsigned int v7; // r7
  int v8; // r1
  int v9; // r1
  char *v10; // r1
  signed int v11; // kr04_4

  v5 = (_DWORD *)a1;
  if ( !a3 )
  {
    v10 = (char *)&loc_110000 + 3;
    v6 = a2;
    goto LABEL_22;
  }
  v6 = a2 + 1;
  a1 = *a2;
  v7 = (unsigned __int8)a1;
  if ( a1 <= -1 )
  {
    a1 &= 0x1Fu;
    v8 = a2[1] & 0x3F;
    if ( v7 <= 0xDF )
    {
      v7 = v8 | (a1 << 6);
      v6 = a2 + 2;
    }
    else
    {
      v9 = a2[2] & 0x3F | (v8 << 6);
      if ( v7 < 0xF0 )
      {
        v7 = v9 | (a1 << 12);
        v6 = a2 + 3;
        if ( v7 > 0x27 )
          goto LABEL_14;
      }
      else
      {
        a1 &= 7u;
        v6 = a2 + 4;
        v7 = a2[3] & 0x3F | (v9 << 6) | (a1 << 18);
        if ( v7 > 0x27 )
        {
LABEL_14:
          if ( v7 == 92 )
          {
LABEL_17:
            a1 = v7;
            v10 = (char *)&loc_110000 + 2;
          }
          else if ( v7 == 1114112 )
          {
            v10 = (char *)&loc_110000 + 3;
          }
          else
          {
LABEL_18:
            if ( core::unicode::unicode_data::grapheme_extend::lookup(v7) || !core::unicode::printable::is_printable(v7) )
            {
              a1 = (__clz(v7 | 1) >> 2) ^ 7;
              v10 = (char *)v7;
            }
            else
            {
              v10 = (char *)&loc_110000;
              a1 = v7;
            }
          }
          goto LABEL_22;
        }
      }
    }
  }
  v11 = a1;
  a1 = 48;
  v10 = (char *)&loc_110000 + 2;
  switch ( v7 )
  {
    case 0u:
      break;
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
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
      goto LABEL_18;
    case 9u:
      a1 = 116;
      v10 = (char *)&loc_110000 + 2;
      break;
    case 0xAu:
      a1 = 110;
      v10 = (char *)&loc_110000 + 2;
      break;
    case 0xDu:
      a1 = 114;
      v10 = (char *)&loc_110000 + 2;
      break;
    case 0x22u:
    case 0x27u:
      goto LABEL_17;
    default:
      a1 = v11;
      goto LABEL_14;
  }
LABEL_22:
  v5[8] = a1;
  v5[9] = v10;
  v5[10] = 5;
  v5[15] = (char *)&loc_110000 + 3;
  v5[12] = (char *)&loc_110000 + 3;
  v5[6] = (char *)&loc_110000 + 3;
  v5[3] = (char *)&loc_110000 + 3;
  *v5 = &a2[a3];
  v5[1] = v6;
  return &a2[a3];
}
