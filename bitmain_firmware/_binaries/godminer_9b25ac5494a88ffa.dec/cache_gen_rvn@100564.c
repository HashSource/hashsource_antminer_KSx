int __fastcall cache_gen_rvn(int a1)
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
    "cache_gen_rvn",
    13,
    2717,
    40,
    v4);
  sub_F942C(a1, 15, 3);
  usleep(0x2710u);
  sub_F942C(a1, 0, 2);
  usleep(0x2710u);
  sub_F942C(a1, 28, 1);
  usleep(0x2710u);
  sub_F942C(a1, 207, 1);
  usleep(0x2710u);
  sub_F942C(a1, 167, 0);
  usleep(0x2710u);
  sub_F942C(a1, 168, 2099200);
  usleep(0x2710u);
  sub_F942C(a1, 169, 4198400);
  usleep(0x2710u);
  sub_F942C(a1, 170, 6297600);
  usleep(0x2710u);
  sub_F942C(a1, 171, 58720256);
  usleep(0x2710u);
  sub_F942C(a1, 163, 1310719);
  usleep(0x2710u);
  sub_F942C(a1, 16, -797724831);
  usleep(0x2710u);
  sub_F942C(a1, 17, 19609895);
  usleep(0x2710u);
  sub_F942C(a1, 18, -227465223);
  usleep(0x2710u);
  sub_F942C(a1, 19, 1512262728);
  usleep(0x2710u);
  sub_F942C(a1, 20, 1604516950);
  usleep(0x2710u);
  sub_F942C(a1, 21, -1358223715);
  usleep(0x2710u);
  sub_F942C(a1, 22, -1806736547);
  usleep(0x2710u);
  sub_F942C(a1, 23, 836938960);
  usleep(0x2710u);
  sub_F942C(a1, 192, 66);
  usleep(0x2710u);
  sub_F942C(a1, 179, 0);
  usleep(0x2710u);
  sub_F942C(a1, 178, 3000);
  sleep(0xAu);
  sub_F942C(a1, 164, 61);
  sleep(0xAu);
  cache_dag_done_check_rvn(a1, 160, 1);
  sleep(1u);
  return 0;
}
