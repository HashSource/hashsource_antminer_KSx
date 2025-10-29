int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  char *v2; // r1
  int v3; // r0
  _BYTE v4[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( a1 > 2 )
  {
    V_LOCK(*(_DWORD *)"bad param\n");
    v3 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v3);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_pwm.c",
             196,
             "pwm_uninit",
             10,
             40,
             100,
             v4);
  }
  else
  {
    result = 12 * (a1 - 1);
    v2 = (char *)&unk_306B8C + result;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    v2[8] = 0;
  }
  return result;
}
