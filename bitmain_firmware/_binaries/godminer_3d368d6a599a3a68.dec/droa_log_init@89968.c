int droa_log_init()
{
  int result; // r0
  int v1; // r4
  char *v2; // r6
  const char *eeprom_chip_sn; // r0
  const char *v4; // r11
  size_t v5; // r0
  char *v6; // r0
  int v7; // r0
  _BYTE v8[4100]; // [sp+10h] [bp-1004h] BYREF

  result = get_all_created_runtime(&g_chain_number);
  if ( g_chain_number > 0 )
  {
    v1 = 0;
    do
    {
      while ( v1 > 15 )
      {
        if ( g_chain_number <= ++v1 )
          return result;
      }
      v2 = &g_bsn[64 * v1];
      eeprom_chip_sn = (const char *)api_get_eeprom_chip_sn(v1++);
      v4 = eeprom_chip_sn;
      v5 = strlen(eeprom_chip_sn);
      v6 = strncpy(v2, v4, v5);
      V_LOCK(v6);
      v7 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v7);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/god-miner.c",
                 160,
                 "droa_log_init",
                 13,
                 1654,
                 60,
                 v8);
    }
    while ( g_chain_number > v1 );
  }
  return result;
}
