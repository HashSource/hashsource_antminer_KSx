int __fastcall fan_get_realtime_speed(unsigned int a1)
{
  int v2; // r0
  int v3; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 7 )
  {
    v2 = snprintf(s, 0x800u, "bad fan id = %d\n", a1);
    V_LOCK(v2);
    v3 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_fan.c",
      196,
      "fan_get_realtime_speed",
      22,
      128,
      100,
      v6);
  }
  return dword_2E6B70[a1];
}
