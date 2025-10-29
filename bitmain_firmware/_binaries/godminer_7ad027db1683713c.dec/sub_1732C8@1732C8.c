void *__fastcall sub_1732C8(int a1, int a2, unsigned int a3, void *a4, int a5, void *src)
{
  int v7; // r4
  int v10; // r3
  size_t v11; // r2
  int v12; // r9
  int v13; // r8
  int v14; // r5
  size_t v15; // r2
  char *v16; // r12
  char *v17; // r3
  __int64 v18; // r4
  int v19; // r1
  int v20; // r1
  char *v21; // r3
  int v22; // t1
  void *result; // r0
  char v24[64]; // [sp+8h] [bp-84h] BYREF
  char v25; // [sp+48h] [bp-44h] BYREF

  v7 = *(_DWORD *)(a1 + 64);
  v10 = (unsigned __int8)(128 >> a3) | a2 & -(unsigned __int8)(128 >> a3);
  if ( v7 | a3 )
    v11 = 111 - v7;
  else
    v11 = 47;
  if ( v7 | a3 )
  {
    v12 = 112 - v7;
    v13 = 120 - v7;
    v14 = 128 - v7;
  }
  else
  {
    v13 = 56;
    v12 = 48;
    v14 = 64;
  }
  v24[0] = v10;
  memset(&v24[1], 0, v11);
  v15 = v14;
  v16 = &v24[v12];
  v17 = &v24[v13];
  v18 = (*(_QWORD *)(a1 + 200) << 9) + (unsigned int)(8 * v7) + a3;
  v19 = *(_DWORD *)(a1 + 204);
  v24[v12] = 0;
  v16[6] = v19 < 0;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0;
  v16[5] = 0;
  v16[7] = (unsigned int)v19 >> 23;
  v24[v13] = HIBYTE(v18);
  v17[2] = BYTE5(v18);
  v17[7] = v18;
  v17[1] = BYTE6(v18);
  v17[3] = BYTE4(v18);
  v17[4] = BYTE3(v18);
  v17[5] = BYTE2(v18);
  v17[6] = BYTE1(v18);
  sph_jh224_0(a1, v24, v15);
  v20 = a1 + 132;
  v21 = v24;
  do
  {
    v22 = *(_DWORD *)(v20 + 4);
    v20 += 4;
    v21 += 4;
    *((_DWORD *)v21 - 1) = v22;
  }
  while ( &v25 != v21 );
  memcpy(a4, &v24[4 * (16 - a5)], 4 * a5);
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), src, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
