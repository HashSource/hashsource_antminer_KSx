int __fastcall sub_9CD84(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  double v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char *v12; // r6
  char *v13; // r11
  int v14; // r0
  int v15; // r0
  size_t v16; // r0
  _BOOL4 v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r8
  unsigned int v22; // r7
  int v23; // r6
  int v24; // r2
  int v25; // r0
  pthread_mutex_t *v26; // r0
  int v27; // r0
  int v28; // r0
  int v30; // r0
  char *s; // [sp+2Ch] [bp-1030h]
  pthread_mutex_t *mutex; // [sp+34h] [bp-1028h] BYREF
  _BYTE v34[31]; // [sp+38h] [bp-1024h] BYREF
  char v35; // [sp+57h] [bp-1005h] BYREF
  _BYTE v36[4100]; // [sp+58h] [bp-1004h] BYREF

  LODWORD(v5) = json_array_get(a3, 0);
  v6 = json_number_value(v5);
  if ( v3 == 0.0 )
  {
    V_LOCK(v6);
    v30 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v30);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_set_diff_or_target_eth_2282",
      35,
      840,
      100,
      v36);
    return 0;
  }
  else
  {
    mutex = (pthread_mutex_t *)(a2 + 1592);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    v7 = (*(int (__fastcall **)(int))(a1 + 64))(a2 + 1488);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v8);
    v9 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
           190,
           "stratum_set_diff_or_target_eth_2282",
           35,
           847,
           40,
           v36);
    V_LOCK(v9);
    v10 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v10);
    v11 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
            190,
            "stratum_set_diff_or_target_eth_2282",
            35,
            848,
            40,
            v36);
    V_LOCK(v11);
    abin2hex(a2 + 1488, 32);
    v12 = (char *)&mutex + 3;
    v13 = v34;
    v14 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_set_diff_or_target_eth_2282",
      35,
      850,
      40,
      v36);
    s = (char *)abin2hex(a2 + 1488, 32);
    V_LOCK(s);
    v15 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_set_diff_or_target_eth_2282",
      35,
      856,
      40,
      v36);
    v16 = strlen(s);
    v17 = hex2bin((int)v34, (unsigned __int8 *)s, v16 >> 1);
    V_LOCK(v17);
    v18 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v18);
    v19 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
            190,
            "stratum_set_diff_or_target_eth_2282",
            35,
            865,
            60,
            v36);
    do
    {
      V_LOCK(v19);
      ++v12;
      v20 = logfmt_raw((int)v36, 0x1000u);
      V_UNLOCK(v20);
      v19 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
              190,
              "stratum_set_diff_or_target_eth_2282",
              35,
              867,
              60,
              v36);
    }
    while ( v12 != &v35 );
    v21 = 0;
    v22 = 0;
LABEL_5:
    v23 = 7;
    while ( 1 )
    {
      v24 = *v13 >> v23--;
      if ( (v24 & 1) != 0 )
        break;
      v22 = (unsigned __int8)(v22 + 1);
      V_LOCK(v19);
      v25 = logfmt_raw((int)v36, 0x1000u);
      V_UNLOCK(v25);
      v19 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
              190,
              "stratum_set_diff_or_target_eth_2282",
              35,
              878,
              60,
              v36);
      if ( v23 == -1 )
      {
        ++v21;
        ++v13;
        if ( v21 != 32 )
          goto LABEL_5;
        break;
      }
    }
    v26 = mutex;
    *(double *)(a2 + 1520) = (double)v22;
    *(double *)(a2 + 448) = (double)v22;
    *(double *)(a2 + 1808) = (double)v22;
    v27 = pthread_mutex_unlock(v26);
    V_LOCK(v27);
    v28 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_set_diff_or_target_eth_2282",
      35,
      889,
      40,
      v36);
    free(s);
    return 1;
  }
}
