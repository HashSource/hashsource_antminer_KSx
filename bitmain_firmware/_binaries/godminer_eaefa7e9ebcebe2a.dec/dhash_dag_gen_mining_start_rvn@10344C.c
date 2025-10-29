void __fastcall __noreturn dhash_dag_gen_mining_start_rvn(int a1)
{
  int v2; // r0
  _BYTE v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "dhash_dag_gen_mining_start_rvn",
    30,
    3679,
    40,
    v3);
  dram_bist_rvn(a1);
}
