int __fastcall sub_B0B04(int a1)
{
  int v1; // r0
  _BYTE v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/set_pwm_by_temp.c",
    172,
    "get_temp",
    8,
    169,
    100,
    v3);
  return 0x7FFFFFFF;
}
