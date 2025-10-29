int __fastcall work_2_packet_eth(int a1, __int64 *a2, int a3, _DWORD *a4)
{
  int v5; // r12
  int v8; // r6
  __int64 v9; // r8
  _QWORD *v10; // r7
  __int64 *v11; // lr
  int v12; // r7
  int v13; // r0
  int v14; // r7
  int v15; // r0
  _DWORD *v16; // r6
  int v17; // r9
  int v18; // r7
  int v19; // r0
  int v20; // r1
  int v21; // r7
  int v22; // r11
  int v23; // r9
  int v24; // r8
  _DWORD *v25; // r6
  int v26; // r11
  int v27; // r9
  int v28; // r8
  int v29; // r10
  int v30; // r11
  int v31; // lr
  int v32; // r8
  int v33; // r11
  __int16 v34; // r0

  v5 = *(_DWORD *)(a1 + 800);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 32;
  if ( *(_DWORD *)(a1 + 468) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v8 = *(unsigned __int8 *)(v5 + 35072);
  v9 = *a2;
  v10 = (_QWORD *)(v5 + 8 * v8);
  v10[256] = a2[1];
  *v10 = v9;
  *(_BYTE *)(a3 + 3) = v8;
  *(_BYTE *)(v5 + v8 + 34816) = *((_BYTE *)a2 + 88);
  v11 = a2 + 2;
  HIDWORD(v9) = *((_DWORD *)a2 + 5);
  v12 = *((_DWORD *)a2 + 6);
  v13 = *((_DWORD *)a2 + 7);
  *(_DWORD *)(a3 + 4) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(a3 + 8) = HIDWORD(v9);
  *(_DWORD *)(a3 + 12) = v12;
  *(_DWORD *)(a3 + 16) = v13;
  HIDWORD(v9) = *((_DWORD *)a2 + 9);
  v14 = *((_DWORD *)a2 + 10);
  v15 = *((_DWORD *)a2 + 11);
  *(_DWORD *)(a3 + 20) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a3 + 24) = HIDWORD(v9);
  *(_DWORD *)(a3 + 28) = v14;
  *(_DWORD *)(a3 + 32) = v15;
  v16 = (_DWORD *)(v5 + 40 * *(unsigned __int8 *)(v5 + 35072) + 0x2000);
  do
  {
    v17 = *(_DWORD *)v11;
    v11 += 2;
    v18 = *((_DWORD *)v11 - 3);
    v16 += 4;
    v19 = *((_DWORD *)v11 - 2);
    v20 = *((_DWORD *)v11 - 1);
    *(v16 - 4) = v17;
    *(v16 - 3) = v18;
    *(v16 - 2) = v19;
    *(v16 - 1) = v20;
  }
  while ( v11 != a2 + 6 );
  v21 = *((_DWORD *)v11 + 1);
  *v16 = *(_DWORD *)v11;
  v16[1] = v21;
  v22 = *((_DWORD *)v11 + 1);
  v23 = *((_DWORD *)v11 + 2);
  v24 = *((_DWORD *)v11 + 3);
  v25 = (_DWORD *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 35072) + 576));
  *v25 = *(_DWORD *)v11;
  v25[1] = v22;
  v25[2] = v23;
  v25[3] = v24;
  v26 = *((_DWORD *)v11 + 5);
  v27 = *((_DWORD *)v11 + 6);
  v28 = *((_DWORD *)v11 + 7);
  v25[4] = *((_DWORD *)v11 + 4);
  v25[6] = v27;
  v25[7] = v28;
  v25[5] = v26;
  v29 = *((_DWORD *)a2 + 20);
  v30 = *((_DWORD *)a2 + 21);
  *(_BYTE *)(a3 + 43) = v29;
  *(_BYTE *)(a3 + 42) = BYTE1(v29);
  *(_BYTE *)(a3 + 39) = v30;
  *(_BYTE *)(a3 + 41) = BYTE2(v29);
  *(_BYTE *)(a3 + 38) = BYTE1(v30);
  *(_BYTE *)(a3 + 40) = HIBYTE(v29);
  *(_BYTE *)(a3 + 37) = BYTE2(v30);
  *(_BYTE *)(a3 + 36) = HIBYTE(v30);
  v31 = *(unsigned __int8 *)(v5 + 35072);
  v32 = v31 + 512;
  v33 = *((_DWORD *)a2 + 21);
  *(_DWORD *)(v5 + 8 * v32) = 0;
  *(_DWORD *)(v5 + 8 * v32 + 4) = v33;
  *(_BYTE *)(v5 + 35072) = v31 + 1;
  v34 = BM_CRC16((unsigned __int8 *)(a3 + 2), 42);
  *(_BYTE *)(a3 + 45) = v34;
  *(_BYTE *)(a3 + 44) = HIBYTE(v34);
  *a4 = 46;
  return 0;
}
