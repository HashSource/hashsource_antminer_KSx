unsigned int __fastcall sub_1BA2AC(int a1, unsigned int *a2, unsigned int a3, int a4, int a5)
{
  int v5; // r6
  int v7; // r8
  unsigned int v8; // r12
  unsigned int v9; // r11
  unsigned int v10; // r7
  unsigned int v11; // lr
  unsigned __int16 v12; // r7
  int v13; // r5
  int v14; // r5
  unsigned int result; // r0
  unsigned int v16; // r10
  int v17; // r7
  char v18; // r7
  bool v19; // cc
  char v20; // r4
  unsigned __int8 v21; // r0
  unsigned int v22; // r5
  unsigned int v23; // r4
  unsigned int v24; // r5
  int v25; // r7
  int v26; // r11
  unsigned int v27; // r8
  unsigned int v28; // r2
  unsigned int v29; // r9
  unsigned int v30; // r2
  unsigned int v31; // r0
  unsigned int v32; // t1
  unsigned int v33; // r0
  unsigned int v34; // t1
  int v35; // r7
  unsigned int v36; // r0
  unsigned int v37; // t1
  unsigned int v38; // r3
  char v39; // r1
  unsigned int v40; // r1
  unsigned int v41; // r2
  unsigned int v42; // [sp+0h] [bp-48h]
  unsigned int v43; // [sp+4h] [bp-44h]
  __int16 v44; // [sp+8h] [bp-40h]
  char v45; // [sp+Ch] [bp-3Ch]
  unsigned int v46; // [sp+10h] [bp-38h]
  unsigned int v47; // [sp+14h] [bp-34h]
  unsigned int v48; // [sp+18h] [bp-30h]
  int v49; // [sp+20h] [bp-28h]
  unsigned int v50; // [sp+24h] [bp-24h]
  int v51; // [sp+28h] [bp-20h]
  unsigned __int8 v52; // [sp+2Ch] [bp-1Ch]
  unsigned int v53; // [sp+30h] [bp-18h]
  int v54; // [sp+42h] [bp-6h]
  __int16 v55; // [sp+46h] [bp-2h]

  if ( !a5 )
    goto LABEL_71;
  v7 = a4 + 16 * a5;
  v8 = *a2;
  v9 = a2[1];
  v10 = a3 >> 8;
  v11 = 0;
  v53 = a3 >> 8;
  if ( (a3 & 0xFFFF0000) == 0x20000 )
    LOBYTE(v10) = a3;
  v52 = v10;
  while ( 2 )
  {
    v12 = *(_WORD *)(a4 + 10);
    a4 += 16;
    v13 = v5;
LABEL_6:
    v5 = v13;
    v14 = v12;
    switch ( v12 )
    {
      case 1u:
        v21 = a3;
        goto LABEL_50;
      case 2u:
      case 3u:
      case 4u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xDu:
      case 0xFu:
      case 0x15u:
      case 0x16u:
      case 0x18u:
      case 0x1Au:
      case 0x1Bu:
      case 0x22u:
      case 0x23u:
        goto LABEL_8;
      case 5u:
      case 0x12u:
      case 0x26u:
      case 0x2Au:
        v21 = 2;
        goto LABEL_50;
      case 6u:
      case 0x13u:
      case 0x1Cu:
      case 0x28u:
      case 0x2Cu:
        v21 = 4;
        goto LABEL_50;
      case 7u:
      case 0x14u:
      case 0x20u:
      case 0x24u:
        v21 = 8;
        goto LABEL_50;
      case 0xBu:
      case 0xCu:
      case 0x11u:
      case 0x25u:
      case 0x29u:
        v21 = 1;
        goto LABEL_50;
      case 0xEu:
      case 0x17u:
      case 0x1Du:
      case 0x1Fu:
        goto LABEL_22;
      case 0x10u:
        v21 = v52;
        goto LABEL_50;
      case 0x19u:
      case 0x21u:
        v21 = 0;
        goto LABEL_50;
      case 0x1Eu:
        v21 = 16;
        goto LABEL_50;
      case 0x27u:
      case 0x2Bu:
        v21 = 3;
        goto LABEL_50;
      default:
        if ( (unsigned int)v12 - 7968 < 2 )
        {
LABEL_22:
          v21 = v53;
LABEL_50:
          v11 += v21;
          goto LABEL_51;
        }
LABEL_8:
        if ( !v11 )
        {
          result = v8;
          v16 = v9;
          v17 = v12 - 3;
          goto LABEL_13;
        }
        if ( v9 < v11 )
        {
          *(_DWORD *)(a1 + 8) = v8;
          *(_DWORD *)(a1 + 12) = 0;
          *(_BYTE *)a1 = 19;
          return 19;
        }
        result = v8 + v11;
        v16 = v9 - v11;
        *a2 = v8 + v11;
        a2[1] = v9 - v11;
        v17 = v12 - 3;
        if ( (unsigned int)v17 > 0x20 )
        {
LABEL_29:
          if ( (unsigned int)(v14 - 7937) >= 2 )
          {
LABEL_72:
            *(_BYTE *)a1 = 12;
            return 12;
          }
LABEL_30:
          if ( !v16 )
          {
LABEL_67:
            *(_DWORD *)(a1 + 2) = v54;
            *(_WORD *)(a1 + 6) = v55;
            *(_DWORD *)(a1 + 12) = 0;
            *(_DWORD *)(a1 + 8) = result;
            *(_BYTE *)(a1 + 1) = v17;
            *(_BYTE *)a1 = 19;
            return 19;
          }
          v22 = 1 - v16;
          v8 += v11 + 1;
          while ( 1 )
          {
            v17 = *(char *)(v8 - 1);
            if ( v17 > -1 )
              break;
            ++v22;
            ++v8;
            if ( v22 == 1 )
            {
              result += v16;
              *a2 = result;
              a2[1] = 0;
              goto LABEL_67;
            }
          }
          v9 = -v22;
          *a2 = v8;
          a2[1] = -v22;
          v11 = 0;
LABEL_51:
          if ( a4 == v7 )
          {
            if ( v11 )
            {
              result = *a2;
              v38 = a2[1];
              if ( v38 >= v11 )
              {
                *a2 = result + v11;
                a2[1] = v38 - v11;
                *(_BYTE *)a1 = 75;
                return 75;
              }
              else
              {
LABEL_82:
                *(_DWORD *)(a1 + 8) = result;
                *(_DWORD *)(a1 + 12) = 0;
                *(_BYTE *)a1 = 19;
                return 19;
              }
            }
LABEL_71:
            *(_BYTE *)a1 = 75;
            return 75;
          }
          continue;
        }
LABEL_13:
        switch ( v17 )
        {
          case 0:
            if ( v16 >= 2 )
            {
              v32 = *(unsigned __int16 *)result;
              v31 = result + 2;
              v11 = v32;
              v9 = v16 - 2;
              v44 = v32;
              *a2 = v31;
              a2[1] = v16 - 2;
              v8 = v31;
              goto LABEL_51;
            }
            *(_QWORD *)(a1 + 8) = result;
            *(_WORD *)(a1 + 2) = v44;
            *(_BYTE *)a1 = 19;
            return 19;
          case 1:
            if ( v16 >= 4 )
            {
              v34 = *(_DWORD *)result;
              v33 = result + 4;
              v11 = v34;
              v9 = v16 - 4;
              v43 = v34;
              *a2 = v33;
              a2[1] = v16 - 4;
              v8 = v33;
              goto LABEL_51;
            }
            v41 = v43;
LABEL_81:
            *(_DWORD *)(a1 + 4) = v41;
            goto LABEL_82;
          case 2:
          case 3:
          case 4:
          case 8:
          case 9:
          case 11:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 20:
          case 22:
          case 25:
          case 26:
          case 27:
          case 28:
          case 29:
          case 30:
            goto LABEL_72;
          case 5:
            if ( !v16 )
              goto LABEL_80;
            v9 = v16 - 1;
            v8 += v11 + 1;
            v35 = 0;
            while ( *(_BYTE *)(v8 - 1) )
            {
              --v9;
              ++v8;
              ++v35;
              if ( v9 == -1 )
              {
LABEL_80:
                v41 = v42;
                goto LABEL_81;
              }
            }
            *a2 = v8;
            v11 = 0;
            a2[1] = v9;
            v42 = result;
            goto LABEL_51;
          case 6:
          case 21:
            v23 = 0;
            if ( !v16 )
            {
              LOBYTE(v27) = 0;
              v30 = result;
              goto LABEL_76;
            }
            v8 += v11 + 1;
            v49 = v7;
            v50 = a3;
            v24 = 1 - v16;
            v51 = a1;
            v11 = 0;
            v25 = 0;
            v26 = 0;
            while ( 1 )
            {
              v27 = *(unsigned __int8 *)(v8 - 1);
              if ( v26 == 63 && v27 >= 2 )
              {
                a2[1] = -v24;
                *a2 = v8;
                LOBYTE(v27) = 0;
                v23 = v46;
                result = 6;
                a1 = v51;
                v40 = v48;
                v30 = v47;
                goto LABEL_78;
              }
              v28 = v27 & 0x7F;
              v29 = v28 << (v26 & 0x3F);
              if ( (v26 & 0x3F) - 32 >= 0 )
                v29 = 0;
              v11 |= v29;
              v23 = v28 >> (32 - (v26 & 0x3F));
              if ( (v26 & 0x3F) - 32 >= 0 )
                v23 = v28 << ((v26 & 0x3F) - 32);
              v25 |= v23;
              v30 = (char)v27;
              if ( (char)v27 > -1 )
                break;
              ++v24;
              ++v8;
              v26 += 7;
              if ( v24 == 1 )
              {
                a1 = v51;
                v30 = result + v16;
                v23 = 0;
                *a2 = result + v16;
                a2[1] = 0;
LABEL_76:
                result = 19;
                goto LABEL_77;
              }
            }
            a1 = v51;
            v9 = -v24;
            *a2 = v8;
            a2[1] = -v24;
            if ( !v25 )
            {
              v48 = v11;
              v47 = v11;
              v46 = 0;
              a3 = v50;
              v7 = v49;
              goto LABEL_51;
            }
            LOBYTE(v27) = 0;
            result = 53;
LABEL_77:
            v40 = v48;
LABEL_78:
            *(_BYTE *)(a1 + 1) = v27;
            *(_BYTE *)a1 = result;
            *(_DWORD *)(a1 + 4) = v40;
            *(_DWORD *)(a1 + 8) = v30;
            *(_DWORD *)(a1 + 12) = v23;
            return result;
          case 7:
            if ( v16 )
            {
              v37 = *(unsigned __int8 *)result;
              v36 = result + 1;
              v11 = v37;
              v9 = v16 - 1;
              v45 = v37;
              *a2 = v36;
              a2[1] = v16 - 1;
              v8 = v36;
              goto LABEL_51;
            }
            *(_QWORD *)(a1 + 8) = result;
            *(_BYTE *)(a1 + 1) = v45;
            *(_BYTE *)a1 = 19;
            return 19;
          case 10:
          case 12:
          case 18:
          case 23:
          case 24:
          case 31:
          case 32:
            goto LABEL_30;
          case 19:
            if ( !v16 )
            {
              v39 = 19;
              goto LABEL_86;
            }
            v9 = v16 - 1;
            v8 = result + 1;
            v18 = *(_BYTE *)result;
            v11 = 0;
            *a2 = result + 1;
            v13 = v18 & 0x7F;
            a2[1] = v16 - 1;
            v19 = v18 <= -1;
            v12 = v18 & 0x7F;
            if ( !v19 )
              goto LABEL_6;
            if ( v16 == 1 )
              goto LABEL_83;
            v20 = *(_BYTE *)(result + 1);
            v9 = v16 - 2;
            v8 = result + 2;
            *a2 = result + 2;
            a2[1] = v16 - 2;
            v13 |= (v20 & 0x7F) << 7;
            v12 = v13;
            if ( v20 > -1 )
              goto LABEL_6;
            if ( v16 == 2 )
            {
LABEL_83:
              v39 = 19;
              result = v8;
              goto LABEL_86;
            }
            v9 = v16 - 3;
            v8 = result + 3;
            *a2 = result + 3;
            a2[1] = v16 - 3;
            result = *(unsigned __int8 *)(result + 2);
            if ( result <= 3 )
            {
              v13 |= result << 14;
              v12 = v13;
              goto LABEL_6;
            }
            v39 = 6;
LABEL_86:
            *(_DWORD *)(a1 + 8) = result;
            *(_DWORD *)(a1 + 12) = 0;
            *(_WORD *)(a1 + 2) = v5;
            *(_BYTE *)a1 = v39;
            return result;
          default:
            goto LABEL_29;
        }
    }
  }
}
