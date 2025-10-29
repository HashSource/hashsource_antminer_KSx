int __fastcall work_2_packet_dcr(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r5
  char *v6; // r10
  const char *v10; // r1
  int v11; // r3
  const void *v12; // r7
  int v13; // r2
  _DWORD *v14; // r3
  int v15; // lr
  int v16; // r12
  int v17; // r0
  int v18; // lr
  int v19; // r12
  int v20; // r0
  int v21; // r11
  char v22; // r12
  int v23; // r0
  int v24; // r3
  int v25; // r0
  void (__fastcall *v26)(int, _DWORD *); // r3
  int v28; // r0
  _DWORD v29[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v30; // [sp+18h] [bp-FFCh]

  v5 = *(_DWORD *)(a1 + 824);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v6 = (char *)(v5 + 0x8000);
  v10 = (const char *)(a2 + 2);
  if ( *(_DWORD *)(a1 + 492) == 1 )
    a3[2] = 48;
  v11 = (unsigned __int8)*v6;
  v12 = a2 + 10;
  *(_QWORD *)(v5 + 8 * v11) = *((_QWORD *)v10 - 1);
  strcpy((char *)(v5 + 32 * (v11 + 32)), v10);
  v13 = (unsigned __int8)*v6;
  *(_DWORD *)(v5 + 4 * (v13 + 7040)) = a2[55];
  v14 = (_DWORD *)(v5 + 32 * (v13 + 896));
  v15 = a2[57];
  v16 = a2[58];
  v17 = a2[59];
  *v14 = a2[56];
  v14[1] = v15;
  v14[2] = v16;
  v14[3] = v17;
  v18 = a2[61];
  v19 = a2[62];
  v20 = a2[63];
  v21 = a2[60];
  v14[5] = v18;
  v14[6] = v19;
  v14[4] = v21;
  v14[7] = v20;
  memcpy((void *)(v5 + 180 * (unsigned __int8)*v6 + 5120), v12, 0xB4u);
  v22 = *v6;
  a3[3] = *v6;
  *v6 = (v22 + 1) & 0x7F;
  memcpy(a3 + 4, v12, 0xB4u);
  if ( !memcmp(&last_header_dcr, v12, 0xB4u) )
  {
    V_LOCK(0);
    v28 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_dcr_1727/backend_dcr_1727.c",
      192,
      "work_2_packet_dcr",
      17,
      120,
      80,
      v29);
  }
  memcpy(&last_header_dcr, v12, 0xB4u);
  v23 = BM_CRC16(a3 + 2, 182);
  a3[185] = v23;
  a3[184] = BYTE1(v23);
  v24 = *(unsigned __int8 *)(a1 + 253);
  *a4 = 186;
  if ( v24 && *(_BYTE *)(a1 + 254) )
  {
    memset(*(void **)(a1 + 456), 0, 48 * *(_DWORD *)(a1 + 332));
    v23 = sub_CDA90(a1, 39);
    *(_BYTE *)(a1 + 253) = 0;
  }
  V_LOCK(v23);
  v25 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_bridge_reset_DCR_1727",
    33,
    110,
    20,
    v29);
  v29[1] = 0;
  v29[0] = 2;
  v30 = 0;
  v26 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  LOBYTE(v30) = 1;
  WORD1(v30) = 68;
  v26(a1, v29);
  usleep(0x14u);
  return 0;
}
