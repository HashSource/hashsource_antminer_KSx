int __fastcall sub_116A7C(int a1, void *a2)
{
  int v2; // r0
  int v3; // r0
  const char *v6; // r5
  size_t v7; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v9[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_30CF3C[0] && *(_BYTE *)(dword_30CF3C[0] + 80) )
  {
    v6 = *(const char **)(*(_DWORD *)(dword_30CF3C[0] + 4 * a1) + 51);
    v7 = strlen(v6);
    memcpy(a2, v6, v7);
    return 0;
  }
  else
  {
    v2 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_miner_type", a1);
    V_LOCK(v2);
    v3 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "get_miner_type",
      14,
      1262,
      100,
      v9);
    return 0;
  }
}
