int rename_miner_by_eeprom_info_ks5()
{
  _BYTE *v0; // r5
  int min_freq; // r4
  int max_voltage; // r0
  bool v3; // zf
  const char *v4; // r3
  int v6; // r0
  _BYTE v7[4100]; // [sp+28h] [bp-1004h] BYREF

  v0 = malloc(0x400u);
  min_freq = eeprom_get_min_freq();
  max_voltage = eeprom_get_max_voltage();
  v3 = min_freq == -1;
  if ( min_freq != -1 )
    v3 = max_voltage == -1;
  if ( v3 )
  {
    V_LOCK(max_voltage);
    v6 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      200,
      "rename_miner_by_eeprom_info_ks5",
      31,
      606,
      100,
      v7);
    free(v0);
    return 33;
  }
  else
  {
    if ( min_freq >= 600 )
    {
      v4 = "Antminer KS5 Pro";
    }
    else if ( min_freq > 549 )
    {
      v4 = "Antminer KS5";
    }
    else
    {
      v4 = "Antminer KS5 18T";
    }
    *v0 = 0;
    snprintf(
      v0,
      0x400u,
      "sed -i '/%s\\|%s\\|%s/s/%s\\|%s\\|%s/%s/g' %s",
      "Antminer KS5 18T",
      "Antminer KS5 Pro",
      "Antminer KS5",
      "Antminer KS5 18T",
      "Antminer KS5 Pro",
      "Antminer KS5",
      v4,
      "/usr/bin/compile_time");
    system(v0);
    free(v0);
    return 0;
  }
}
