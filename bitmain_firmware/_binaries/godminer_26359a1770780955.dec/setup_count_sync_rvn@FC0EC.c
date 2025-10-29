int __fastcall setup_count_sync_rvn(int a1, char a2)
{
  int v4; // r0
  _BYTE v6[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "setup_count_sync_rvn",
    20,
    301,
    20,
    v6);
  sub_F96F0(a1, a2, 202, 0);
  sub_F96F0(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_F96F0(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  return 0;
}
