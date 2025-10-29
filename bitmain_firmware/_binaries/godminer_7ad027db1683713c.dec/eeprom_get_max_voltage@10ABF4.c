int eeprom_get_max_voltage()
{
  int *v0; // r3
  int result; // r0
  int v2; // t1
  int v3; // r2
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v5[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( dword_2E8A8C[0] && *(_BYTE *)(dword_2E8A8C[0] + 80) )
  {
    if ( dword_2E8A90 <= 0 )
    {
      return 0;
    }
    else
    {
      v0 = dword_2E8A94;
      result = 0;
      do
      {
        v2 = *v0++;
        v3 = *(unsigned __int16 *)(*(_DWORD *)(dword_2E8A8C[0] + 4 * v2) + 39);
        if ( result < v3 )
          result = v3;
      }
      while ( v0 != &dword_2E8A94[dword_2E8A90] );
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: eeprom is not ready", "eeprom_get_max_voltage");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "eeprom_get_max_voltage",
      22,
      1054,
      100,
      v5);
    return -1;
  }
  return result;
}
