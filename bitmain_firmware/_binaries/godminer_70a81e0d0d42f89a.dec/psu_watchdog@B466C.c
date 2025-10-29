int psu_watchdog()
{
  double v0; // d0
  int v1; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r7
  int v5; // r5
  int feedback_voltage; // r0
  int current_voltage; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int power_status; // r0
  int v12; // r6
  int v13; // r5
  int v14; // r0
  int result; // r0
  bool v16; // zf
  int v17; // r0
  int v18; // r0
  int v19; // r0
  _BYTE v20[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = bitmain_set_watchdog(1);
  V_LOCK(v1);
  v2 = logfmt_raw((int)v20, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/miner_util/check_heartbeat.c",
         177,
         "psu_watchdog",
         12,
         77,
         60,
         v20);
  if ( v1 == 1 )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      pthread_setcancelstate(1, 0);
      feedback_voltage = read_feedback_voltage(0);
      current_voltage = get_current_voltage(feedback_voltage);
      v8 = is_power_on();
      if ( v8 )
      {
        if ( v0 < 0.0 )
        {
          V_LOCK(v8);
          v18 = logfmt_raw((int)v20, 0x1000u);
          ++v4;
          V_UNLOCK(v18);
          v8 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/miner_util/check_heartbeat.c",
                 177,
                 "psu_watchdog",
                 12,
                 89,
                 100,
                 v20);
        }
        else if ( v0 * 100.0 > (double)current_voltage * 1.1 || v0 * 100.0 < (double)current_voltage * 0.9 )
        {
          V_LOCK(v8);
          ++v4;
          v9 = logfmt_raw((int)v20, 0x1000u);
          V_UNLOCK(v9);
          v8 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/miner_util/check_heartbeat.c",
                 177,
                 "psu_watchdog",
                 12,
                 93,
                 80,
                 v20);
        }
        else
        {
          v4 = 0;
        }
        V_LOCK(v8);
        v10 = logfmt_raw((int)v20, 0x1000u);
        V_UNLOCK(v10);
        v8 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/miner_util/check_heartbeat.c",
               177,
               "psu_watchdog",
               12,
               99,
               20,
               v20);
      }
      power_status = bitmain_get_power_status(v8);
      v12 = power_status;
      if ( power_status )
      {
        V_LOCK(power_status);
        v13 = v5 + 1;
        v14 = logfmt_raw((int)v20, 0x1000u);
        V_UNLOCK(v14);
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/miner_util/check_heartbeat.c",
                   177,
                   "psu_watchdog",
                   12,
                   110,
                   80,
                   v20);
        v16 = v13 == 3;
        if ( v13 <= 3 )
          v16 = v4 == 0;
        if ( !v16 )
          return result;
        v12 = v13;
      }
      else if ( v4 > 3 )
      {
        V_LOCK(0);
        v17 = logfmt_raw((int)v20, 0x1000u);
        V_UNLOCK(v17);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/miner_util/check_heartbeat.c",
                 177,
                 "psu_watchdog",
                 12,
                 117,
                 100,
                 v20);
      }
      v5 = v12;
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sleep(0xAu);
    }
  }
  V_LOCK(v3);
  v19 = logfmt_raw((int)v20, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/check_heartbeat.c",
    177,
    "psu_watchdog",
    12,
    79,
    100,
    v20);
  return 0;
}
