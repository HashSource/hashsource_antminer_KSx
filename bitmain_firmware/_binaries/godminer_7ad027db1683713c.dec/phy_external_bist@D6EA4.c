int __fastcall phy_external_bist(int a1, int a2, int a3, int a4)
{
  char *v8; // r6
  char *v9; // r5
  unsigned __int16 v10; // t1
  char *v11; // r5
  char v12; // t1
  _DWORD v14[7]; // [sp+38h] [bp-1084h] BYREF
  int v15; // [sp+54h] [bp-1068h]
  _DWORD v16[7]; // [sp+58h] [bp-1064h] BYREF
  int v17; // [sp+74h] [bp-1048h]
  __int64 v18; // [sp+78h] [bp-1044h]
  __int64 v19; // [sp+80h] [bp-103Ch]
  double v20; // [sp+88h] [bp-1034h]
  double v21; // [sp+90h] [bp-102Ch]
  __int64 v22; // [sp+98h] [bp-1024h]
  __int64 v23; // [sp+A0h] [bp-101Ch]
  double v24; // [sp+A8h] [bp-1014h]
  double v25; // [sp+B0h] [bp-100Ch]
  char v26[4100]; // [sp+B8h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v14, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v26,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    "%s start",
    "phy_external_bist");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    190,
    "phy_external_bist",
    17,
    1158,
    60,
    v26);
  v22 = 0;
  v23 = 0;
  v24 = 0.0;
  v18 = 0;
  v19 = 0;
  v25 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  if ( a4 )
  {
    v8 = (char *)(a3 - 1);
    v9 = (char *)(a3 + (unsigned __int8)(a4 - 1));
    do
    {
      while ( 1 )
      {
        v10 = (unsigned __int8)*++v8;
        if ( check_core_reg_with_expect_data_eth(a1, a2, v10, 64, 0xFF000100) )
          break;
        if ( v8 == v9 )
          goto LABEL_6;
      }
      V_LOCK();
      V_INT((int)v16, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v26,
        0x1000u,
        0,
        v17,
        v16[0],
        v16[1],
        v16[2],
        v16[3],
        v16[4],
        v16[5],
        v16[6],
        v17,
        "%s pcs lock failed!",
        "phy_external_bist");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        190,
        "phy_external_bist",
        17,
        1298,
        100,
        v26);
    }
    while ( v8 != v9 );
LABEL_6:
    v11 = (char *)(a3 - 1);
    do
    {
      v12 = *++v11;
      sub_CF420(a1, v12, 133, 0xFFFF);
      sub_CF420(a1, *v11, 134, 1342177279);
    }
    while ( v11 != v8 );
  }
  sub_CF3E0(a1, 132, -2147483647);
  sleep(0xAu);
  return 0;
}
