int __fastcall set_core_bus_reset(int a1)
{
  int v2; // r4
  int v3; // r0
  char v4; // r1
  _BYTE v6[32]; // [sp+28h] [bp-20h] BYREF
  _BYTE v7[4096]; // [sp+48h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v6, "chain");
  v2 = 0;
  v3 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_2280.c",
    192,
    "set_core_bus_reset",
    18,
    894,
    60,
    v7);
  do
  {
    sub_D0B38(a1, v2, 201, 0);
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v4 = v2++;
    sub_D0B38(a1, v4, 201, 1);
    usleep((__useconds_t)&elf_hash_chain[4398]);
  }
  while ( v2 != 16 );
  return 0;
}
