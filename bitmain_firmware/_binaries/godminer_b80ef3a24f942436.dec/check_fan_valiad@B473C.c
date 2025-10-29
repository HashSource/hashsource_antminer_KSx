int check_fan_valiad()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  unsigned int v4; // r8
  int fan_num; // r4
  unsigned int v6; // r7
  int v7; // r5
  unsigned int i; // r6
  int realtime_speed; // r9
  unsigned int v10; // r0
  int fan_max_speed; // r0
  int v12; // r0
  unsigned int v13; // r5
  __int64 v14; // r6
  int v15; // r9
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int j; // r6
  int v20; // r0
  int v21; // r0
  _BYTE v23[32]; // [sp+70h] [bp-1044h] BYREF
  _BYTE v24[32]; // [sp+90h] [bp-1024h] BYREF
  _BYTE v25[4100]; // [sp+B0h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  v0 = green_led_off();
  red_led_off(v0);
  v1 = fan_pwm_set_max();
  V_LOCK(v1);
  v2 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/miner_util/check_fan.c",
         166,
         "check_fan_valiad",
         16,
         31,
         60,
         v25);
  v4 = 0;
  fan_num = platform_get_fan_num(v3);
  while ( 1 )
  {
    v6 = ++v4 % 0x14;
    if ( fan_num <= 0 )
    {
      v12 = usleep((__useconds_t)&loc_7A120);
      if ( v6 )
        goto LABEL_22;
      v7 = 0;
LABEL_24:
      v12 = fan_pwm_set_max();
      goto LABEL_11;
    }
    v7 = 0;
    for ( i = 0; i != fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      v10 = i;
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(v10);
        if ( fan_get_check_fan_speed(fan_max_speed) <= realtime_speed )
          ++v7;
      }
    }
    v12 = usleep((__useconds_t)&loc_7A120);
    if ( !v6 )
      goto LABEL_24;
LABEL_11:
    if ( fan_num <= v7 )
      break;
    v13 = v4 % 0x78;
    if ( v4 == 120 * (v4 / 0x78) )
    {
      red_led_on();
      v14 = 0;
      do
      {
        v15 = fan_get_realtime_speed(v13);
        v16 = v13;
        if ( v15 == -1 || (v17 = platform_get_fan_max_speed(v13), v16 = fan_get_check_fan_speed(v17), v16 > v15) )
        {
          V_LOCK(v16);
          V_INT((int)v23, "fanid", v14);
          V_INT((int)v24, "fanspeed", v15 & ~(v15 >> 31));
          v18 = logfmt_raw((int)v25, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/check_fan.c",
            166,
            "check_fan_valiad",
            16,
            52,
            100,
            v25);
          set_miner_6060info_status_fan_err(v13, 1);
        }
        ++v13;
        ++v14;
      }
      while ( fan_num != v13 );
    }
  }
  if ( fan_num > 0 )
  {
    for ( j = 0; j != fan_num; ++j )
    {
      v20 = j;
      v12 = set_miner_6060info_status_fan_err(v20, 0);
    }
  }
LABEL_22:
  V_LOCK(v12);
  v21 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v21);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/miner_util/check_fan.c",
           166,
           "check_fan_valiad",
           16,
           61,
           60,
           v25);
}
