int __fastcall misc_reinit_dcr(int a1)
{
  _DWORD v3[7]; // [sp+28h] [bp-1020h] BYREF
  int v4; // [sp+44h] [bp-1004h]
  char v5[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 232));
  logfmt_raw(v5, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "misc_reinit_dcr");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
    187,
    "misc_reinit_dcr",
    15,
    450,
    40,
    v5);
  sub_C7FA4(a1);
  return 0;
}
