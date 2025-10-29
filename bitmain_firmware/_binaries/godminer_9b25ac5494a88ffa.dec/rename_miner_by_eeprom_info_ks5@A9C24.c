int rename_miner_by_eeprom_info_ks5()
{
  _BYTE *v0; // r5
  int min_freq; // r4
  int max_voltage; // r0
  const char *v3; // r1
  int v4; // r2
  int v5; // r3
  bool v6; // zf
  int v8; // r0
  _BYTE v9[4100]; // [sp+20h] [bp-1004h] BYREF

  v0 = malloc(0x400u);
  min_freq = eeprom_get_min_freq();
  max_voltage = eeprom_get_max_voltage();
  v6 = min_freq == -1;
  if ( min_freq != -1 )
    v6 = max_voltage == -1;
  if ( v6 )
  {
    V_LOCK(max_voltage);
    v8 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      200,
      "rename_miner_by_eeprom_info_ks5",
      31,
      604,
      100,
      v9);
    free(v0);
    return 33;
  }
  else
  {
    *v0 = 0;
    if ( min_freq < 600 )
      v5 = 24900;
    else
      LOWORD(v4) = 24880;
    if ( min_freq < 600 )
    {
      HIWORD(v5) = 39;
      v4 = 24880;
    }
    else
    {
      HIWORD(v4) = 39;
    }
    if ( min_freq < 600 )
    {
      HIWORD(v4) = 39;
      v3 = (const char *)v5;
    }
    else
    {
      v5 = 24900;
    }
    if ( min_freq >= 600 )
    {
      v3 = (const char *)v4;
      HIWORD(v5) = 39;
    }
    snprintf(
      v0,
      0x400u,
      "sed -i '/%s\\|%s/s/%s\\|%s/%s/g' %s",
      "Antminer KS5",
      (const char *)v4,
      (const char *)v5,
      (const char *)v4,
      v3,
      "/usr/bin/compile_time");
    system(v0);
    free(v0);
    return 0;
  }
}
