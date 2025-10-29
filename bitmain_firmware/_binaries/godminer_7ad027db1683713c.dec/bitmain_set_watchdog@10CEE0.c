int __fastcall bitmain_set_watchdog(int a1)
{
  int result; // r0
  int v3; // r5
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_2E8B5C )
  {
    v3 = sub_10C79C();
    if ( v3 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_watchdog");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "bitmain_set_watchdog",
        20,
        595,
        100,
        v5);
      return v3;
    }
  }
  result = sub_10C0AC(dword_2E8B58, a1 == 1);
  v3 = result;
  if ( result < 0 )
  {
    strcpy(s, "can nont set power watchdog");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "bitmain_set_watchdog",
      20,
      607,
      100,
      v5);
    return v3;
  }
  return result;
}
