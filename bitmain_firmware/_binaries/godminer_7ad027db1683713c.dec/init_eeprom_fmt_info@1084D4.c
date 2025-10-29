int __fastcall init_eeprom_fmt_info(_BYTE *a1, int a2)
{
  int v2; // r4
  char v4[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  a1[3] = 3;
  v2 = 0;
  a1[4] = 20;
  a1[5] = 22;
  a1[6] = 35;
  a1[7] = 36;
  a1[8] = 45;
  *a1 = 0;
  a1[1] = 1;
  a1[2] = 2;
  if ( (unsigned int)(a2 - 3) <= 1 )
  {
    v2 = 1;
    a1[34] = 1;
    a1[35] = 1;
    a1[36] = 1;
    a1[38] = 2;
    a1[40] = 1;
    qmemcpy(a1 + 9, "MNRSTUVWXZ\\^`abcd", 17);
    a1[28] = 113;
    a1[29] = 114;
    a1[30] = 116;
    a1[31] = -12;
    a1[32] = -10;
    a1[33] = -7;
    a1[37] = 17;
    a1[39] = 13;
    a1[42] = 32;
    a1[41] = 9;
  }
  else
  {
    a1[38] = 2;
    a1[34] = 1;
    a1[35] = 1;
    a1[36] = 1;
    a1[40] = 1;
    a1[37] = 17;
    a1[39] = 13;
    a1[42] = 32;
  }
  a1[43] = 1;
  a1[45] = 1;
  a1[46] = 1;
  a1[47] = 1;
  a1[48] = 1;
  a1[49] = 1;
  a1[50] = 1;
  a1[55] = 1;
  a1[56] = 1;
  a1[57] = 1;
  a1[58] = 1;
  a1[60] = 1;
  a1[65] = 1;
  a1[44] = 4;
  a1[51] = 2;
  a1[52] = 2;
  a1[53] = 2;
  a1[54] = 2;
  a1[61] = 2;
  a1[63] = 2;
  a1[59] = 8;
  a1[62] = 0x80;
  a1[64] = 3;
  if ( !v2 )
  {
    strcpy(v4, "This FMT is not supported");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "init_eeprom_fmt_info",
      20,
      462,
      100,
      v5);
  }
  return v2;
}
