int bitmain_get_power_status()
{
  int v0; // r6
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // [sp+10h] [bp-181Ch] BYREF
  __int16 v10; // [sp+14h] [bp-1818h]
  _QWORD v11[2]; // [sp+18h] [bp-1814h] BYREF
  char s[2040]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v13[4100]; // [sp+828h] [bp-1004h] BYREF

  if ( !dword_306CAC )
  {
    v0 = sub_11A27C();
    if ( v0 < 0 )
    {
      v2 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_power_status");
      V_LOCK(v2);
      v3 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "bitmain_get_power_status",
        24,
        643,
        100,
        v13);
      return v0;
    }
  }
  if ( (unsigned int)(dword_306CB0 - 193) > 1 )
  {
    v10 = 14;
    v11[0] = 0;
    v9 = 168077909;
    if ( dword_306CA8 == 255 )
    {
      if ( sub_1196DC((unsigned __int8 *)&v9, 6u, (unsigned __int8 *)v11, 8u) )
      {
        strcpy(s, "get power status failed");
        V_LOCK(*(_DWORD *)" failed");
        v6 = logfmt_raw((int)v13, 0x1000u);
        V_UNLOCK(v6);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
          194,
          "_bitmain_get_power_status",
          25,
          547,
          100,
          v13);
        goto LABEL_12;
      }
    }
    else if ( sub_11987C(dword_306CA8, (unsigned __int8 *)&v9, 6u, (unsigned __int8 *)v11, 8u) )
    {
      strcpy(s, "get power status failed");
      V_LOCK(*(_DWORD *)" failed");
      v8 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
        194,
        "_bitmain_get_power_status",
        25,
        553,
        100,
        v13);
      goto LABEL_12;
    }
    return WORD2(v11[0]);
  }
  memset(v11, 0, 14);
  v10 = 14;
  v9 = 168077909;
  if ( dword_306CA8 == 255 )
  {
    if ( !sub_1196DC((unsigned __int8 *)&v9, 6u, (unsigned __int8 *)v11, 0xEu) )
    {
LABEL_5:
      v0 = HIDWORD(v11[0]);
      if ( HIDWORD(v11[0]) != -2147482880 )
        return v0;
      goto LABEL_12;
    }
    strcpy(s, "get power status failed\n");
    V_LOCK(*(_DWORD *)" failed\n");
    v5 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_get_power_status_32bits",
      32,
      623,
      100,
      v13);
  }
  else
  {
    if ( !sub_11987C(dword_306CA8, (unsigned __int8 *)&v9, 6u, (unsigned __int8 *)v11, 0xEu) )
      goto LABEL_5;
    strcpy(s, "get power status failed\n");
    V_LOCK(*(_DWORD *)" failed\n");
    v7 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_get_power_status_32bits",
      32,
      629,
      100,
      v13);
  }
LABEL_12:
  strcpy(s, "can nont get power status\n");
  V_LOCK(*(_DWORD *)"er status\n");
  v4 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
    194,
    "bitmain_get_power_status",
    24,
    654,
    100,
    v13);
  return -2147482880;
}
