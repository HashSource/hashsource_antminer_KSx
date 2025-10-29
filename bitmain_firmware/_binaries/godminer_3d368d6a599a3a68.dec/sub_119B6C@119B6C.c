int __fastcall sub_119B6C(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // [sp+10h] [bp-1810h] BYREF
  __int16 v5; // [sp+14h] [bp-180Ch]
  double v6; // [sp+18h] [bp-1808h] BYREF
  char v7[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v8[4096]; // [sp+820h] [bp-1000h] BYREF

  v4 = 17082965;
  v6 = 0.0;
  v5 = 5;
  if ( a1 == 255 )
  {
    if ( !sub_1196DC((unsigned __int8 *)&v4, 6u, (unsigned __int8 *)&v6, 8u) )
      return WORD2(v6);
    strcpy(v7, "get power version failed");
    V_LOCK(*(_DWORD *)"n failed");
    v2 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_get_power_fw_version",
      29,
      271,
      100,
      v8);
  }
  else
  {
    if ( !sub_11987C(a1, (unsigned __int8 *)&v4, 6u, (unsigned __int8 *)&v6, 8u) )
      return WORD2(v6);
    strcpy(v7, "get power version failed");
    V_LOCK(*(_DWORD *)"n failed");
    v3 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_get_power_fw_version",
      29,
      277,
      100,
      v8);
  }
  return -2147482880;
}
