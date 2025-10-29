void __fastcall __noreturn dram_bist_rvn(int a1)
{
  void *v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _DWORD v8[2]; // [sp+28h] [bp-1124h] BYREF
  __int64 v9; // [sp+30h] [bp-111Ch]
  _DWORD v10[2]; // [sp+38h] [bp-1114h] BYREF
  __int64 v11; // [sp+40h] [bp-110Ch]
  _BYTE v12[240]; // [sp+58h] [bp-10F4h] BYREF
  _BYTE v13[4100]; // [sp+148h] [bp-1004h] BYREF

  v2 = memset(&v12[32], 0, 0xD0u);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "dram_bist_rvn",
    13,
    3330,
    40,
    v13);
  v4 = sub_F9F00(a1, 9699344);
  v10[1] = 0;
  v10[0] = -58331;
  v11 = 6356993;
  V_LOCK(v4);
  V_INT((int)v12, "chain");
  v5 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_bist_threshold_set_rvn_RVN",
    38,
    245,
    40,
    v13);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v10);
  v6 = usleep(0x2710u);
  v8[1] = 0;
  v8[0] = 1100;
  v9 = 6553601;
  V_LOCK(v6);
  V_INT((int)v10, "chain");
  v7 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/chip_setting.c",
    171,
    "ChipSetting_retin_on_rvn_RVN",
    28,
    259,
    40,
    v13);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v8);
  usleep(0x2710u);
  dram_pre_bist0_rvn(a1, 0);
  dram_pre_bist1_rvn(a1, 0);
  dram_bist_check_and_repair_rvn(a1, 0, 0);
}
