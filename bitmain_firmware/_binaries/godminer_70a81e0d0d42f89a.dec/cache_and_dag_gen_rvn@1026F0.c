int __fastcall cache_and_dag_gen_rvn(int a1)
{
  int v2; // r0
  _BYTE v4[4080]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "cache_and_dag_gen_rvn",
    21,
    2814,
    40,
    v4);
  cache_gen_rvn(a1);
  dag_gen_rvn(a1);
  return 0;
}
