int __fastcall sub_D7810(int a1)
{
  int v1; // r0
  _BYTE v3[32]; // [sp+30h] [bp-1020h] BYREF
  _BYTE v4[4096]; // [sp+50h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v3, "chain");
  v1 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v1);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_phy_set.c",
           195,
           "phy_handshake",
           13,
           890,
           100,
           v4);
}
