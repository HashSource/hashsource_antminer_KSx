int __fastcall eeprom_read(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  int v5; // r6
  int v8; // r0
  int v9; // r11
  int *v10; // r6
  int v11; // r7
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v17; // r11
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  unsigned __int8 v23; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v25[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v17 = -2147483391;
    v20 = snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_read", a1);
    V_LOCK(v20);
    v21 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_read",
      11,
      131,
      100,
      v25);
    return v17;
  }
  v5 = 2 * a1;
  if ( !dword_306BE0[2 * a1 + 19] )
  {
    v17 = eeprom_open(a1);
    if ( v17 < 0 )
    {
      v18 = snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_read", a1);
      V_LOCK(v18);
      v19 = logfmt_raw((int)v25, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_read",
        11,
        136,
        100,
        v25);
      return v17;
    }
  }
  strcpy(s, "no use at24c512c!");
  V_LOCK(*(_DWORD *)"no use at24c512c!");
  v8 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
    191,
    "eeprom_read",
    11,
    152,
    20,
    v25);
  if ( a4 )
  {
    v9 = a3;
    v10 = &dword_306BE0[v5];
    v11 = a3 + a4;
    while ( 1 )
    {
      v12 = v10[18];
      v13 = v9;
      v23 = a2;
      ++v9;
      ++a2;
      if ( iic_read_reg(v12, &v23, 1, v13, 1) != 1 )
        break;
      if ( v9 == v11 )
        goto LABEL_11;
    }
    v14 = snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d", a1, v23);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_read",
      11,
      158,
      100,
      v25);
    return -2147483392;
  }
  else
  {
LABEL_11:
    usleep(0x7A120u);
    return 0;
  }
}
