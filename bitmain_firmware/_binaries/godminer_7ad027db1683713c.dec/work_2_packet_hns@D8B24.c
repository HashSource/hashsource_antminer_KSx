int __fastcall work_2_packet_hns(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r5
  const char *v9; // r1
  int v10; // r3
  _DWORD *v11; // r7
  int v12; // r2
  _DWORD *v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r3
  int v16; // r11
  int v17; // r10
  int v18; // lr
  int v19; // r12
  int v20; // r10
  int v21; // r12
  int v22; // r11
  char v23; // r12
  __int16 v24; // r0
  int v25; // r3
  void (__fastcall *v26)(int, _DWORD *); // r3
  _DWORD v28[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v29; // [sp+18h] [bp-FFCh]

  v5 = *(_DWORD *)(a1 + 800);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v9 = (const char *)(a2 + 2);
  if ( *(_DWORD *)(a1 + 468) == 1 )
    a3[2] = 48;
  v10 = *(unsigned __int8 *)(v5 + 42496);
  v11 = a2 + 10;
  *(_QWORD *)(v5 + 8 * v10) = *((_QWORD *)v9 - 1);
  strcpy((char *)(v5 + 32 * (v10 + 32)), v9);
  v12 = *(unsigned __int8 *)(v5 + 42496);
  v13 = a2 + 10;
  *(_DWORD *)(v5 + 4 * (v12 + 9472)) = a2[74];
  v14 = (_DWORD *)(v5 + 32 * (v12 + 1200));
  v15 = a2 + 75;
  v16 = a2[75];
  v17 = a2[76];
  v18 = v15[2];
  v19 = v15[3];
  *v14 = v16;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v20 = v15[5];
  v21 = v15[7];
  v22 = v15[4];
  v14[6] = v15[6];
  v14[5] = v20;
  v14[7] = v21;
  v14[4] = v22;
  memcpy((void *)(v5 + ((*(unsigned __int8 *)(v5 + 42496) + 20) << 8)), v13, 0x100u);
  v23 = *(_BYTE *)(v5 + 42496);
  a3[3] = v23;
  *(_BYTE *)(v5 + 42496) = (v23 + 1) & 0x7F;
  memcpy(a3 + 4, v11, 0x100u);
  if ( !memcmp(&last_header_hns, v11, 0x100u) )
  {
    V_LOCK();
    logfmt_raw((char *)v28, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
      187,
      "work_2_packet_hns",
      17,
      124,
      80,
      v28);
  }
  memcpy(&last_header_hns, v11, 0x100u);
  v24 = BM_CRC16(a3 + 2, 258);
  a3[261] = v24;
  a3[260] = HIBYTE(v24);
  v25 = *(unsigned __int8 *)(a1 + 237);
  *a4 = 262;
  if ( v25 && *(_BYTE *)(a1 + 238) )
  {
    memset(*(void **)(a1 + 432), 0, 48 * *(_DWORD *)(a1 + 312));
    sub_D8A00(a1, 36);
    *(_BYTE *)(a1 + 237) = 0;
  }
  V_LOCK();
  logfmt_raw((char *)v28, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_HNS_2130", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_bridge_reset_HNS_2130",
    33,
    112,
    20,
    v28);
  v28[1] = 0;
  v28[0] = 2;
  v29 = 0;
  v26 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  LOBYTE(v29) = 1;
  WORD1(v29) = 68;
  v26(a1, v28);
  usleep(0x14u);
  return 0;
}
