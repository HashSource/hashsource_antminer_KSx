int __fastcall i2c_read(int a1, void *a2, size_t a3)
{
  char *v5; // r5
  const char *v7; // [sp+10h] [bp-1814h]
  int v8; // [sp+14h] [bp-1810h] BYREF
  char *v9; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v11[4100]; // [sp+820h] [bp-1004h] BYREF

  v8 = a1;
  if ( pthread_mutex_lock(&stru_2E9490) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_read",
      8,
      159,
      100,
      v11);
    return -1;
  }
  else if ( find_c_map((int *)dword_2E94AC, (int)&v8, &v9) == 1 )
  {
    v5 = v9;
    v7 = v9 + 12;
    snprintf(s, 0x800u, "i2c read path = %s, addr = %d\n", v9 + 12, *((_DWORD *)v9 + 2) >> 1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_read",
      8,
      167,
      20,
      v11);
    if ( ioctl(*((_DWORD *)v5 + 1), 0x703u, *((_DWORD *)v5 + 2) >> 1) < 0 )
    {
      snprintf(s, 0x800u, "read io ctrl for path = %s, addr = %d failed\n", v7, *((_DWORD *)v5 + 2));
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        191,
        "i2c_read",
        8,
        170,
        100,
        v11);
      free(v9);
      pthread_mutex_unlock(&stru_2E9490);
      return -3;
    }
    else
    {
      if ( read(*((_DWORD *)v5 + 1), a2, a3) != a3 )
      {
        snprintf(s, 0x800u, "fail to read %d\n", a3);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
          191,
          "i2c_read",
          8,
          181,
          100,
          v11);
      }
      free(v9);
      pthread_mutex_unlock(&stru_2E9490);
      return 0;
    }
  }
  else
  {
    snprintf(s, 0x800u, "ctx %d not inited\n", v8);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_read",
      8,
      188,
      100,
      v11);
    pthread_mutex_unlock(&stru_2E9490);
    return -4;
  }
}
