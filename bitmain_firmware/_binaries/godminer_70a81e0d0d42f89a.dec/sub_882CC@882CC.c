int __fastcall sub_882CC(int a1)
{
  int v1; // r5
  int v2; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = *_errno_location();
  strerror(v1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/god-miner.c",
           160,
           "droa_macro_check",
           16,
           1914,
           60,
           v4);
}
