int __fastcall set_chip0_1_work_1_pe(int a1)
{
  int v2; // r0
  _BYTE v4[32]; // [sp+28h] [bp-20h] BYREF
  _BYTE v5[4100]; // [sp+48h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v4, "chain");
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
    192,
    "set_chip0_1_work_1_pe",
    21,
    907,
    60,
    v5);
  sub_D3D78(a1, 0);
  usleep(0x2710u);
  sub_D3D78(a1, 1);
  usleep(0x2710u);
  return 0;
}
