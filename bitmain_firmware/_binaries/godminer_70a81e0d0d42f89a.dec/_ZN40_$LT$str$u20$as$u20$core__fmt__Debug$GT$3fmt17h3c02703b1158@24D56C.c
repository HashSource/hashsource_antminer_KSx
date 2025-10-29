int __fastcall <str as core::fmt::Debug>::fmt(int a1, char *a2, int *a3)
{
  int v3; // r5
  int (__fastcall *v4)(int, int); // r9
  char *v6; // r12
  char *v7; // r3
  int v8; // r1
  char *v9; // r2
  char *v10; // r7
  char *v11; // r2
  int v12; // t1
  unsigned int v13; // r8
  char *v14; // r11
  int v15; // r0
  int v16; // r1
  char *v17; // [sp+10h] [bp-14h]
  int v18; // [sp+14h] [bp-10h]
  int v19; // [sp+18h] [bp-Ch]

  v3 = *a3;
  v19 = a3[1];
  v4 = *(int (__fastcall **)(int, int))(v19 + 16);
  if ( v4(*a3, 34) )
    return 1;
  v6 = a2;
  if ( a2 )
  {
    v7 = 0;
    v8 = (int)&a2[a1];
    v9 = (char *)a1;
    while ( 1 )
    {
      v10 = v9;
      v12 = *v9;
      v11 = v9 + 1;
      v13 = (unsigned __int8)v12;
      if ( v12 > -1 )
      {
        v18 = (int)v7;
        v17 = v11;
LABEL_7:
        v14 = (char *)&loc_110000 + 2;
        switch ( v13 )
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
            v14 = (char *)&loc_110000 + 2;
            goto LABEL_23;
          case 0xAu:
            v14 = (char *)&loc_110000 + 2;
            goto LABEL_23;
          case 0xDu:
            v14 = (char *)&loc_110000 + 2;
            goto LABEL_23;
          case 0x22u:
            v14 = (char *)&loc_110000 + 2;
            goto LABEL_23;
          default:
            goto LABEL_15;
        }
      }
      v15 = v13 & 0x1F;
      v8 = v10[1] & 0x3F;
      if ( v13 <= 0xDF )
      {
        v13 = v8 | (v15 << 6);
        v18 = (int)v7;
        v17 = v10 + 2;
        if ( v13 <= 0x22 )
          goto LABEL_7;
      }
      else
      {
        v8 = v10[2] & 0x3F | (v8 << 6);
        if ( v13 < 0xF0 )
        {
          v13 = v8 | (v15 << 12);
          v18 = (int)v7;
          v17 = v10 + 3;
          if ( v13 <= 0x22 )
            goto LABEL_7;
        }
        else
        {
          v8 = v10[3] & 0x3F | (v8 << 6);
          v13 = v8 | ((v13 & 7) << 18);
          if ( v13 == 1114112 )
            goto LABEL_38;
          v18 = (int)v7;
          v17 = v10 + 4;
          if ( v13 <= 0x22 )
            goto LABEL_7;
        }
      }
LABEL_15:
      v14 = (char *)&loc_110000 + 2;
      if ( v13 == 92 )
        goto LABEL_23;
LABEL_16:
      if ( (core::unicode::unicode_data::grapheme_extend::lookup(v13, v8) || !core::unicode::printable::is_printable(v13))
        && (_UNKNOWN *)v13 != &loc_110000 )
      {
        break;
      }
      v8 = v18;
      v9 = v17;
      v6 = a2;
      v7 = &v17[v18 - (_DWORD)v10];
      if ( v17 == &a2[a1] )
        goto LABEL_38;
    }
    v7 = (char *)v18;
    v6 = a2;
    v14 = (char *)v13;
LABEL_23:
    if ( v7 )
    {
      if ( v7 >= v6 )
      {
        if ( v7 != v6 )
          goto LABEL_37;
      }
      else if ( v7[a1] <= -65 )
      {
LABEL_37:
        core::str::slice_error_fail(a1);
      }
    }
    if ( !(*(int (__fastcall **)(int, int, char *))(v19 + 12))(v3, a1, v7) )
    {
      v16 = 3;
      if ( v14 > (char *)&loc_10FFFC + 3 )
        v16 = (int)(v14 - 1114112);
      __asm { ADD             PC, R3, R7 }
    }
    return 1;
  }
LABEL_38:
  if ( (*(int (__fastcall **)(int, int, char *))(v19 + 12))(v3, a1, v6) )
    return 1;
  return v4(v3, 34);
}
