int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v5; // r4
  char *v6; // r7
  int v7; // r0
  int v8; // r0
  ssize_t v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // [sp+14h] [bp-1810h] BYREF
  char *v20; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v22[4100]; // [sp+820h] [bp-1004h] BYREF

  v19 = a1;
  v5 = pthread_mutex_lock(&stru_30A774);
  if ( v5 )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v16 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      196,
      "i2c_write",
      9,
      211,
      100,
      v22);
    return -1;
  }
  else if ( find_c_map((_DWORD *)dword_30A790, (int)&v19, (int)&v20) == 1 )
  {
    v6 = v20;
    v7 = snprintf(s, 0x800u, "i2c write path = %s, addr = %d\n", v20 + 12, *((_DWORD *)v20 + 2));
    V_LOCK(v7);
    v8 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      196,
      "i2c_write",
      9,
      219,
      20,
      v22);
    if ( ioctl(*((_DWORD *)v6 + 1), 0x703u, *((_DWORD *)v6 + 2) >> 1) < 0 )
    {
      v17 = snprintf(s, 0x800u, "write io ctrl for path = %s, addr = %d failed\n", v6 + 12, *((_DWORD *)v6 + 2));
      V_LOCK(v17);
      v18 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        196,
        "i2c_write",
        9,
        222,
        100,
        v22);
      free(v20);
      pthread_mutex_unlock(&stru_30A774);
      return -3;
    }
    else
    {
      if ( a3 )
      {
        do
        {
          v9 = write(*((_DWORD *)v6 + 1), (const void *)(a2 + v5), 1u);
          v10 = v5++;
          if ( v9 != 1 )
          {
            v11 = snprintf(s, 0x800u, "fail to write %d:%d\n", v10, a3);
            V_LOCK(v11);
            v12 = logfmt_raw((int)v22, 0x1000u);
            V_UNLOCK(v12);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
              196,
              "i2c_write",
              9,
              232,
              100,
              v22);
          }
        }
        while ( a3 != v5 );
      }
      free(v20);
      usleep(0x2710u);
      pthread_mutex_unlock(&stru_30A774);
      return a3;
    }
  }
  else
  {
    v14 = snprintf(s, 0x800u, "ctx %d not inited\n", v19);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      196,
      "i2c_write",
      9,
      239,
      100,
      v22);
    pthread_mutex_unlock(&stru_30A774);
    return -4;
  }
}
