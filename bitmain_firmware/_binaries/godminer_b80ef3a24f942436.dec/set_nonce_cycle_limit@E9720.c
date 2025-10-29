int __fastcall set_nonce_cycle_limit(int a1)
{
  unsigned int v2; // r5
  int v3; // r0
  int v4; // r0
  _BYTE v6[32]; // [sp+28h] [bp-1024h] BYREF
  _BYTE v7[4100]; // [sp+48h] [bp-1004h] BYREF

  v2 = (unsigned int)(float)((float)(67109000.0 / *(float *)(a1 + 976)) * 12.0);
  sub_E50D0(a1, 14, HIWORD(v2));
  v3 = sub_E50D0(a1, 15, (unsigned __int16)v2);
  V_LOCK(v3);
  V_INT((int)v6, "chain", *(int *)(a1 + 248));
  v4 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
    187,
    "set_nonce_cycle_limit",
    21,
    517,
    40,
    v7);
  return 0;
}
