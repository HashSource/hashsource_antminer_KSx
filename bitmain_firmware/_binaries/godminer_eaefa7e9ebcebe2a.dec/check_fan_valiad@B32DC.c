int check_fan_valiad()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r8
  int fan_num; // r4
  unsigned int v7; // r7
  int v8; // r5
  int i; // r6
  int realtime_speed; // r9
  int v11; // r0
  int fan_max_speed; // r0
  int v13; // r0
  unsigned int v14; // r5
  __int64 v15; // r6
  int v16; // r9
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int j; // r6
  int v21; // r0
  int v22; // r0
  _BYTE v24[32]; // [sp+70h] [bp-1044h] BYREF
  _BYTE v25[32]; // [sp+90h] [bp-1024h] BYREF
  _BYTE v26[4100]; // [sp+B0h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  v0 = green_led_off();
  v1 = red_led_off(v0);
  v2 = fan_pwm_set_max(v1);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v26, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/miner_util/check_fan.c",
         171,
         "check_fan_valiad",
         16,
         31,
         60,
         v26);
  v5 = 0;
  fan_num = platform_get_fan_num(v4);
  while ( 1 )
  {
    v7 = ++v5 % 0x14;
    if ( fan_num <= 0 )
    {
      v13 = usleep((__useconds_t)core::panicking::panic_cannot_unwind::h4cdd2df328930c56);
      if ( v7 )
        goto LABEL_22;
      v8 = 0;
LABEL_24:
      v13 = fan_pwm_set_max(v13);
      goto LABEL_11;
    }
    v8 = 0;
    for ( i = 0; i != fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      v11 = i;
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(v11);
        if ( fan_get_check_fan_speed(fan_max_speed) <= realtime_speed )
          ++v8;
      }
    }
    v13 = usleep((__useconds_t)core::panicking::panic_cannot_unwind::h4cdd2df328930c56);
    if ( !v7 )
      goto LABEL_24;
LABEL_11:
    if ( fan_num <= v8 )
      break;
    v14 = v5 % 0x78;
    if ( v5 == 120 * (v5 / 0x78) )
    {
      red_led_on();
      v15 = 0;
      do
      {
        v16 = fan_get_realtime_speed(v14);
        v17 = v14;
        if ( v16 == -1 || (v18 = platform_get_fan_max_speed(v14), v17 = fan_get_check_fan_speed(v18), v17 > v16) )
        {
          V_LOCK(v17);
          V_INT((int)v24, "fanid");
          V_INT((int)v25, "fanspeed");
          v19 = logfmt_raw((int)v26, 0x1000u);
          V_UNLOCK(v19);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/check_fan.c",
            171,
            "check_fan_valiad",
            16,
            52,
            100,
            v26);
          set_miner_6060info_status_fan_err(v14, 1);
        }
        ++v14;
        ++v15;
      }
      while ( fan_num != v14 );
    }
  }
  if ( fan_num > 0 )
  {
    for ( j = 0; j != fan_num; ++j )
    {
      v21 = j;
      v13 = set_miner_6060info_status_fan_err(v21, 0);
    }
  }
LABEL_22:
  V_LOCK(v13);
  v22 = logfmt_raw((int)v26, 0x1000u);
  V_UNLOCK(v22);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/miner_util/check_fan.c",
           171,
           "check_fan_valiad",
           16,
           61,
           60,
           v26);
}
