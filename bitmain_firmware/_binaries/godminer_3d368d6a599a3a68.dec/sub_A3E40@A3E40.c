bool __fastcall sub_A3E40(int a1, int a2, _DWORD *a3)
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
  int v20; // r0
  const char *v22; // r0
  size_t v23; // r0
  size_t v24; // r6
  void *v25; // r0
  void *v26; // r0
  _QWORD *v27; // r0
  _QWORD *v28; // r6
  unsigned int v29; // r4
  int *all_created_runtime; // r0
  int *v31; // r2
  int v32; // t1
  void *v33; // r0
  int epoch_number_rvn; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  char *s2; // [sp+10h] [bp-1024h]
  size_t v44; // [sp+14h] [bp-1020h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-101Ch]
  void *src; // [sp+1Ch] [bp-1018h]
  int v47; // [sp+2Ch] [bp-1008h] BYREF
  _BYTE v48[4100]; // [sp+30h] [bp-1004h] BYREF

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
  v44 = v18;
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
    v22 = *(const char **)(a2 + 1580);
    if ( v22 && !strcmp(v22, s2) )
    {
      V_LOCK(0);
      v39 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v39);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
        185,
        "stratum_notify_rvn",
        18,
        540,
        80,
        v48);
    }
    v23 = strlen(s2);
    if ( v23 > 0x1F )
    {
      V_LOCK(v23);
      strlen(s2);
      v40 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v40);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
        185,
        "stratum_notify_rvn",
        18,
        543,
        80,
        v48);
    }
    v24 = v17 >> 1;
    pthread_mutex_lock(mutex);
    snprintf((char *)(a2 + 356), 9u, "%s", v15);
    strcpy((char *)(a2 + 1556), v15);
    *(_BYTE *)(a2 + 444) = 0;
    v25 = calloc(v24, 1u);
    src = v25;
    if ( v25 )
    {
      if ( hex2bin((int)v25, (unsigned __int8 *)v7, v24) )
      {
LABEL_16:
        memcpy((void *)(a2 + 464), src, v24);
        v26 = *(void **)(a2 + 1588);
        if ( v26 )
          free(v26);
        v27 = calloc(1u, 0x68u);
        v28 = v27;
        *(_DWORD *)(a2 + 1588) = v27;
        if ( !v27 )
        {
          printf("invalid pointer(%s)!\n", "work->private");
          return v19;
        }
        hex2bin((int)v27, (unsigned __int8 *)v9, v16 >> 1);
        hex2bin(a2 + 1488, (unsigned __int8 *)v11, v44 >> 1);
        v28[12] = v13;
        v29 = target_to_diff_rvn(a2 + 1488);
        *(double *)(a2 + 1520) = (double)v29;
        *(double *)(a2 + 1808) = (double)v29;
        sprintf((char *)(a2 + 1976), "%13.2f", (double)v29);
        v47 = 0;
        all_created_runtime = (int *)get_all_created_runtime(&v47);
        if ( v47 > 0 )
        {
          v31 = &all_created_runtime[v47];
          do
          {
            v32 = *all_created_runtime++;
            *(_DWORD *)(v32 + 432) = v29;
          }
          while ( v31 != all_created_runtime );
        }
        v33 = *(void **)(a2 + 1580);
        if ( v33 )
          free(v33);
        *(_DWORD *)(a2 + 1580) = _strdup(s2);
        epoch_number_rvn = get_epoch_number_rvn(v28);
        *(_DWORD *)(a2 + 1536) = epoch_number_rvn;
        V_LOCK(epoch_number_rvn);
        v35 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v35);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
          185,
          "stratum_notify_rvn",
          18,
          588,
          40,
          v48);
        free(src);
        goto LABEL_25;
      }
      V_LOCK(0);
      v36 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v36);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
        185,
        "stratum_notify_rvn",
        18,
        559,
        100,
        v48);
      free(src);
    }
    else
    {
      V_LOCK(0);
      v41 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v41);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
        185,
        "stratum_notify_rvn",
        18,
        553,
        20,
        v48);
      if ( hex2bin(0, (unsigned __int8 *)v7, v24) )
        goto LABEL_16;
      V_LOCK(0);
      v42 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v42);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
        185,
        "stratum_notify_rvn",
        18,
        559,
        100,
        v48);
    }
    v37 = pthread_mutex_unlock(mutex);
    V_LOCK(v37);
    v38 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
      185,
      "stratum_notify_rvn",
      18,
      601,
      80,
      v48);
    return v19;
  }
  V_LOCK(v18);
  v19 = 0;
  v20 = logfmt_raw((int)v48, 0x1000u);
  V_UNLOCK(v20);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
    185,
    "stratum_notify_rvn",
    18,
    525,
    100,
    v48);
  return v19;
}
