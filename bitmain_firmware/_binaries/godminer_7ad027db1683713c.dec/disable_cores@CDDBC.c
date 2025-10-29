int __fastcall disable_cores(int a1)
{
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "disable_cores");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "disable_cores",
    13,
    808,
    20,
    v3);
  sub_C8D58(a1, 13, 0);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
