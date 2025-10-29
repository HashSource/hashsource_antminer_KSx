int __fastcall sub_13B9E4(unsigned __int8 *a1)
{
  _BYTE *v1; // r4
  unsigned __int8 *v2; // lr
  int v3; // r3
  unsigned __int8 *v4; // r10
  _DWORD *v5; // r3
  unsigned __int8 *v6; // r11
  int v7; // t1
  int v8; // r1
  int v9; // r9
  _DWORD *i; // r11
  _DWORD *v11; // r8
  int v12; // r6
  int v13; // t1
  int v14; // r0
  int v15; // r12
  int v16; // r3
  int v17; // r0
  int v18; // r3
  unsigned int v19; // r5
  unsigned int v20; // lr
  int v21; // lr
  _BYTE *v22; // r12
  _BYTE *v23; // r2
  _BYTE *v24; // r4
  int v25; // r1
  _BYTE *v26; // r0
  _BYTE *v27; // r3
  int v28; // r1
  int v29; // r0
  int v30; // lr
  int v31; // r3
  int result; // r0
  int v33; // t1
  unsigned __int8 *v34; // r11
  _DWORD *v35; // r2
  int v36; // r3
  int v37; // t1
  int v38; // t1
  _DWORD v39[8]; // [sp+Ch] [bp-A8h] BYREF
  _BYTE v40[64]; // [sp+2Ch] [bp-88h] BYREF
  _BYTE v41[72]; // [sp+6Ch] [bp-48h] BYREF

  v1 = v40;
  v2 = a1;
  do
  {
    v3 = v2[41];
    v2 += 4;
    *((_DWORD *)v1 + 1) = (v3 << 16) + (v2[36] << 24) + v2[39] + (v2[38] << 8);
    v1 += 4;
  }
  while ( v41 != v1 );
  v4 = a1 - 4;
  v5 = v39;
  v6 = a1 - 4;
  do
  {
    v7 = *((_DWORD *)v6 + 1);
    v6 += 4;
    v5[1] = v7;
    ++v5;
  }
  while ( a1 + 28 != v6 );
  v8 = 1116352408;
  v39[0] = v6;
  v9 = 0;
  for ( i = &unk_2A6A80; ; i += 16 )
  {
    v11 = i;
    v12 = 0;
    while ( 1 )
    {
      v14 = v39[((4 - (_BYTE)v12) & 7) + 1];
      v15 = v39[((6 - (_BYTE)v12) & 7) + 1];
      v16 = (v39[((5 - (_BYTE)v12) & 7) + 1] ^ v15) & v14;
      v17 = __ROR4__(v14, 11) ^ __ROR4__(v14, 6) ^ __ROR4__(v14, 25);
      v18 = v16 ^ v15;
      if ( v9 )
      {
        v19 = *(_DWORD *)&v41[4 * (((_BYTE)v12 - 2) & 0xF) + 4];
        v20 = *(_DWORD *)&v41[4 * (((_BYTE)v12 - 15) & 0xF) + 4];
        v21 = (__ROR4__(v19, 19) ^ __ROR4__(v19, 17) ^ (v19 >> 10))
            + *(_DWORD *)&v41[4 * (((_BYTE)v12 - 7) & 0xF) + 4]
            + *(_DWORD *)&v41[4 * v12 + 4]
            + (__ROR4__(v20, 18) ^ __ROR4__(v20, 7) ^ (v20 >> 3));
      }
      else
      {
        v21 = *(_DWORD *)&v40[4 * v12 + 4];
      }
      *(_DWORD *)&v41[4 * v12 + 4] = v21;
      v22 = &v41[4 * ((7 - (_BYTE)v12) & 7) + 68];
      v23 = &v41[4 * ((3 - (_BYTE)v12) & 7) + 68];
      v24 = &v41[4 * (-v12 & 7) + 68];
      v25 = v17 + v18 + *((_DWORD *)v22 - 40) + v21 + v8;
      *((_DWORD *)v22 - 40) = v25;
      v26 = &v41[4 * ((1 - (_BYTE)v12) & 7) + 68];
      v27 = &v41[4 * ((2 - (_BYTE)v12++) & 7) + 68];
      *((_DWORD *)v23 - 40) += v25;
      v28 = *((_DWORD *)v24 - 40);
      v29 = *((_DWORD *)v26 - 40);
      v30 = *((_DWORD *)v27 - 40);
      v31 = v28 | v29;
      result = v29 & v28;
      *((_DWORD *)v22 - 40) += (v31 & v30 | result) + (__ROR4__(v28, 13) ^ __ROR4__(v28, 2) ^ __ROR4__(v28, 22));
      if ( v12 == 16 )
        break;
      v13 = v11[1];
      ++v11;
      v8 = v13;
    }
    v9 += 16;
    if ( v9 == 64 )
      break;
    v33 = i[16];
    v8 = v33;
  }
  v34 = (unsigned __int8 *)v39[0];
  v35 = v39;
  do
  {
    v37 = *((_DWORD *)v4 + 1);
    v4 += 4;
    v36 = v37;
    v38 = v35[1];
    ++v35;
    *(_DWORD *)v4 = v36 + v38;
  }
  while ( v34 != v4 );
  return result;
}
