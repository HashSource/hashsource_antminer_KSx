int __fastcall stratum_set_diff_or_target_base(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  _DWORD *v7; // r0
  void (__fastcall *v8)(int); // r3
  _DWORD *v10; // r0
  const char *v11; // r0
  char *v12; // r5
  size_t v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // [sp+4h] [bp-1028h]
  _DWORD v21[1025]; // [sp+28h] [bp-1004h] BYREF

  if ( json_array_get(a3, 0) && *json_array_get(a3, 0) == 2 )
  {
    v10 = json_array_get(a3, 0);
    v11 = (const char *)json_string_value(v10);
    v12 = (char *)v11;
    if ( v11 && strlen(v11) == 64 )
    {
      V_LOCK();
      logfmt_raw((char *)v21, 0x1000u, 0, "%s target from pool: %s", "stratum_set_diff_or_target_base", v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_base.c",
        168,
        "stratum_set_diff_or_target_base",
        31,
        24,
        20,
        v21);
      v13 = strlen(v12);
      hex2bin((int)v21, (unsigned __int8 *)v12, v13 >> 1);
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
      v14 = v21[1];
      v15 = v21[2];
      v16 = v21[3];
      *(_DWORD *)(a2 + 1488) = v21[0];
      *(_DWORD *)(a2 + 1492) = v14;
      *(_DWORD *)(a2 + 1496) = v15;
      *(_DWORD *)(a2 + 1500) = v16;
      v17 = v21[5];
      v18 = v21[6];
      v19 = v21[7];
      *(_DWORD *)(a2 + 1504) = v21[4];
      *(_DWORD *)(a2 + 1508) = v17;
      *(_DWORD *)(a2 + 1512) = v18;
      *(_DWORD *)(a2 + 1516) = v19;
      (*(void (__fastcall **)(_DWORD *))(a1 + 68))(v21);
      *(double *)(a2 + 1520) = v3;
      *(double *)(a2 + 448) = v3;
      *(double *)(a2 + 1808) = v3;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      return 1;
    }
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_set_diff_or_target_base",
      31,
      20,
      100,
      v21);
    return 0;
  }
  v7 = json_array_get(a3, 0);
  json_number_value((int)v7);
  if ( v3 == 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_set_diff_or_target_base",
      31,
      35,
      100,
      v21);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v8 = *(void (__fastcall **)(int))(a1 + 64);
  *(double *)(a2 + 1520) = v3;
  *(double *)(a2 + 448) = v3;
  *(double *)(a2 + 1808) = v3;
  v8(a2 + 1488);
  V_LOCK();
  logfmt_raw((char *)v21, 0x1000u, 0, "%s diff from pool: %lf", "stratum_set_diff_or_target_base", v20, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_base.c",
    168,
    "stratum_set_diff_or_target_base",
    31,
    42,
    20,
    v21);
  V_LOCK();
  logfmt_raw(
    (char *)v21,
    0x1000u,
    0,
    "%s target:%08x %08x %08x %08x %08x %08x %08x %08x ",
    "stratum_set_diff_or_target_base",
    *(_DWORD *)(a2 + 1488),
    *(_DWORD *)(a2 + 1492),
    *(_DWORD *)(a2 + 1496),
    *(_DWORD *)(a2 + 1500),
    *(_DWORD *)(a2 + 1504),
    *(_DWORD *)(a2 + 1508),
    *(_DWORD *)(a2 + 1512),
    *(_DWORD *)(a2 + 1516));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_base.c",
    168,
    "stratum_set_diff_or_target_base",
    31,
    43,
    20,
    v21);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 1;
}
