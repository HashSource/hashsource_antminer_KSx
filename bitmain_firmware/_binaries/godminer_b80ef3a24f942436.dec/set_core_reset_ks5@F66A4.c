int __fastcall set_core_reset_ks5(int a1)
{
  int v2; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    187,
    "set_core_reset_ks5",
    18,
    173,
    40,
    v4);
  sub_F2F98(a1, 68, 2);
  return 0;
}
