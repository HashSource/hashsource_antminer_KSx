int __fastcall eeprom_decode_fixture_info_0(unsigned __int8 *a1, _WORD *a2)
{
  int v4; // r1
  unsigned int v5; // r2
  size_t v6; // r6
  int v7; // r3
  unsigned int v8; // r2
  bool v9; // zf
  int v10; // r7
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  char s[256]; // [sp+10h] [bp-1904h] BYREF
  char v17[2048]; // [sp+110h] [bp-1804h] BYREF
  _BYTE v18[4100]; // [sp+910h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = a1[1];
  v5 = *a1;
  v6 = v4 - 2;
  if ( (unsigned __int8)(v4 - 2) > 0xFDu )
  {
    v14 = snprintf(
            v17,
            0x800u,
            "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
            a1[1],
            v4 - 2,
            a1[1]);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "decode_eeprom_fixture_info",
      26,
      279,
      100,
      v18);
    return -1;
  }
  v7 = v5 & 0xF;
  v8 = v5 >> 4;
  v9 = v8 == 1;
  if ( v8 == 1 )
    v9 = v7 == 1;
  v10 = !v9;
  if ( !v9 )
  {
    v12 = snprintf(
            v17,
            0x800u,
            "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
            v7,
            v8);
    V_LOCK(v12);
    v13 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "decode_eeprom_fixture_info",
      26,
      285,
      100,
      v18);
    return -1;
  }
  memcpy(s, a1 + 2, v4 - 2);
  data_dec(s, v6, 1);
  *a2 = *(_WORD *)a1;
  memcpy(a2 + 1, s, v6);
  return v10;
}
