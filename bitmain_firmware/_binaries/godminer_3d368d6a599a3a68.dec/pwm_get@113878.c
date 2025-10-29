int __fastcall pwm_get(int a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v8[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    strcpy(s, "bad param\n");
    V_LOCK(*(_DWORD *)"bad param\n");
    v6 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      196,
      "pwm_get",
      7,
      106,
      100,
      v8);
    return -3;
  }
  else
  {
    if ( a1 == 1 )
    {
      v3 = dword_306B90;
      *a2 = dword_306B90;
      v4 = snprintf(s, 0x800u, "val of fpga = 0x%x\n", v3);
      V_LOCK(v4);
      v5 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_pwm.c",
        196,
        "pwm_get",
        7,
        113,
        20,
        v8);
    }
    return -5;
  }
}
