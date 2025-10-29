int __fastcall sub_993A0(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r7
  _DWORD *v7; // r0
  char *v8; // r9
  _DWORD *v9; // r0
  char *v10; // r8
  _BOOL4 v11; // r3
  size_t v12; // r11
  size_t v13; // r10
  _BOOL4 v14; // r4
  const char *v15; // r0
  char *v16; // r8
  char *v17; // r4
  char *v18; // r8
  int v19; // t1
  void *v20; // r0
  int v22; // r2
  size_t v23; // r0
  __int16 s; // [sp+1Ch] [bp-1010h] BYREF
  __int64 v25; // [sp+20h] [bp-100Ch] BYREF
  char v26[4100]; // [sp+28h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = (char *)json_string_value(v9);
  v11 = v10 == 0;
  if ( !v6 )
    v11 = 1;
  if ( !v8 )
    v11 = 1;
  if ( v11 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "pool job parse failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_notify_eth",
      18,
      896,
      100,
      v26);
  }
  v12 = strlen(v8);
  v13 = strlen(v10);
  v14 = v13 == 0;
  if ( !v12 )
    v14 = 1;
  if ( v14 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "invalid job hash len");
    V_UNLOCK();
    v22 = 902;
    goto LABEL_24;
  }
  if ( a2 == -456 )
  {
LABEL_22:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 1;
  }
  v15 = *(const char **)(a2 + 1580);
  if ( !v15 || strcmp(v15, v6) )
  {
    if ( strlen(v6) <= 0x1F )
      goto LABEL_14;
    goto LABEL_27;
  }
  V_LOCK();
  logfmt_raw(v26, 0x1000u, 0, "Stratum notify: new job's job_id does not change, %s, %s", *(_DWORD *)(a2 + 1580), v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
    180,
    "stratum_notify_eth",
    18,
    914,
    80,
    v26);
  if ( strlen(v6) > 0x1F )
  {
LABEL_27:
    V_LOCK();
    v23 = strlen(v6);
    logfmt_raw(v26, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v6, v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_notify_eth",
      18,
      917,
      80,
      v26);
  }
LABEL_14:
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  *(_BYTE *)(a2 + 444) = 1;
  if ( hex2bin(a2 + 464, (unsigned __int8 *)v10, v13 >> 1) )
  {
    v16 = *(char **)(a2 + 1588);
    if ( !v16 )
    {
      v16 = (char *)calloc(1u, 0x6Bu);
      *(_DWORD *)(a2 + 1588) = v16;
      if ( !v16 )
      {
        printf("invalid pointer(%s)!\n", "work->private");
        return 0;
      }
    }
    if ( hex2bin((int)v16, (unsigned __int8 *)v8, v12 >> 1) )
    {
      v17 = v16 + 103;
      *(_DWORD *)(a2 + 1536) = get_epoch_number_eth(v16);
      *((_WORD *)v16 + 52) = 0;
      v16[106] = 0;
      memcpy(v16 + 104, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
      v18 = v16 + 106;
      s = 0;
      v25 = 0;
      do
      {
        v19 = (unsigned __int8)*++v17;
        sprintf((char *)&s, "%02x", v19);
        strcat((char *)&v25, (const char *)&s);
      }
      while ( v18 != v17 );
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, "pool %d extranonce_line1: %s", *(_DWORD *)a2, &v25);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
        180,
        "stratum_notify_eth",
        18,
        964,
        40,
        v26);
      v20 = *(void **)(a2 + 1580);
      if ( v20 )
        free(v20);
      *(_DWORD *)(a2 + 1580) = _strdup(v6);
      goto LABEL_22;
    }
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Failed to convert seed_hash to seed_hash_ptr in parse_notify");
    V_UNLOCK();
    v22 = 938;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "Failed to convert header_hash to header_hash_ptr in parse_notify");
    V_UNLOCK();
    v22 = 926;
  }
LABEL_24:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
    180,
    "stratum_notify_eth",
    18,
    v22,
    100,
    v26);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 0;
}
