size_t __fastcall iic_write_reg(int a1, _BYTE *a2, int a3, const void *a4, size_t a5)
{
  _BOOL4 v9; // r5
  _BYTE *v10; // r6
  char v12[2048]; // [sp+10h] [bp-1800h] BYREF
  char v13[4080]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_2E871C) )
  {
    strcpy(v12, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_write_reg",
      13,
      201,
      100,
      v13);
    return -4;
  }
  if ( a3 != 1 )
  {
    strcpy(v12, "bad register bytes\n");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_write_reg",
      13,
      207,
      80,
      v13);
    return -1;
  }
  if ( a4 )
    v9 = a5 == 0;
  else
    v9 = 1;
  if ( v9 )
  {
    strcpy(v12, "bad register data size\n");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_write_reg",
      13,
      212,
      80,
      v13);
    return -1;
  }
  v10 = malloc(a5 + 1);
  *v10 = *a2;
  memcpy(v10 + 1, a4, a5);
  if ( a5 + 1 != i2c_write(a1, (int)v10, a5 + 1) )
  {
    strcpy(v12, "failed to write i2c reg\n");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_write_reg",
      13,
      221,
      100,
      v13);
  }
  free(v10);
  pthread_mutex_unlock(&stru_2E871C);
  return a5;
}
