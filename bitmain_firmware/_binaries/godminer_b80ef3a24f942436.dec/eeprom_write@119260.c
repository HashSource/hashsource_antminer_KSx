int __fastcall eeprom_write(unsigned int a1, unsigned __int8 a2, char *a3, int a4)
{
  unsigned int v5; // r9
  char *v9; // r7
  int v10; // r0
  char *v11; // r3
  int v12; // r10
  int v13; // r0
  int v14; // r0
  int v15; // r2
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  unsigned __int8 v21; // [sp+17h] [bp-1805h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v23[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v19 = snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_write", a1);
    v12 = -2147483391;
    V_LOCK(v19);
    v20 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v20);
    v15 = 91;
    goto LABEL_9;
  }
  v5 = 8 * a1;
  if ( !dword_31144C[2 * a1] )
  {
    v12 = eeprom_open(a1);
    if ( v12 < 0 )
    {
      v17 = snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_write", a1);
      V_LOCK(v17);
      v18 = logfmt_raw((int)v23, 0x1000u);
      V_UNLOCK(v18);
      v15 = 96;
LABEL_9:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_write",
        12,
        v15,
        100,
        v23);
      return v12;
    }
  }
  if ( a4 )
  {
    v9 = &a3[a4];
    while ( 1 )
    {
      v10 = *(_DWORD *)(v5 + 3216456);
      v11 = a3;
      v21 = a2;
      ++a3;
      ++a2;
      if ( iic_write_reg(v10, &v21, 1, v11, 1u) != 1 )
        break;
      if ( v9 == a3 )
        goto LABEL_10;
    }
    v12 = -2147483392;
    v13 = snprintf(s, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, v21);
    V_LOCK(v13);
    v14 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v14);
    v15 = 116;
    goto LABEL_9;
  }
LABEL_10:
  sleep(1u);
  return 0;
}
