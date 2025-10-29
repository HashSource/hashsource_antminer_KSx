int __fastcall dram_bist_check_ltc_status_rvn(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _BYTE v16[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v7);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
         192,
         "dram_bist_check_ltc_status_rvn",
         30,
         2557,
         40,
         v16);
  switch ( a1 )
  {
    case 0:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK(v8);
      v11 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
        192,
        "dram_bist_check_ltc_status_rvn",
        30,
        2561,
        40,
        v16);
      break;
    case 1:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK(v8);
      v12 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v12);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
        192,
        "dram_bist_check_ltc_status_rvn",
        30,
        2565,
        40,
        v16);
      break;
    case 2:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK(v8);
      v13 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
        192,
        "dram_bist_check_ltc_status_rvn",
        30,
        2569,
        40,
        v16);
      break;
    case 4:
      *(_BYTE *)(a3 + a4) = -30;
      V_LOCK(v8);
      v14 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
        192,
        "dram_bist_check_ltc_status_rvn",
        30,
        2577,
        40,
        v16);
      break;
    case 6:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK(v8);
      v9 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
        192,
        "dram_bist_check_ltc_status_rvn",
        30,
        2573,
        40,
        v16);
      break;
    default:
      V_LOCK(v8);
      v15 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v15);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
        192,
        "dram_bist_check_ltc_status_rvn",
        30,
        2580,
        40,
        v16);
      break;
  }
  return 0;
}
