int __fastcall enable_work_rvn(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "enable_work_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "enable_work_rvn",
    15,
    734,
    20,
    v5);
  sub_EBFA0(a1, 240, a2);
  usleep(0x2710u);
  return 0;
}
