int __fastcall get_timeout_count(int a1)
{
  int v2; // r4
  char v4[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  v2 = 23;
  logfmt_raw(v4, 0x1000u, 0, "%s...", "get_timeout_count");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "get_timeout_count",
    17,
    184,
    20,
    v4);
  do
  {
    sub_C911C(a1, 255, v2++, 0);
    usleep(0x2710u);
  }
  while ( v2 != 29 );
  return 0;
}
