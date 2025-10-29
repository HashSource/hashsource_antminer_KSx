void bitmain_get_voltage()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // [sp+10h] [bp-1810h] BYREF
  __int16 v6; // [sp+14h] [bp-180Ch]
  double v7; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v9[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_30BCF4 || sub_11A4DC() >= 0 )
  {
    v5 = 50637397;
    v7 = 0.0;
    v6 = 7;
    if ( dword_30BCF0 == 255 )
    {
      if ( !sub_11993C((unsigned __int8 *)&v5, 6u, (unsigned __int8 *)&v7, 8u) )
        goto LABEL_5;
      strcpy(s, "get AD conversion N failed");
      V_LOCK(*(_DWORD *)"n N failed");
      v0 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v0);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "_bitmain_get_AD_conversion_N",
        28,
        376,
        100,
        v9);
    }
    else
    {
      if ( !sub_119ADC(dword_30BCF0, (unsigned __int8 *)&v5, 6u, (unsigned __int8 *)&v7, 8u) )
      {
LABEL_5:
        bitmain_convert_N_to_V();
        return;
      }
      strcpy(s, "get AD conversion N failed");
      V_LOCK(*(_DWORD *)"n N failed");
      v4 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "_bitmain_get_AD_conversion_N",
        28,
        382,
        100,
        v9);
    }
    strcpy(s, "can nont get voltage");
    V_LOCK(*(_DWORD *)"tage");
    v1 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "bitmain_get_voltage",
      19,
      769,
      100,
      v9);
  }
  else
  {
    v2 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_voltage");
    V_LOCK(v2);
    v3 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "bitmain_get_voltage",
      19,
      765,
      100,
      v9);
  }
}
