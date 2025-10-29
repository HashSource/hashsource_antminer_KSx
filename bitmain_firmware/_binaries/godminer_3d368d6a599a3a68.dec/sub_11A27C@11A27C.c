int sub_11A27C()
{
  int v0; // r5
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v5; // r0
  int v6; // r10
  int v7; // r0
  int v8; // r0
  _DWORD v9[2]; // [sp+10h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v11[4096]; // [sp+818h] [bp-1000h] BYREF

  v9[0] = 0;
  v9[1] = &stru_1FFF4.st_other;
  pthread_mutex_lock(&power_mutex);
  v0 = iic_init((int)v9);
  pthread_mutex_unlock(&power_mutex);
  if ( v0 < 0 )
    return v0;
  dword_306CA8 = v0;
  dword_306CAC = 1;
  memset(&unk_306CC0, 0, 0xC0u);
  v1 = bitmain_power_version();
  v0 = v1;
  if ( v1 >= 0 )
  {
    dword_306CB0 = v1;
    v2 = snprintf(s, 0x800u, "power open power_version = 0x%x", v1);
    V_LOCK(v2);
    v3 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "bitmain_power_open",
      18,
      712,
      40,
      v11);
    v0 = 0;
    if ( (unsigned int)(dword_306CB0 - 193) <= 1 )
    {
      v6 = sub_119B6C(dword_306CA8);
      v7 = snprintf(s, 0x800u, "power fw_version = 0x%x", v6);
      V_LOCK(v7);
      v8 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "bitmain_power_open",
        18,
        716,
        40,
        v11);
      dword_306CB4 = v6;
    }
    return v0;
  }
  strcpy(s, "power open power_version < 0 will close power");
  V_LOCK(*(_DWORD *)"l close power");
  v5 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
    194,
    "bitmain_power_open",
    18,
    707,
    40,
    v11);
  if ( dword_306CA8 && dword_306CAC )
    return v0;
  sub_119E5C();
  return v0;
}
