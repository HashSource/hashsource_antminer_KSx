int __fastcall sub_D8C3C(int a1)
{
  int v2; // r0
  _BYTE v4[32]; // [sp+30h] [bp-1020h] BYREF
  _BYTE v5[4096]; // [sp+50h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v4, "chain", *(int *)(a1 + 248));
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
           190,
           "phy_handshake",
           13,
           1744,
           100,
           v5);
}
