int __fastcall i2c_ioctl(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v7; // r0
  void *v8; // r5
  int v9; // r0
  int v10; // r0
  int v12; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v14[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_30DAAC) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v12 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      196,
      "i2c_ioctl",
      9,
      261,
      100,
      v14);
    return -4;
  }
  else
  {
    v6 = new_iterator_c_map(dword_30DAC8);
    if ( ((int (*)(void))*v6)() )
    {
      while ( ***(_DWORD ***)(v6[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v6)(v6) )
          goto LABEL_8;
      }
      v7 = ((int (*)(void))v6[2])();
      v8 = (void *)v7;
      if ( a2 == 1795 )
      {
        *(_DWORD *)(v7 + 8) = a3;
        ((void (__fastcall *)(_DWORD *, int, int))v6[1])(v6, v7, 268);
        v9 = snprintf(s, 0x800u, "update the slave address to %d\n", a3);
        V_LOCK(v9);
        v10 = logfmt_raw((int)v14, 0x1000u);
        V_UNLOCK(v10);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
          196,
          "i2c_ioctl",
          9,
          277,
          20,
          v14);
        free(v8);
      }
    }
LABEL_8:
    delete_iterator_c_map(v6);
    pthread_mutex_unlock(&stru_30DAAC);
    return 0;
  }
}
