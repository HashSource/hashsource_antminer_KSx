int eeprom_get_max_voltage()
{
  char *v0; // r3
  int result; // r0
  int v2; // t1
  int v3; // r2
  int v4; // r0
  int v5; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  _BYTE v7[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( dword_30CF3C[0] && *(_BYTE *)(dword_30CF3C[0] + 80) )
  {
    if ( dword_30CF40 <= 0 )
    {
      return 0;
    }
    else
    {
      v0 = (char *)&unk_30CF44;
      result = 0;
      do
      {
        v2 = *(_DWORD *)v0;
        v0 += 4;
        v3 = *(unsigned __int16 *)(*(_DWORD *)(dword_30CF3C[0] + 4 * v2) + 39);
        if ( result < v3 )
          result = v3;
      }
      while ( v0 != (char *)&unk_30CF44 + 4 * dword_30CF40 );
    }
  }
  else
  {
    v4 = snprintf(s, 0x800u, "%s: eeprom is not ready", "eeprom_get_max_voltage");
    V_LOCK(v4);
    v5 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_get_max_voltage",
      22,
      1073,
      100,
      v7);
    return -1;
  }
  return result;
}
