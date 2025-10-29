int __fastcall phy_external_bist_init(int a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // r0
  char *v8; // r11
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  unsigned __int16 v16; // r9
  int v17; // r0
  int v18; // r0
  int v20; // r0
  int v21; // r0
  int v22; // [sp+38h] [bp-111Ch]
  unsigned __int8 v24; // [sp+40h] [bp-1114h]
  int v25; // [sp+44h] [bp-1110h]
  unsigned __int8 v26; // [sp+48h] [bp-110Ch]
  unsigned __int8 v27; // [sp+4Fh] [bp-1105h] BYREF
  _BYTE v28[32]; // [sp+50h] [bp-1104h] BYREF
  int v29; // [sp+70h] [bp-10E4h] BYREF
  _BYTE v30[32]; // [sp+90h] [bp-10C4h] BYREF
  int v31; // [sp+B0h] [bp-10A4h] BYREF
  _BYTE v32[32]; // [sp+D0h] [bp-1084h] BYREF
  int v33; // [sp+F0h] [bp-1064h] BYREF
  _BYTE v34[32]; // [sp+110h] [bp-1044h] BYREF
  int v35; // [sp+130h] [bp-1024h] BYREF
  _BYTE v36[4080]; // [sp+150h] [bp-1004h] BYREF

  v27 = a3;
  V_LOCK(a1);
  V_INT((int)v28, "chain", *(int *)(a1 + 248));
  v7 = logfmt_raw((int)v36, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "phy_external_bist_init",
    22,
    1920,
    60,
    v36);
  v8 = &case_select[16 * a5];
  v26 = v8[12];
  v22 = (unsigned __int8)v8[16];
  v24 = v8[4];
  v25 = (unsigned __int8)v8[8];
  V_LOCK(v25);
  V_INT((int)&v29, "chain", *(int *)(a1 + 248));
  v9 = logfmt_raw((int)v36, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "phy_external_bist_init",
    22,
    1942,
    60,
    v36);
  sub_D85AC(a1, v27, 86, 3670024);
  usleep(0x12Cu);
  sub_D85AC(a1, v27, 85, 109905420);
  usleep(0x12Cu);
  sub_D85AC(a1, v27, 101, -268374016);
  usleep(0x12Cu);
  sub_D85AC(a1, v27, 64, 256);
  usleep(0x12Cu);
  sub_D85AC(a1, v27, 80, 33423870);
  usleep(0x12Cu);
  sub_D85AC(a1, v27, 81, 832516511);
  usleep(0x12Cu);
  sub_D85AC(a1, v27, 88, -1);
  usleep(0x12Cu);
  v10 = check_core_reg_with_expect_data_eth(a1, a2, v27, 125, 0x70007000u);
  if ( v10 )
  {
    V_LOCK(v10);
    V_INT((int)v30, "chain", *(int *)(a1 + 248));
    v11 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "phy_external_bist_init",
      22,
      1975,
      100,
      v36);
  }
  else
  {
    V_LOCK(0);
    V_INT((int)&v31, "chain", *(int *)(a1 + 248));
    v20 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "phy_external_bist_init",
      22,
      1977,
      100,
      v36);
  }
  phy_eq_main_set_by_apb(a1, a2, (char *)&v27, 1, v24);
  phy_eq_pre_set_by_apb(a1, a2, (char *)&v27, 1, v25);
  phy_eq_post_set_by_apb(a1, a2, (char *)&v27, 1, v26);
  sub_D85AC(a1, v27, 86, 137889800);
  usleep(0x12Cu);
  sub_D85AC(a1, v27, 80, 0);
  usleep(0x12Cu);
  v12 = check_core_reg_with_expect_data(a1, a2, v27, 119, 0);
  if ( v12 )
  {
    V_LOCK(v12);
    V_INT((int)v32, "chain", *(int *)(a1 + 248));
    v13 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "phy_external_bist_init",
      22,
      2003,
      100,
      v36);
  }
  else
  {
    V_LOCK(0);
    V_INT((int)&v33, "chain", *(int *)(a1 + 248));
    v21 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "phy_external_bist_init",
      22,
      2005,
      100,
      v36);
  }
  sub_D85AC(a1, v27, 82, 0);
  v14 = usleep(0x64u);
  V_LOCK(v14);
  V_INT((int)v34, "chain", *(int *)(a1 + 248));
  v15 = logfmt_raw((int)v36, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "phy_external_bist_init",
    22,
    2010,
    100,
    v36);
  v16 = v27;
  sub_D85AC(a1, v27, 83, 16711935);
  v17 = check_core_reg_with_expect_data(a1, a2, v16, 83, 0);
  if ( v17 )
  {
    V_LOCK(v17);
    V_INT((int)&v35, "chain", *(int *)(a1 + 248));
    v18 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "phy_handshake",
      13,
      1744,
      100,
      v36);
  }
  phy_pll_switch(a1, a2, v27, a4);
  if ( v22 )
    phy_rx_adapt(a1, a2, v27);
  return usleep(0x64u);
}
