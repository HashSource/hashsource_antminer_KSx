int __fastcall cache_and_dag_gen_rvn(int a1, __int64 a2, __int64 a3)
{
  int v6; // r0
  int v7; // r0
  int v9; // r0
  _BYTE v10[4080]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v6 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "cache_and_dag_gen_rvn",
    21,
    2377,
    40,
    v10);
  sub_EC8B0(a1, 0, 2);
  usleep(0x2710u);
  sub_EC8B0(a1, 28, 1);
  usleep(0x2710u);
  sub_EC8B0(a1, 163, a2 >> 6);
  usleep(0x2710u);
  sub_EC8B0(a1, 16, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 17, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 18, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 19, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 20, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 21, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 22, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 23, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 192, 18);
  usleep(0x2710u);
  sub_EC8B0(a1, 76, 0x10000000);
  usleep(0x2710u);
  sub_EC8B0(a1, 178, 0xFFFF);
  usleep(0x2710u);
  sub_EC8B0(a1, 179, 0);
  usleep(0x2710u);
  sub_EC8B0(a1, 164, 1);
  if ( !cache_gen_done_rvn(a1) )
  {
    V_LOCK(0);
    v9 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "cache_and_dag_gen_rvn",
      21,
      2424,
      40,
      v10);
  }
  sub_EC8B0(a1, 180, a3 >> 6);
  usleep(0x2710u);
  sub_EC8B0(a1, 164, 3074);
  if ( !dag_gen_done_rvn(a1) )
  {
    V_LOCK(0);
    v7 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "cache_and_dag_gen_rvn",
      21,
      2437,
      40,
      v10);
  }
  return 0;
}
