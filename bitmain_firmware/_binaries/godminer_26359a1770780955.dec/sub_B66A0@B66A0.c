void sub_B66A0()
{
  int v0; // r0
  int v1; // r0
  _BYTE v2[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( opt_algo == 12 )
  {
    v0 = sub_B6450();
    if ( v0 <= 47 )
    {
      v0 = 48 - v0;
      if ( v0 >= 16 )
        v0 = 16;
    }
    else if ( (unsigned int)(v0 - 49) > 3 )
    {
      v0 -= 48;
    }
    V_LOCK(v0);
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/set_pwm_by_temp.c",
      177,
      "calc_g_pid_target_bias",
      22,
      315,
      20,
      v2);
  }
}
