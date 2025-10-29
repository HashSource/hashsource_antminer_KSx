int __fastcall fan_get_realtime_speed(unsigned int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v4[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 7 )
  {
    snprintf(s, 0x800u, "bad fan id = %d\n", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_fan.c",
      191,
      "fan_get_realtime_speed",
      22,
      128,
      100,
      v4);
  }
  return dword_2D0F8C[a1];
}
