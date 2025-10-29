int __fastcall get_work_mode_rvn(int a1)
{
  int v2; // r0
  char *v3; // r11
  int v4; // r0
  char *v5; // r8
  char *v6; // r4
  int v7; // r0
  _BYTE v9[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "get_work_mode_rvn",
    17,
    287,
    20,
    v9);
  v3 = (char *)malloc(0x300u);
  v4 = sub_FA260(a1, 255, 28, v3);
  if ( v4 > 0 )
  {
    v5 = &v3[12 * v4];
    v6 = v3;
    do
    {
      V_LOCK(v4);
      v6 += 12;
      v7 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v7);
      v4 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
             192,
             "get_work_mode_rvn",
             17,
             293,
             20,
             v9);
    }
    while ( v6 != v5 );
  }
  free(v3);
  return 0;
}
