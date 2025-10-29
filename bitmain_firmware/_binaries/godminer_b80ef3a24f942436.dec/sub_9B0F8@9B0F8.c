int __fastcall sub_9B0F8(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r7
  _DWORD *v7; // r0
  char *v8; // r9
  _DWORD *v9; // r0
  char *v10; // r0
  char *v11; // r8
  _BOOL4 v12; // r3
  int v13; // r0
  size_t v14; // r11
  size_t v15; // r0
  size_t v16; // r10
  _BOOL4 v17; // r4
  const char *v18; // r0
  size_t v19; // r0
  char *v20; // r8
  char *v21; // r4
  char *v22; // r8
  int v23; // t1
  char *v24; // r0
  int v25; // r0
  void *v26; // r0
  int v28; // r0
  int v29; // r2
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  __int16 s; // [sp+1Ch] [bp-1010h] BYREF
  __int64 v35; // [sp+20h] [bp-100Ch] BYREF
  _BYTE v36[4100]; // [sp+28h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = (char *)json_string_value(v9);
  v11 = v10;
  v12 = v10 == 0;
  if ( !v6 )
    v12 = 1;
  if ( !v8 )
    v12 = 1;
  if ( v12 )
  {
    V_LOCK(v10);
    v13 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_notify_eth",
      18,
      896,
      100,
      v36);
  }
  v14 = strlen(v8);
  v15 = strlen(v11);
  v16 = v15;
  v17 = v15 == 0;
  if ( !v14 )
    v17 = 1;
  if ( v17 )
  {
    V_LOCK(v15);
    v28 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v28);
    v29 = 902;
    goto LABEL_24;
  }
  if ( a2 == -456 )
  {
LABEL_22:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 1;
  }
  v18 = *(const char **)(a2 + 1580);
  if ( !v18 || strcmp(v18, v6) )
  {
    v19 = strlen(v6);
    if ( v19 <= 0x1F )
      goto LABEL_14;
    goto LABEL_27;
  }
  V_LOCK(0);
  v33 = logfmt_raw((int)v36, 0x1000u);
  V_UNLOCK(v33);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
    180,
    "stratum_notify_eth",
    18,
    914,
    80,
    v36);
  v19 = strlen(v6);
  if ( v19 > 0x1F )
  {
LABEL_27:
    V_LOCK(v19);
    strlen(v6);
    v31 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_notify_eth",
      18,
      917,
      80,
      v36);
  }
LABEL_14:
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  *(_BYTE *)(a2 + 444) = 1;
  if ( hex2bin(a2 + 464, (unsigned __int8 *)v11, v16 >> 1) )
  {
    v20 = *(char **)(a2 + 1588);
    if ( !v20 )
    {
      v20 = (char *)calloc(1u, 0x6Bu);
      *(_DWORD *)(a2 + 1588) = v20;
      if ( !v20 )
      {
        printf("invalid pointer(%s)!\n", "work->private");
        return 0;
      }
    }
    if ( hex2bin((int)v20, (unsigned __int8 *)v8, v14 >> 1) )
    {
      v21 = v20 + 103;
      *(_DWORD *)(a2 + 1536) = get_epoch_number_eth(v20);
      *((_WORD *)v20 + 52) = 0;
      v20[106] = 0;
      memcpy(v20 + 104, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
      v22 = v20 + 106;
      s = 0;
      v35 = 0;
      do
      {
        v23 = (unsigned __int8)*++v21;
        sprintf((char *)&s, "%02x", v23);
        v24 = strcat((char *)&v35, (const char *)&s);
      }
      while ( v22 != v21 );
      V_LOCK(v24);
      v25 = logfmt_raw((int)v36, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
        180,
        "stratum_notify_eth",
        18,
        964,
        40,
        v36);
      v26 = *(void **)(a2 + 1580);
      if ( v26 )
        free(v26);
      *(_DWORD *)(a2 + 1580) = _strdup(v6);
      goto LABEL_22;
    }
    V_LOCK(0);
    v32 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v32);
    v29 = 938;
  }
  else
  {
    V_LOCK(0);
    v30 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v30);
    v29 = 926;
  }
LABEL_24:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
    180,
    "stratum_notify_eth",
    18,
    v29,
    100,
    v36);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 0;
}
