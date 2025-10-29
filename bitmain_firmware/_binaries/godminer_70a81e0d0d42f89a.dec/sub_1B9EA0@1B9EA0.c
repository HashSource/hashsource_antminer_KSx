int __fastcall sub_1B9EA0(int result, int *a2, int a3, int a4)
{
  int *v4; // r5
  _QWORD *v5; // r6
  int v6; // r10
  int v7; // r11
  int v8; // r4
  int v9; // r8
  int v10; // r2
  int v11; // r12
  int v12; // r9
  unsigned int v13; // r3
  unsigned int v14; // r5
  unsigned int v15; // r7
  unsigned int v16; // r6
  char v17; // r1
  int v18; // lr
  int v19; // r4
  unsigned int v20; // r7
  int v21; // r8
  int v22; // r3
  int v23; // r1
  unsigned int v24; // r6
  unsigned int v25; // r5
  char v26; // r1
  int v27; // r5
  int v28; // r10
  unsigned int v29; // lr
  int v30; // r7
  int v31; // r6
  int v32; // r4
  int v33; // r2
  int *v34; // r1
  unsigned int v35; // r1
  unsigned int v36; // r0
  char v37; // r1
  int v41; // [sp+10h] [bp-24h]
  int *v42; // [sp+14h] [bp-20h]
  _DWORD *v43; // [sp+18h] [bp-1Ch]
  int v44; // [sp+1Ch] [bp-18h]
  int v45; // [sp+28h] [bp-Ch]
  unsigned __int16 v46; // [sp+2Ch] [bp-8h]
  int v47; // [sp+2Eh] [bp-6h]
  unsigned __int16 v48; // [sp+32h] [bp-2h]

  v4 = (int *)(result + 8);
  v5 = (_QWORD *)(result + 16);
  v6 = *a2;
  v7 = a2[1];
  v8 = 0;
  if ( v7 )
  {
    v9 = v6 + v7;
    v10 = 0;
    v42 = (int *)(result + 8);
    v11 = 0;
    v43 = (_DWORD *)(result + 16);
    v12 = 0;
    v44 = result;
    v8 = 0;
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)(v6 + v10);
      if ( v8 == 63 && v13 >= 2 )
      {
        v5 = (_QWORD *)(result + 16);
        v4 = (int *)(result + 8);
        *a2 = v6 + v10 + 1;
        a2[1] = ~v10 + v7;
        v17 = 6;
        LOBYTE(v13) = 0;
        goto LABEL_15;
      }
      v14 = v13 & 0x7F;
      v15 = v14 << (v8 & 0x3F);
      if ( (v8 & 0x3F) - 32 >= 0 )
        v15 = 0;
      v11 |= v15;
      v16 = v14 >> (32 - (v8 & 0x3F));
      if ( (v8 & 0x3F) - 32 >= 0 )
        v16 = v14 << ((v8 & 0x3F) - 32);
      v12 |= v16;
      if ( (char)v13 > -1 )
        break;
      ++v10;
      v8 += 7;
      if ( v7 == v10 )
      {
        v5 = (_QWORD *)(result + 16);
        v8 = 0;
        v4 = (int *)(result + 8);
        *a2 = v9;
        a2[1] = 0;
        goto LABEL_13;
      }
    }
    v18 = 0;
    v19 = v6 + v10 + 1;
    *a2 = v19;
    a2[1] = v7 - 1 - v10;
    LOBYTE(v20) = 0;
    if ( v7 - 1 == v10 )
    {
LABEL_27:
      v46 = v48;
      v26 = 19;
      v45 = v47;
LABEL_29:
      *v42 = v19;
      *(_DWORD *)(result + 12) = v18;
      *v43 = 46;
      *(_DWORD *)(result + 20) = 0;
      *(_WORD *)(result + 6) = v46;
      *(_DWORD *)(result + 2) = v45;
      *(_BYTE *)(result + 1) = v20;
      *(_BYTE *)result = v26;
      return v46;
    }
    else
    {
      v21 = 0;
      v22 = 0;
      v18 = 0;
      while ( 1 )
      {
        v23 = v6 + v10;
        v20 = *(unsigned __int8 *)(v6 + v10 + 1);
        if ( v18 == 63 && v20 >= 2 )
        {
          LOBYTE(v20) = 0;
          *a2 = v23 + 2;
          v26 = 6;
          a2[1] = v7 - v10 - 2;
          goto LABEL_29;
        }
        v24 = v20 & 0x7F;
        v25 = v24 << (v18 & 0x3F);
        if ( (v18 & 0x3F) - 32 >= 0 )
          v25 = 0;
        v21 |= v25;
        v19 = v24 >> (32 - (v18 & 0x3F));
        if ( (v18 & 0x3F) - 32 >= 0 )
          v19 = v24 << ((v18 & 0x3F) - 32);
        v22 |= v19;
        if ( (char)v20 > -1 )
          break;
        ++v10;
        v18 += 7;
        if ( v10 - v7 == -1 )
        {
          v19 = v6 + v7;
          v18 = 0;
          *a2 = v6 + v7;
          a2[1] = 0;
          goto LABEL_27;
        }
      }
      v27 = v23 + 2;
      v28 = 0;
      LOBYTE(v29) = 0;
      *a2 = v23 + 2;
      a2[1] = v7 - v10 - 2;
      if ( v10 - v7 == -2 )
      {
LABEL_41:
        v45 = v47;
        v37 = 19;
        v46 = v48;
LABEL_43:
        *v42 = v27;
        v42[1] = v28;
        *v43 = 46;
        v43[1] = 0;
        *(_WORD *)(v44 + 6) = v46;
        *(_DWORD *)(v44 + 2) = v45;
        *(_BYTE *)(v44 + 1) = v29;
        *(_BYTE *)v44 = v37;
        return v46;
      }
      else
      {
        v30 = v10 - v7 + 3;
        v31 = v23 + 3;
        v41 = v23 + 1 + ~v10 + v7;
        v28 = 0;
        v32 = 0;
        v33 = 0;
        v34 = a2;
        while ( 1 )
        {
          v29 = *(unsigned __int8 *)(v31 - 1);
          if ( v33 == 63 && v29 >= 2 )
          {
            *v34 = v31;
            v34[1] = -v30;
            v37 = 6;
            LOBYTE(v29) = 0;
            goto LABEL_43;
          }
          v35 = v29 & 0x7F;
          v27 = v35 << (v33 & 0x3F);
          if ( (v33 & 0x3F) - 32 >= 0 )
            v27 = 0;
          v28 |= v27;
          v36 = v35 >> (32 - (v33 & 0x3F));
          if ( (v33 & 0x3F) - 32 >= 0 )
            v36 = v35 << ((v33 & 0x3F) - 32);
          v32 |= v36;
          if ( (char)v29 > -1 )
            break;
          v34 = a2;
          ++v30;
          ++v31;
          v33 += 7;
          if ( v30 == 1 )
          {
            v27 = v41;
            v28 = 0;
            *a2 = v41;
            a2[1] = 0;
            goto LABEL_41;
          }
        }
        a2[1] = -v30;
        *a2 = v31;
        *(_QWORD *)v43 = 31;
        v43[4] = v11;
        v43[5] = v12;
        v43[6] = v21;
        v43[7] = v22;
        v43[8] = v28;
        v43[9] = v32;
        *(_DWORD *)v44 = 0;
        *(_DWORD *)(v44 + 4) = 0;
        *(_DWORD *)(v44 + 8) = 0;
        *(_DWORD *)(v44 + 12) = 0;
        *(_DWORD *)(v44 + 24) = a3;
        *(_DWORD *)(v44 + 28) = a4;
        return v44;
      }
    }
  }
  else
  {
    LOBYTE(v13) = 0;
    v9 = *a2;
LABEL_13:
    v46 = v48;
    v17 = 19;
    v45 = v47;
LABEL_15:
    *v4 = v9;
    v4[1] = v8;
    *v5 = 46;
    *(_WORD *)(result + 6) = v46;
    *(_DWORD *)(result + 2) = v45;
    *(_BYTE *)(result + 1) = v13;
    *(_BYTE *)result = v17;
  }
  return result;
}
