int sub_10C79C()
{
  int v0; // r5
  int v1; // r0
  int v3[2]; // [sp+10h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v5[4096]; // [sp+818h] [bp-1000h] BYREF

  v3[0] = 0;
  v3[1] = (int)&stru_20000.st_name + 1;
  pthread_mutex_lock(&power_mutex);
  v0 = iic_init(v3);
  pthread_mutex_unlock(&power_mutex);
  if ( v0 < 0 )
    return v0;
  dword_2E8B58 = v0;
  dword_2E8B5C = 1;
  memset(&unk_2E8B70, 0, 0xC0u);
  v1 = bitmain_power_version();
  v0 = v1;
  if ( v1 >= 0 )
  {
    dword_2E8B60 = v1;
    snprintf(s, 0x800u, "power open power_version = 0x%x", v1);
    v0 = 0;
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "bitmain_power_open",
      18,
      644,
      40,
      v5);
    return v0;
  }
  strcpy(s, "power open power_version < 0 will close power");
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    189,
    "bitmain_power_open",
    18,
    639,
    40,
    v5);
  if ( dword_2E8B58 && dword_2E8B5C )
    return v0;
  sub_10C39C();
  return v0;
}
