int __fastcall sub_B3CF0(int a1)
{
  int v1; // r0
  _BYTE v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v1);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-kas_2382/miner_util/check_pool.c",
           172,
           "set_lowprio",
           11,
           18,
           20,
           v3);
}
