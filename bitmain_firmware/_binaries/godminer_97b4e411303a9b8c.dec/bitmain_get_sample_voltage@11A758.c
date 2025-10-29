int bitmain_get_sample_voltage()
{
  int result; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // [sp+10h] [bp-1810h] BYREF
  __int16 v7; // [sp+14h] [bp-180Ch]
  double v8; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v10[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( !dword_30BCF4 && sub_11A4DC() < 0 )
  {
    v3 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_sample_voltage");
    V_LOCK(v3);
    v4 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v4);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
             194,
             "bitmain_get_sample_voltage",
             26,
             593,
             100,
             v10);
  }
  v6 = 67414613;
  v8 = 0.0;
  v7 = 8;
  if ( dword_30BCF0 != 255 )
  {
    result = sub_119ADC(dword_30BCF0, (unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v8, 8u);
    if ( !result )
      return result;
    strcpy(s, "get sample N failed");
    V_LOCK(*(_DWORD *)"get sample N failed");
    v5 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_get_sample_N",
      21,
      481,
      100,
      v10);
LABEL_8:
    strcpy(s, "can nont get sample voltage");
    V_LOCK(*(_DWORD *)"ple voltage");
    v2 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v2);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
             194,
             "bitmain_get_sample_voltage",
             26,
             597,
             100,
             v10);
  }
  result = sub_11993C((unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v8, 8u);
  if ( result )
  {
    strcpy(s, "get sample N failed");
    V_LOCK(*(_DWORD *)"get sample N failed");
    v1 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_get_sample_N",
      21,
      475,
      100,
      v10);
    goto LABEL_8;
  }
  return result;
}
