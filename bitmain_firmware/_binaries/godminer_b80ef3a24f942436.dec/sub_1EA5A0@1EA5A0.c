int __fastcall sub_1EA5A0(int a1, unsigned __int8 *a2, int a3)
{
  int v4; // r0
  unsigned __int8 *v5; // r0
  bool v6; // zf
  unsigned int v7; // r7
  int v8; // r1
  int v9; // r2
  int v10; // r2
  unsigned int v11; // r1
  char *v12; // r0
  int v13; // r0
  unsigned __int8 *v15; // [sp+4h] [bp-20h]
  unsigned __int8 *v16; // [sp+8h] [bp-1Ch]
  unsigned int v17; // [sp+Ch] [bp-18h] BYREF
  char *v18; // [sp+10h] [bp-14h]
  int v19; // [sp+14h] [bp-10h]
  int v20; // [sp+18h] [bp-Ch] BYREF
  char *v21; // [sp+1Ch] [bp-8h]

  v21 = (char *)&loc_110000 + 3;
  v18 = (char *)&loc_110000 + 3;
  v15 = &a2[a3];
  v16 = a2;
  while ( 1 )
  {
LABEL_2:
    if ( v18 == (char *)&loc_110000 + 3 )
      goto LABEL_5;
LABEL_3:
    <core::char::EscapeDebug as core::iter::traits::iterator::Iterator>::next((int)&v17);
    if ( v4 == 1114112 )
      break;
    if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1, v4) )
      return 1;
  }
  v18 = (char *)&loc_110000 + 3;
  while ( 1 )
  {
LABEL_5:
    v5 = v16;
    v6 = v16 == 0;
    if ( v16 )
      v6 = v16 == v15;
    if ( v6 )
      break;
    v7 = *v16++;
    if ( (char)v7 > -1 )
      goto LABEL_14;
    v16 = v5 + 2;
    v8 = v7 & 0x1F;
    v9 = v5[1] & 0x3F;
    if ( v7 <= 0xDF )
    {
      v7 = v9 | (v8 << 6);
LABEL_14:
      v11 = 48;
      v12 = (char *)&loc_110000 + 2;
      switch ( v7 )
      {
        case 0u:
          goto LABEL_28;
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
          goto LABEL_22;
        case 9u:
          v11 = 116;
          break;
        case 0xAu:
          v11 = 110;
          break;
        case 0xDu:
          v11 = 114;
          break;
        case 0x22u:
        case 0x27u:
          goto LABEL_25;
        default:
          goto LABEL_20;
      }
      v12 = (char *)&loc_110000 + 2;
      goto LABEL_28;
    }
    v16 = v5 + 3;
    v10 = v5[2] & 0x3F | (v9 << 6);
    if ( v7 < 0xF0 )
    {
      v7 = v10 | (v8 << 12);
      if ( v7 <= 0x27 )
        goto LABEL_14;
    }
    else
    {
      v16 = v5 + 4;
      v7 = v5[3] & 0x3F | (v10 << 6) | ((v7 & 7) << 18);
      if ( v7 <= 0x27 )
        goto LABEL_14;
    }
LABEL_20:
    if ( v7 == 92 )
    {
LABEL_25:
      v12 = (char *)&loc_110000 + 2;
      v11 = v7;
    }
    else
    {
      if ( v7 == 1114112 )
        break;
LABEL_22:
      if ( core::unicode::unicode_data::grapheme_extend::lookup(v7) || !core::unicode::printable::is_printable(v7) )
      {
        if ( (_UNKNOWN *)v7 == (_UNKNOWN *)((char *)&loc_110000 + 3) )
          break;
        v11 = (__clz(v7 | 1) >> 2) ^ 7;
        v12 = (char *)v7;
      }
      else
      {
        v12 = (char *)&loc_110000;
        v11 = v7;
      }
    }
LABEL_28:
    v19 = 5;
    v18 = v12;
    v17 = v11;
    if ( v12 != (char *)&loc_110000 + 3 )
      goto LABEL_3;
  }
  if ( v21 != (char *)&loc_110000 + 3 )
  {
    <core::char::EscapeDebug as core::iter::traits::iterator::Iterator>::next((int)&v20);
    if ( v13 != 1114112 )
    {
      if ( <core::fmt::Formatter as core::fmt::Write>::write_char(a1, v13) )
        return 1;
      goto LABEL_2;
    }
  }
  return 0;
}
