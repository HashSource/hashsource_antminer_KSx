int check_fan_valiad()
{
  unsigned int v0; // r8
  int fan_num; // r4
  unsigned int v2; // r7
  int v3; // r5
  unsigned int i; // r6
  int realtime_speed; // r9
  int v6; // r0
  int fan_max_speed; // r0
  unsigned int v8; // r5
  __int64 v9; // r6
  int v10; // r9
  int v11; // r0
  _DWORD v13[7]; // [sp+70h] [bp-1044h] BYREF
  int v14; // [sp+8Ch] [bp-1028h]
  _DWORD v15[8]; // [sp+90h] [bp-1024h] BYREF
  char v16[4100]; // [sp+B0h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  green_led_off();
  red_led_off();
  fan_pwm_set_max();
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "Begain check_fan_valiad");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/check_fan.c",
    166,
    "check_fan_valiad",
    16,
    33,
    60,
    v16);
  v0 = 0;
  fan_num = platform_get_fan_num();
  while ( 1 )
  {
    v2 = ++v0 % 0x14;
    if ( fan_num <= 0 )
      break;
    v3 = 0;
    for ( i = 0; i != fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      v6 = i;
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(v6);
        if ( fan_get_check_fan_speed(fan_max_speed) <= realtime_speed )
          ++v3;
      }
    }
    usleep((__useconds_t)&loc_7A120);
    if ( v2 )
    {
      if ( fan_num <= v3 )
        goto LABEL_21;
      goto LABEL_12;
    }
LABEL_20:
    fan_pwm_set_max();
    if ( fan_num <= v3 )
      goto LABEL_21;
LABEL_12:
    v8 = v0 % 0x78;
    if ( v0 == 120 * (v0 / 0x78) )
    {
      red_led_on();
      v9 = 0;
      do
      {
        v10 = fan_get_realtime_speed(v8);
        if ( v10 == -1 || (v11 = platform_get_fan_max_speed(v8), fan_get_check_fan_speed(v11) > v10) )
        {
          V_LOCK();
          V_INT((int)v13, "fanid", v9);
          V_INT((int)v15, "fanspeed", v10 & ~(v10 >> 31));
          logfmt_raw(
            v16,
            0x1000u,
            0,
            v14,
            v13[0],
            v13[1],
            v13[2],
            v13[3],
            v13[4],
            v13[5],
            v13[6],
            v14,
            v15[0],
            v15[1],
            v15[2],
            v15[3],
            v15[4],
            v15[5],
            v15[6],
            v15[7],
            "%2d(corresponding to FAN%s on control board PCB",
            v8,
            (&fan_name)[v8]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/check_fan.c",
            166,
            "check_fan_valiad",
            16,
            54,
            100,
            v16);
        }
        ++v8;
        ++v9;
      }
      while ( fan_num != v8 );
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "Sweep error string = %s.", "F:1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/check_fan.c",
        166,
        "check_fan_valiad",
        16,
        57,
        100,
        v16);
      set_miner_6060info_status_fan_err(1);
    }
  }
  usleep((__useconds_t)&loc_7A120);
  if ( !v2 )
  {
    v3 = 0;
    goto LABEL_20;
  }
  v3 = 0;
LABEL_21:
  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "check_fan_speed ok, fan_num = %d", v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/miner_util/check_fan.c",
           166,
           "check_fan_valiad",
           16,
           62,
           60,
           v16);
}
