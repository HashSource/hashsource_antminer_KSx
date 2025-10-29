int __fastcall sub_119564(int a1, unsigned __int8 a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // [sp+10h] [bp-1810h] BYREF
  __int16 v6; // [sp+14h] [bp-180Ch]
  char v7; // [sp+16h] [bp-180Ah]
  char v8; // [sp+17h] [bp-1809h]
  double v9; // [sp+18h] [bp-1808h] BYREF
  char v10[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v11[4096]; // [sp+820h] [bp-1000h] BYREF

  v9 = 0.0;
  v7 = a2 - 121;
  v5 = -2130269611;
  v6 = a2;
  v8 = 0;
  if ( a1 == 255 )
  {
    if ( !sub_11923C((unsigned __int8 *)&v5, 8u, (unsigned __int8 *)&v9, 8u) )
      return WORD2(v9);
    strcpy(v10, "set watchdog failed");
    V_LOCK(*(_DWORD *)"set watchdog failed");
    v3 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_set_watchdog",
      21,
      512,
      100,
      v11);
  }
  else
  {
    if ( !sub_1193DC(a1, (unsigned __int8 *)&v5, 8u, (unsigned __int8 *)&v9, 8u) )
      return WORD2(v9);
    strcpy(v10, "set watchdog failed");
    V_LOCK(*(_DWORD *)"set watchdog failed");
    v4 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_set_watchdog",
      21,
      518,
      100,
      v11);
  }
  return -2147482880;
}
