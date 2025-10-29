int __fastcall bitmain_set_watchdog(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v8[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_2EA054 )
  {
    v3 = sub_10D88C();
    if ( v3 < 0 )
    {
      v4 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_watchdog");
      V_LOCK(v4);
      v5 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "bitmain_set_watchdog",
        20,
        595,
        100,
        v8);
      return v3;
    }
  }
  result = sub_10D19C(dword_2EA050, a1 == 1);
  v3 = result;
  if ( result < 0 )
  {
    strcpy(s, "can nont set power watchdog");
    V_LOCK(*(_DWORD *)"er watchdog");
    v6 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "bitmain_set_watchdog",
      20,
      607,
      100,
      v8);
    return v3;
  }
  return result;
}
