int __fastcall set_fan_pwm_percent_min(int a1)
{
  int v2; // r0
  _BYTE v3[4112]; // [sp+10h] [bp-1010h] BYREF

  if ( g_fan_control_info == 2 )
  {
    flt_2EB934 = (float)a1;
    V_LOCK(a1);
    v2 = logfmt_raw((int)v3, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/set_pwm_by_temp.c",
      177,
      "set_fan_pwm_percent_min",
      23,
      420,
      40,
      v3);
  }
  return 0;
}
