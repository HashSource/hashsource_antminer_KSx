int sub_116EF4()
{
  int v0; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  V_LOCK(*(_DWORD *)" low");
  v0 = logfmt_raw((int)v2, 0x1000u);
  V_UNLOCK(v0);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
           195,
           "scl_low",
           7,
           75,
           40,
           v2);
}
