int __fastcall sub_1D63E0(_DWORD *a1, int *a2, unsigned int a3)
{
  int result; // r0
  char *v6; // lr
  char *v7; // lr
  int v8; // r9
  int v9; // r6
  int v10; // r4
  int v11; // r7
  int v12; // t1
  char v13; // r2
  bool v14; // nf
  char v15; // r10
  unsigned int v16; // r3
  unsigned int v17; // r5
  char v18; // r2
  unsigned int v19; // r2
  int v20; // r4
  int v21; // r9
  int v22; // r6
  int v23; // r7
  int v24; // t1
  char v25; // r2
  bool v26; // nf
  char v27; // r10
  unsigned int v28; // r5
  unsigned int v29; // r3
  char v30; // r2
  unsigned int v31; // r2
  int v32; // r0
  int v33; // r1

  if ( (unsigned __int8)a3 == 80 )
  {
    *a1 = ((*a1 + 3) & 0xFFFFFFFC) + 4;
    return 0;
  }
  else
  {
    result = 1;
    if ( (unsigned __int8)a3 != 255 )
    {
      switch ( a3 & 0xF )
      {
        case 0u:
        case 3u:
        case 0xBu:
          v6 = (char *)(*a1 + 4);
          goto LABEL_24;
        case 1u:
          v6 = (char *)*a1;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          do
          {
            v24 = *v6++;
            v23 = v24;
            v25 = v20 & 0x3F;
            v27 = (v20 & 0x3F) - 32;
            v26 = (v20 & 0x3F) - 32 < 0;
            v20 += 7;
            v28 = v24 & 0x7F;
            v29 = v28 << v25;
            v30 = 32 - v25;
            if ( !v26 )
              v29 = 0;
            v21 |= v29;
            v31 = v28 >> v30;
            if ( !v26 )
              v31 = v28 << v27;
            v22 |= v31;
          }
          while ( v23 < 0 );
          goto LABEL_24;
        case 2u:
          v6 = (char *)(*a1 + 2);
          goto LABEL_24;
        case 4u:
        case 0xCu:
          v6 = (char *)(*a1 + 8);
          goto LABEL_24;
        case 9u:
          v7 = (char *)*a1;
          v8 = 0;
          v9 = 0;
          v10 = 0;
          do
          {
            v12 = *v7++;
            v11 = v12;
            v13 = v10 & 0x3F;
            v15 = (v10 & 0x3F) - 32;
            v14 = (v10 & 0x3F) - 32 < 0;
            v10 += 7;
            v16 = v12 & 0x7F;
            v17 = v16 << v13;
            v18 = 32 - v13;
            if ( !v14 )
              v17 = 0;
            v8 |= v17;
            v19 = v16 >> v18;
            if ( !v14 )
              v19 = v16 << v15;
            v9 |= v19;
          }
          while ( v11 < 0 );
          *a1 = v7;
          goto LABEL_25;
        case 0xAu:
          v6 = (char *)(*a1 + 2);
LABEL_24:
          *a1 = v6;
LABEL_25:
          switch ( (a3 >> 4) & 7 )
          {
            case 0u:
            case 1u:
              goto LABEL_31;
            case 2u:
              v32 = *a2;
              v33 = a2[1];
              goto LABEL_30;
            case 3u:
              v32 = a2[2];
              v33 = a2[3];
LABEL_30:
              (*(void (__fastcall **)(int))(v33 + 20))(v32);
              goto LABEL_31;
            case 4u:
              if ( !a2[5] )
                return result;
LABEL_31:
              result = 0;
              break;
            default:
              return result;
          }
          break;
        default:
          return result;
      }
    }
  }
  return result;
}
