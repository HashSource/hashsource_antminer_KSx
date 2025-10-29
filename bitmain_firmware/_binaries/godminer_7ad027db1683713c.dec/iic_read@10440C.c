int __fastcall iic_read(int a1, void *a2, size_t a3)
{
  int v6; // r4
  char v8[2048]; // [sp+10h] [bp-1800h] BYREF
  char v9[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_2E871C) )
  {
    v6 = -4;
    strcpy(v8, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_read",
      8,
      121,
      100,
      v9);
  }
  else
  {
    v6 = i2c_read(a1, a2, a3);
    pthread_mutex_unlock(&stru_2E871C);
  }
  return v6;
}
