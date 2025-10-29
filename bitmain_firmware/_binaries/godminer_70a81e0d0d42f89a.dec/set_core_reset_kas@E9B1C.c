int __fastcall set_core_reset_kas(int a1)
{
  int v2; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_kas_2380/backend_kas_2380.c",
    192,
    "set_core_reset_kas",
    18,
    173,
    40,
    v4);
  sub_E6900(a1, 68, 2);
  return 0;
}
