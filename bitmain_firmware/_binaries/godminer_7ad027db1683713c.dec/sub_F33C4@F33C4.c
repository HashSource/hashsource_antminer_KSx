int __fastcall sub_F33C4(int a1, int a2, int a3)
{
  _DWORD v7[7]; // [sp+30h] [bp-1020h] BYREF
  int v8; // [sp+4Ch] [bp-1004h]
  char v9[4096]; // [sp+50h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v7, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v8,
    v7[0],
    v7[1],
    v7[2],
    v7[3],
    v7[4],
    v7[5],
    v7[6],
    v8,
    "%s PHY core %02x %s handshake failed!",
    "phy_handshake_rvn",
    a2,
    a3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
           190,
           "phy_handshake_rvn",
           17,
           827,
           100,
           v9);
}
