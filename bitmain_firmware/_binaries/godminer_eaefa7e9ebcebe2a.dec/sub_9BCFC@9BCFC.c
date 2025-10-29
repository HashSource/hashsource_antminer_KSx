int __fastcall sub_9BCFC(_DWORD *a1, int a2)
{
  int v2; // r4
  int v4; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r6
  _DWORD *v9; // r0
  char *v10; // r6
  _DWORD *v11; // r7
  _DWORD *v12; // r0
  char *v13; // r7
  _DWORD *v14; // r8
  _DWORD *v15; // r0
  char *v16; // r8
  size_t v17; // r10
  signed int v18; // r9
  size_t v19; // r0
  _BOOL4 v20; // r3
  int v21; // r11
  int v22; // r0
  void *v23; // r0
  int v24; // r2
  void *v25; // r9
  int v26; // r0
  int v27; // r0
  int v28; // r0
  size_t v29; // r6
  void *v30; // r0
  void *v31; // r0
  int v32; // r0
  _QWORD *v33; // r6
  unsigned int v34; // r8
  void *v35; // r0
  int v36; // r1
  char *v37; // r3
  unsigned __int64 v38; // r0
  int v39; // r0
  void *v40; // r0
  int v41; // r0
  int v42; // r0
  char *nptr; // [sp+10h] [bp-1014h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-1010h]
  int v45; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v46[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1656) ^ 1;
  if ( !a1 )
    v2 |= 1u;
  if ( v2 || *a1 != 1 )
  {
    V_LOCK(a1);
    v2 = 0;
    v4 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_eth/frontend_eth.c",
      185,
      "rpc2_job_decode",
      15,
      565,
      100,
      v46);
    return v2;
  }
  v7 = json_array_get(a1, 0);
  v8 = json_string_value(v7);
  v9 = json_array_get(a1, 1u);
  v10 = (char *)v8 + 2;
  v11 = json_string_value(v9);
  v12 = json_array_get(a1, 2u);
  v13 = (char *)v11 + 2;
  v14 = json_string_value(v12);
  v15 = json_array_get(a1, 3u);
  v16 = (char *)v14 + 2;
  nptr = (char *)json_string_value(v15);
  v17 = strlen(v13);
  v18 = strlen(v10);
  v19 = strlen(v16);
  v20 = v18 == 0;
  if ( !v17 )
    v20 = 1;
  v21 = v19;
  if ( !v19 )
    v20 = 1;
  if ( v20 )
  {
    V_LOCK(v19);
    v22 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_eth/frontend_eth.c",
      185,
      "rpc2_job_decode",
      15,
      579,
      100,
      v46);
    return v2;
  }
  mutex = (pthread_mutex_t *)(a2 + 1780);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1780));
  *(_DWORD *)(a2 + 1756) = v18 >> 1;
  v23 = malloc(v18 >> 1);
  v24 = v18 >> 1;
  v25 = v23;
  v2 = hex2bin((int)v23, (unsigned __int8 *)v10, v24);
  if ( !v2 )
  {
    V_LOCK(0);
    v26 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v26);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_eth/frontend_eth.c",
      185,
      "rpc2_job_decode",
      15,
      590,
      100,
      v46);
LABEL_15:
    if ( v25 )
      free(v25);
    pthread_mutex_unlock(mutex);
    goto LABEL_18;
  }
  v29 = *(_DWORD *)(a2 + 1756);
  v30 = malloc(v29);
  *(_DWORD *)(a2 + 1748) = v30;
  if ( !v30 )
  {
    V_LOCK(0);
    v41 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_eth/frontend_eth.c",
      185,
      "rpc2_job_decode",
      15,
      599,
      100,
      v46);
    goto LABEL_15;
  }
  memcpy(v30, v25, v29);
  free(v25);
  v31 = *(void **)(a2 + 1776);
  if ( v31 )
    free(v31);
  v32 = pthread_mutex_unlock(mutex);
  if ( !*(_DWORD *)(a2 + 1748) )
  {
    V_LOCK(v32);
    v42 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v42);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_eth/frontend_eth.c",
      185,
      "rpc2_job_decode",
      15,
      616,
      80,
      v46);
LABEL_18:
    v27 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK(v27);
    v2 = 0;
    v28 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_eth/frontend_eth.c",
      185,
      "rpc2_job_decode",
      15,
      662,
      80,
      v46);
    return v2;
  }
  memcpy((void *)(a2 + 464), *(const void **)(a2 + 1748), *(_DWORD *)(a2 + 1756));
  v33 = *(_QWORD **)(a2 + 1588);
  if ( v33 || (v33 = calloc(1u, 0x6Bu), (*(_DWORD *)(a2 + 1588) = v33) != 0) )
  {
    hex2bin((int)v33, (unsigned __int8 *)v13, 32);
    hex2bin(a2 + 1488, (unsigned __int8 *)v16, v21);
    v34 = target_to_diff_eth(a2 + 1488);
    *(double *)(a2 + 1520) = (double)v34;
    *(double *)(a2 + 1808) = (double)v34;
    sprintf((char *)(a2 + 1976), "%13.2f", (double)v34);
    v45 = 0;
    get_all_created_runtime(&v45);
    v35 = *(void **)(a2 + 1580);
    if ( v35 )
      free(v35);
    v37 = (char *)malloc(6u);
    *(_DWORD *)(a2 + 1580) = v37;
    if ( v37 )
    {
      v36 = *(_DWORD *)"Y";
      strcpy(v37, "HAPPY");
    }
    LODWORD(v38) = get_epoch_number_eth(v33, v36);
    *(_DWORD *)(a2 + 1536) = v38;
    if ( nptr )
    {
      v38 = strtoull(nptr, 0, 16);
      v33[12] = v38;
    }
    else
    {
      *((_BYTE *)v33 + 96) = 0;
      *((_BYTE *)v33 + 97) = 0;
      *((_BYTE *)v33 + 98) = 0;
      *((_BYTE *)v33 + 99) = 0;
      *((_BYTE *)v33 + 100) = 0;
      *((_BYTE *)v33 + 101) = 0;
      *((_BYTE *)v33 + 102) = 0;
      *((_BYTE *)v33 + 103) = 0;
    }
    V_LOCK(v38);
    v39 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_eth/frontend_eth.c",
      185,
      "rpc2_job_decode",
      15,
      653,
      20,
      v46);
    v40 = *(void **)(a2 + 1748);
    if ( v40 )
      free(v40);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  }
  else
  {
    v2 = 0;
    printf("invalid pointer(%s)!\n", "work->private");
  }
  return v2;
}
