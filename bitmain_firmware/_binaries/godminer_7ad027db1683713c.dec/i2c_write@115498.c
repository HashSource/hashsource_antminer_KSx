int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v5; // r4
  char *v6; // r7
  ssize_t v7; // r0
  int v8; // r3
  int v10; // [sp+14h] [bp-1810h] BYREF
  char *v11; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v13[4100]; // [sp+820h] [bp-1004h] BYREF

  v10 = a1;
  v5 = pthread_mutex_lock(&stru_2E9490);
  if ( v5 )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_write",
      9,
      211,
      100,
      v13);
    return -1;
  }
  else if ( find_c_map((int *)dword_2E94AC, (int)&v10, &v11) == 1 )
  {
    v6 = v11;
    snprintf(s, 0x800u, "i2c write path = %s, addr = %d\n", v11 + 12, *((_DWORD *)v11 + 2));
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_write",
      9,
      219,
      20,
      v13);
    if ( ioctl(*((_DWORD *)v6 + 1), 0x703u, *((_DWORD *)v6 + 2) >> 1) < 0 )
    {
      snprintf(s, 0x800u, "write io ctrl for path = %s, addr = %d failed\n", v6 + 12, *((_DWORD *)v6 + 2));
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        191,
        "i2c_write",
        9,
        222,
        100,
        v13);
      free(v11);
      pthread_mutex_unlock(&stru_2E9490);
      return -3;
    }
    else
    {
      if ( a3 )
      {
        do
        {
          v7 = write(*((_DWORD *)v6 + 1), (const void *)(a2 + v5), 1u);
          v8 = v5++;
          if ( v7 != 1 )
          {
            snprintf(s, 0x800u, "fail to write %d:%d\n", v8, a3);
            V_LOCK();
            logfmt_raw(v13, 0x1000u, 0, s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
              191,
              "i2c_write",
              9,
              232,
              100,
              v13);
          }
        }
        while ( a3 != v5 );
      }
      free(v11);
      usleep(0x2710u);
      pthread_mutex_unlock(&stru_2E9490);
      return a3;
    }
  }
  else
  {
    snprintf(s, 0x800u, "ctx %d not inited\n", v10);
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_write",
      9,
      239,
      100,
      v13);
    pthread_mutex_unlock(&stru_2E9490);
    return -4;
  }
}
