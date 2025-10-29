int bitmain_power_fw_version()
{
  int v0; // r5
  int v1; // r3
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // [sp+10h] [bp-1810h] BYREF
  __int16 v8; // [sp+14h] [bp-180Ch]
  double v9; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v11[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( !dword_3114CC )
  {
    v0 = sub_11D9F4();
    if ( v0 < 0 )
    {
      v4 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_fw_version");
      V_LOCK(v4);
      v5 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "bitmain_power_fw_version",
        24,
        671,
        100,
        v11);
      return v0;
    }
  }
  v7 = 17082965;
  v9 = 0.0;
  v8 = 5;
  if ( dword_3114C8 == 255 )
  {
    if ( !sub_11D014((unsigned __int8 *)&v7, 6u, (unsigned __int8 *)&v9, 8u) )
      goto LABEL_5;
    strcpy(s, "get power version failed");
    V_LOCK(*(_DWORD *)"n failed");
    v3 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_get_power_fw_version",
      29,
      250,
      100,
      v11);
LABEL_10:
    v1 = -2147482880;
    v0 = -2147482880;
    goto LABEL_6;
  }
  if ( sub_11D17C(dword_3114C8, (unsigned __int8 *)&v7, 6u, (unsigned __int8 *)&v9, 8u) )
  {
    strcpy(s, "get power version failed");
    V_LOCK(*(_DWORD *)"n failed");
    v6 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_get_power_fw_version",
      29,
      256,
      100,
      v11);
    goto LABEL_10;
  }
LABEL_5:
  v0 = WORD2(v9);
  v1 = WORD2(v9);
LABEL_6:
  dword_3114D4 = v1;
  return v0;
}
