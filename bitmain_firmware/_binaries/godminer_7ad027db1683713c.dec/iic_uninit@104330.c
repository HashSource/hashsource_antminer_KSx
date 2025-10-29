int __fastcall iic_uninit(int a1)
{
  char v3[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_2E871C) )
  {
    strcpy(v3, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
             191,
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
    return pthread_mutex_unlock(&stru_2E871C);
  }
}
