int __fastcall sub_26D5D0(int a1, int a2, unsigned int *a3)
{
  int v3; // r7
  unsigned int v4; // r1
  _DWORD *v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r5
  unsigned int v8; // r6
  unsigned int v9; // r3
  unsigned int v10; // r5
  unsigned int v11; // r6
  bool v12; // zf
  int v13; // r1
  __int64 v14; // r2
  __int64 v15; // r0
  __int64 v16; // r2
  __int64 v20; // [sp+68h] [bp-14Ch]
  __int64 v21; // [sp+70h] [bp-144h]
  unsigned __int64 v22; // [sp+78h] [bp-13Ch]
  _BYTE v23[64]; // [sp+88h] [bp-12Ch] BYREF
  _QWORD v24[4]; // [sp+C8h] [bp-ECh] BYREF
  _QWORD v25[25]; // [sp+E8h] [bp-CCh] BYREF
  int v26; // [sp+1B0h] [bp-4h] BYREF

  v3 = 0;
  v4 = *a3;
  v6 = a3[1];
  v7 = a3[2];
  v8 = a3[3];
  v5 = a3 + 4;
  v25[0] = __PAIR64__(v6, v4);
  v25[1] = __PAIR64__(v8, v7);
  v9 = v5[1];
  v10 = v5[2];
  v11 = v5[3];
  LODWORD(v25[2]) = *v5;
  HIDWORD(v25[2]) = v9;
  v25[3] = __PAIR64__(v11, v10);
  v25[4] = 0x400000004LL;
  v20 = v25[0];
  v21 = v25[1];
  v23[63] = HIBYTE(v11) & 0xF;
  v23[46] = HIBYTE(v9) >> 4;
  v22 = __PAIR64__(v9, v25[2]);
  v23[45] = BYTE2(v9) & 0xF;
  v23[44] = BYTE2(v9) >> 4;
  v23[43] = BYTE1(v9) & 0xF;
  v23[42] = BYTE1(v9) >> 4;
  v23[41] = v9 & 0xF;
  v23[61] = BYTE2(v11) & 0xF;
  v23[40] = (unsigned __int8)v9 >> 4;
  v23[39] = BYTE3(v25[2]) & 0xF;
  v23[38] = BYTE3(v25[2]) >> 4;
  v23[37] = BYTE2(v25[2]) & 0xF;
  v23[36] = BYTE2(v25[2]) >> 4;
  v23[35] = BYTE1(v25[2]) & 0xF;
  v23[34] = BYTE1(v25[2]) >> 4;
  v23[33] = v25[2] & 0xF;
  v23[32] = LOBYTE(v25[2]) >> 4;
  v23[31] = HIBYTE(v25[1]) & 0xF;
  v23[30] = HIBYTE(v25[1]) >> 4;
  v23[29] = BYTE6(v25[1]) & 0xF;
  v23[28] = BYTE6(v25[1]) >> 4;
  v23[27] = BYTE5(v25[1]) & 0xF;
  v23[26] = BYTE5(v25[1]) >> 4;
  v23[25] = BYTE4(v25[1]) & 0xF;
  v23[24] = BYTE4(v25[1]) >> 4;
  v23[23] = BYTE3(v25[1]) & 0xF;
  v23[22] = BYTE3(v25[1]) >> 4;
  v23[21] = BYTE2(v25[1]) & 0xF;
  v23[20] = BYTE2(v25[1]) >> 4;
  v23[19] = BYTE1(v25[1]) & 0xF;
  v23[18] = BYTE1(v25[1]) >> 4;
  v23[17] = v25[1] & 0xF;
  v23[16] = LOBYTE(v25[1]) >> 4;
  v23[15] = HIBYTE(v25[0]) & 0xF;
  v23[14] = HIBYTE(v25[0]) >> 4;
  v23[13] = BYTE6(v25[0]) & 0xF;
  v23[12] = BYTE6(v25[0]) >> 4;
  v23[11] = BYTE5(v25[0]) & 0xF;
  v23[10] = BYTE5(v25[0]) >> 4;
  v23[9] = BYTE4(v25[0]) & 0xF;
  v23[8] = BYTE4(v25[0]) >> 4;
  v23[7] = HIBYTE(v4) & 0xF;
  v23[6] = HIBYTE(v4) >> 4;
  v23[5] = BYTE2(v4) & 0xF;
  v23[4] = BYTE2(v4) >> 4;
  v23[3] = BYTE1(v4) & 0xF;
  v23[2] = BYTE1(v4) >> 4;
  HIDWORD(v25[7]) = v23;
  HIDWORD(v25[6]) = v23;
  v23[1] = v4 & 0xF;
  v23[0] = (unsigned __int8)v4 >> 4;
  v23[48] = (unsigned __int8)v10 >> 4;
  v23[62] = HIBYTE(v11) >> 4;
  v23[59] = BYTE1(v11) & 0xF;
  v23[57] = v11 & 0xF;
  v23[60] = BYTE2(v11) >> 4;
  v23[55] = HIBYTE(v10) & 0xF;
  v23[53] = BYTE2(v10) & 0xF;
  v23[51] = BYTE1(v10) & 0xF;
  v23[58] = BYTE1(v11) >> 4;
  v23[56] = (unsigned __int8)v11 >> 4;
  v23[54] = HIBYTE(v10) >> 4;
  v23[52] = BYTE2(v10) >> 4;
  v23[49] = v10 & 0xF;
  v23[47] = HIBYTE(v9) & 0xF;
  v25[8] = 0x800000000LL;
  v23[50] = BYTE1(v10) >> 4;
  HIDWORD(v25[0]) = a2;
  LODWORD(v25[0]) = v23;
  memset(&v25[5], 0, 12);
  LODWORD(v25[7]) = 0;
  v26 = 0;
  sub_26DEBC(v24, v25, &v26);
  v25[0] = v20;
  v25[1] = v21;
  v25[2] = v22;
  v25[3] = __PAIR64__(v11, v10);
  LODWORD(v25[5]) = v25;
  HIDWORD(v25[4]) = 32;
  memset(&v25[6], 0, 12);
  do
  {
    HIDWORD(v25[5]) = (char *)v24 + v3 + 1;
    if ( v3 == 32 )
      break;
    LODWORD(v25[4]) = v3 + 1;
    v12 = v3 == 31;
    *((_BYTE *)v24 + v3) ^= *((_BYTE *)v25 + v3);
    ++v3;
  }
  while ( !v12 );
  memcpy(v25, &unk_2C52B8, sizeof(v25));
  v25[1] = v24[1] ^ 0x79629B0E2F9F4216LL;
  v25[2] = v24[2] ^ 0x7A14FF4816C7F8EELL;
  v25[3] = v24[3] ^ 0x11A75F4C80056498LL;
  v25[0] = v24[0] ^ 0x3AD74C52B2248509LL;
  keccak::f1600((int *)v25);
  v13 = HIDWORD(v25[0]);
  v14 = v25[1];
  *(_DWORD *)a1 = v25[0];
  *(_DWORD *)(a1 + 4) = v13;
  *(_QWORD *)(a1 + 8) = v14;
  v15 = v25[2];
  v16 = v25[3];
  *(_QWORD *)(a1 + 16) = v25[2];
  *(_QWORD *)(a1 + 24) = v16;
  return v15;
}
