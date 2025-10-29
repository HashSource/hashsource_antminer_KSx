int machine_info_init()
{
  int v0; // r0
  char v2[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "platform_topol_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
    182,
    "machine_info_init",
    17,
    920,
    60,
    v2);
  v0 = platform_topol_init();
  if ( v0 )
    exit(v0);
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "check_machine_info");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
    182,
    "machine_info_init",
    17,
    924,
    60,
    v2);
  return 0;
}
