int __fastcall sub_C2630(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v8; // r7
  int v10; // r2
  int *v12; // r6
  int v14; // r3
  const char *v15; // r1
  int v16; // r2
  char v17; // r2
  unsigned int v18; // r1
  signed int v19; // r0
  int v20; // r0
  int v21; // r2
  char v23[4096]; // [sp+20h] [bp-1000h] BYREF

  v8 = *(_BYTE *)(a2 + 8) & 0x7F;
  v10 = a1[200];
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
  v18 = a1[101];
  *(_QWORD *)(a3 + 72) = *((_QWORD *)v12 + 2689);
  v19 = sub_25ABA8(*(unsigned __int8 *)(a2 + 3), v18);
  if ( v19 >= a1[78] )
    v19 = 0;
  *a6 = v19;
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 6) & 0xFu) % 0xC;
  V_LOCK();
  logfmt_raw(
    v23,
    0x1000u,
    0,
    "%s Nonce: %02x%02x%02x%02x chipid:%d coreid:%d",
    "packet_2_nonce_dash",
    *(unsigned __int8 *)(a2 + 3),
    *(unsigned __int8 *)(a2 + 4),
    *(unsigned __int8 *)(a2 + 5),
    *(unsigned __int8 *)(a2 + 6),
    *(_DWORD *)(a3 + 8),
    *(_DWORD *)(a3 + 12));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    189,
    "packet_2_nonce_dash",
    19,
    220,
    20,
    v23);
  v20 = BM_CRC5((_BYTE *)(a2 + 2), 59);
  v21 = *(_BYTE *)(a2 + 9) & 0x1F;
  if ( v20 == v21 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v20, v21);
    return 11;
  }
}
