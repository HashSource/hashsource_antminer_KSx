int __fastcall stratum_set_diff_or_target_base(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  double v7; // r0
  int v8; // r0
  int (__fastcall *v9)(int); // r3
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v15; // r0
  _DWORD *v16; // r0
  const char *v17; // r0
  char *v18; // r5
  int v19; // r0
  int v20; // r0
  size_t v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3
  _DWORD v28[1025]; // [sp+28h] [bp-1004h] BYREF

  if ( json_array_get(a3, 0) && *json_array_get(a3, 0) == 2 )
  {
    v16 = json_array_get(a3, 0);
    v17 = (const char *)json_string_value(v16);
    v18 = (char *)v17;
    if ( v17 )
    {
      v17 = (const char *)strlen(v17);
      if ( v17 == (const char *)64 )
      {
        V_LOCK(64);
        v20 = logfmt_raw((int)v28, 0x1000u);
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_base.c",
          168,
          "stratum_set_diff_or_target_base",
          31,
          24,
          20,
          v28);
        v21 = strlen(v18);
        hex2bin((int)v28, (unsigned __int8 *)v18, v21 >> 1);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
        v22 = v28[1];
        v23 = v28[2];
        v24 = v28[3];
        *(_DWORD *)(a2 + 1488) = v28[0];
        *(_DWORD *)(a2 + 1492) = v22;
        *(_DWORD *)(a2 + 1496) = v23;
        *(_DWORD *)(a2 + 1500) = v24;
        v25 = v28[5];
        v26 = v28[6];
        v27 = v28[7];
        *(_DWORD *)(a2 + 1504) = v28[4];
        *(_DWORD *)(a2 + 1508) = v25;
        *(_DWORD *)(a2 + 1512) = v26;
        *(_DWORD *)(a2 + 1516) = v27;
        (*(void (__fastcall **)(_DWORD *))(a1 + 68))(v28);
        *(double *)(a2 + 1520) = v3;
        *(double *)(a2 + 448) = v3;
        *(double *)(a2 + 1808) = v3;
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
        return 1;
      }
    }
    V_LOCK(v17);
    v19 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_set_diff_or_target_base",
      31,
      20,
      100,
      v28);
    return 0;
  }
  LODWORD(v7) = json_array_get(a3, 0);
  v8 = json_number_value(v7);
  if ( v3 == 0.0 )
  {
    V_LOCK(v8);
    v15 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_set_diff_or_target_base",
      31,
      35,
      100,
      v28);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v9 = *(int (__fastcall **)(int))(a1 + 64);
  *(double *)(a2 + 1520) = v3;
  *(double *)(a2 + 448) = v3;
  *(double *)(a2 + 1808) = v3;
  v10 = v9(a2 + 1488);
  V_LOCK(v10);
  v11 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v11);
  v12 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_base.c",
          168,
          "stratum_set_diff_or_target_base",
          31,
          42,
          20,
          v28);
  V_LOCK(v12);
  v13 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_base.c",
    168,
    "stratum_set_diff_or_target_base",
    31,
    43,
    20,
    v28);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 1;
}
