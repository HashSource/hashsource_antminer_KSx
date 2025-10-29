int __fastcall sub_1BE898(int result, _DWORD *a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v5; // r2
  unsigned int v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r3
  int v10; // r1
  int v11; // r3
  unsigned int v12; // r1
  unsigned int v13; // r3
  unsigned int v14; // r3
  unsigned int v15; // r4
  unsigned int v16; // r12
  char v17; // r1
  unsigned int v18; // r1
  unsigned int v19; // r3
  __int64 v20; // r2
  unsigned int v21; // lr
  unsigned int v22; // r3
  unsigned int v23; // r4
  unsigned int v24; // r3
  int v25; // r3
  unsigned int v26; // r1
  int v27; // r3
  __int16 v28; // [sp+4h] [bp-24h]
  char v29; // [sp+6h] [bp-22h]
  int v30; // [sp+8h] [bp-20h]
  _DWORD *v31; // [sp+Fh] [bp-19h]
  __int64 v32; // [sp+18h] [bp-10h]

  switch ( *a5 )
  {
    case 0x1A:
      v5 = a2[20];
      v6 = a2[21];
      v7 = a5[2];
      if ( v6 < v7 )
        goto LABEL_19;
      v8 = v5 + v7;
      if ( v6 == v7 )
        goto LABEL_27;
      v9 = v6 - v7;
      v10 = 0;
      do
      {
        if ( !*(_BYTE *)(v8 + v10) )
          goto LABEL_41;
        ++v10;
      }
      while ( v9 != v10 );
      goto LABEL_27;
    case 0x1B:
      v11 = a2[26];
      if ( !v11 )
        goto LABEL_15;
      v5 = *(_DWORD *)(v11 + 88);
      v12 = a5[2];
      v13 = *(_DWORD *)(v11 + 92);
      if ( v13 < v12 )
        goto LABEL_19;
      v8 = v5 + v12;
      if ( v13 == v12 )
        goto LABEL_27;
      v14 = v13 - v12;
      v10 = 0;
      while ( *(_BYTE *)(v8 + v10) )
      {
        if ( v14 == ++v10 )
          goto LABEL_27;
      }
      goto LABEL_41;
    case 0x1D:
      v15 = a2[23];
      v16 = a2[22];
      if ( v15 < a4 )
        goto LABEL_17;
      a3 = (unsigned __int8)a3;
      v21 = a5[2] * (unsigned __int8)a3;
      if ( !is_mul_ok(a5[2], (unsigned __int8)a3) )
      {
        v17 = 53;
        goto LABEL_44;
      }
      v23 = v15 - a4;
      v16 += a4;
      if ( v23 < v21 )
      {
LABEL_17:
        a4 = 0;
        v17 = 19;
LABEL_44:
        *(_BYTE *)(result + 3) = v29;
        *(_WORD *)(result + 1) = v28;
        *(_DWORD *)(result + 4) = a3;
        *(_DWORD *)(result + 8) = v16;
        *(_DWORD *)(result + 12) = a4;
        *(_BYTE *)result = v17;
        return result;
      }
      v24 = v23 - v21;
      v16 += v21;
      if ( (unsigned __int8)a3 == 8 )
      {
        if ( v24 < 8 )
        {
          HIBYTE(v32) = v16;
          *(_WORD *)((char *)&v31 + 1) = v16 >> 8;
          LOBYTE(v31) = v16;
          a3 = v32 >> 24;
          HIBYTE(v31) = HIBYTE(v16);
          v17 = 19;
          v16 = (unsigned int)v31;
          v30 = v32;
LABEL_43:
          v29 = BYTE2(v30);
          a4 = 0;
          v28 = v30;
          goto LABEL_44;
        }
        a3 = *(_DWORD *)(v16 + 4);
        if ( a3 )
        {
          v17 = 53;
          goto LABEL_43;
        }
      }
      else if ( v24 < 4 )
      {
        v17 = 19;
        goto LABEL_43;
      }
      v5 = a2[20];
      v25 = *(_DWORD *)v16;
      v26 = a2[21];
      if ( v26 < *(_DWORD *)v16 )
      {
LABEL_19:
        *(_DWORD *)(result + 12) = 0;
        *(_DWORD *)(result + 8) = v5;
        *(_BYTE *)result = 19;
        return result;
      }
      v8 = v5 + v25;
      if ( v26 != *(_DWORD *)v16 )
      {
        v27 = v26 - v25;
        v10 = 0;
        do
        {
          if ( !*(_BYTE *)(v8 + v10) )
            goto LABEL_41;
          ++v10;
        }
        while ( v27 != v10 );
      }
LABEL_27:
      *(_QWORD *)(result + 8) = v8;
      *(_BYTE *)result = 19;
      return result;
    case 0x1E:
      v5 = a2[18];
      v18 = a2[19];
      v19 = a5[2];
      if ( v18 < v19 )
        goto LABEL_19;
      v8 = v5 + v19;
      if ( v18 == v19 )
        goto LABEL_27;
      v22 = v18 - v19;
      v10 = 0;
      while ( *(_BYTE *)(v8 + v10) )
      {
        if ( v22 == ++v10 )
          goto LABEL_27;
      }
LABEL_41:
      *(_DWORD *)(result + 8) = v10;
      *(_DWORD *)(result + 4) = v8;
      *(_BYTE *)result = 75;
      return result;
    case 0x1F:
      v20 = *((_QWORD *)a5 + 1);
      *(_BYTE *)result = 75;
      *(_QWORD *)(result + 4) = v20;
      return result;
    default:
LABEL_15:
      *(_BYTE *)result = 69;
      return result;
  }
}
