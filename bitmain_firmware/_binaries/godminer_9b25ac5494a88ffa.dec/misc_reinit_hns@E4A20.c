int __fastcall misc_reinit_hns(int a1)
{
  int v2; // r0
  int v4; // [sp+28h] [bp-1020h] BYREF
  _BYTE v5[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v4, "chain");
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_hns_2130/backend_hns_2130.c",
    192,
    "misc_reinit_hns",
    15,
    551,
    40,
    v5);
  sub_E47E8(a1);
  return 0;
}
