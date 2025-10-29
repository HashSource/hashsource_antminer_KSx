int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v2; // r4
  unsigned int v3; // r12
  unsigned __int64 v4; // r6
  int v6; // r0
  int v7; // r0
  int *v8; // r3
  int v9; // r2
  int v10; // r0
  char v11[2048]; // [sp+10h] [bp-1804h] BYREF
  char s[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    v2 = -3;
    strcpy(v11, "bad param\n");
    V_LOCK(*(_DWORD *)"bad param\n");
    v10 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v10);
    v8 = &g_zc;
    v9 = 59;
    goto LABEL_8;
  }
  v2 = a1 - 1;
  if ( a1 != 1 )
  {
    v6 = snprintf(v11, 0x800u, "pwm type %d not supported\n", a1 - 1);
    v2 = -5;
    V_LOCK(v6);
    v7 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v7);
    v8 = &g_zc;
    v9 = 88;
LABEL_8:
    zlog(
      *v8,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_pwm.c",
      191,
      "pwm_set",
      7,
      v9,
      100,
      s);
    return v2;
  }
  LOWORD(v3) = -31457;
  if ( a2 >= 0x64 )
    a2 = 100;
  HIWORD(v3) = 20971;
  dword_3113B0 = a2;
  v4 = (unsigned int)&elf_hash_chain[4398] * a2 * (unsigned __int64)v3;
  sprintf(s, "echo 0 > %s/enable", "/sys/class/pwm/pwmchip8/pwm0");
  system(s);
  sprintf(s, "echo %u > %s/period", &elf_hash_chain[4398], 2762904);
  system(s);
  sprintf(s, "echo %u > %s/duty_cycle", HIDWORD(v4) >> 5, 2762904);
  system(s);
  sprintf(s, "echo 1 > %s/enable", 2762904);
  system(s);
  sprintf(s, "echo 0 > %s/enable", 2763020);
  system(s);
  sprintf(s, "echo %u > %s/period", &elf_hash_chain[4398], 2763020);
  system(s);
  sprintf(s, "echo %u > %s/duty_cycle", HIDWORD(v4) >> 5, 2763020);
  system(s);
  sprintf(s, "echo 1 > %s/enable", 2763020);
  system(s);
  return v2;
}
