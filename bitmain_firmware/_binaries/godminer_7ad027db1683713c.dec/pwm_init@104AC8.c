int __fastcall pwm_init(unsigned int a1, int a2)
{
  unsigned int v2; // r3
  int result; // r0
  char *v4; // r12
  char v5[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
  {
    if ( a1 > 1 )
    {
      strcpy(v5, "bad param\n");
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_pwm.c",
        191,
        "pwm_init",
        8,
        28,
        100,
        v6);
      return -3;
    }
    else
    {
      v2 = 12 * a1;
      result = a1 + 1;
      v4 = (char *)&unk_2E8734 + v2;
      *(_DWORD *)v4 = a2;
      v4[8] = 1;
    }
  }
  else
  {
    strcpy(v5, "please init platform first!!\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      191,
      "pwm_init",
      8,
      23,
      100,
      v6);
    return -1;
  }
  return result;
}
