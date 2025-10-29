int __fastcall iic_uninit(int a1)
{
  int v3; // r0
  _BYTE v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_309B9C) )
  {
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v3 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v3);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_iic.c",
             196,
             "iic_uninit",
             10,
             92,
             100,
             v4);
  }
  else
  {
    if ( a1 == 255 )
      i2c_sim_uninit();
    else
      i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_309B9C);
  }
}
