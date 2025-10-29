int __fastcall api_get_eeprom_chip_sn(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  _BYTE v6[4104]; // [sp+810h] [bp-1008h] BYREF

  v4 = dword_311400[a1 + 2];
  if ( dword_311400[0] && *(_BYTE *)(dword_311400[0] + 80) )
    return *(_DWORD *)(*(_DWORD *)(dword_311400[0] + 4 * v4) + 3);
  v2 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_chip_sn", v4);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    186,
    "get_chip_sn",
    11,
    1185,
    100,
    v6);
  return 0;
}
