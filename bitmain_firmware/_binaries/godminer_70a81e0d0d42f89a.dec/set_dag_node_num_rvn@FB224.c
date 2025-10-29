int __fastcall set_dag_node_num_rvn(int a1, int a2, int a3)
{
  int v5; // r0
  _BYTE v7[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v5 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "set_dag_node_num_rvn",
    20,
    2131,
    60,
    v7);
  sub_FB1E4(a1, 27, a3);
  usleep(0x3E8u);
  return 0;
}
