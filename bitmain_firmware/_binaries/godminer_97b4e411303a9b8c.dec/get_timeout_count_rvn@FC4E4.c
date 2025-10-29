int __fastcall get_timeout_count_rvn(int a1)
{
  int v2; // r4
  int v3; // r0
  _BYTE v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = 69;
  v3 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "get_timeout_count_rvn",
    21,
    254,
    20,
    v5);
  do
  {
    sub_FA260(a1, 255, v2++, 0);
    usleep(0x2710u);
  }
  while ( v2 != 75 );
  return 0;
}
