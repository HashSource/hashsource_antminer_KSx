int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  char *v2; // r1
  char v3[2048]; // [sp+10h] [bp-1808h] BYREF
  char v4[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( a1 > 2 )
  {
    strcpy(v3, "bad param\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_pwm.c",
             191,
             "pwm_uninit",
             10,
             40,
             100,
             v4);
  }
  else
  {
    result = 12 * (a1 - 1);
    v2 = (char *)&unk_2E8734 + result;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    v2[8] = 0;
  }
  return result;
}
