int __fastcall hardware_info_override_by_eeprom(int a1)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int strategy; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  _DWORD v13[1030]; // [sp+28h] [bp-1018h] BYREF

  if ( opt_algo != 12 )
    return 0;
  v3 = V_LOCK(a1);
  eeprom_get_strategy(v3);
  v4 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
         187,
         "hardware_info_override_by_eeprom",
         32,
         137,
         40,
         v13);
  strategy = eeprom_get_strategy(v5);
  if ( strategy == 101 )
  {
    V_LOCK(101);
    v9 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
      187,
      "hardware_info_override_by_eeprom",
      32,
      139,
      40,
      v13);
  }
  else
  {
    v7 = eeprom_get_strategy(strategy);
    if ( v7 == 103 )
    {
      V_LOCK(103);
      v10 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
        187,
        "hardware_info_override_by_eeprom",
        32,
        144,
        40,
        v13);
      dword_30E944 = 1350;
      *(_DWORD *)(a1 + 100) = 1350;
      opt_custom_voltage = 1350;
      dword_30E91C = 65;
      opt_custom_freq = 300;
      byte_2E7DF8 = 0;
      platform_get_fan_control_info(v13);
      fan_control_info_init(
        v13[0],
        v13[1],
        v13[2],
        v13[3],
        v13[4],
        v13[5],
        v13[6],
        v13[7],
        v13[8],
        v13[9],
        v13[10],
        v13[11],
        v13[12]);
      return 0;
    }
    v8 = eeprom_get_strategy(v7);
    if ( v8 != 105 )
    {
      if ( eeprom_get_strategy(v8) == 107 )
      {
        V_LOCK(107);
        v12 = logfmt_raw((int)v13, 0x1000u);
        V_UNLOCK(v12);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
          187,
          "hardware_info_override_by_eeprom",
          32,
          159,
          40,
          v13);
        dword_30E944 = 1450;
        byte_2E7DF8 = 1;
        dword_2E7E30 = 70;
      }
      return 0;
    }
    V_LOCK(105);
    v11 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
      187,
      "hardware_info_override_by_eeprom",
      32,
      154,
      40,
      v13);
  }
  dword_30E944 = 1450;
  byte_2E7DF8 = 1;
  return 0;
}
