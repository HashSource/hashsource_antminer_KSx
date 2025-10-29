int __fastcall eeprom_decode_fixture_info_0(unsigned __int8 *a1, _WORD *a2)
{
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r6
  int v7; // r3
  unsigned int v8; // r2
  bool v9; // zf
  int v10; // r7
  unsigned int s[64]; // [sp+10h] [bp-1904h] BYREF
  char v13[2048]; // [sp+110h] [bp-1804h] BYREF
  char v14[4100]; // [sp+910h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = a1[1];
  v5 = *a1;
  v6 = v4 - 2;
  if ( (unsigned __int8)(v4 - 2) > 0xFDu )
  {
    snprintf(
      v13,
      0x800u,
      "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
      a1[1],
      v4 - 2,
      a1[1]);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "decode_eeprom_fixture_info",
      26,
      279,
      100,
      v14);
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
    snprintf(
      v13,
      0x800u,
      "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
      v7,
      v8);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "decode_eeprom_fixture_info",
      26,
      285,
      100,
      v14);
    return -1;
  }
  memcpy(s, a1 + 2, v4 - 2);
  data_dec(s, v6, 1, 1);
  *a2 = *(_WORD *)a1;
  memcpy(a2 + 1, s, v6);
  return v10;
}
