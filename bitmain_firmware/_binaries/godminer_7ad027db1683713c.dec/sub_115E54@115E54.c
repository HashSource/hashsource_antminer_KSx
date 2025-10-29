int sub_115E54()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  strcpy(v1, "error! write SCL high");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
           195,
           "scl_high",
           8,
           66,
           40,
           v2);
}
