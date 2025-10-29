size_t __fastcall iic_write_reg(int a1, _BYTE *a2, int a3, const void *a4, size_t a5)
{
  _BOOL4 v9; // r5
  _BYTE *v10; // r6
  int v12; // r0
  int v13; // r0
  int *v14; // r3
  int v15; // r2
  int v16; // r0
  int v17; // r0
  _BYTE v18[4080]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_311394) )
  {
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v17 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_write_reg",
      13,
      201,
      100,
      v18);
    return -4;
  }
  if ( a3 != 1 )
  {
    V_LOCK(*(_DWORD *)"bad register bytes\n");
    v16 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v16);
    v14 = &g_zc;
    v15 = 207;
    goto LABEL_11;
  }
  if ( a4 )
    v9 = a5 == 0;
  else
    v9 = 1;
  if ( v9 )
  {
    V_LOCK(*(_DWORD *)"a size\n");
    v13 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v13);
    v14 = &g_zc;
    v15 = 212;
LABEL_11:
    zlog(
      *v14,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_write_reg",
      13,
      v15,
      80,
      v18);
    return -1;
  }
  v10 = malloc(a5 + 1);
  *v10 = *a2;
  memcpy(v10 + 1, a4, a5);
  if ( a5 + 1 != i2c_write(a1, (int)v10, a5 + 1) )
  {
    V_LOCK(*(_DWORD *)"i2c reg\n");
    v12 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_write_reg",
      13,
      221,
      100,
      v18);
  }
  free(v10);
  pthread_mutex_unlock(&stru_311394);
  return a5;
}
