int __fastcall sub_98A3C(_DWORD *a1, int a2)
{
  int v2; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  _DWORD *v8; // r0
  char *v9; // r6
  _DWORD *v10; // r7
  _DWORD *v11; // r0
  char *v12; // r7
  _DWORD *v13; // r8
  _DWORD *v14; // r0
  char *v15; // r8
  size_t v16; // r10
  signed int v17; // r9
  size_t v18; // r0
  _BOOL4 v19; // r3
  int v20; // r11
  void *v21; // r0
  int v22; // r2
  void *v23; // r9
  size_t v24; // r6
  void *v25; // r0
  void *v26; // r0
  void *v27; // r6
  unsigned int v28; // r8
  void *v29; // r0
  char *v30; // r3
  void *v31; // r0
  char *nptr; // [sp+10h] [bp-1014h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-1010h]
  int v34; // [sp+1Ch] [bp-1008h] BYREF
  char v35[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1656) ^ 1;
  if ( !a1 )
    v2 |= 1u;
  if ( v2 || *a1 != 1 )
  {
    V_LOCK();
    v2 = 0;
    logfmt_raw(v35, 0x1000u, 0, "Tried to decode job without JSON-RPC 2.0");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "rpc2_job_decode",
      15,
      565,
      100,
      v35);
    return v2;
  }
  v6 = json_array_get(a1, 0);
  v7 = json_string_value(v6);
  v8 = json_array_get(a1, 1u);
  v9 = (char *)v7 + 2;
  v10 = json_string_value(v8);
  v11 = json_array_get(a1, 2u);
  v12 = (char *)v10 + 2;
  v13 = json_string_value(v11);
  v14 = json_array_get(a1, 3u);
  v15 = (char *)v13 + 2;
  nptr = (char *)json_string_value(v14);
  v16 = strlen(v12);
  v17 = strlen(v9);
  v18 = strlen(v15);
  v19 = v17 == 0;
  if ( !v16 )
    v19 = 1;
  v20 = v18;
  if ( !v18 )
    v19 = 1;
  if ( v19 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v16, v17, v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "rpc2_job_decode",
      15,
      579,
      100,
      v35);
    return v2;
  }
  mutex = (pthread_mutex_t *)(a2 + 1780);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1780));
  *(_DWORD *)(a2 + 1756) = v17 >> 1;
  v21 = malloc(v17 >> 1);
  v22 = v17 >> 1;
  v23 = v21;
  v2 = hex2bin((int)v21, (unsigned __int8 *)v9, v22);
  if ( !v2 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "rpc2_job_decode",
      15,
      590,
      100,
      v35);
LABEL_15:
    if ( v23 )
      free(v23);
    pthread_mutex_unlock(mutex);
    goto LABEL_18;
  }
  v24 = *(_DWORD *)(a2 + 1756);
  v25 = malloc(v24);
  *(_DWORD *)(a2 + 1748) = v25;
  if ( !v25 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "RPC2 OOM!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "rpc2_job_decode",
      15,
      599,
      100,
      v35);
    goto LABEL_15;
  }
  memcpy(v25, v23, v24);
  free(v23);
  v26 = *(void **)(a2 + 1776);
  if ( v26 )
    free(v26);
  pthread_mutex_unlock(mutex);
  if ( !*(_DWORD *)(a2 + 1748) )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "Work requested before it was received");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "rpc2_job_decode",
      15,
      616,
      80,
      v35);
LABEL_18:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    v2 = 0;
    logfmt_raw(v35, 0x1000u, 0, "%s", "rpc2_job_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "rpc2_job_decode",
      15,
      662,
      80,
      v35);
    return v2;
  }
  memcpy((void *)(a2 + 464), *(const void **)(a2 + 1748), *(_DWORD *)(a2 + 1756));
  v27 = *(void **)(a2 + 1588);
  if ( v27 || (v27 = calloc(1u, 0x6Bu), (*(_DWORD *)(a2 + 1588) = v27) != 0) )
  {
    hex2bin((int)v27, (unsigned __int8 *)v12, 32);
    hex2bin(a2 + 1488, (unsigned __int8 *)v15, v20);
    v28 = target_to_diff_iron_2(a2 + 1488);
    *(double *)(a2 + 1520) = (double)v28;
    *(double *)(a2 + 1808) = (double)v28;
    sprintf((char *)(a2 + 1976), "%13.2f", (double)v28);
    v34 = 0;
    get_all_created_runtime(&v34);
    v29 = *(void **)(a2 + 1580);
    if ( v29 )
      free(v29);
    v30 = (char *)malloc(6u);
    *(_DWORD *)(a2 + 1580) = v30;
    if ( v30 )
      strcpy(v30, "HAPPY");
    *(_DWORD *)(a2 + 1536) = get_epoch_number_eth(v27);
    if ( nptr )
    {
      *((_QWORD *)v27 + 12) = strtoull(nptr, 0, 16);
    }
    else
    {
      *((_BYTE *)v27 + 96) = 0;
      *((_BYTE *)v27 + 97) = 0;
      *((_BYTE *)v27 + 98) = 0;
      *((_BYTE *)v27 + 99) = 0;
      *((_BYTE *)v27 + 100) = 0;
      *((_BYTE *)v27 + 101) = 0;
      *((_BYTE *)v27 + 102) = 0;
      *((_BYTE *)v27 + 103) = 0;
    }
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "epoch:%d targetdiff:%d", *(_DWORD *)(a2 + 1536), v28);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "rpc2_job_decode",
      15,
      653,
      20,
      v35);
    v31 = *(void **)(a2 + 1748);
    if ( v31 )
      free(v31);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  }
  else
  {
    v2 = 0;
    printf("invalid pointer(%s)!\n", "work->private");
  }
  return v2;
}
