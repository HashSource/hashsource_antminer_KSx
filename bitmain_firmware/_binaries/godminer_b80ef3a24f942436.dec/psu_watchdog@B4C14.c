int psu_watchdog()
{
  double v0; // d0
  int v1; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r7
  int v5; // r5
  int current_voltage; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int power_status; // r0
  int v14; // r6
  int v15; // r5
  int v16; // r0
  int result; // r0
  bool v18; // zf
  int v19; // r0
  int v20; // r0
  int v21; // r0
  _BYTE v22[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = bitmain_set_watchdog(1);
  V_LOCK(v1);
  v2 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/miner_util/check_heartbeat.c",
         172,
         "psu_watchdog",
         12,
         77,
         60,
         v22);
  if ( v1 == 1 )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      pthread_setcancelstate(1, 0);
      read_feedback_voltage(0);
      current_voltage = get_current_voltage();
      v7 = is_power_on();
      if ( !v7 )
        goto LABEL_13;
      if ( v0 < 0.0 )
        break;
      if ( v0 * 100.0 > (double)current_voltage * 1.1 || v0 * 100.0 < (double)current_voltage * 0.9 )
      {
        V_LOCK(v7);
        ++v4;
        v8 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v8);
        v9 = g_zc;
        v10 = 80;
        v11 = 93;
LABEL_11:
        v7 = zlog(
               v9,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c",
               172,
               "psu_watchdog",
               12,
               v11,
               v10,
               v22);
        goto LABEL_12;
      }
      v4 = 0;
LABEL_12:
      V_LOCK(v7);
      v12 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v12);
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c",
             172,
             "psu_watchdog",
             12,
             99,
             20,
             v22);
LABEL_13:
      power_status = bitmain_get_power_status(v7);
      v14 = power_status;
      if ( power_status )
      {
        V_LOCK(power_status);
        v15 = v5 + 1;
        v16 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v16);
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c",
                   172,
                   "psu_watchdog",
                   12,
                   106,
                   80,
                   v22);
        v18 = v15 == 3;
        if ( v15 <= 3 )
          v18 = v4 == 0;
        if ( !v18 )
          return result;
        v14 = v15;
      }
      else if ( v4 > 3 )
      {
        V_LOCK(0);
        v19 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v19);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c",
                 172,
                 "psu_watchdog",
                 12,
                 113,
                 100,
                 v22);
      }
      v5 = v14;
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sleep(0xAu);
    }
    V_LOCK(v7);
    v20 = logfmt_raw((int)v22, 0x1000u);
    ++v4;
    V_UNLOCK(v20);
    v9 = g_zc;
    v10 = 100;
    v11 = 89;
    goto LABEL_11;
  }
  V_LOCK(v3);
  v21 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/miner_util/check_heartbeat.c",
    172,
    "psu_watchdog",
    12,
    79,
    100,
    v22);
  return 0;
}
