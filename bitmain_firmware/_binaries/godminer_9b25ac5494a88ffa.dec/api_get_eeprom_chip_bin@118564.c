int __fastcall api_get_eeprom_chip_bin(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  _BYTE v6[4104]; // [sp+810h] [bp-1008h] BYREF

  v4 = dword_309C08[a1 + 2];
  if ( dword_309C08[0] && *(_BYTE *)(dword_309C08[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_309C08[0] + 4 * v4) + 15);
  v2 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_chip_bin", v4);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
    191,
    "get_chip_bin",
    12,
    1155,
    100,
    v6);
  return 255;
}
