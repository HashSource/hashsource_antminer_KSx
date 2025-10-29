int __fastcall sub_9E054(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r6
  void *v12; // r0
  size_t v13; // r7
  void *v14; // r0
  void *v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int v18; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  _BYTE v24[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v21 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
      185,
      "stratum_parse_extranonce_hns",
      28,
      331,
      100,
      v24);
    return 0;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v22 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
      185,
      "stratum_parse_extranonce_hns",
      28,
      336,
      100,
      v24);
    return 0;
  }
  if ( v10 - 2 > 0x16 )
  {
    V_LOCK(v10);
    v20 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
      185,
      "stratum_parse_extranonce_hns",
      28,
      340,
      100,
      v24);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v12 = *(void **)(a2 + 80);
  if ( v12 )
  {
    free(v12);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v13 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 76) = v13;
  v14 = calloc(1u, v13);
  *(_DWORD *)(a2 + 80) = v14;
  if ( v14 )
  {
    hex2bin((int)v14, (unsigned __int8 *)v8, v13);
    v15 = *(void **)(a2 + 1588);
    *(_DWORD *)(a2 + 84) = v11;
    if ( v15 )
      free(v15);
    v16 = calloc(1u, 0x1Cu);
    *(_DWORD *)(a2 + 1588) = v16;
    if ( v16 )
    {
      *v16 = v11;
      memset(v16 + 1, 0, v11);
      v17 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK(v17);
      v18 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
        185,
        "stratum_parse_extranonce_hns",
        28,
        365,
        20,
        v24);
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
    v23 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
      185,
      "stratum_parse_extranonce_hns",
      28,
      349,
      100,
      v24);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
