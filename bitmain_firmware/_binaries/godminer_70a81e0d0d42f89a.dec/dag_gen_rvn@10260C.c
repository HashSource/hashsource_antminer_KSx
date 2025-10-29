int __fastcall dag_gen_rvn(int a1)
{
  int v2; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "dag_gen_rvn",
    11,
    2786,
    40,
    v4);
  sub_FB1E4(a1, 180, 83886046);
  usleep(0x2710u);
  sub_FB1E4(a1, 164, 62);
  sleep(0xAu);
  cache_dag_done_check_rvn(a1, 160, 2);
  sleep(1u);
  return 0;
}
