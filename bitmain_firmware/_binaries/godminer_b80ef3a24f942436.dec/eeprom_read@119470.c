int __fastcall eeprom_read(unsigned int a1, unsigned __int8 a2, char *a3, int a4)
{
  unsigned int v5; // r6
  int v8; // r0
  char *v9; // r11
  unsigned int v10; // r6
  char *v11; // r7
  int v12; // r0
  char *v13; // r3
  int v14; // r0
  int v15; // r0
  int v17; // r11
  int v18; // r0
  int v19; // r0
  int *v20; // r3
  int v21; // r2
  int v22; // r0
  int v23; // r0
  unsigned __int8 v25; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v27[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v17 = -2147483391;
    v22 = snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_read", a1);
    V_LOCK(v22);
    v23 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v23);
    v20 = &g_zc;
    v21 = 131;
    goto LABEL_10;
  }
  v5 = 8 * a1;
  if ( !dword_31144C[2 * a1] )
  {
    v17 = eeprom_open(a1);
    if ( v17 < 0 )
    {
      v18 = snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_read", a1);
      V_LOCK(v18);
      v19 = logfmt_raw((int)v27, 0x1000u);
      V_UNLOCK(v19);
      v20 = &g_zc;
      v21 = 136;
LABEL_10:
      zlog(
        *v20,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_read",
        11,
        v21,
        100,
        v27);
      return v17;
    }
  }
  strcpy(s, "no use at24c512c!");
  V_LOCK(*(_DWORD *)"no use at24c512c!");
  v8 = logfmt_raw((int)v27, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    186,
    "eeprom_read",
    11,
    152,
    20,
    v27);
  if ( a4 )
  {
    v9 = a3;
    v10 = v5 + 3216384;
    v11 = &a3[a4];
    while ( 1 )
    {
      v12 = *(_DWORD *)(v10 + 72);
      v13 = v9;
      v25 = a2;
      ++v9;
      ++a2;
      if ( iic_read_reg(v12, &v25, 1u, v13, 1) != 1 )
        break;
      if ( v9 == v11 )
        goto LABEL_11;
    }
    v14 = snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d", a1, v25);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "eeprom_read",
      11,
      158,
      100,
      v27);
    return -2147483392;
  }
  else
  {
LABEL_11:
    usleep(0x7A120u);
    return 0;
  }
}
