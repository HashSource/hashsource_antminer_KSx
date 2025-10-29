int __fastcall serdes_internal_loop_ate_setup(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  _BYTE v10[32]; // [sp+28h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v10, "chain");
  v8 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_phy_set.c",
    195,
    "serdes_internal_loop_ate_setup",
    30,
    394,
    60,
    v11);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  sub_D795C(a1, a3, 77, 1114129);
  sub_D795C(a1, a3, 78, -2144251791);
  sub_D795C(a1, a3, 77, (int)&dword_10000 + 1);
  sub_D795C(a1, a3, 78, -2144251791);
  usleep(0x2710u);
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
