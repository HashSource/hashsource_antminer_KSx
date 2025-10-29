int __fastcall gimli::read::value::Value::shr(
        int result,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  int v6; // r5
  int v7; // r4
  unsigned int v8; // r12
  int v9; // r7
  __int64 v10; // r2
  char v11; // r1
  char v12; // lr
  bool v13; // cf
  bool v14; // nf
  __int64 v15; // r6

  v6 = *a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v9 = *((_DWORD *)a3 + 3);
  HIDWORD(v10) = *((__int16 *)a3 + 1);
  LODWORD(v10) = (char)a3[1];
  switch ( v6 )
  {
    case 0:
    case 8:
      goto LABEL_10;
    case 1:
      if ( (int)v10 > -1 )
        goto LABEL_3;
      goto LABEL_12;
    case 2:
LABEL_3:
      v8 = (unsigned __int8)v10;
      goto LABEL_6;
    case 3:
      if ( SHIDWORD(v10) > -1 )
        goto LABEL_5;
      goto LABEL_12;
    case 4:
LABEL_5:
      v8 = WORD2(v10);
LABEL_6:
      v9 = 0;
      goto LABEL_10;
    case 5:
      if ( v7 > -1 )
        goto LABEL_8;
      goto LABEL_12;
    case 6:
LABEL_8:
      v9 = 0;
      v8 = v7;
      goto LABEL_10;
    case 7:
      if ( v9 <= -1 )
        goto LABEL_12;
LABEL_10:
      switch ( *(_BYTE *)a2 )
      {
        case 0:
          LOWORD(v10) = a5;
          v12 = 0;
          LOBYTE(v7) = a6;
          HIDWORD(v10) = __clz(a5) + 32;
          if ( a6 )
            HIDWORD(v10) = __clz(a6);
          if ( __PAIR64__(v9, v8) >= (unsigned int)(64 - HIDWORD(v10)) )
            goto LABEL_39;
          v15 = *(_QWORD *)(a2 + 8);
          HIDWORD(v10) = HIDWORD(v15) & a6;
          LOWORD(v10) = v8 & 0x3F;
          a2 = (((unsigned int)v15 & a5) >> (v8 & 0x3F)) | ((HIDWORD(v15) & a6) << (32 - (v8 & 0x3F)));
          v14 = (int)((v8 & 0x3F) - 32) < 0;
          if ( (int)((v8 & 0x3F) - 32) >= 0 )
            a2 = HIDWORD(v10) >> ((v8 & 0x3F) - 32);
          HIDWORD(v10) >>= v10;
          goto LABEL_36;
        case 1:
        case 3:
        case 5:
        case 7:
          v11 = 45;
          goto LABEL_29;
        case 2:
          LOWORD(v10) = v8 & 7;
          v12 = 2;
          v7 = *(unsigned __int8 *)(a2 + 1) >> (v8 & 7);
          a2 = -(v9 + (v8 > 7));
          if ( __PAIR64__(v9, v8) > 7 )
            LOBYTE(v7) = 0;
          goto LABEL_41;
        case 4:
          v12 = 4;
          if ( __PAIR64__(v9, v8) <= 0xF )
          {
            a2 = *(unsigned __int16 *)(a2 + 2);
            LODWORD(v10) = a2 >> v8;
          }
          else
          {
            LOWORD(v10) = 0;
          }
          goto LABEL_41;
        case 6:
          v12 = 6;
          v13 = __PAIR64__(v9, v8) <= 0x1F;
          LODWORD(v10) = -(v9 + (v8 > 0x1F));
          if ( __PAIR64__(v9, v8) > 0x1F )
            v8 = 0;
          else
            a2 = *(_DWORD *)(a2 + 4);
          if ( v13 )
            v8 = a2 >> v8;
          goto LABEL_41;
        case 8:
          v12 = 8;
          LODWORD(v10) = -(v9 + (v8 > 0x3F));
          if ( __PAIR64__(v9, v8) > 0x3F )
          {
LABEL_39:
            a2 = 0;
            HIDWORD(v10) = 0;
          }
          else
          {
            v10 = *(_QWORD *)(a2 + 8);
            a2 = ((unsigned int)v10 >> v8) | (HIDWORD(v10) << (32 - v8));
            LOWORD(v10) = v8 - 32;
            v14 = (int)(v8 - 32) < 0;
            if ( (int)(v8 - 32) >= 0 )
              a2 = HIDWORD(v10) >> v10;
            HIDWORD(v10) >>= v8;
LABEL_36:
            if ( !v14 )
              HIDWORD(v10) = 0;
          }
LABEL_41:
          *(_WORD *)(result + 10) = v10;
          *(_DWORD *)(result + 20) = HIDWORD(v10);
          *(_BYTE *)(result + 9) = v7;
          *(_BYTE *)(result + 8) = v12;
          *(_DWORD *)(result + 12) = v8;
          *(_DWORD *)(result + 16) = a2;
          *(_QWORD *)result = 0;
          break;
        default:
          v11 = 44;
          goto LABEL_29;
      }
      break;
    default:
LABEL_12:
      v11 = 46;
LABEL_29:
      *(_BYTE *)(result + 8) = v11;
      *(_QWORD *)result = 1;
      break;
  }
  return result;
}
