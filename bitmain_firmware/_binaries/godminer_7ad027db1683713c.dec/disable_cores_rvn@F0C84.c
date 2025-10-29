int __fastcall disable_cores_rvn(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "disable_cores_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "disable_cores_rvn",
    17,
    787,
    20,
    v3);
  sub_EBFA0(a1, 160, 0);
  usleep((__useconds_t)&elf_hash_chain[4398]);
  return 0;
}
