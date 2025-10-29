int __fastcall pwm_get(int a1, _DWORD *a2)
{
  int v2; // r4
  int v4; // r3
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      191,
      "pwm_get",
      7,
      106,
      100,
      v6);
    return -3;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      v4 = dword_2E8738;
      *a2 = dword_2E8738;
      snprintf(s, 0x800u, "val of fpga = 0x%x\n", v4);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, v2, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_pwm.c",
        191,
        "pwm_get",
        7,
        113,
        20,
        v6);
    }
    return -5;
  }
}
