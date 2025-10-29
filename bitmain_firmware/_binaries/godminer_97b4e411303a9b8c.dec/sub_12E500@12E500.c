unsigned int *__fastcall sub_12E500(unsigned int *a1, char a2, int a3, int a4, int a5)
{
  unsigned int v5; // lr
  char v8; // r3
  bool v9; // zf
  unsigned int v10; // r9
  unsigned int v11; // r12
  unsigned int v12; // r2
  unsigned int v13; // r7
  unsigned int v14; // r8
  char *v15; // r9
  char *v16; // r0
  size_t v17; // r10
  char v18; // r3
  unsigned int *result; // r0
  int v20; // r3
  int v21; // t1
  unsigned int v22; // r7
  char v23[48]; // [sp+0h] [bp-40h] BYREF
  __int64 v24; // [sp+30h] [bp-10h]
  unsigned int v25; // [sp+38h] [bp-8h]
  unsigned int v26; // [sp+3Ch] [bp-4h]

  v5 = a1[16];
  v8 = 128 >> a3;
  v9 = (v5 | a3) == 0;
  v10 = a1[29];
  v11 = a1[30];
  v12 = a3 + 8 * v5;
  v13 = v10 + v12;
  v23[v5] = v8 | a2 & -v8;
  v14 = bswap32(v11);
  if ( v9 )
  {
    a1[29] = -512;
    a1[30] = -1;
  }
  else
  {
    a1[29] = v13 - 512;
    if ( !v10 )
      a1[30] = v11 - 1;
  }
  v15 = &v23[v5];
  v16 = &v23[v5 + 1];
  v17 = 64 - v5;
  if ( v12 > 0x1BE )
  {
    memset(v16, 0, 63 - v5);
    sph_blake224_0(a1, v15, v17);
    a1[30] = -1;
    a1[29] = -512;
    v24 = 0;
    v22 = bswap32(v13);
    memset(v23, 0, 16);
    if ( a5 == 8 )
      HIBYTE(v24) = 1;
    memset(&v23[16], 0, 32);
    v25 = v14;
    v26 = v22;
    sph_blake224_0(a1, v23, 0x40u);
  }
  else
  {
    memset(v16, 0, 55 - v5);
    if ( a5 == 8 )
      v18 = HIBYTE(v24);
    v25 = v14;
    v26 = bswap32(v13);
    if ( a5 == 8 )
      HIBYTE(v24) = v18 | 1;
    sph_blake224_0(a1, v15, v17);
  }
  result = a1 + 17;
  v20 = a4;
  do
  {
    v21 = *result++;
    v20 += 4;
    *(_BYTE *)(v20 - 1) = v21;
    *(_BYTE *)(v20 - 4) = HIBYTE(v21);
    *(_BYTE *)(v20 - 3) = BYTE2(v21);
    *(_BYTE *)(v20 - 2) = BYTE1(v21);
  }
  while ( &a1[a5 + 17] != result );
  return result;
}
