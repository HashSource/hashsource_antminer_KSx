int __fastcall sub_8BB08(int a1)
{
  int v1; // r0
  _BYTE v3[4100]; // [sp+10h] [bp-1004h] BYREF

  fan_pwm_fixed = 0;
  V_LOCK(a1);
  v1 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v1);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/pool.c",
           155,
           "custom_param_check",
           18,
           678,
           40,
           v3);
}
