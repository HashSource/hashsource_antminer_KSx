int sub_114FCC()
{
  int v0; // r0
  int v1; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v4[4100]; // [sp+810h] [bp-1004h] BYREF

  v0 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready", "eeprom_get_fmt_version");
  V_LOCK(v0);
  v1 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
    191,
    "eeprom_get_fmt_version",
    22,
    1109,
    100,
    v4);
  return -1;
}
