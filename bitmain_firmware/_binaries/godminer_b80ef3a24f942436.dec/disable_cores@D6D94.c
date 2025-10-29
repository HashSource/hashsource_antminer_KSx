int __fastcall disable_cores(int a1)
{
  int v2; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "disable_cores",
    13,
    856,
    20,
    v4);
  sub_D1C10(a1, 13, 0);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
