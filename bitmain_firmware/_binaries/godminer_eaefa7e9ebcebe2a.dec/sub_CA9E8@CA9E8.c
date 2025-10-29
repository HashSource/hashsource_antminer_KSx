int __fastcall sub_CA9E8(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v8; // r7
  int v10; // r2
  int *v12; // r6
  int v14; // r3
  const char *v15; // r1
  int v16; // r2
  char v17; // r2
  int v18; // r1
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r2
  _BYTE v25[4096]; // [sp+20h] [bp-1000h] BYREF

  v8 = *(_BYTE *)(a2 + 8) & 0x7F;
  v10 = a1[206];
  v12 = (int *)(v10 + 8 * v8);
  v14 = *v12;
  v15 = (const char *)(v10 + 32 * (v8 + 32));
  v16 = v12[1];
  *(_DWORD *)a3 = *v12;
  *(_DWORD *)(a3 + 4) = v16;
  *a7 = v14;
  strcpy((char *)(a3 + 16), v15);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 3);
  v17 = *(_BYTE *)(a2 + 7);
  *(_BYTE *)(a3 + 53) = v8;
  *(_BYTE *)(a3 + 52) = v17 & 0x7F;
  v18 = a1[107];
  *(_QWORD *)(a3 + 72) = *((_QWORD *)v12 + 2689);
  v19 = sub_26CF70(*(unsigned __int8 *)(a2 + 3), v18);
  if ( v19 >= a1[83] )
    v19 = 0;
  *a6 = v19;
  *(_DWORD *)(a3 + 8) = v19;
  v20 = -1431655765 * (*(_BYTE *)(a2 + 6) & 0xF);
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 6) & 0xFu) % 0xC;
  V_LOCK(v20);
  v21 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_dash_1766/backend_dash_1766.c",
    194,
    "packet_2_nonce_dash",
    19,
    220,
    20,
    v25);
  v22 = BM_CRC5(a2 + 2, 59);
  v23 = *(_BYTE *)(a2 + 9) & 0x1F;
  if ( v22 == v23 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v22, v23);
    return 11;
  }
}
