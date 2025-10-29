bool __fastcall sub_9EF68(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  char *v7; // r8
  _DWORD *v8; // r0
  char *v9; // r10
  _DWORD *v10; // r0
  char *v11; // r11
  _DWORD *v12; // r0
  __int64 v13; // d8
  _DWORD *v14; // r0
  const char *v15; // r9
  size_t v16; // r7
  size_t v17; // r6
  size_t v18; // r0
  _BOOL4 v19; // r4
  const char *v21; // r0
  size_t v22; // r6
  void *v23; // r0
  void *v24; // r0
  _QWORD *v25; // r0
  _QWORD *v26; // r6
  unsigned int v27; // r4
  int *all_created_runtime; // r0
  int *v29; // r2
  int v30; // t1
  void *v31; // r0
  size_t v32; // r0
  char *s2; // [sp+10h] [bp-1024h]
  size_t v34; // [sp+14h] [bp-1020h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-101Ch]
  void *src; // [sp+1Ch] [bp-1018h]
  int v37; // [sp+2Ch] [bp-1008h] BYREF
  char v38[4100]; // [sp+30h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v5);
  v6 = json_array_get(a3, 1u);
  v7 = (char *)json_string_value(v6);
  v8 = json_array_get(a3, 2u);
  v9 = (char *)json_string_value(v8);
  v10 = json_array_get(a3, 3u);
  v11 = (char *)json_string_value(v10);
  v12 = json_array_get(a3, 5u);
  v13 = json_integer_value((int)v12);
  v14 = json_array_get(a3, 6u);
  v15 = (const char *)json_string_value(v14);
  v16 = strlen(v9);
  v17 = strlen(v7);
  v18 = strlen(v11);
  v19 = v17 == 0;
  if ( !v16 )
    v19 = 1;
  v34 = v18;
  if ( !v18 )
    v19 = 1;
  if ( !v19 )
  {
    mutex = (pthread_mutex_t *)(a2 + 1592);
    if ( a2 == -456 )
    {
LABEL_25:
      v19 = 1;
      pthread_mutex_unlock(mutex);
      return v19;
    }
    v21 = *(const char **)(a2 + 1580);
    if ( v21 && !strcmp(v21, s2) )
    {
      V_LOCK();
      logfmt_raw(
        v38,
        0x1000u,
        0,
        "Stratum notify: new job's job_id does not change, %s, %s",
        *(_DWORD *)(a2 + 1580),
        s2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        180,
        "stratum_notify_rvn",
        18,
        540,
        80,
        v38);
    }
    if ( strlen(s2) > 0x1F )
    {
      V_LOCK();
      v32 = strlen(s2);
      logfmt_raw(v38, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", s2, v32);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        180,
        "stratum_notify_rvn",
        18,
        543,
        80,
        v38);
    }
    v22 = v17 >> 1;
    pthread_mutex_lock(mutex);
    snprintf((char *)(a2 + 356), 9u, "%s", v15);
    strcpy((char *)(a2 + 1556), v15);
    *(_BYTE *)(a2 + 444) = 0;
    v23 = calloc(v22, 1u);
    src = v23;
    if ( v23 )
    {
      if ( hex2bin((int)v23, (unsigned __int8 *)v7, v22) )
      {
LABEL_16:
        memcpy((void *)(a2 + 464), src, v22);
        v24 = *(void **)(a2 + 1588);
        if ( v24 )
          free(v24);
        v25 = calloc(1u, 0x68u);
        v26 = v25;
        *(_DWORD *)(a2 + 1588) = v25;
        if ( !v25 )
        {
          printf("invalid pointer(%s)!\n", "work->private");
          return v19;
        }
        hex2bin((int)v25, (unsigned __int8 *)v9, v16 >> 1);
        hex2bin(a2 + 1488, (unsigned __int8 *)v11, v34 >> 1);
        v26[12] = v13;
        v27 = target_to_diff_rvn(a2 + 1488);
        *(double *)(a2 + 1520) = (double)v27;
        *(double *)(a2 + 1808) = (double)v27;
        sprintf((char *)(a2 + 1976), "%13.2f", (double)v27);
        v37 = 0;
        all_created_runtime = (int *)get_all_created_runtime(&v37);
        if ( v37 > 0 )
        {
          v29 = &all_created_runtime[v37];
          do
          {
            v30 = *all_created_runtime++;
            *(_DWORD *)(v30 + 408) = v27;
          }
          while ( v29 != all_created_runtime );
        }
        v31 = *(void **)(a2 + 1580);
        if ( v31 )
          free(v31);
        *(_DWORD *)(a2 + 1580) = _strdup(s2);
        *(_DWORD *)(a2 + 1536) = get_epoch_number_rvn(v26);
        V_LOCK();
        logfmt_raw(v38, 0x1000u, 0, "epoch:%d targetdiff:%02x", *(_DWORD *)(a2 + 1536), v27);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          180,
          "stratum_notify_rvn",
          18,
          588,
          40,
          v38);
        free(src);
        goto LABEL_25;
      }
      V_LOCK();
      logfmt_raw(v38, 0x1000u, 0, "Failed to convert header to header_ptr in parse_notify");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        180,
        "stratum_notify_rvn",
        18,
        559,
        100,
        v38);
      free(src);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v38, 0x1000u, 0, "header_ptr failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        180,
        "stratum_notify_rvn",
        18,
        553,
        20,
        v38);
      if ( hex2bin(0, (unsigned __int8 *)v7, v22) )
        goto LABEL_16;
      V_LOCK();
      logfmt_raw(v38, 0x1000u, 0, "Failed to convert header to header_ptr in parse_notify");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        180,
        "stratum_notify_rvn",
        18,
        559,
        100,
        v38);
    }
    pthread_mutex_unlock(mutex);
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "%s", "stratum_notify_rvn");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      180,
      "stratum_notify_rvn",
      18,
      601,
      80,
      v38);
    return v19;
  }
  V_LOCK();
  v19 = 0;
  logfmt_raw(v38, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v16, v17, v34);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
    180,
    "stratum_notify_rvn",
    18,
    525,
    100,
    v38);
  return v19;
}
