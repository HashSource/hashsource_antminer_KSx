int __fastcall set_lane_data_cross_rvn(int a1)
{
  int v2; // r4
  int v3; // r0
  _BOOL4 v4; // r3
  _BYTE v6[32]; // [sp+28h] [bp-20h] BYREF
  _BYTE v7[4100]; // [sp+48h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v6, "chain");
  v2 = 0;
  v3 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "set_lane_data_cross_rvn",
    23,
    470,
    60,
    v7);
  sub_F9DF4(a1, 140, 2176);
  usleep(0x2710u);
  sub_F9EE8(a1, 5, 140, 384);
  do
  {
    while ( 1 )
    {
      v4 = v2 != 5 && v2 & 1;
      ++v2;
      if ( v4 )
        break;
      if ( v2 == 6 )
      {
        sub_F9EE8(a1, 5, 199, (int)&loc_88970 + 3);
        usleep(0x2710u);
      }
      else
      {
        usleep(0x2710u);
        if ( v2 == 64 )
          return 0;
      }
    }
    sub_F9EE8(a1, v2 - 1, 199, (int)&loc_887AC);
    usleep(0x2710u);
  }
  while ( v2 != 64 );
  return 0;
}
