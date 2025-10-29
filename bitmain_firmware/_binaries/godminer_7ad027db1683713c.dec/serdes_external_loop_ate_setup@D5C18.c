int __fastcall serdes_external_loop_ate_setup(int a1, int a2, int a3, int a4)
{
  _DWORD v9[7]; // [sp+38h] [bp-1044h] BYREF
  int v10; // [sp+54h] [bp-1028h]
  _DWORD v11[7]; // [sp+58h] [bp-1024h] BYREF
  int v12; // [sp+74h] [bp-1008h]
  char v13[4100]; // [sp+78h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v9, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v13,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "%s ...",
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_external_loop_ate_setup",
    30,
    710,
    60,
    v13);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  V_LOCK();
  V_INT((int)v11, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v13,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "%s Introducing error",
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_external_loop_ate_setup",
    30,
    721,
    60,
    v13);
  sub_CF420(a1, a3, 77, 1114129);
  sub_CF420(a1, a3, 78, -2144251791);
  sub_CF420(a1, a3, 77, (int)&dword_10000 + 1);
  sub_CF420(a1, a3, 78, -2144251791);
  usleep(0xAu);
  serdes_wait_status(a1, a2, a3, 4244, a4);
  serdes_wait_status(a1, a2, a3, 4244, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 4756, a4);
  serdes_wait_status(a1, a2, a3, 4756, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 5268, a4);
  serdes_wait_status(a1, a2, a3, 5268, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status(a1, a2, a3, 5780, a4);
  serdes_wait_status(a1, a2, a3, 5780, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  return 0;
}
