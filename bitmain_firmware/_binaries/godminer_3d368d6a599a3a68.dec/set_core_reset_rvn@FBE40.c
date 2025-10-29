int __fastcall set_core_reset_rvn(int a1)
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
    "set_core_reset_rvn",
    18,
    212,
    40,
    v4);
  sub_F9B94(a1, 2, 0);
  usleep(0x2710u);
  sub_F9B94(a1, 2, 255);
  usleep(0x2710u);
  return 0;
}
