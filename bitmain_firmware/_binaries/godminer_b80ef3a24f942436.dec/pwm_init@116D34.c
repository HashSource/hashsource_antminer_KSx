int __fastcall pwm_init(unsigned int a1, int a2)
{
  unsigned int v2; // r3
  int result; // r0
  int v4; // r0
  int v5; // r0
  _BYTE v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
  {
    if ( a1 > 1 )
    {
      V_LOCK(*(_DWORD *)"bad param\n");
      v4 = logfmt_raw((int)v6, 0x1000u);
      V_UNLOCK(v4);
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
      *(_DWORD *)(v2 + 3216300) = a2;
      *(_BYTE *)(v2 + 3216308) = 1;
    }
  }
  else
  {
    V_LOCK(1836216166);
    v5 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v5);
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
