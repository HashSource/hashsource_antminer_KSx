int __fastcall set_nonce_num_rvn(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "set_nonce_num_rvn",
    17,
    1085,
    20,
    v6);
  sub_F9DF4(a1, 10, a2);
  usleep(0x2710u);
  return 0;
}
