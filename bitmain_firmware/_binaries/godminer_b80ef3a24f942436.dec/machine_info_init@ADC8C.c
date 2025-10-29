int __fastcall machine_info_init(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  _BYTE v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v1);
  v2 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
         182,
         "machine_info_init",
         17,
         918,
         60,
         v6);
  v3 = platform_topol_init(v2);
  if ( v3 )
    exit(v3);
  V_LOCK(0);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
    182,
    "machine_info_init",
    17,
    922,
    60,
    v6);
  return 0;
}
