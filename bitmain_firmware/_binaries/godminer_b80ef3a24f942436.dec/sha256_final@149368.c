int *__fastcall sha256_final(_DWORD *a1, _BYTE *a2)
{
  int v2; // r3
  unsigned int v3; // r2
  bool v4; // cf
  unsigned __int8 *v5; // r6
  int v6; // r7
  unsigned __int8 *v8; // r0
  size_t v10; // r2
  int v11; // r7
  int v12; // r8
  int v13; // r3
  int v14; // r9
  int v15; // r10
  int v16; // r11
  int v17; // r7
  int *v18; // r3
  int *result; // r0
  _BYTE *v20; // r1
  int v21; // t1
  int v22; // [sp+4h] [bp-8h]

  v2 = a1[1];
  v3 = v2 & 0x3F;
  v4 = v3 >= 0x38;
  v5 = (unsigned __int8 *)(a1 + 2);
  v6 = *a1;
  if ( v3 < 0x38 )
    v3 = 64;
  v8 = &v5[v2];
  if ( (v2 & 0x3Fu) >= 0x38 )
    v3 = 128;
  v10 = v3 - v2;
  v11 = v2 + v6;
  if ( (v2 & 0x3Fu) >= 0x38 )
  {
    v13 = 2;
    v12 = 124;
  }
  else
  {
    v12 = 60;
    v13 = 1;
  }
  if ( v4 )
    v14 = 125;
  else
    v14 = 61;
  if ( v4 )
    v15 = 126;
  else
    v15 = 62;
  if ( v4 )
    v16 = 127;
  else
    v16 = 63;
  v22 = v13;
  memset(v8, 0, v10);
  v17 = 8 * v11;
  *((_BYTE *)a1 + a1[1] + 8) = 0x80;
  v5[v16] = v17;
  v5[v15] = BYTE1(v17);
  v5[v14] = BYTE2(v17);
  v5[v12] = HIBYTE(v17);
  sha256_transf((int)a1, v5, v22);
  v18 = a1 + 34;
  result = a1 + 42;
  v20 = a2;
  do
  {
    v20[3] = *v18;
    v21 = *v18++;
    v20[2] = BYTE1(v21);
    v20[1] = *((_WORD *)v18 - 1);
    *v20 = *((_BYTE *)v18 - 1);
    v20 += 4;
  }
  while ( result != v18 );
  return result;
}
