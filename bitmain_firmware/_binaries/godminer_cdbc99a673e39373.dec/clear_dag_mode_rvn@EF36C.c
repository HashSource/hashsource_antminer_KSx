int __fastcall clear_dag_mode_rvn(int a1)
{
  int v2; // r0
  int v4; // [sp+28h] [bp-1024h] BYREF
  _BYTE v5[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v4, "chain");
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "clear_dag_mode_rvn",
    18,
    310,
    60,
    v5);
  sub_EC8B0(a1, 147, 0);
  usleep(0x2710u);
  return 0;
}
