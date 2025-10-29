int sub_10D48C()
{
  int v0; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  pthread_mutex_lock(&power_mutex);
  V_LOCK(*(_DWORD *)"ose ===========");
  v0 = logfmt_raw((int)v2, 0x1000u);
  V_UNLOCK(v0);
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
  iic_uninit(dword_2EA050);
  dword_2EA054 = 0;
  dword_2EA058 = 0;
  memset(&unk_2EA068, 0, 0xC0u);
  return pthread_mutex_unlock(&power_mutex);
}
