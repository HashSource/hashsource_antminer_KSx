int bitmain_get_power_status()
{
  int v0; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // [sp+10h] [bp-1810h] BYREF
  __int16 v10; // [sp+14h] [bp-180Ch]
  double v11; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v13[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( !dword_3114CC )
  {
    v0 = sub_11D9F4();
    if ( v0 < 0 )
    {
      v6 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_power_status");
      V_LOCK(v6);
      v7 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        189,
        "bitmain_get_power_status",
        24,
        582,
        100,
        v13);
      return v0;
    }
  }
  v9 = 168077909;
  v11 = 0.0;
  v10 = 14;
  if ( dword_3114C8 == 255 )
  {
    if ( !sub_11D014((unsigned __int8 *)&v9, 6u, (unsigned __int8 *)&v11, 8u) )
      return WORD2(v11);
    strcpy(s, "get power status failed");
    V_LOCK(*(_DWORD *)" failed");
    v2 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v2);
    v3 = g_zc;
    v4 = 526;
LABEL_9:
    v0 = -2147482880;
    zlog(
      v3,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_get_power_status",
      25,
      v4,
      100,
      v13);
    strcpy(s, "can nont get power status");
    V_LOCK(*(_DWORD *)"er status");
    v5 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "bitmain_get_power_status",
      24,
      586,
      100,
      v13);
    return v0;
  }
  if ( sub_11D17C(dword_3114C8, (unsigned __int8 *)&v9, 6u, (unsigned __int8 *)&v11, 8u) )
  {
    strcpy(s, "get power status failed");
    V_LOCK(*(_DWORD *)" failed");
    v8 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v8);
    v3 = g_zc;
    v4 = 532;
    goto LABEL_9;
  }
  return WORD2(v11);
}
