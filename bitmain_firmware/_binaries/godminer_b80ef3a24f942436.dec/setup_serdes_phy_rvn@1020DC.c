int __fastcall setup_serdes_phy_rvn(int a1, int a2)
{
  char *v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // t1
  int v10; // [sp+30h] [bp-1024h] BYREF
  char v11; // [sp+4Fh] [bp-1005h] BYREF
  _DWORD v12[3]; // [sp+50h] [bp-1004h] BYREF
  int v13; // [sp+5Ch] [bp-FF8h] BYREF

  V_LOCK(a1);
  V_INT((int)&v10, "chain", *(int *)(a1 + 248));
  v4 = &v11;
  v5 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v5);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
         187,
         "setup_serdes_phy_rvn",
         20,
         1289,
         60,
         v12);
  V_LOCK(v6);
  v7 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    187,
    "setup_serdes_phy_rvn",
    20,
    1296,
    60,
    v12);
  v12[0] = 50462976;
  v12[1] = 117835012;
  v12[2] = 185207048;
  v13 = 252579084;
  do
  {
    v8 = (unsigned __int8)*++v4;
    phy_external_bist_init_rvn(a1, 0, v8, 2, a2);
  }
  while ( v4 != (char *)&v13 + 3 );
  phy_external_bist_rvn(a1, 0, v12, 16, 2);
  return set_phy_external_bist_result_rvn();
}
