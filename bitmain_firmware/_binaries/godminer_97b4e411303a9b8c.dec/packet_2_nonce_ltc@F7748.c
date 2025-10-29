int __fastcall packet_2_nonce_ltc(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v11; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r9
  int v17; // r3
  int v18; // r2
  int v19; // r3
  int v20; // r3
  unsigned int v21; // r9
  int v22; // r0
  int v23; // r2
  int v24; // r0
  int v25; // r0
  int v26; // r1
  _BYTE v27[4080]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v11 = logfmt_raw((int)v27, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
    192,
    "packet_2_nonce_ltc",
    18,
    239,
    40,
    v27);
  if ( *(unsigned __int8 *)(a2 + 8) >> 5 != 4 )
    return 10;
  v13 = BM_CRC5(a2 + 2, 51);
  v14 = *(_BYTE *)(a2 + 8) & 0x1F;
  if ( v13 == v14 )
  {
    v15 = *(unsigned __int8 *)(a2 + 7);
    v16 = a1[206];
    v17 = *(_DWORD *)(v16 + 8 * v15);
    v18 = *(_DWORD *)(v16 + 8 * v15 + 4);
    *(_DWORD *)a3 = v17;
    *(_DWORD *)(a3 + 4) = v18;
    *a7 = v17;
    strcpy((char *)(a3 + 16), (const char *)(v16 + ((v15 + 16) << 6)));
    *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 2);
    *(_BYTE *)(a3 + 84) = *(_BYTE *)(a2 + 6) & 0x3F;
    v19 = *(unsigned __int8 *)(a2 + 7);
    *(_BYTE *)(a3 + 85) = v19;
    memcpy((void *)(a3 + 86), (const void *)(v16 + 16 * (v19 + 1504)), *(_DWORD *)(v16 + 4 * (v19 + 6528)));
    v20 = *(unsigned __int8 *)(a2 + 7);
    *(_DWORD *)(a3 + 104) = *(_DWORD *)(v16 + 4 * (v20 + 6528));
    *(_DWORD *)(a3 + 108) = *(_DWORD *)(v16 + 4 * (v20 + 6656));
    v21 = *(unsigned __int8 *)(a2 + 2);
    v22 = sub_26D980((unsigned __int8)((_BYTE)v21 << 7) | (*(unsigned __int8 *)(a2 + 3) >> 1), a1[107]);
    if ( v22 >= a1[83] )
    {
      v25 = rand();
      sub_26D674(v25, a1[83]);
      v22 = v26;
      *a6 = v26;
      v21 = *(unsigned __int8 *)(a2 + 2);
    }
    else
    {
      *a6 = v22;
    }
    v23 = *(_DWORD *)(a3 + 80);
    *(_DWORD *)(a3 + 8) = v22;
    *(_DWORD *)(a3 + 12) = v21 >> 1;
    *a5 = v23;
    *a4 = 1;
    V_LOCK(v22);
    v24 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_ltc_1489/backend_ltc_1489.c",
      192,
      "packet_2_nonce_ltc",
      18,
      286,
      40,
      v27);
    return 0;
  }
  else
  {
    printf("chain[%d] get nonce crc error calc value %04x expected value %04x\n", a1[61], v13, v14);
    return 11;
  }
}
