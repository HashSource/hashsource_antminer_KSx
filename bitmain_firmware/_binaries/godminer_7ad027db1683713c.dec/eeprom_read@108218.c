int __fastcall eeprom_read(unsigned int a1, unsigned __int8 a2, char *a3, int a4)
{
  unsigned int v5; // r6
  char *v8; // r11
  int *v9; // r6
  char *v10; // r7
  int v11; // r0
  char *v12; // r3
  int v14; // r11
  unsigned __int8 v16; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v18[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v14 = -2147483391;
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "eeprom_read",
      11,
      131,
      100,
      v18);
    return v14;
  }
  v5 = 2 * a1;
  if ( !dword_2E8A8C[2 * a1 + 19] )
  {
    v14 = eeprom_open(a1);
    if ( v14 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_read", a1);
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_read",
        11,
        136,
        100,
        v18);
      return v14;
    }
  }
  strcpy(s, "no use at24c512c!");
  V_LOCK();
  logfmt_raw(v18, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    186,
    "eeprom_read",
    11,
    152,
    20,
    v18);
  if ( a4 )
  {
    v8 = a3;
    v9 = &dword_2E8A8C[v5];
    v10 = &a3[a4];
    while ( 1 )
    {
      v11 = v9[18];
      v12 = v8;
      v16 = a2;
      ++v8;
      ++a2;
      if ( iic_read_reg(v11, &v16, 1u, v12, 1) != 1 )
        break;
      if ( v8 == v10 )
        goto LABEL_11;
    }
    snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d", a1, v16);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "eeprom_read",
      11,
      158,
      100,
      v18);
    return -2147483392;
  }
  else
  {
LABEL_11:
    usleep(0x7A120u);
    return 0;
  }
}
