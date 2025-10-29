int bitmain_power_version()
{
  int v0; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // [sp+10h] [bp-1810h] BYREF
  __int16 v7; // [sp+14h] [bp-180Ch]
  double v8; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v10[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( !dword_306CAC )
  {
    v0 = bitmain_power_open();
    if ( v0 < 0 )
    {
      v3 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_version");
      V_LOCK(v3);
      v4 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "bitmain_power_version",
        21,
        754,
        100,
        v10);
      return v0;
    }
  }
  v6 = 33860181;
  v8 = 0.0;
  v7 = 6;
  if ( dword_306CA8 == 255 )
  {
    if ( sub_1196DC((unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v8, 8u) )
    {
      v0 = -2147482880;
      strcpy(s, "get power version failed");
      V_LOCK(*(_DWORD *)"n failed");
      v2 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "_bitmain_get_power_version",
        26,
        316,
        100,
        v10);
      return v0;
    }
  }
  else if ( sub_11987C(dword_306CA8, (unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v8, 8u) )
  {
    v0 = -2147482880;
    strcpy(s, "get power version failed");
    V_LOCK(*(_DWORD *)"n failed");
    v5 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_get_power_version",
      26,
      322,
      100,
      v10);
    return v0;
  }
  v0 = WORD2(v8);
  if ( WORD2(v8) )
    dword_306CB0 = WORD2(v8);
  return v0;
}
