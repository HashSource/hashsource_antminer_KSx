int __fastcall iic_write(int a1, int a2, int a3)
{
  int v6; // r4
  int v8; // r0
  _BYTE v9[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_2E9C14) )
  {
    v6 = -4;
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v8 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_write",
      9,
      142,
      100,
      v9);
  }
  else
  {
    v6 = i2c_write(a1, a2, a3);
    pthread_mutex_unlock(&stru_2E9C14);
  }
  return v6;
}
