int __fastcall sub_25BF18(int a1)
{
  unsigned __int64 **v1; // r2
  int *v2; // r4
  int v3; // r1
  unsigned __int64 *v4; // r12
  int v5; // r0
  unsigned __int64 v6; // r2
  int *v7; // r3
  int v8; // r2
  int v9; // lr
  unsigned int v10; // r1
  int v11; // r6
  int v12; // r8
  int v13; // r11
  int v14; // r10
  int v15; // r9
  unsigned int v16; // r1
  int v17; // r0

  v1 = *(unsigned __int64 ***)a1;
  v2 = *(int **)(a1 + 4);
  v3 = *v2;
  v4 = **(unsigned __int64 ***)a1;
  v5 = *v2 & 0xF;
  if ( v5 )
  {
    v6 = *v4;
  }
  else
  {
    v7 = (int *)v1[1];
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[4] ^ *v7;
    v12 = v7[6];
    v7[2] = v11 ^ v10;
    v7[4] = v11 ^ (v10 << 17);
    v13 = v7[3];
    *v7 = v10 ^ v12 ^ v8;
    v14 = v7[7];
    v15 = v7[5] ^ v9;
    v7[3] = v15 ^ v13;
    v7[1] = v13 ^ v14 ^ v9;
    v7[6] = ((v13 ^ v14) << 13) | ((v10 ^ v12) >> 19);
    v7[7] = ((v10 ^ v12) << 13) | ((v13 ^ (unsigned int)v14) >> 19);
    v7[5] = v15 ^ ((v13 << 17) | (v10 >> 15));
    v6 = (((__PAIR64__(v14, v12) + __PAIR64__(v9, v8)) << 23)
        | ((unsigned int)((__PAIR64__(v14, v12) + __PAIR64__(v9, v8)) >> 32) >> 9))
       + __PAIR64__(v9, v8);
    *v4 = v6;
    v3 = *v2;
  }
  *v2 = v3 + 1;
  v16 = ((unsigned int)v6 >> (4 * v5)) | (HIDWORD(v6) << (32 - 4 * v5));
  v17 = 4 * v5 - 32;
  if ( v17 >= 0 )
    v16 = HIDWORD(v6) >> v17;
  return v16 & 0xF;
}
