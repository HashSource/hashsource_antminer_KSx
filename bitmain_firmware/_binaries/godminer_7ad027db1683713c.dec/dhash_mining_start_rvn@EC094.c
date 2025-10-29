int __fastcall dhash_mining_start_rvn(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "dhash_mining_start_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "dhash_mining_start_rvn",
    22,
    2301,
    40,
    v3);
  sub_EBFA0(a1, 28, 2);
  usleep(0x2710u);
  sub_EBFA0(a1, 15, 3);
  usleep(0x2710u);
  sub_EBFA0(a1, 207, 1);
  usleep(0x2710u);
  sub_EBFA0(a1, 0, 3);
  usleep(0x2710u);
  sub_EBFA0(a1, 28, 0);
  usleep(0x2710u);
  sub_EBFA0(a1, 34, 20);
  usleep(0x2710u);
  sub_EBFA0(a1, 33, 1);
  usleep(0x2710u);
  sub_EBFA0(a1, 35, 0);
  usleep(0x2710u);
  sub_EBFA0(a1, 36, 10);
  usleep(0x2710u);
  sub_EBFA0(a1, 38, 0);
  usleep(0x2710u);
  sub_EBFA0(a1, 31, 0);
  usleep(0x2710u);
  sub_EBFA0(a1, 73, 1);
  usleep(0x2710u);
  sub_EBFA0(a1, 72, 1);
  usleep(0x2710u);
  sub_EBFA0(a1, 72, 0);
  usleep(0x2710u);
  *(_BYTE *)(a1 + 238) = 1;
  return 0;
}
