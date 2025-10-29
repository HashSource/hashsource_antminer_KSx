int __fastcall gimli::read::value::Value::shl(
        int result,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // r4
  unsigned int v7; // lr
  int v8; // r7
  int v9; // r3
  int v10; // r2
  char v11; // r12
  unsigned int v12; // r6
  int v13; // r1
  int v14; // r2
  bool v15; // nf
  char v16; // r1
  int v17; // r1
  bool v18; // cf

  HIDWORD(v6) = *a3;
  LODWORD(v6) = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v8 = *((_DWORD *)a3 + 3);
  v9 = *((__int16 *)a3 + 1);
  v10 = (char)a3[1];
  switch ( HIDWORD(v6) )
  {
    case 0:
    case 8:
      goto LABEL_10;
    case 1:
      if ( v10 > -1 )
        goto LABEL_3;
      goto LABEL_17;
    case 2:
LABEL_3:
      v7 = (unsigned __int8)v10;
      goto LABEL_6;
    case 3:
      if ( v9 > -1 )
        goto LABEL_5;
      goto LABEL_17;
    case 4:
LABEL_5:
      v7 = (unsigned __int16)v9;
LABEL_6:
      v8 = 0;
      goto LABEL_10;
    case 5:
      if ( (int)v6 > -1 )
        goto LABEL_8;
      goto LABEL_17;
    case 6:
LABEL_8:
      v8 = 0;
      v7 = v6;
      goto LABEL_10;
    case 7:
      if ( v8 <= -1 )
        goto LABEL_17;
LABEL_10:
      switch ( *(_BYTE *)a2 )
      {
        case 0:
          LOWORD(v9) = a5;
          v11 = 0;
          v12 = __clz(a5) + 32;
          if ( a6 )
            v12 = __clz(a6);
          LODWORD(v6) = (__PAIR64__(v8, v7) - (64 - v12)) >> 32;
          if ( __PAIR64__(v8, v7) >= 64 - v12 )
            goto LABEL_24;
          v6 = *(_QWORD *)(a2 + 8);
          v13 = v6 & a5;
          LOWORD(v9) = v7 & 0x3F;
          v14 = (((unsigned int)v6 & a5) >> (32 - (v7 & 0x3F))) | ((HIDWORD(v6) & a6) << (v7 & 0x3F));
          v15 = (int)((v7 & 0x3F) - 32) < 0;
          if ( (int)((v7 & 0x3F) - 32) >= 0 )
            v14 = v13 << ((v7 & 0x3F) - 32);
          a2 = v13 << v9;
          goto LABEL_43;
        case 1:
          v17 = *(unsigned __int8 *)(a2 + 1);
          v14 = v7 & 7;
          v11 = 1;
          goto LABEL_28;
        case 2:
          v17 = *(unsigned __int8 *)(a2 + 1);
          v14 = v7 & 7;
          v11 = 2;
LABEL_28:
          LODWORD(v6) = v17 << v14;
          a2 = -(v8 + (v7 > 7));
          if ( __PAIR64__(v8, v7) > 7 )
            LOBYTE(v6) = 0;
          goto LABEL_45;
        case 3:
          v11 = 3;
          v14 = -(v8 + (v7 > 0xF));
          if ( __PAIR64__(v8, v7) <= 0xF )
            goto LABEL_20;
          goto LABEL_22;
        case 4:
          v11 = 4;
          v14 = -(v8 + (v7 > 0xF));
          if ( __PAIR64__(v8, v7) <= 0xF )
          {
LABEL_20:
            a2 = *(unsigned __int16 *)(a2 + 2);
            v14 = (unsigned __int16)v7;
            v9 = a2 << v7;
          }
          else
          {
LABEL_22:
            LOWORD(v9) = 0;
          }
          goto LABEL_45;
        case 5:
          v11 = 5;
          goto LABEL_33;
        case 6:
          v11 = 6;
LABEL_33:
          v18 = __PAIR64__(v8, v7) <= 0x1F;
          v14 = -(v8 + (v7 > 0x1F));
          if ( __PAIR64__(v8, v7) > 0x1F )
            v7 = 0;
          else
            a2 = *(_DWORD *)(a2 + 4);
          if ( v18 )
            v7 = a2 << v7;
          goto LABEL_45;
        case 7:
          v11 = 7;
          if ( __PAIR64__(v8, v7) > 0x3F )
            goto LABEL_24;
          goto LABEL_40;
        case 8:
          v11 = 8;
          if ( __PAIR64__(v8, v7) > 0x3F )
          {
LABEL_24:
            a2 = 0;
            v14 = 0;
          }
          else
          {
LABEL_40:
            v6 = *(_QWORD *)(a2 + 8);
            v14 = ((unsigned int)v6 >> (32 - v7)) | (HIDWORD(v6) << v7);
            v15 = (int)(v7 - 32) < 0;
            if ( (int)(v7 - 32) >= 0 )
              v14 = (_DWORD)v6 << (v7 - 32);
            a2 = (_DWORD)v6 << v7;
LABEL_43:
            if ( !v15 )
              a2 = 0;
          }
LABEL_45:
          *(_WORD *)(result + 10) = v9;
          *(_DWORD *)(result + 20) = v14;
          *(_BYTE *)(result + 9) = v6;
          *(_BYTE *)(result + 8) = v11;
          *(_DWORD *)(result + 12) = v7;
          *(_DWORD *)(result + 16) = a2;
          *(_QWORD *)result = 0;
          break;
        default:
          v16 = 44;
          goto LABEL_26;
      }
      break;
    default:
LABEL_17:
      v16 = 46;
LABEL_26:
      *(_BYTE *)(result + 8) = v16;
      *(_QWORD *)result = 1;
      break;
  }
  return result;
}
