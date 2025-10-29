int __fastcall eeprom_write(unsigned int a1, unsigned __int8 a2, char *a3, int a4)
{
  int v5; // r9
  char *v9; // r7
  int v10; // r0
  const void *v11; // r3
  int v12; // r10
  int v13; // r0
  int v14; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  unsigned __int8 v20; // [sp+17h] [bp-1805h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v22[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v18 = snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_write", a1);
    v12 = -2147483391;
    V_LOCK(v18);
    v19 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_write",
      12,
      91,
      100,
      v22);
    return v12;
  }
  v5 = 2 * a1;
  if ( !dword_309C08[2 * a1 + 19] )
  {
    v12 = eeprom_open(a1);
    if ( v12 < 0 )
    {
      v16 = snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_write", a1);
      V_LOCK(v16);
      v17 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_write",
        12,
        96,
        100,
        v22);
      return v12;
    }
  }
  if ( a4 )
  {
    v9 = &a3[a4];
    while ( 1 )
    {
      v10 = dword_309C08[v5 + 18];
      v11 = a3;
      v20 = a2;
      ++a3;
      ++a2;
      if ( iic_write_reg(v10, &v20, 1, v11, 1u) != 1 )
        break;
      if ( v9 == a3 )
        goto LABEL_10;
    }
    v12 = -2147483392;
    v13 = snprintf(s, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, v20);
    V_LOCK(v13);
    v14 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_write",
      12,
      116,
      100,
      v22);
    return v12;
  }
LABEL_10:
  sleep(1u);
  return 0;
}
