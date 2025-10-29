int __fastcall gimli::read::value::Value::shra(int result, int a2, unsigned __int8 *a3, int a4, unsigned __int64 a5)
{
  int v5; // lr
  int v6; // r3
  int v7; // r7
  int v8; // r12
  unsigned __int64 v9; // r4
  int v10; // r2
  char v11; // r1
  unsigned __int64 v12; // kr18_8
  unsigned int v13; // r6
  char v14; // r3
  int v15; // r7
  unsigned int v16; // r2
  char v17; // r3
  int v18; // r2
  char v19; // r3
  int v20; // r1
  int v21; // r3
  unsigned int v22; // r1

  HIDWORD(v9) = *a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v8 = *((_DWORD *)a3 + 3);
  LODWORD(v9) = *((__int16 *)a3 + 1);
  v10 = (char)a3[1];
  switch ( HIDWORD(v9) )
  {
    case 0:
    case 8:
      goto LABEL_10;
    case 1:
      if ( v10 > -1 )
        goto LABEL_3;
      goto LABEL_12;
    case 2:
LABEL_3:
      v7 = (unsigned __int8)v10;
      goto LABEL_6;
    case 3:
      if ( (int)v9 > -1 )
        goto LABEL_5;
      goto LABEL_12;
    case 4:
LABEL_5:
      v7 = (unsigned __int16)v9;
LABEL_6:
      v8 = 0;
      goto LABEL_10;
    case 5:
      if ( v6 > -1 )
        goto LABEL_8;
      goto LABEL_12;
    case 6:
LABEL_8:
      v8 = 0;
      v7 = v6;
      goto LABEL_10;
    case 7:
      if ( v8 <= -1 )
        goto LABEL_12;
LABEL_10:
      switch ( *(_BYTE *)a2 )
      {
        case 0:
          v9 = (a5 >> 1) + 1;
          v13 = __clz(a5) + 32;
          v12 = (*(_QWORD *)(a2 + 8) & a5 ^ v9) - v9;
          LOWORD(a2) = WORD2(v12);
          if ( HIDWORD(a5) )
            v13 = __clz(HIDWORD(a5));
          if ( __PAIR64__(v8, v7) >= 64 - v13 )
          {
            v18 = SHIDWORD(v12) >> 31;
            v19 = 0;
            goto LABEL_35;
          }
          v14 = v7 & 0x3F;
          v15 = (v7 & 0x3F) - 32;
          v5 = SHIDWORD(v12) >> v14;
          v16 = (unsigned int)v12 >> v14;
          v17 = 32 - v14;
          if ( v15 >= 0 )
            v5 = SHIDWORD(v12) >> 31;
          v18 = v16 | (HIDWORD(v12) << v17);
          v19 = 0;
          if ( v15 >= 0 )
            v18 = SHIDWORD(v12) >> v15;
          break;
        case 1:
          a2 = *(char *)(a2 + 1);
          v18 = v7 & 7;
          if ( __PAIR64__(v8, v7) > 7 )
            v18 = 7;
          v19 = 1;
          LODWORD(v9) = a2 >> v18;
          break;
        case 2:
        case 4:
        case 6:
        case 8:
          v11 = 45;
          goto LABEL_33;
        case 3:
          v20 = *(__int16 *)(a2 + 2);
          v18 = v7 & 0xF;
          if ( __PAIR64__(v8, v7) > 0xF )
            v18 = 15;
          v19 = 3;
          a2 = v20 >> v18;
          break;
        case 5:
          a2 = *(_DWORD *)(a2 + 4);
          v18 = v7 & 0x1F;
          if ( __PAIR64__(v8, v7) > 0x1F )
            v18 = 31;
          v19 = 5;
          v8 = a2 >> v18;
          break;
        case 7:
          v21 = *(_DWORD *)(a2 + 12);
          if ( __PAIR64__(v8, v7) <= 0x3F )
          {
            v22 = *(_DWORD *)(a2 + 8);
            v5 = v21 >> v7;
            if ( v7 - 32 >= 0 )
              v5 = v21 >> 31;
            a2 = v22 >> v7;
            v18 = a2 | (v21 << (32 - v7));
            if ( v7 - 32 >= 0 )
              v18 = v21 >> (v7 - 32);
            v19 = 7;
          }
          else
          {
            v18 = v21 >> 31;
            v19 = 7;
LABEL_35:
            v5 = v18;
          }
          break;
        default:
          v11 = 44;
          goto LABEL_33;
      }
      *(_BYTE *)(result + 8) = v19;
      *(_DWORD *)(result + 16) = v18;
      *(_WORD *)(result + 10) = a2;
      *(_BYTE *)(result + 9) = v9;
      *(_DWORD *)(result + 12) = v8;
      *(_DWORD *)(result + 20) = v5;
      *(_QWORD *)result = 0;
      break;
    default:
LABEL_12:
      v11 = 46;
LABEL_33:
      *(_BYTE *)(result + 8) = v11;
      *(_QWORD *)result = 1;
      break;
  }
  return result;
}
