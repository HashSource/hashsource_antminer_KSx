int __fastcall <core::str::iter::EscapeDefault as core::fmt::Display>::fmt(char **a1)
{
  char *v1; // r2
  char *v2; // r2
  int v3; // r3
  int v4; // r3
  bool v5; // zf
  int result; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  int v10; // r7
  int v11; // r3
  char *v12; // r5
  int v13; // r1
  char *v14; // [sp+8h] [bp-Ch]

  v1 = a1[3];
  if ( v1 != (char *)&loc_110000 + 3 )
  {
    v3 = 3;
    if ( v1 > (char *)&loc_10FFFC + 3 )
      v3 = (int)(v1 - 1114112);
    __asm { ADD             PC, R7, R3 }
  }
  v2 = a1[6];
  v14 = a1[1];
  if ( v2 != (char *)&loc_110000 + 3 )
  {
    v4 = 3;
    if ( v2 > (char *)&loc_10FFFC + 3 )
      v4 = (int)(v2 - 1114112);
    __asm { ADD             PC, R7, R12 }
  }
  v5 = v14 == 0;
  if ( v14 )
    v5 = v14 == *a1;
  if ( v5 )
    return 0;
  v7 = *v14;
  v8 = (unsigned __int8)v7;
  if ( v7 > -1 )
  {
LABEL_22:
    v12 = (char *)&loc_110000 + 2;
    switch ( v8 )
    {
      case 9u:
      case 0xAu:
      case 0xDu:
      case 0x22u:
      case 0x27u:
        goto LABEL_27;
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
        goto LABEL_24;
      default:
        if ( v8 != 92 )
        {
LABEL_24:
          if ( v8 - 32 >= 0x5F )
            v12 = (char *)v8;
          else
            v12 = (char *)&loc_110000;
        }
LABEL_27:
        v13 = 3;
        if ( v12 > (char *)&loc_10FFFC + 3 )
          v13 = (int)(v12 - 1114112);
        __asm { ADD             PC, R3, R7 }
        return result;
    }
  }
  v9 = v7 & 0x1F;
  v10 = v14[1] & 0x3F;
  if ( v8 <= 0xDF )
  {
    v8 = v10 | (v9 << 6);
    goto LABEL_22;
  }
  v11 = v14[2] & 0x3F | (v10 << 6);
  if ( v8 < 0xF0 )
  {
    v8 = v11 | (v9 << 12);
    goto LABEL_22;
  }
  v8 = v14[3] & 0x3F | (v11 << 6) | ((v9 & 7) << 18);
  if ( v8 != 1114112 )
    goto LABEL_22;
  return 0;
}
