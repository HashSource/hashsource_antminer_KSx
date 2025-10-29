int __fastcall bitmain_get_miner_power(int a1)
{
  bool v1; // cc
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // [sp+10h] [bp-1810h] BYREF
  __int16 v14; // [sp+14h] [bp-180Ch]
  double v15; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v17[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( !dword_30D00C )
  {
    a1 = sub_11BC2C();
    v10 = a1;
    if ( a1 < 0 )
    {
      v3 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_miner_power");
      V_LOCK(v3);
      v4 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "bitmain_get_miner_power",
        23,
        1290,
        100,
        v17);
      return v10;
    }
  }
  v1 = (unsigned int)dword_30D010 > 0x62;
  if ( dword_30D010 != 98 )
    v1 = (unsigned int)(dword_30D010 - 100) > 2;
  if ( v1 )
  {
    if ( (unsigned int)(dword_30D010 - 193) > 1 )
      return -1;
    v13 = 134523477;
    v15 = 0.0;
    v14 = 12;
    if ( dword_30D008 == 255 )
    {
      if ( !sub_11B08C((unsigned __int8 *)&v13, 6u, (unsigned __int8 *)&v15, 8u) )
        return WORD2(v15);
      strcpy(s, "get power status failed\n");
      V_LOCK(*(_DWORD *)" failed\n");
      v5 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v5);
      v6 = g_zc;
      v7 = 1063;
    }
    else
    {
      if ( !sub_11B22C(dword_30D008, (unsigned __int8 *)&v13, 6u, (unsigned __int8 *)&v15, 8u) )
        return WORD2(v15);
      strcpy(s, "get power status failed\n");
      V_LOCK(*(_DWORD *)" failed\n");
      v12 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v12);
      v6 = g_zc;
      v7 = 1069;
    }
    v10 = -1;
    zlog(
      v6,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_get_miner_power",
      24,
      v7,
      100,
      v17);
    v8 = snprintf(s, 0x800u, "can nont get power ret = 0x%x\n", -2147482880);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "bitmain_get_miner_power",
      23,
      1301,
      100,
      v17);
    return v10;
  }
  V_LOCK(a1);
  v10 = -1;
  v11 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
    194,
    "bitmain_get_miner_power",
    23,
    1292,
    100,
    v17);
  return v10;
}
