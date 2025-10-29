int __fastcall phy_external_loop_adapt(
        int a1,
        unsigned int a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        char a7)
{
  int v7; // r11
  int v11; // r0
  int v13; // r0
  char v14[33]; // [sp+3Fh] [bp-1h] BYREF
  _BYTE var1004[4128]; // [sp+60h] [bp+20h] BYREF

  v14[0] = a3;
  V_LOCK(a1);
  V_INT(v7, "chain", *(int *)(a1 + 248));
  if ( a7 )
  {
    v11 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "phy_external_loop_adapt",
      23,
      1905,
      60,
      var1004);
    phy_eq_main_set_by_apb(a1, a2, v14, 1, a4);
    phy_eq_pre_set_by_apb(a1, a2, v14, 1, a5);
    phy_eq_post_set_by_apb(a1, a2, v14, 1, a6);
    if ( a7 == 1 )
      phy_rx_adapt(a1, a2, (unsigned __int8)v14[0]);
  }
  else
  {
    v13 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      190,
      "phy_external_loop_adapt",
      23,
      1905,
      60,
      var1004);
    phy_eq_main_set_by_apb(a1, a2, v14, 1, a4);
    phy_eq_pre_set_by_apb(a1, a2, v14, 1, a5);
    phy_eq_post_set_by_apb(a1, a2, v14, 1, a6);
  }
  usleep(0x64u);
  return 0;
}
