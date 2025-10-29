int __fastcall api_get_eeprom_chain_load_state(int a1)
{
  int *v1; // r0
  int v3; // r0
  int v4; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v6[4100]; // [sp+810h] [bp-1004h] BYREF

  v1 = &dword_311400[a1];
  if ( dword_311400[0] )
    return *(unsigned __int8 *)(dword_311400[0] + v1[2] + 64);
  v3 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "api_get_eeprom_chain_load_state", v1[2]);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    186,
    "api_get_eeprom_chain_load_state",
    31,
    1329,
    100,
    v6);
  return -1;
}
