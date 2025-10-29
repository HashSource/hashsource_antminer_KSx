int call_setsystime_from_http()
{
  int v0; // r0
  int v1; // r0
  char v3[4080]; // [sp+10h] [bp-2004h] BYREF
  _BYTE v4[4100]; // [sp+1010h] [bp-1004h] BYREF

  strcpy(v3, "/www/pages/cgi-bin/getandsettime.cgi");
  v0 = my_system(v3);
  if ( v0 )
    v0 = setsystime_basestampfile();
  V_LOCK(v0);
  v1 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v1);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/god-miner.c",
           160,
           "call_setsystime_from_http",
           25,
           1525,
           40,
           v4);
}
