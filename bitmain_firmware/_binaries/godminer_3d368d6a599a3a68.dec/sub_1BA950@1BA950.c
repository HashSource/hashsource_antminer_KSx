int __fastcall sub_1BA950(__int64 a1)
{
  __int64 v1; // r4
  unsigned int v2; // r0
  int v3; // r1
  bool v4; // zf
  int v5; // r2
  int v6; // r3
  int v7; // r2
  __int64 v8; // r2
  int v9; // r1
  bool v10; // zf
  int v11; // r2

  v1 = a1;
  v2 = *(unsigned __int16 *)(HIDWORD(a1) + 16);
  if ( v2 <= 0x2130 )
  {
    switch ( *(_WORD *)(HIDWORD(a1) + 16) )
    {
      case 2:
      case 0x19:
      case 0x2A:
      case 0x40:
      case 0x46:
      case 0x48:
      case 0x4A:
      case 0x4D:
        goto LABEL_43;
      case 9:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 43;
        goto LABEL_62;
      case 0xB:
      case 0xC:
      case 0xD:
        switch ( *(_DWORD *)HIDWORD(a1) )
        {
          case 1:
          case 8:
            goto LABEL_47;
          case 2:
            LODWORD(a1) = *(unsigned __int8 *)(HIDWORD(a1) + 8);
            goto LABEL_75;
          case 3:
            LODWORD(a1) = *(unsigned __int16 *)(HIDWORD(a1) + 8);
            goto LABEL_75;
          case 4:
            LODWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
LABEL_75:
            HIDWORD(a1) = 0;
            break;
          case 5:
          case 7:
            a1 = *(_QWORD *)(HIDWORD(a1) + 8);
            break;
          case 6:
            HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 12);
            if ( SHIDWORD(a1) <= -1 )
              goto LABEL_79;
            LODWORD(a1) = *(_DWORD *)(HIDWORD(v1) + 8);
            break;
          default:
            goto LABEL_79;
        }
        *(_DWORD *)v1 = 7;
        *(_DWORD *)(v1 + 4) = 0;
        *(_QWORD *)(v1 + 8) = a1;
        return a1;
      case 0x10:
        if ( *(_QWORD *)HIDWORD(a1) != 10 )
          goto LABEL_79;
        LODWORD(a1) = 0;
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
        v7 = 16;
        goto LABEL_69;
      case 0x12:
      case 0x39:
      case 0x3B:
      case 0x57:
      case 0x59:
        if ( sub_1BB22C(HIDWORD(a1)) != 1 )
          goto LABEL_79;
        goto LABEL_41;
      case 0x13:
        LODWORD(a1) = (unsigned __int16)sub_1BB368(HIDWORD(a1));
        if ( (unsigned __int16)a1 != 1 )
          goto LABEL_79;
        *(_QWORD *)v1 = 38;
        *(_WORD *)(v1 + 8) = WORD2(a1);
        return a1;
      case 0x17:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 36;
        goto LABEL_62;
      case 0x20:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 42;
        goto LABEL_62;
      case 0x22:
      case 0x2F:
      case 0x37:
      case 0x4E:
      case 0x4F:
      case 0x50:
      case 0x71:
      case 0x7E:
      case 0x7F:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
        goto LABEL_3;
      case 0x2C:
      case 0x55:
        if ( *(_QWORD *)HIDWORD(a1) != 10 )
          goto LABEL_79;
        LODWORD(a1) = 0;
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
        v7 = 22;
        goto LABEL_69;
      case 0x2E:
      case 0x51:
        if ( sub_1BB22C(HIDWORD(a1)) == 1 )
          goto LABEL_41;
LABEL_3:
        v3 = *(_DWORD *)HIDWORD(v1) & 0x3F;
        v4 = v3 == 8;
        if ( v3 != 8 )
          v4 = *(_DWORD *)HIDWORD(v1) == 1;
        if ( !v4 )
          goto LABEL_79;
        goto LABEL_47;
      case 0x32:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 35;
        goto LABEL_62;
      case 0x33:
        if ( sub_1BB22C(HIDWORD(a1)) != 1 )
          goto LABEL_79;
        a1 = 0x2700000000LL;
        goto LABEL_42;
      case 0x36:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 41;
        goto LABEL_62;
      case 0x38:
        if ( sub_1BB22C(HIDWORD(a1)) == 1 )
        {
LABEL_41:
          a1 = 0x700000000LL;
          goto LABEL_42;
        }
LABEL_43:
        v9 = *(_DWORD *)HIDWORD(v1) & 0x3F;
        v10 = v9 == 8;
        if ( v9 != 8 )
          v10 = *(_DWORD *)HIDWORD(v1) == 1;
        if ( v10 )
        {
LABEL_47:
          HIDWORD(a1) = *(_DWORD *)(HIDWORD(v1) + 8);
          v11 = *(_DWORD *)(HIDWORD(v1) + 12);
          *(_DWORD *)v1 = 8;
          *(_DWORD *)(v1 + 4) = 0;
          *(_DWORD *)(v1 + 8) = HIDWORD(a1);
          *(_DWORD *)(v1 + 12) = v11;
          LODWORD(a1) = 0;
          return a1;
        }
        if ( *(_QWORD *)HIDWORD(v1) != 10 )
          goto LABEL_79;
        LODWORD(a1) = 0;
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(v1) + 8);
        v7 = 17;
        break;
      case 0x3A:
      case 0x58:
        if ( sub_1BB22C(HIDWORD(a1)) != 1 )
          goto LABEL_79;
        a1 = 0x2C00000000LL;
        goto LABEL_42;
      case 0x3E:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 32;
        goto LABEL_62;
      case 0x42:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 40;
        goto LABEL_62;
      case 0x43:
        if ( *(_QWORD *)HIDWORD(a1) != 10 )
          goto LABEL_79;
        LODWORD(a1) = 0;
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
        v7 = 20;
        goto LABEL_69;
      case 0x4C:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 37;
        goto LABEL_62;
      case 0x5E:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 33;
        goto LABEL_62;
      case 0x65:
        LODWORD(a1) = sub_1BB2C4(HIDWORD(a1));
        if ( (a1 & 1) == 0 )
          goto LABEL_79;
        v8 = 34;
LABEL_62:
        *(_QWORD *)v1 = v8;
        *(_BYTE *)(v1 + 8) = BYTE4(a1);
        return a1;
      case 0x72:
        if ( *(_QWORD *)HIDWORD(a1) != 10 )
          goto LABEL_79;
        LODWORD(a1) = 0;
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
        v7 = 28;
        goto LABEL_69;
      case 0x73:
        goto LABEL_12;
      case 0x74:
        goto LABEL_22;
      case 0x79:
        if ( *(_QWORD *)HIDWORD(a1) != 10 )
          goto LABEL_79;
        LODWORD(a1) = 0;
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
        v7 = 21;
        goto LABEL_69;
      case 0x8C:
        if ( *(_QWORD *)HIDWORD(a1) != 10 )
          goto LABEL_79;
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
        LODWORD(a1) = 0;
        v7 = 18;
        goto LABEL_69;
      default:
        goto LABEL_79;
    }
    goto LABEL_69;
  }
  if ( v2 != 8497 )
  {
    if ( v2 == 8498 )
    {
LABEL_22:
      if ( *(_QWORD *)HIDWORD(a1) == 10 )
      {
        LODWORD(a1) = 0;
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
        v7 = 23;
        goto LABEL_69;
      }
    }
    else if ( v2 == 8499 )
    {
LABEL_12:
      if ( *(_QWORD *)HIDWORD(a1) == 10 )
      {
        LODWORD(a1) = 0;
        HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 8);
        v7 = 11;
LABEL_69:
        *(_DWORD *)v1 = v7;
        *(_DWORD *)(v1 + 4) = 0;
        *(_DWORD *)(v1 + 8) = HIDWORD(a1);
        return a1;
      }
    }
LABEL_79:
    LODWORD(a1) = sub_1BDB68(v1, HIDWORD(v1));
    return a1;
  }
  if ( sub_1BB22C(HIDWORD(a1)) != 1 )
    goto LABEL_79;
  a1 = 0x2D00000000LL;
LABEL_42:
  *(_DWORD *)(v1 + 8) = v5;
  *(_DWORD *)v1 = HIDWORD(a1);
  *(_DWORD *)(v1 + 4) = 0;
  *(_DWORD *)(v1 + 12) = v6;
  return a1;
}
