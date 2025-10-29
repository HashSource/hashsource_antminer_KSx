int __fastcall sub_10C0AC(int a1, unsigned __int8 a2)
{
  int v3; // [sp+10h] [bp-1810h] BYREF
  __int16 v4; // [sp+14h] [bp-180Ch]
  char v5; // [sp+16h] [bp-180Ah]
  char v6; // [sp+17h] [bp-1809h]
  double v7; // [sp+18h] [bp-1808h] BYREF
  char v8[2048]; // [sp+20h] [bp-1800h] BYREF
  char v9[4096]; // [sp+820h] [bp-1000h] BYREF

  v7 = 0.0;
  v5 = a2 - 121;
  v3 = -2130269611;
  v4 = a2;
  v6 = 0;
  if ( a1 == 255 )
  {
    if ( !sub_10BDBC((unsigned __int8 *)&v3, 8u, (unsigned __int8 *)&v7, 8u) )
      return WORD2(v7);
    strcpy(v8, "set watchdog failed");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_set_watchdog",
      21,
      490,
      100,
      v9);
  }
  else
  {
    if ( !sub_10BF24(a1, (unsigned __int8 *)&v3, 8u, (unsigned __int8 *)&v7, 8u) )
      return WORD2(v7);
    strcpy(v8, "set watchdog failed");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_set_watchdog",
      21,
      496,
      100,
      v9);
  }
  return -2147482880;
}
