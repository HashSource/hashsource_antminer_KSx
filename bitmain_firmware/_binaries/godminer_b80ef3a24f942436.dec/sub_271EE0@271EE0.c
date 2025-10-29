void *__fastcall sub_271EE0(void *a1, int **a2, int *a3)
{
  int *v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // lr
  unsigned __int64 v8; // kr00_8
  int v9; // r7
  int v10; // r1
  int v11; // r11
  int v12; // r6
  int v13; // r5
  __int64 v14; // r2
  int v15; // r9
  unsigned int v16; // r10
  int v17; // r12
  unsigned int v18; // r1
  int v19; // r2
  __int16 v20; // r7
  _WORD *v21; // r1
  int v23; // [sp+8h] [bp-40C4h]
  int v26; // [sp+18h] [bp-40B4h]
  int v27; // [sp+1Ch] [bp-40B0h]
  _DWORD *v28; // [sp+20h] [bp-40ACh]
  int *v29; // [sp+24h] [bp-40A8h]
  unsigned int v30; // [sp+2Ch] [bp-40A0h]
  unsigned int v31; // [sp+30h] [bp-409Ch]
  int v32; // [sp+34h] [bp-4098h]
  unsigned int *v33; // [sp+38h] [bp-4094h]
  int *v34; // [sp+3Ch] [bp-4090h]
  _BYTE src[8192]; // [sp+40h] [bp-408Ch] BYREF
  _BYTE v36[8192]; // [sp+2048h] [bp-2084h] BYREF
  _BYTE v37[132]; // [sp+4048h] [bp-84h] BYREF

  v3 = *a2;
  v23 = *a3;
  v28 = v3 + 2;
  v34 = v3 + 4;
  v33 = (unsigned int *)(v3 + 6);
  v4 = 0;
  v29 = v3;
  do
  {
    v26 = v4;
    v27 = v4 + 1;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v7 == 64 )
      {
        memcpy(&src[2], v37, 0x80u);
        goto LABEL_2;
      }
      v9 = v6 & 0xF;
      if ( (v6 & 0xF) == 0 )
      {
        v10 = *v29;
        v11 = v29[1];
        v32 = v6;
        v12 = v34[1] ^ v11;
        v13 = *v34 ^ *v29;
        v14 = *(_QWORD *)v28;
        v15 = v12 ^ v28[1];
        *v28 ^= v13;
        v28[1] = v15;
        v30 = v33[1];
        v16 = v14 ^ *v33;
        v17 = HIDWORD(v14) ^ v30;
        v31 = *v33;
        *v34 = v13 ^ ((_DWORD)v14 << 17);
        v34[1] = v12 ^ (v14 >> 15);
        HIDWORD(v14) = (v16 << 13) | ((HIDWORD(v14) ^ v30) >> 19);
        LODWORD(v14) = (v17 << 13) | (v16 >> 19);
        *v29 = v16 ^ v10;
        v29[1] = v17 ^ v11;
        *(_QWORD *)v33 = v14;
        v6 = v32;
        v8 = (((__PAIR64__(v30, v31) + __PAIR64__(v11, v10)) << 23)
            | ((unsigned int)((__PAIR64__(v30, v31) + __PAIR64__(v11, v10)) >> 32) >> 9))
           + __PAIR64__(v11, v10);
      }
      ++v7;
      v18 = ((unsigned int)v8 >> (4 * v9)) | (HIDWORD(v8) << (32 - 4 * v9));
      v19 = 4 * v9 - 32;
      ++v6;
      if ( v19 >= 0 )
        v18 = HIDWORD(v8) >> v19;
      v20 = v18 & 0xF;
      v21 = &v37[v5];
      v5 += 2;
      *v21 = v20;
    }
    while ( v5 != 128 );
    memcpy(src, v37, 0x80u);
LABEL_2:
    memcpy(v37, src, 0x80u);
    memcpy(&v36[128 * v26], v37, 0x80u);
    v4 = v27;
  }
  while ( v27 != 64 );
  *a3 = v23 + 64;
  memcpy(src, v36, sizeof(src));
  return memcpy(a1, src, 0x2000u);
}
