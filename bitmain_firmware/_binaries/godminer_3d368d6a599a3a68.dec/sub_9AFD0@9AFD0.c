int __fastcall sub_9AFD0(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  void *v11; // r0
  size_t v12; // r7
  void *v13; // r0
  _BOOL4 v14; // r0
  int v15; // r0
  void *v16; // r0
  _DWORD *v17; // r0
  size_t v18; // r2
  int v19; // r0
  int v20; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  _BYTE v26[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v23 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
      185,
      "stratum_parse_extranonce_dcr",
      28,
      251,
      100,
      v26);
    return 0;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  if ( !v10 )
  {
    V_LOCK(0);
    v24 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
      185,
      "stratum_parse_extranonce_dcr",
      28,
      256,
      100,
      v26);
    return 0;
  }
  if ( (unsigned int)(v10 - 2) > 0xE )
  {
    V_LOCK(v10);
    v22 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
      185,
      "stratum_parse_extranonce_dcr",
      28,
      260,
      100,
      v26);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v11 = *(void **)(a2 + 80);
  if ( v11 )
  {
    free(v11);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v12 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 76) = v12;
  v13 = calloc(1u, v12);
  *(_DWORD *)(a2 + 80) = v13;
  if ( v13 )
  {
    v14 = hex2bin((int)v13, (unsigned __int8 *)v8, v12);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
      185,
      "stratum_parse_extranonce_dcr",
      28,
      276,
      20,
      v26);
    v16 = *(void **)(a2 + 1588);
    if ( v16 )
      free(v16);
    v17 = calloc(1u, 0x10u);
    *(_DWORD *)(a2 + 1588) = v17;
    if ( v17 )
    {
      v18 = *(_DWORD *)(a2 + 76);
      *v17 = v18;
      memset(v17 + 1, 0, v18);
      v19 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK(v19);
      v20 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
        185,
        "stratum_parse_extranonce_dcr",
        28,
        285,
        20,
        v26);
      return 1;
    }
    else
    {
      printf("invalid pointer(%s)!\n", "work->private");
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v25 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
      185,
      "stratum_parse_extranonce_dcr",
      28,
      269,
      100,
      v26);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
