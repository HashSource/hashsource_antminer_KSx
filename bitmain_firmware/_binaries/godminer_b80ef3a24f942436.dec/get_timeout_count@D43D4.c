int __fastcall get_timeout_count(int a1)
{
  int v2; // r4
  int v3; // r0
  _BYTE v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = 23;
  v3 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "get_timeout_count",
    17,
    190,
    20,
    v5);
  do
  {
    sub_D1FD4(a1, 255, v2++, 0);
    usleep(0x2710u);
  }
  while ( v2 != 29 );
  return 0;
}
