int __fastcall iic_write_reg(int a1, _BYTE *a2, int a3, const void *a4, size_t a5)
{
  _BOOL4 v9; // r5
  _BYTE *v10; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _BYTE v16[4080]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_30BBBC) )
  {
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v15 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_iic.c",
      196,
      "iic_write_reg",
      13,
      201,
      100,
      v16);
    return -4;
  }
  if ( a3 != 1 )
  {
    V_LOCK(*(_DWORD *)"bad register bytes\n");
    v14 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_iic.c",
      196,
      "iic_write_reg",
      13,
      207,
      80,
      v16);
    return -1;
  }
  if ( a4 )
    v9 = a5 == 0;
  else
    v9 = 1;
  if ( v9 )
  {
    V_LOCK(*(_DWORD *)"a size\n");
    v13 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_iic.c",
      196,
      "iic_write_reg",
      13,
      212,
      80,
      v16);
    return -1;
  }
  v10 = malloc(a5 + 1);
  *v10 = *a2;
  memcpy(v10 + 1, a4, a5);
  if ( a5 + 1 != i2c_write(a1, v10, a5 + 1) )
  {
    V_LOCK(*(_DWORD *)"i2c reg\n");
    v12 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_iic.c",
      196,
      "iic_write_reg",
      13,
      221,
      100,
      v16);
  }
  free(v10);
  pthread_mutex_unlock(&stru_30BBBC);
  return a5;
}
