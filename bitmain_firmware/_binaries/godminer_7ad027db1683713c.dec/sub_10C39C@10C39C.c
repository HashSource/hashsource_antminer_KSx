int sub_10C39C()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  pthread_mutex_lock(&power_mutex);
  strcpy(v1, "bitmain power close ===========");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    189,
    "bitmain_power_close",
    19,
    656,
    40,
    v2);
  iic_uninit(dword_2E8B58);
  dword_2E8B5C = 0;
  dword_2E8B60 = 0;
  memset(&unk_2E8B70, 0, 0xC0u);
  return pthread_mutex_unlock(&power_mutex);
}
