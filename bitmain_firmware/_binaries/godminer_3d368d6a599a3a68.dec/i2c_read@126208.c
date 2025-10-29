int __fastcall i2c_read(int a1, void *a2, size_t a3)
{
  char *v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  const char *v16; // [sp+10h] [bp-1814h]
  int v17; // [sp+14h] [bp-1810h] BYREF
  char *v18; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v20[4100]; // [sp+820h] [bp-1004h] BYREF

  v17 = a1;
  if ( pthread_mutex_lock(&stru_30774C) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v13 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      196,
      "i2c_read",
      8,
      159,
      100,
      v20);
    return -1;
  }
  else if ( find_c_map((_DWORD *)dword_307768, (int)&v17, (int)&v18) == 1 )
  {
    v5 = v18;
    v16 = v18 + 12;
    v6 = snprintf(s, 0x800u, "i2c read path = %s, addr = %d\n", v18 + 12, *((_DWORD *)v18 + 2) >> 1);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      196,
      "i2c_read",
      8,
      167,
      20,
      v20);
    if ( ioctl(*((_DWORD *)v5 + 1), 0x703u, *((_DWORD *)v5 + 2) >> 1) < 0 )
    {
      v14 = snprintf(s, 0x800u, "read io ctrl for path = %s, addr = %d failed\n", v16, *((_DWORD *)v5 + 2));
      V_LOCK(v14);
      v15 = logfmt_raw((int)v20, 0x1000u);
      V_UNLOCK(v15);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
        196,
        "i2c_read",
        8,
        170,
        100,
        v20);
      free(v18);
      pthread_mutex_unlock(&stru_30774C);
      return -3;
    }
    else
    {
      if ( read(*((_DWORD *)v5 + 1), a2, a3) != a3 )
      {
        v8 = snprintf(s, 0x800u, "fail to read %d\n", a3);
        V_LOCK(v8);
        v9 = logfmt_raw((int)v20, 0x1000u);
        V_UNLOCK(v9);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
          196,
          "i2c_read",
          8,
          181,
          100,
          v20);
      }
      free(v18);
      pthread_mutex_unlock(&stru_30774C);
      return 0;
    }
  }
  else
  {
    v11 = snprintf(s, 0x800u, "ctx %d not inited\n", v17);
    V_LOCK(v11);
    v12 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      196,
      "i2c_read",
      8,
      188,
      100,
      v20);
    pthread_mutex_unlock(&stru_30774C);
    return -4;
  }
}
