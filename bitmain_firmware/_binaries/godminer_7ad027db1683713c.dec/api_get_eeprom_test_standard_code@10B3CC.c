int __fastcall api_get_eeprom_test_standard_code(int a1)
{
  int v2; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v4[4104]; // [sp+810h] [bp-1008h] BYREF

  v2 = dword_2E8A8C[a1 + 2];
  if ( dword_2E8A8C[0] && *(_BYTE *)(dword_2E8A8C[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_2E8A8C[0] + 4 * v2) + 50);
  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_test_standard_code", v2);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    186,
    "get_test_standard_code",
    22,
    1175,
    100,
    v4);
  return 255;
}
