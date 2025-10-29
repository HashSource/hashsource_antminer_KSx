int __fastcall eeprom_write(unsigned int a1, unsigned __int8 a2, char *a3, int a4)
{
  unsigned int v5; // r9
  char *v9; // r7
  int v10; // r0
  char *v11; // r3
  int v12; // r10
  unsigned __int8 v14; // [sp+17h] [bp-1805h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v16[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_write", a1);
    v12 = -2147483391;
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "eeprom_write",
      12,
      91,
      100,
      v16);
    return v12;
  }
  v5 = 2 * a1;
  if ( !dword_2E8A8C[2 * a1 + 19] )
  {
    v12 = eeprom_open(a1);
    if ( v12 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_write", a1);
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_write",
        12,
        96,
        100,
        v16);
      return v12;
    }
  }
  if ( a4 )
  {
    v9 = &a3[a4];
    while ( 1 )
    {
      v10 = dword_2E8A8C[v5 + 18];
      v11 = a3;
      v14 = a2;
      ++a3;
      ++a2;
      if ( iic_write_reg(v10, &v14, 1, v11, 1u) != 1 )
        break;
      if ( v9 == a3 )
        goto LABEL_10;
    }
    v12 = -2147483392;
    snprintf(s, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, v14);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "eeprom_write",
      12,
      116,
      100,
      v16);
    return v12;
  }
LABEL_10:
  sleep(1u);
  return 0;
}
