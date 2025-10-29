int __fastcall i2c_get_fd_from_ctx(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r4
  int v5; // r0
  int v6; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v9[4100]; // [sp+820h] [bp-1004h] BYREF

  v6 = a1;
  if ( pthread_mutex_lock(&stru_30A774) )
  {
    v3 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v5 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      196,
      "i2c_get_fd_from_ctx",
      19,
      299,
      100,
      v9);
  }
  else if ( find_c_map((_DWORD *)dword_30A790, (int)&v6, (int)&ptr) )
  {
    v1 = snprintf(
           s,
           0x800u,
           "i2c dev = %s, addr = 0x%x, fd = %d",
           (const char *)ptr + 12,
           *((_DWORD *)ptr + 2),
           *((_DWORD *)ptr + 1));
    V_LOCK(v1);
    v2 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      196,
      "i2c_get_fd_from_ctx",
      19,
      310,
      20,
      v9);
    pthread_mutex_unlock(&stru_30A774);
    v3 = *((_DWORD *)ptr + 1);
    free(ptr);
  }
  else
  {
    v3 = -2;
    pthread_mutex_unlock(&stru_30A774);
  }
  return v3;
}
