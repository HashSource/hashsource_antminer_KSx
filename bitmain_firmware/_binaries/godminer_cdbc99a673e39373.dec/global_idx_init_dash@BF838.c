int __fastcall global_idx_init_dash(int a1)
{
  void *v2; // r0
  int v3; // r0
  _BYTE v5[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = calloc(0x5808u, 1u);
  *(_DWORD *)(a1 + 800) = v2;
  V_LOCK(v2);
  v3 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    189,
    "global_idx_init_dash",
    20,
    57,
    20,
    v5);
  return 0;
}
