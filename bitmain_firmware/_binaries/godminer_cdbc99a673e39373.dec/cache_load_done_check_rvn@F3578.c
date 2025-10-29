int __fastcall cache_load_done_check_rvn(int a1)
{
  int v1; // r0
  int v2; // r10
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r4
  int v6; // r5
  int v7; // r3
  int v8; // r0
  _DWORD *v9; // r7
  int v11; // r0
  _DWORD *v12; // [sp+14h] [bp-1010h]
  _BYTE v14[4100]; // [sp+20h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "cache_load_done_check_rvn",
    25,
    2354,
    40,
    v14);
  v12 = malloc(0x300u);
  do
  {
LABEL_2:
    v2 = sub_ECC68(a1, 255, 73, v12);
    V_LOCK(v2);
    v3 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v3);
    v4 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
           187,
           "cache_load_done_check_rvn",
           25,
           2359,
           40,
           v14);
    if ( v2 <= 0 )
      return 0;
    v5 = v12;
  }
  while ( (*v12 & 1) == 0 );
  v6 = *v12 & 2;
  if ( !v6 )
  {
    do
    {
      V_LOCK(v4);
      v8 = logfmt_raw((int)v14, 0x1000u);
      ++v6;
      V_UNLOCK(v8);
      v9 = v5;
      v5 += 3;
      v4 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
             187,
             "cache_load_done_check_rvn",
             25,
             2363,
             40,
             v14);
      if ( v2 == v6 )
        return 0;
      v7 = v9[3];
      if ( (v7 & 1) == 0 )
        goto LABEL_2;
    }
    while ( (v7 & 2) == 0 );
  }
  V_LOCK(v4);
  v11 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "cache_load_done_check_rvn",
    25,
    2365,
    40,
    v14);
  return -1;
}
