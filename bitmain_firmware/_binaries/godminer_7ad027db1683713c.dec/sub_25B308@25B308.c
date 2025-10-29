__int64 __fastcall sub_25B308(int a1, int a2, unsigned int *a3)
{
  int v3; // r7
  unsigned int v4; // r1
  unsigned int *v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r5
  unsigned int v8; // r6
  unsigned int v9; // r3
  unsigned int v10; // r5
  unsigned int v11; // r6
  bool v12; // zf
  int v13; // r1
  __int64 v14; // r2
  __int64 result; // r0
  __int64 v16; // r2
  __int64 v19; // [sp+68h] [bp-14Ch]
  __int64 v20; // [sp+70h] [bp-144h]
  unsigned __int64 v21; // [sp+78h] [bp-13Ch]
  _BYTE v22[64]; // [sp+88h] [bp-12Ch] BYREF
  _QWORD v23[4]; // [sp+C8h] [bp-ECh] BYREF
  _QWORD v24[25]; // [sp+E8h] [bp-CCh] BYREF
  int v25; // [sp+1B0h] [bp-4h] BYREF

  v3 = 0;
  v4 = *a3;
  v6 = a3[1];
  v7 = a3[2];
  v8 = a3[3];
  v5 = a3 + 4;
  v24[0] = __PAIR64__(v6, v4);
  v24[1] = __PAIR64__(v8, v7);
  v9 = v5[1];
  v10 = v5[2];
  v11 = v5[3];
  LODWORD(v24[2]) = *v5;
  HIDWORD(v24[2]) = v9;
  v24[3] = __PAIR64__(v11, v10);
  v24[4] = 0x400000004LL;
  v19 = v24[0];
  v20 = v24[1];
  v22[63] = HIBYTE(v11) & 0xF;
  v22[46] = HIBYTE(v9) >> 4;
  v21 = __PAIR64__(v9, v24[2]);
  v22[45] = BYTE2(v9) & 0xF;
  v22[44] = BYTE2(v9) >> 4;
  v22[43] = BYTE1(v9) & 0xF;
  v22[42] = BYTE1(v9) >> 4;
  v22[41] = v9 & 0xF;
  v22[61] = BYTE2(v11) & 0xF;
  v22[40] = (unsigned __int8)v9 >> 4;
  v22[39] = BYTE3(v24[2]) & 0xF;
  v22[38] = BYTE3(v24[2]) >> 4;
  v22[37] = BYTE2(v24[2]) & 0xF;
  v22[36] = BYTE2(v24[2]) >> 4;
  v22[35] = BYTE1(v24[2]) & 0xF;
  v22[34] = BYTE1(v24[2]) >> 4;
  v22[33] = v24[2] & 0xF;
  v22[32] = LOBYTE(v24[2]) >> 4;
  v22[31] = HIBYTE(v24[1]) & 0xF;
  v22[30] = HIBYTE(v24[1]) >> 4;
  v22[29] = BYTE6(v24[1]) & 0xF;
  v22[28] = BYTE6(v24[1]) >> 4;
  v22[27] = BYTE5(v24[1]) & 0xF;
  v22[26] = BYTE5(v24[1]) >> 4;
  v22[25] = BYTE4(v24[1]) & 0xF;
  v22[24] = BYTE4(v24[1]) >> 4;
  v22[23] = BYTE3(v24[1]) & 0xF;
  v22[22] = BYTE3(v24[1]) >> 4;
  v22[21] = BYTE2(v24[1]) & 0xF;
  v22[20] = BYTE2(v24[1]) >> 4;
  v22[19] = BYTE1(v24[1]) & 0xF;
  v22[18] = BYTE1(v24[1]) >> 4;
  v22[17] = v24[1] & 0xF;
  v22[16] = LOBYTE(v24[1]) >> 4;
  v22[15] = HIBYTE(v24[0]) & 0xF;
  v22[14] = HIBYTE(v24[0]) >> 4;
  v22[13] = BYTE6(v24[0]) & 0xF;
  v22[12] = BYTE6(v24[0]) >> 4;
  v22[11] = BYTE5(v24[0]) & 0xF;
  v22[10] = BYTE5(v24[0]) >> 4;
  v22[9] = BYTE4(v24[0]) & 0xF;
  v22[8] = BYTE4(v24[0]) >> 4;
  v22[7] = HIBYTE(v4) & 0xF;
  v22[6] = HIBYTE(v4) >> 4;
  v22[5] = BYTE2(v4) & 0xF;
  v22[4] = BYTE2(v4) >> 4;
  v22[3] = BYTE1(v4) & 0xF;
  v22[2] = BYTE1(v4) >> 4;
  HIDWORD(v24[7]) = v22;
  HIDWORD(v24[6]) = v22;
  v22[1] = v4 & 0xF;
  v22[0] = (unsigned __int8)v4 >> 4;
  v22[48] = (unsigned __int8)v10 >> 4;
  v22[62] = HIBYTE(v11) >> 4;
  v22[59] = BYTE1(v11) & 0xF;
  v22[57] = v11 & 0xF;
  v22[60] = BYTE2(v11) >> 4;
  v22[55] = HIBYTE(v10) & 0xF;
  v22[53] = BYTE2(v10) & 0xF;
  v22[51] = BYTE1(v10) & 0xF;
  v22[58] = BYTE1(v11) >> 4;
  v22[56] = (unsigned __int8)v11 >> 4;
  v22[54] = HIBYTE(v10) >> 4;
  v22[52] = BYTE2(v10) >> 4;
  v22[49] = v10 & 0xF;
  v22[47] = HIBYTE(v9) & 0xF;
  v24[8] = 0x800000000LL;
  v22[50] = BYTE1(v10) >> 4;
  HIDWORD(v24[0]) = a2;
  LODWORD(v24[0]) = v22;
  memset(&v24[5], 0, 12);
  LODWORD(v24[7]) = 0;
  v25 = 0;
  sub_25BBF4(v23, (int *)v24, &v25);
  v24[0] = v19;
  v24[1] = v20;
  v24[2] = v21;
  v24[3] = __PAIR64__(v11, v10);
  LODWORD(v24[5]) = v24;
  HIDWORD(v24[4]) = 32;
  memset(&v24[6], 0, 12);
  do
  {
    HIDWORD(v24[5]) = (char *)v23 + v3 + 1;
    if ( v3 == 32 )
      break;
    LODWORD(v24[4]) = v3 + 1;
    v12 = v3 == 31;
    *((_BYTE *)v23 + v3) ^= *((_BYTE *)v24 + v3);
    ++v3;
  }
  while ( !v12 );
  memcpy(v24, &unk_2B0668, sizeof(v24));
  v24[1] = v23[1] ^ 0x79629B0E2F9F4216LL;
  v24[2] = v23[2] ^ 0x7A14FF4816C7F8EELL;
  v24[3] = v23[3] ^ 0x11A75F4C80056498LL;
  v24[0] = v23[0] ^ 0x3AD74C52B2248509LL;
  keccak::f1600((int *)v24);
  v13 = HIDWORD(v24[0]);
  v14 = v24[1];
  *(_DWORD *)a1 = v24[0];
  *(_DWORD *)(a1 + 4) = v13;
  *(_QWORD *)(a1 + 8) = v14;
  result = v24[2];
  v16 = v24[3];
  *(_QWORD *)(a1 + 16) = v24[2];
  *(_QWORD *)(a1 + 24) = v16;
  return result;
}
