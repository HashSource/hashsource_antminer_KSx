int __fastcall set_lane_data_cross_rvn(int a1)
{
  int v1; // r0
  int v3; // [sp+28h] [bp-1020h] BYREF
  _BYTE v4[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v3, "chain");
  v1 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "set_lane_data_cross_rvn",
    23,
    507,
    60,
    v4);
  return 0;
}
