int bitmain_power_version()
{
  int v0; // r5
  int v2; // [sp+10h] [bp-1810h] BYREF
  __int16 v3; // [sp+14h] [bp-180Ch]
  double v4; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v6[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( !dword_2E8B5C )
  {
    v0 = bitmain_power_open();
    if ( v0 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_version");
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "bitmain_power_version",
        21,
        681,
        100,
        v6);
      return v0;
    }
  }
  v2 = 33860181;
  v4 = 0.0;
  v3 = 6;
  if ( dword_2E8B58 == 255 )
  {
    if ( sub_10BDBC((unsigned __int8 *)&v2, 6u, (unsigned __int8 *)&v4, 8u) )
    {
      v0 = -2147482880;
      strcpy(s, "get power version failed");
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "_bitmain_get_power_version",
        26,
        294,
        100,
        v6);
      return v0;
    }
  }
  else if ( sub_10BF24(dword_2E8B58, (unsigned __int8 *)&v2, 6u, (unsigned __int8 *)&v4, 8u) )
  {
    v0 = -2147482880;
    strcpy(s, "get power version failed");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_get_power_version",
      26,
      300,
      100,
      v6);
    return v0;
  }
  v0 = WORD2(v4);
  if ( WORD2(v4) )
    dword_2E8B60 = WORD2(v4);
  return v0;
}
