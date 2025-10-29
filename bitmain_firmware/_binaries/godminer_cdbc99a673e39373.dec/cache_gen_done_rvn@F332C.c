int __fastcall cache_gen_done_rvn(int a1)
{
  int v2; // r0
  _DWORD *v3; // r4
  int v4; // r10
  int v5; // r0
  _BYTE v7[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "cache_gen_done_rvn",
    18,
    2327,
    40,
    v7);
  v3 = malloc(0x300u);
  do
  {
    v4 = sub_ECC68(a1, 255, 160, v3);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "cache_gen_done_rvn",
      18,
      2332,
      40,
      v7);
  }
  while ( (*v3 & 0x42) != 2 );
  return 0;
}
