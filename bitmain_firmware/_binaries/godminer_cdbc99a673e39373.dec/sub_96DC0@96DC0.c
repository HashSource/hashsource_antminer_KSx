int __fastcall sub_96DC0(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r6
  void *v12; // r0
  size_t v13; // r8
  void *v14; // r0
  void *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r8
  int v18; // r0
  int v19; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  _BYTE v25[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v22 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
      182,
      "stratum_parse_extranonce_dash",
      29,
      213,
      100,
      v25);
    return 0;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v23 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
      182,
      "stratum_parse_extranonce_dash",
      29,
      218,
      100,
      v25);
    return 0;
  }
  if ( v10 - 2 > 0xE )
  {
    V_LOCK(v10);
    v21 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
      182,
      "stratum_parse_extranonce_dash",
      29,
      222,
      100,
      v25);
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
    if ( v15 )
      free(v15);
    v16 = calloc(1u, 0x18u);
    v17 = v16;
    *(_DWORD *)(a2 + 1588) = v16;
    if ( v16 )
    {
      *(_DWORD *)(a2 + 84) = v11;
      *v16 = v11;
      memset(v16 + 4, 0, v11);
      v17[4] = 0;
      v18 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK(v18);
      v19 = logfmt_raw((int)v25, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
        182,
        "stratum_parse_extranonce_dash",
        29,
        256,
        20,
        v25);
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
    v24 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
      182,
      "stratum_parse_extranonce_dash",
      29,
      231,
      100,
      v25);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
