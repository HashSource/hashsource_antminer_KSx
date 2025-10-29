int __fastcall set_core_bus_reset_rvn(int a1)
{
  int v2; // r4
  char v3; // r1
  _DWORD v5[7]; // [sp+28h] [bp-20h] BYREF
  int v6; // [sp+44h] [bp-4h]
  char v7[4096]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 232));
  v2 = 0;
  logfmt_raw(v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s...", "set_core_bus_reset_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "set_core_bus_reset_rvn",
    22,
    871,
    60,
    v7);
  do
  {
    sub_EC27C(a1, v2, 2, 0);
    usleep((__useconds_t)&elf_hash_chain[4398]);
    v3 = v2++;
    sub_EC27C(a1, v3, 2, 1);
    usleep((__useconds_t)&elf_hash_chain[4398]);
  }
  while ( v2 != 8 );
  return 0;
}
