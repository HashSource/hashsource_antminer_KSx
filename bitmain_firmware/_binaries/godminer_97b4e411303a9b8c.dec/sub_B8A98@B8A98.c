int __fastcall sub_B8A98(int a1)
{
  int v1; // r0
  _BYTE v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/miner_util/miner_monitor/miner_6060info.c",
    190,
    "miner_6060info_errorcode_init",
    29,
    174,
    100,
    v3);
  pthread_mutex_unlock(&stru_2EA69C);
  return 0;
}
