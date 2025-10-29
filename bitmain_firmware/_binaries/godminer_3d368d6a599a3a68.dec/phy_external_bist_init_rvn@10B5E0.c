int __fastcall phy_external_bist_init_rvn(int a1, int a2, __int16 a3, int a4)
{
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v16; // r0
  int v18; // [sp+38h] [bp-10A4h] BYREF
  _BYTE v19[32]; // [sp+58h] [bp-1084h] BYREF
  int v20; // [sp+78h] [bp-1064h] BYREF
  _BYTE v21[32]; // [sp+98h] [bp-1044h] BYREF
  int v22; // [sp+B8h] [bp-1024h] BYREF
  _BYTE v23[4100]; // [sp+D8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v18, "chain");
  v7 = logfmt_raw((int)v23, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "phy_external_bist_init_rvn",
    26,
    988,
    60,
    v23);
  sub_103D24(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_103D24(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_103D24(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_103D24(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_103D24(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_103D24(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_103D24(a1, a3, 88, -1);
  usleep(0x12Cu);
  v8 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 125, 0x70007000u);
  if ( v8 )
  {
    V_LOCK(v8);
    V_INT((int)v19, "chain");
    v16 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      195,
      "phy_external_bist_init_rvn",
      26,
      1041,
      100,
      v23);
  }
  sub_103D24(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_103D24(a1, a3, 80, 0);
  usleep(0x12Cu);
  v9 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 119, 0);
  if ( v9 )
  {
    V_LOCK(v9);
    V_INT((int)&v20, "chain");
    v10 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      195,
      "phy_external_bist_init_rvn",
      26,
      1068,
      100,
      v23);
  }
  sub_103D24(a1, a3, 82, 0);
  v11 = usleep(0x64u);
  V_LOCK(v11);
  V_INT((int)v21, "chain");
  v12 = logfmt_raw((int)v23, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    195,
    "phy_external_bist_init_rvn",
    26,
    1074,
    100,
    v23);
  sub_103D24(a1, a3, 83, 16711935);
  v13 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 83, 0);
  if ( v13 )
  {
    V_LOCK(v13);
    V_INT((int)&v22, "chain");
    v14 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      195,
      "phy_handshake_rvn",
      17,
      827,
      100,
      v23);
  }
  phy_pll_switch_rvn(a1, a2, a3, a4);
  return usleep(0x64u);
}
