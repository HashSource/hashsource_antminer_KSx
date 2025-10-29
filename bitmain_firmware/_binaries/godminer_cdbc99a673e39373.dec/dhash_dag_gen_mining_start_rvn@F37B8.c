int __fastcall dhash_dag_gen_mining_start_rvn(int a1)
{
  int *v2; // r4
  int v3; // r0
  int v4; // r2
  int v5; // t1
  _BYTE v7[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = (int *)&compiler_param;
  v3 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "dhash_dag_gen_mining_start_rvn",
    30,
    2602,
    40,
    v7);
  sub_EC8B0(a1, 207, 1);
  usleep(0x2710u);
  sub_EC8B0(a1, 0, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 28, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 34, 4132);
  usleep(0x2710u);
  sub_EC8B0(a1, 27, 15499254);
  usleep(0x2710u);
  sub_EC8B0(a1, 26, 13);
  usleep(0x2710u);
  do
  {
    v4 = v2[1];
    v5 = *v2;
    v2 += 2;
    sub_EC8B0(a1, v5, v4);
  }
  while ( v2 != (int *)&sensor_rvn_bm2020 );
  sub_EC8B0(a1, 35, 1);
  usleep(0x2710u);
  sub_EC8B0(a1, 36, 16);
  usleep(0x2710u);
  sub_EC8B0(a1, 72, 1);
  usleep(0x2710u);
  cache_load_done_check_rvn(a1);
  sub_EC8B0(a1, 72, 0);
  usleep(0x2710u);
  *(_BYTE *)(a1 + 238) = 1;
  return 0;
}
