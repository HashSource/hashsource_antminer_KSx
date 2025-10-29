void __noreturn check_working_freq_new()
{
  int v0; // r0
  int v1; // r0
  char v2; // [sp+17h] [bp-1001h] BYREF
  _BYTE v3[4096]; // [sp+18h] [bp-1000h] BYREF

  v2 = 1;
  while ( 1 )
  {
    v0 = update_and_automatic_set_freq(&v2);
    if ( !v2 )
    {
      V_LOCK(v0);
      v1 = logfmt_raw((int)v3, 0x1000u);
      V_UNLOCK(v1);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
        187,
        "check_working_freq_new",
        22,
        462,
        100,
        v3);
    }
    sleep(1u);
  }
}
