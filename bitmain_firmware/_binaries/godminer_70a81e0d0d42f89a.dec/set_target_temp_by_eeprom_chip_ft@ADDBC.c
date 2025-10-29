int set_target_temp_by_eeprom_chip_ft()
{
  char *all_created_runtime; // r0
  int v1; // r9
  int v2; // r4
  const char *eeprom_chip_ft; // r11
  int eeprom_chip_bin; // r0
  int v5; // r0
  int v7; // [sp+14h] [bp-1108h] BYREF
  char s[256]; // [sp+18h] [bp-1104h] BYREF
  _BYTE v9[4100]; // [sp+118h] [bp-1004h] BYREF

  all_created_runtime = (char *)get_all_created_runtime(&v7);
  if ( v7 > 0 )
  {
    v2 = 0;
    v1 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        eeprom_chip_ft = (const char *)api_get_eeprom_chip_ft(v2);
        eeprom_chip_bin = api_get_eeprom_chip_bin(v2);
        all_created_runtime = (char *)snprintf(s, 0x100u, "%s BIN%d", eeprom_chip_ft, eeprom_chip_bin);
        if ( opt_algo == 12 )
          break;
LABEL_4:
        if ( v7 <= ++v2 )
          goto LABEL_9;
      }
      if ( strstr(s, "V05") )
      {
        all_created_runtime = strstr(s, "C3 BIN3");
        if ( !all_created_runtime )
        {
          all_created_runtime = strstr(s, "C3 BIN4");
          if ( !all_created_runtime )
          {
            all_created_runtime = strstr(s, "C3 BIN5");
            if ( !all_created_runtime )
            {
              all_created_runtime = strstr(s, "C4 BIN1");
              if ( !all_created_runtime )
              {
                all_created_runtime = strstr(s, "C4 BIN2");
                if ( !all_created_runtime )
                {
                  all_created_runtime = strstr(s, "C4 BIN3");
                  if ( !all_created_runtime )
                  {
                    all_created_runtime = strstr(s, "C4 BIN4");
                    if ( !all_created_runtime )
                    {
                      all_created_runtime = strstr(s, "C4 BIN5");
                      if ( all_created_runtime )
                        v1 = -5;
                      goto LABEL_4;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        all_created_runtime = strstr(s, "C2 BIN2");
        if ( !all_created_runtime )
        {
          all_created_runtime = strstr(s, "C2 BIN3");
          if ( !all_created_runtime )
          {
            all_created_runtime = strstr(s, "C2 BIN4");
            if ( !all_created_runtime )
            {
              all_created_runtime = strstr(s, "C2 BIN5");
              if ( all_created_runtime )
                v1 = -5;
              goto LABEL_4;
            }
          }
        }
      }
      ++v2;
      v1 = -5;
      if ( v7 <= v2 )
        goto LABEL_9;
    }
  }
  v1 = 0;
LABEL_9:
  opt_target_temp_bonus = v1;
  V_LOCK(all_created_runtime);
  v5 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
    187,
    "set_target_temp_by_eeprom_chip_ft",
    33,
    1145,
    40,
    v9);
  return 0;
}
