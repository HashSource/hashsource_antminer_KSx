unsigned int __fastcall check_fan_hw_min_speed_limit(int a1)
{
  int fan_num; // r6
  int v3; // r0
  unsigned int result; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int realtime_speed; // r0
  int v9; // r0
  int v10; // [sp+14h] [bp-1010h]
  int v12; // [sp+1Ch] [bp-1008h]
  _BYTE v13[4100]; // [sp+20h] [bp-1004h] BYREF

  fan_num = platform_get_fan_num();
  V_LOCK(fan_num);
  v3 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/check_fan.c",
    171,
    "check_fan_hw_min_speed_limit",
    28,
    24,
    40,
    v13);
  result = fan_pwm_set(1);
  if ( a1 > 0 )
  {
    v10 = 0;
    v12 = 0;
    do
    {
      if ( fan_num > 0 )
      {
        v5 = 0;
        while ( 1 )
        {
          v7 = v5++;
          realtime_speed = fan_get_realtime_speed(v7);
          if ( realtime_speed <= 1000 )
            break;
          V_LOCK(realtime_speed);
          v6 = logfmt_raw((int)v13, 0x1000u);
          V_UNLOCK(v6);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/check_fan.c",
            171,
            "check_fan_hw_min_speed_limit",
            28,
            36,
            40,
            v13);
          if ( fan_num == v5 )
            goto LABEL_9;
        }
        V_LOCK(realtime_speed);
        v9 = logfmt_raw((int)v13, 0x1000u);
        v12 = 1;
        V_UNLOCK(v9);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/check_fan.c",
          171,
          "check_fan_hw_min_speed_limit",
          28,
          33,
          40,
          v13);
      }
LABEL_9:
      ++v10;
      result = sleep(1u);
    }
    while ( a1 != v10 );
    if ( v12 )
      return set_fan_pwm_percent_min(15);
  }
  return result;
}
