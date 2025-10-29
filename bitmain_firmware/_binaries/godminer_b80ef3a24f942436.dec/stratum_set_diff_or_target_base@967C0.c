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
  int *v16; // r3
  int v17; // r1
  _DWORD *v18; // r0
  const char *v19; // r0
  char *v20; // r5
  int v21; // r0
  int v22; // r0
  size_t v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r2
  int v29; // r3
  _DWORD v30[1025]; // [sp+28h] [bp-1004h] BYREF

  if ( json_array_get(a3, 0) && *json_array_get(a3, 0) == 2 )
  {
    v18 = json_array_get(a3, 0);
    v19 = (const char *)json_string_value(v18);
    v20 = (char *)v19;
    if ( v19 )
    {
      v19 = (const char *)strlen(v19);
      if ( v19 == (const char *)64 )
      {
        V_LOCK(64);
        v22 = logfmt_raw((int)v30, 0x1000u);
        V_UNLOCK(v22);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_base.c",
          168,
          "stratum_set_diff_or_target_base",
          31,
          24,
          20,
          v30);
        v23 = strlen(v20);
        hex2bin((int)v30, (unsigned __int8 *)v20, v23 >> 1);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
        v24 = v30[1];
        v25 = v30[2];
        v26 = v30[3];
        *(_DWORD *)(a2 + 1488) = v30[0];
        *(_DWORD *)(a2 + 1492) = v24;
        *(_DWORD *)(a2 + 1496) = v25;
        *(_DWORD *)(a2 + 1500) = v26;
        v27 = v30[5];
        v28 = v30[6];
        v29 = v30[7];
        *(_DWORD *)(a2 + 1504) = v30[4];
        *(_DWORD *)(a2 + 1508) = v27;
        *(_DWORD *)(a2 + 1512) = v28;
        *(_DWORD *)(a2 + 1516) = v29;
        (*(void (__fastcall **)(_DWORD *))(a1 + 68))(v30);
        *(double *)(a2 + 1520) = v3;
        *(double *)(a2 + 448) = v3;
        *(double *)(a2 + 1808) = v3;
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
        return 1;
      }
    }
    V_LOCK(v19);
    v21 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v21);
    v16 = &g_zc;
    v17 = 20;
LABEL_7:
    zlog(
      *v16,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_set_diff_or_target_base",
      31,
      v17,
      100,
      v30);
    return 0;
  }
  LODWORD(v7) = json_array_get(a3, 0);
  v8 = json_number_value(v7);
  if ( v3 == 0.0 )
  {
    V_LOCK(v8);
    v15 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v15);
    v16 = &g_zc;
    v17 = 35;
    goto LABEL_7;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v9 = *(int (__fastcall **)(int))(a1 + 64);
  *(double *)(a2 + 1520) = v3;
  *(double *)(a2 + 448) = v3;
  *(double *)(a2 + 1808) = v3;
  v10 = v9(a2 + 1488);
  V_LOCK(v10);
  v11 = logfmt_raw((int)v30, 0x1000u);
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
          v30);
  V_LOCK(v12);
  v13 = logfmt_raw((int)v30, 0x1000u);
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
    v30);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 1;
}
