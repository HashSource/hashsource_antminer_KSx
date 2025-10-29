int __fastcall get_count_sync_rvn(int a1, int a2)
{
  int v4; // r0
  char *v5; // r11
  int v6; // r0
  char *v7; // r8
  char *v8; // r4
  int v9; // r0
  _BYTE v11[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "get_count_sync_rvn",
    18,
    267,
    20,
    v11);
  v5 = (char *)malloc(0x300u);
  v6 = sub_ECC68(a1, a2, 202, v5);
  if ( v6 > 0 )
  {
    v7 = &v5[12 * v6];
    v8 = v5;
    do
    {
      V_LOCK(v6);
      v8 += 12;
      v9 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v9);
      v6 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
             187,
             "get_count_sync_rvn",
             18,
             273,
             20,
             v11);
    }
    while ( v8 != v7 );
  }
  free(v5);
  return 0;
}
