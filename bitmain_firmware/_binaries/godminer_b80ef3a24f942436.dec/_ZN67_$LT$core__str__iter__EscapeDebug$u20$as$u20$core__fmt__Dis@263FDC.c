int __fastcall <core::str::iter::EscapeDebug as core::fmt::Display>::fmt(char **a1)
{
  char *v1; // r9
  char *v2; // r1
  char *v3; // r4
  char *v4; // r8
  char *v5; // r2
  int v6; // r5
  int v7; // r11
  char *v8; // r1
  int v9; // r2
  char *v10; // r1
  int v11; // r4
  char *v12; // r1
  int v13; // r1
  bool v14; // zf
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r2
  int v20; // r0
  unsigned int v21; // r5
  int v22; // r0
  int v23; // r1
  int v24; // r1
  char *v25; // r9
  int v26; // r1
  int result; // r0
  char *v28; // [sp+Ch] [bp-30h]
  char *v29; // [sp+10h] [bp-2Ch]
  char *v30; // [sp+14h] [bp-28h]
  char *v31; // [sp+18h] [bp-24h]

  v2 = a1[12];
  v3 = (char *)&loc_110004;
  if ( v2 == (char *)&loc_110004 )
  {
    v4 = (char *)&loc_110004;
  }
  else
  {
    v5 = a1[9];
    if ( v5 == (_BYTE *)&loc_110000 + 3 )
    {
      v1 = (char *)&loc_110000 + 3;
    }
    else
    {
      if ( v5 != (char *)&loc_110004 )
      {
        v6 = 3;
        if ( v5 > (char *)&loc_10FFFC + 3 )
          v6 = (int)(v5 - 1114112);
        __asm { ADD             PC, R3, R5 }
      }
      v1 = (_BYTE *)&loc_110004;
    }
    v4 = (char *)&loc_110000 + 3;
    if ( v2 != (char *)&loc_110000 + 3 )
    {
      v7 = 3;
      if ( v2 > (char *)&loc_10FFFC + 3 )
        v7 = (int)(v2 - 1114112);
      __asm { ADD             PC, R2, R3 }
    }
    v8 = a1[15];
    if ( v8 != (char *)&loc_110000 + 3 )
    {
      v9 = 3;
      if ( v8 > (char *)&loc_10FFFC + 3 )
        v9 = (int)(v8 - 1114112);
      __asm { ADD             PC, R3, R2 }
    }
    v30 = (char *)&loc_110000 + 3;
  }
  v10 = a1[3];
  if ( v10 != (char *)&loc_110004 )
  {
    v3 = (char *)&loc_110000 + 3;
    v29 = a1[1];
    if ( v10 != (char *)&loc_110000 + 3 )
    {
      v11 = 3;
      if ( v10 > (char *)&loc_10FFFC + 3 )
        v11 = (int)(v10 - 1114112);
      __asm { ADD             PC, R2, R3 }
    }
    v12 = a1[6];
    v28 = *a1;
    if ( v12 != (char *)&loc_110000 + 3 )
    {
      v19 = 3;
      if ( v12 > (char *)&loc_10FFFC + 3 )
        v19 = (int)(v12 - 1114112);
      __asm { ADD             PC, R3, R2 }
    }
    v31 = (char *)&loc_110000 + 3;
  }
  if ( v4 == (char *)&loc_110000 + 3 )
  {
    if ( (unsigned int)(v1 - 1114115) >= 2 )
    {
      v16 = 3;
      if ( v1 > (char *)&loc_10FFFC + 3 )
        v16 = (int)(v1 - 1114112);
      __asm { ADD             PC, R3, R4 }
    }
    if ( v30 != (char *)&loc_110000 + 3 )
    {
      v17 = 3;
      if ( v30 > (char *)&loc_10FFFC + 3 )
        v17 = (int)(v30 - 1114112);
      __asm { ADD             PC, R2, R3 }
    }
  }
  else if ( v4 != (char *)&loc_110004 )
  {
    v13 = 3;
    if ( v4 > (char *)&loc_10FFFC + 3 )
      v13 = (int)(v4 - 1114112);
    __asm { ADD             PC, R2, R3 }
  }
  if ( v3 != (char *)&loc_110004 )
  {
    if ( v3 != (char *)&loc_110000 + 3 )
    {
      v18 = 3;
      if ( v3 > (char *)&loc_10FFFC + 3 )
        v18 = (int)(v3 - 1114112);
      __asm { ADD             PC, R2, R3 }
    }
    v14 = v29 == 0;
    if ( v29 )
      v14 = v29 == v28;
    if ( !v14 )
    {
      v20 = *v29;
      v21 = (unsigned __int8)v20;
      if ( v20 <= -1 )
      {
        v22 = v20 & 0x1F;
        v23 = v29[1] & 0x3F;
        if ( v21 <= 0xDF )
        {
          v21 = v23 | (v22 << 6);
        }
        else
        {
          v24 = v29[2] & 0x3F | (v23 << 6);
          if ( v21 >= 0xF0 )
          {
            v21 = v29[3] & 0x3F | (v24 << 6) | ((v22 & 7) << 18);
            if ( v21 != 1114112 )
              goto LABEL_63;
            goto LABEL_40;
          }
          v21 = v24 | (v22 << 12);
        }
      }
LABEL_63:
      v25 = (char *)&loc_110000 + 2;
      switch ( v21 )
      {
        case 0u:
        case 9u:
        case 0xAu:
        case 0xDu:
        case 0x22u:
        case 0x27u:
          goto LABEL_68;
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
          goto LABEL_65;
        default:
          if ( v21 != 92 )
          {
LABEL_65:
            if ( core::unicode::printable::is_printable(v21) )
              v25 = (char *)&loc_110000;
            else
              v25 = (char *)v21;
          }
LABEL_68:
          v26 = 3;
          if ( v25 > (char *)&loc_10FFFC + 3 )
            v26 = (int)(v25 - 1114112);
          __asm { ADD             PC, R3, R5 }
          return result;
      }
    }
LABEL_40:
    if ( v31 != (char *)&loc_110000 + 3 )
    {
      v15 = 3;
      if ( v31 > (char *)&loc_10FFFC + 3 )
        v15 = (int)(v31 - 1114112);
      __asm { ADD             PC, R2, R3 }
    }
  }
  return 0;
}
