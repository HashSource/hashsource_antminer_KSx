int __fastcall set_logic_core_id_rvn(int a1)
{
  int v2; // r4
  int v3; // r0
  int v5; // [sp+28h] [bp-1024h] BYREF
  _BYTE v6[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v5, "chain");
  v2 = 0;
  v3 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "set_logic_core_id_rvn",
    21,
    400,
    60,
    v6);
  do
  {
    sub_F96F0(a1, v2, 179, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  return 0;
}
