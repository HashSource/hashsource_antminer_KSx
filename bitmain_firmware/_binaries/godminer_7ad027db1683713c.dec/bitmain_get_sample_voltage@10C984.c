int bitmain_get_sample_voltage()
{
  int result; // r0
  int v1; // [sp+10h] [bp-1810h] BYREF
  __int16 v2; // [sp+14h] [bp-180Ch]
  double v3; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v5[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( !dword_2E8B5C && sub_10C79C() < 0 )
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_sample_voltage");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
             189,
             "bitmain_get_sample_voltage",
             26,
             567,
             100,
             v5);
  }
  v1 = 67414613;
  v3 = 0.0;
  v2 = 8;
  if ( dword_2E8B58 != 255 )
  {
    result = sub_10BF24(dword_2E8B58, (unsigned __int8 *)&v1, 6u, (unsigned __int8 *)&v3, 8u);
    if ( !result )
      return result;
    strcpy(s, "get sample N failed");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_get_sample_N",
      21,
      459,
      100,
      v5);
LABEL_8:
    strcpy(s, "can nont get sample voltage");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
             189,
             "bitmain_get_sample_voltage",
             26,
             571,
             100,
             v5);
  }
  result = sub_10BDBC((unsigned __int8 *)&v1, 6u, (unsigned __int8 *)&v3, 8u);
  if ( result )
  {
    strcpy(s, "get sample N failed");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_get_sample_N",
      21,
      453,
      100,
      v5);
    goto LABEL_8;
  }
  return result;
}
