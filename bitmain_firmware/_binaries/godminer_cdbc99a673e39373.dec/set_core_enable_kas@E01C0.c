int __fastcall set_core_enable_kas(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    187,
    "set_core_enable_kas",
    19,
    118,
    40,
    v6);
  sub_DDA18(a1, 1, a2);
  usleep(0x2710u);
  return 0;
}
