int __fastcall set_work_timeout_rvn(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "set_work_timeout_rvn",
    20,
    1093,
    20,
    v6);
  sub_F95FC(a1, 69, a2);
  usleep(0x2710u);
  return 0;
}
