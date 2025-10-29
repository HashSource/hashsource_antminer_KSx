int __fastcall <str as core::fmt::Debug>::fmt(char *a1, unsigned int a2, int *a3)
{
  int v3; // r5
  int (__fastcall *v4)(int, int); // r9
  unsigned int v6; // r12
  unsigned int v7; // r3
  char *v8; // r2
  char *v9; // r7
  char *v10; // r2
  int v11; // t1
  unsigned int v12; // r8
  char *v13; // r11
  int v14; // r0
  int v15; // r1
  int v16; // r1
  int v17; // r1
  char *v18; // [sp+10h] [bp-14h]
  unsigned int v19; // [sp+14h] [bp-10h]
  int v20; // [sp+18h] [bp-Ch]

  v3 = *a3;
  v20 = a3[1];
  v4 = *(int (__fastcall **)(int, int))(v20 + 16);
  if ( v4(*a3, 34) )
    return 1;
  v6 = a2;
  if ( a2 )
  {
    v7 = 0;
    v8 = a1;
    while ( 1 )
    {
      v9 = v8;
      v11 = *v8;
      v10 = v8 + 1;
      v12 = (unsigned __int8)v11;
      if ( v11 > -1 )
      {
        v19 = v7;
        v18 = v10;
LABEL_7:
        v13 = (char *)&loc_110000 + 2;
        switch ( v12 )
        {
          case 0u:
            goto LABEL_23;
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
            goto LABEL_16;
          case 9u:
            v13 = (char *)&loc_110000 + 2;
            goto LABEL_23;
          case 0xAu:
            v13 = (char *)&loc_110000 + 2;
            goto LABEL_23;
          case 0xDu:
            v13 = (char *)&loc_110000 + 2;
            goto LABEL_23;
          case 0x22u:
            v13 = (char *)&loc_110000 + 2;
            goto LABEL_23;
          default:
            goto LABEL_15;
        }
      }
      v14 = v12 & 0x1F;
      v15 = v9[1] & 0x3F;
      if ( v12 <= 0xDF )
      {
        v12 = v15 | (v14 << 6);
        v19 = v7;
        v18 = v9 + 2;
        if ( v12 <= 0x22 )
          goto LABEL_7;
      }
      else
      {
        v16 = v9[2] & 0x3F | (v15 << 6);
        if ( v12 < 0xF0 )
        {
          v12 = v16 | (v14 << 12);
          v19 = v7;
          v18 = v9 + 3;
          if ( v12 <= 0x22 )
            goto LABEL_7;
        }
        else
        {
          v12 = v9[3] & 0x3F | (v16 << 6) | ((v12 & 7) << 18);
          if ( v12 == 1114112 )
            goto LABEL_38;
          v19 = v7;
          v18 = v9 + 4;
          if ( v12 <= 0x22 )
            goto LABEL_7;
        }
      }
LABEL_15:
      v13 = (char *)&loc_110000 + 2;
      if ( v12 == 92 )
        goto LABEL_23;
LABEL_16:
      if ( (core::unicode::unicode_data::grapheme_extend::lookup(v12) || !core::unicode::printable::is_printable(v12))
        && (_UNKNOWN *)v12 != &loc_110000 )
      {
        break;
      }
      v8 = v18;
      v6 = a2;
      v7 = (unsigned int)&v18[v19 - (_DWORD)v9];
      if ( v18 == &a1[a2] )
        goto LABEL_38;
    }
    v7 = v19;
    v6 = a2;
    v13 = (char *)v12;
LABEL_23:
    if ( v7 )
    {
      if ( v7 >= v6 )
      {
        if ( v7 != v6 )
          goto LABEL_37;
      }
      else if ( a1[v7] <= -65 )
      {
LABEL_37:
        core::str::slice_error_fail(a1, v6, 0, v7, (int)&off_2EF278);
      }
    }
    if ( !(*(int (__fastcall **)(int, char *, unsigned int))(v20 + 12))(v3, a1, v7) )
    {
      v17 = 3;
      if ( v13 > (char *)&loc_10FFFC + 3 )
        v17 = (int)(v13 - 1114112);
      __asm { ADD             PC, R3, R7 }
    }
    return 1;
  }
LABEL_38:
  if ( (*(int (__fastcall **)(int, char *, unsigned int))(v20 + 12))(v3, a1, v6) )
    return 1;
  return v4(v3, 34);
}
