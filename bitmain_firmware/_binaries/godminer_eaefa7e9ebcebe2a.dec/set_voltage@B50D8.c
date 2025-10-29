int __fastcall set_voltage(int a1, int a2)
{
  int v3; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _BYTE v8[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK(a1);
    v3 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
      171,
      "set_voltage",
      11,
      453,
      40,
      v8);
    return sub_B4E24(a1);
  }
  else
  {
    V_LOCK(a1);
    v5 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v5);
    v6 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
           171,
           "set_voltage",
           11,
           449,
           100,
           v8);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/power_api.c",
      171,
      "set_voltage",
      11,
      450,
      100,
      v8);
    return -1;
  }
}
