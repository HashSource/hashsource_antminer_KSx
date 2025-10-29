int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v2; // r6
  unsigned int v3; // r3
  unsigned int v4; // r7
  int v6; // r0
  int v7; // r0
  int v8; // r0
  char v9[2048]; // [sp+10h] [bp-1804h] BYREF
  char s[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    v2 = -3;
    strcpy(v9, "bad param\n");
    V_LOCK(*(_DWORD *)"bad param\n");
    v6 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      196,
      "pwm_set",
      7,
      60,
      100,
      s);
    return v2;
  }
  v2 = a1 - 1;
  if ( a1 != 1 )
  {
    v7 = snprintf(v9, 0x800u, "pwm type %d not supported\n", a1 - 1);
    v2 = -5;
    V_LOCK(v7);
    v8 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      196,
      "pwm_set",
      7,
      102,
      100,
      s);
    return v2;
  }
  LOWORD(v3) = -31457;
  if ( a2 >= 0x64 )
    a2 = 100;
  HIWORD(v3) = 20971;
  dword_30CEE8 = a2;
  v4 = (unsigned int)(((unsigned int)&elf_hash_chain[4398] * a2 * (unsigned __int64)v3) >> 32) >> 5;
  if ( !byte_30CEFC )
  {
    sprintf(s, "echo 0 > %s/enable", "/sys/class/pwm/pwmchip8/pwm0");
    system(s);
  }
  sprintf(s, "echo %u > %s/period", &elf_hash_chain[4398], "/sys/class/pwm/pwmchip8/pwm0");
  system(s);
  sprintf(s, "echo %u > %s/duty_cycle", v4, "/sys/class/pwm/pwmchip8/pwm0");
  system(s);
  if ( !byte_30CEFC )
  {
    sprintf(s, "echo 1 > %s/enable", "/sys/class/pwm/pwmchip8/pwm0");
    system(s);
    if ( !byte_30CEFC )
    {
      sprintf(s, "echo 0 > %s/enable", "/sys/class/pwm/pwmchip8/pwm1");
      system(s);
    }
  }
  sprintf(s, "echo %u > %s/period", &elf_hash_chain[4398], "/sys/class/pwm/pwmchip8/pwm1");
  system(s);
  sprintf(s, "echo %u > %s/duty_cycle", v4, "/sys/class/pwm/pwmchip8/pwm1");
  system(s);
  if ( byte_30CEFC )
    return v2;
  sprintf(s, "echo 1 > %s/enable", "/sys/class/pwm/pwmchip8/pwm1");
  system(s);
  byte_30CEFC = 1;
  return v2;
}
