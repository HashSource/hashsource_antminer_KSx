int __fastcall serdes_external_loop_ate_setup(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r0
  int v9; // r0
  char *v10; // r3
  int v11; // r0
  int v12; // r0
  int v15; // [sp+30h] [bp-1064h] BYREF
  _BYTE v16[32]; // [sp+50h] [bp-1044h] BYREF
  int v17; // [sp+70h] [bp-1024h] BYREF
  _BYTE v18[4100]; // [sp+90h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v15, "chain", *(int *)(a1 + 248));
  v7 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v7);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
         190,
         "serdes_external_loop_ate_setup",
         30,
         1544,
         60,
         v18);
  V_LOCK(v8);
  V_INT((int)v16, "chain", *(int *)(a1 + 248));
  v9 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_external_loop_ate_setup",
    30,
    1546,
    60,
    v18);
  if ( LFSR31 )
  {
    sub_D85AC(a1, a3, 77, (int)&dword_10000 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    sub_D85AC(a1, a3, 77, (int)&dword_10000 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    sub_D85AC(a1, a3, 77, (int)&loc_110010 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    sub_D85AC(a1, a3, 77, (int)&dword_10000 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    sub_D85AC(a1, a3, 77, (int)&loc_110010 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    v10 = (char *)&dword_10000 + 1;
  }
  else
  {
    sub_D85AC(a1, a3, 77, (int)&loc_90008 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    sub_D85AC(a1, a3, 77, (int)&loc_90008 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    sub_D85AC(a1, a3, 77, (int)&loc_190018 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    sub_D85AC(a1, a3, 77, (int)&loc_90008 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    sub_D85AC(a1, a3, 77, (int)&loc_190018 + 1);
    sub_D85AC(a1, a3, 78, -2144251757);
    v10 = (_BYTE *)(&loc_90008 + 1);
  }
  sub_D85AC(a1, a3, 77, (int)v10);
  sub_D85AC(a1, a3, 78, -2144251757);
  usleep(0xFA0u);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  v11 = serdes_wait_status(a1, a2, a3, 5780, 0);
  V_LOCK(v11);
  V_INT((int)&v17, "chain", *(int *)(a1 + 248));
  v12 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "serdes_external_loop_ate_setup",
    30,
    1575,
    60,
    v18);
  sub_D85AC(a1, a3, 77, 716778169);
  sub_D85AC(a1, a3, 78, -2144251791);
  sub_D85AC(a1, a3, 77, 715729577);
  sub_D85AC(a1, a3, 78, -2144251791);
  usleep((__useconds_t)&elf_hash_bucket[3497]);
  serdes_wait_status(a1, a2, a3, 4244, a4);
  serdes_wait_status(a1, a2, a3, 4244, 65537);
  serdes_wait_status(a1, a2, a3, 4756, a4);
  serdes_wait_status(a1, a2, a3, 4756, 65537);
  serdes_wait_status(a1, a2, a3, 5268, a4);
  serdes_wait_status(a1, a2, a3, 5268, 65537);
  serdes_wait_status(a1, a2, a3, 5780, a4);
  serdes_wait_status(a1, a2, a3, 5780, 65537);
  return 0;
}
