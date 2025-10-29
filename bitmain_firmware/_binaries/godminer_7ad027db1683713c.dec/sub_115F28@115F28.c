int sub_115F28()
{
  int result; // r0
  int buf; // [sp+10h] [bp-180Ch] BYREF
  char v2; // [sp+14h] [bp-1808h]
  char v3[2040]; // [sp+18h] [bp-1804h] BYREF
  char v4[4100]; // [sp+818h] [bp-1004h] BYREF

  v2 = 0;
  buf = 7632239;
  if ( write(dword_2D10A4, &buf, 3u) != 3 )
  {
    strcpy(v3, "write out");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
      195,
      "set_sda_out",
      11,
      233,
      40,
      v4);
  }
  close(dword_2D10A0);
  dword_2D10A0 = -1;
  result = open64("/sys/class/gpio/gpio461/value", 1);
  dword_2D10A0 = result;
  if ( result < 0 )
  {
    strcpy(v3, "open gpio461 failed");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c_sim.c",
               195,
               "set_sda_out",
               11,
               241,
               40,
               v4);
  }
  dword_2E94B0 = 1;
  return result;
}
