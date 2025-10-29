int sub_127130()
{
  int v0; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  V_LOCK(*(_DWORD *)" low");
  v0 = logfmt_raw((int)v2, 0x1000u);
  V_UNLOCK(v0);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
           200,
           "sda_low",
           7,
           56,
           40,
           v2);
}
