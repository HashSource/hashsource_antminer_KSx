int bitmain_power_fw_version()
{
  int v0; // r5
  int v1; // r3
  int v3; // [sp+10h] [bp-1810h] BYREF
  __int16 v4; // [sp+14h] [bp-180Ch]
  double v5; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v7[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( !dword_2E8B5C )
  {
    v0 = sub_10C79C();
    if ( v0 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_fw_version");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "bitmain_power_fw_version",
        24,
        670,
        100,
        v7);
      return v0;
    }
  }
  v3 = 17082965;
  v5 = 0.0;
  v4 = 5;
  if ( dword_2E8B58 == 255 )
  {
    if ( !sub_10BDBC((unsigned __int8 *)&v3, 6u, (unsigned __int8 *)&v5, 8u) )
      goto LABEL_5;
    strcpy(s, "get power version failed");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_get_power_fw_version",
      29,
      249,
      100,
      v7);
LABEL_10:
    v1 = -2147482880;
    v0 = -2147482880;
    goto LABEL_6;
  }
  if ( sub_10BF24(dword_2E8B58, (unsigned __int8 *)&v3, 6u, (unsigned __int8 *)&v5, 8u) )
  {
    strcpy(s, "get power version failed");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_get_power_fw_version",
      29,
      255,
      100,
      v7);
    goto LABEL_10;
  }
LABEL_5:
  v0 = WORD2(v5);
  v1 = WORD2(v5);
LABEL_6:
  dword_2E8B64 = v1;
  return v0;
}
