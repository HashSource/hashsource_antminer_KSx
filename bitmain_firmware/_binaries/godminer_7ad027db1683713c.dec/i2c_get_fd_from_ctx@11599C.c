int __fastcall i2c_get_fd_from_ctx(int a1)
{
  int v1; // r4
  int v3; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v6[4100]; // [sp+820h] [bp-1004h] BYREF

  v3 = a1;
  if ( pthread_mutex_lock(&stru_2E9490) )
  {
    v1 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_get_fd_from_ctx",
      19,
      299,
      100,
      v6);
  }
  else if ( find_c_map((int *)dword_2E94AC, (int)&v3, &ptr) )
  {
    snprintf(
      s,
      0x800u,
      "i2c dev = %s, addr = 0x%x, fd = %d",
      (const char *)ptr + 12,
      *((_DWORD *)ptr + 2),
      *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_i2c.c",
      191,
      "i2c_get_fd_from_ctx",
      19,
      310,
      20,
      v6);
    pthread_mutex_unlock(&stru_2E9490);
    v1 = *((_DWORD *)ptr + 1);
    free(ptr);
  }
  else
  {
    v1 = -2;
    pthread_mutex_unlock(&stru_2E9490);
  }
  return v1;
}
