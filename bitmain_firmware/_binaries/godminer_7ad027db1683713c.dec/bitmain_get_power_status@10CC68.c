int bitmain_get_power_status()
{
  int v0; // r5
  int v2; // r0
  int v3; // r3
  int v4; // [sp+10h] [bp-1810h] BYREF
  __int16 v5; // [sp+14h] [bp-180Ch]
  double v6; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v8[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( !dword_2E8B5C )
  {
    v0 = sub_10C79C();
    if ( v0 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_power_status");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "bitmain_get_power_status",
        24,
        581,
        100,
        v8);
      return v0;
    }
  }
  v4 = 168077909;
  v6 = 0.0;
  v5 = 14;
  if ( dword_2E8B58 == 255 )
  {
    if ( !sub_10BDBC((unsigned __int8 *)&v4, 6u, (unsigned __int8 *)&v6, 8u) )
      return WORD2(v6);
    strcpy(s, "get power status failed");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    v2 = g_zc;
    v3 = 525;
LABEL_9:
    v0 = -2147482880;
    zlog(
      v2,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_get_power_status",
      25,
      v3,
      100,
      v8);
    strcpy(s, "can nont get power status");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "bitmain_get_power_status",
      24,
      585,
      100,
      v8);
    return v0;
  }
  if ( sub_10BF24(dword_2E8B58, (unsigned __int8 *)&v4, 6u, (unsigned __int8 *)&v6, 8u) )
  {
    strcpy(s, "get power status failed");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    v2 = g_zc;
    v3 = 531;
    goto LABEL_9;
  }
  return WORD2(v6);
}
