int __fastcall serdes_close_ctle(int a1, int a2, char a3)
{
  int v5; // r0
  _BYTE v7[32]; // [sp+28h] [bp-1020h] BYREF
  _BYTE v8[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v7, "chain", *(int *)(a1 + 248));
  v5 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_close_ctle",
    17,
    218,
    60,
    v8);
  sub_D85AC(a1, a3, 77, 281022656);
  sub_D85AC(a1, a3, 78, -2144264179);
  sub_D85AC(a1, a3, 77, 281022656);
  sub_D85AC(a1, a3, 78, -2144263667);
  sub_D85AC(a1, a3, 77, 281022656);
  sub_D85AC(a1, a3, 78, -2144263155);
  sub_D85AC(a1, a3, 77, 281022656);
  sub_D85AC(a1, a3, 78, -2144262643);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144264178);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144263666);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144263154);
  sub_D85AC(a1, a3, 77, 0);
  sub_D85AC(a1, a3, 78, -2144262642);
  return 0;
}
