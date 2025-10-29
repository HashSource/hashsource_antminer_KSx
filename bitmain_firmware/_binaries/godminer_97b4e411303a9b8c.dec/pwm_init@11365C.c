int __fastcall pwm_init(unsigned int a1, int a2)
{
  int v2; // r3
  int result; // r0
  char *v4; // r12
  int v5; // r0
  int v6; // r0
  _BYTE v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
  {
    if ( a1 > 1 )
    {
      V_LOCK(*(_DWORD *)"bad param\n");
      v5 = logfmt_raw((int)v7, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_pwm.c",
        196,
        "pwm_init",
        8,
        28,
        100,
        v7);
      return -3;
    }
    else
    {
      v2 = 12 * a1;
      result = a1 + 1;
      v4 = (char *)&unk_30BBD4 + v2;
      *(_DWORD *)v4 = a2;
      v4[8] = 1;
    }
  }
  else
  {
    V_LOCK(1836216166);
    v6 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      196,
      "pwm_init",
      8,
      23,
      100,
      v7);
    return -1;
  }
  return result;
}
