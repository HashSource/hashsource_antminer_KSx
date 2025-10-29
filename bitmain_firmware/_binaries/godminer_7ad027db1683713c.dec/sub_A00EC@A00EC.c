int __fastcall sub_A00EC(int a1, int *a2)
{
  double *v3; // r9
  int v5; // r10
  double *v6; // r11
  int v7; // r8
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  const char *v11; // r0
  size_t v12; // r0
  char *v13; // r5
  double *v14; // r0
  _DWORD *v15; // r7
  int v16; // r0
  pthread_mutex_t *v17; // r0
  _BOOL4 v18; // r3
  char *v19; // r0
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  void *v24; // r0
  _DWORD *v25; // r0
  const char *v26; // r0
  char *v27; // r0
  void *v28; // r0
  char *v29; // r0
  const char *v30; // r1
  const char *v31; // r3
  int v32; // r2
  int v33; // r7
  int v34; // [sp+38h] [bp-113Ch]
  _DWORD *v35; // [sp+3Ch] [bp-1138h]
  pthread_mutex_t *mutex; // [sp+44h] [bp-1130h]
  _DWORD v37[7]; // [sp+50h] [bp-1124h] BYREF
  int v38; // [sp+6Ch] [bp-1108h]
  char v39[92]; // [sp+74h] [bp-1100h] BYREF
  _BYTE v40[160]; // [sp+D0h] [bp-10A4h] BYREF
  char v41[4100]; // [sp+170h] [bp-1004h] BYREF

  v34 = *((unsigned __int8 *)a2 + 1656);
  if ( *((_BYTE *)a2 + 1656) )
    return 1;
  v3 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v11 = (const char *)a2[18];
    if ( v11 )
      v12 = strlen(v11) + 256;
    else
      v12 = 256;
    v13 = (char *)malloc(v12);
    strcpy(v13, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}");
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v13) )
    {
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        180,
        "stratum_subscribe_rvn",
        21,
        43,
        100,
        v41);
      goto LABEL_4;
    }
    v7 = socket_full(a2[9], 30);
    if ( !v7 )
    {
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "stratum_subscribe timed out");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        180,
        "stratum_subscribe_rvn",
        21,
        49,
        100,
        v41);
LABEL_4:
      free(v13);
      if ( !v6 )
        goto LABEL_12;
      goto LABEL_5;
    }
    v14 = (double *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v3 = v14;
    if ( v14 )
    {
      v6 = json_loads(v14, 0, v39);
      free(v3);
      if ( !v6 )
      {
        V_LOCK();
        logfmt_raw(v41, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v39, v40);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          180,
          "stratum_subscribe_rvn",
          21,
          62,
          100,
          v41);
        free(v13);
        goto LABEL_12;
      }
      v35 = (_DWORD *)json_object_get(v6, "result");
      v15 = (_DWORD *)json_object_get(v6, "error");
      v16 = json_object_get(v6, "id");
      v17 = (pthread_mutex_t *)json_integer_value(v16);
      v18 = v35 == 0;
      if ( v17 != (pthread_mutex_t *)1 )
        v18 = 1;
      mutex = v17;
      if ( v18 || *v35 == 7 )
      {
        if ( !v5 )
          goto LABEL_44;
        if ( v15 )
          goto LABEL_37;
        v19 = (char *)malloc(0x11u);
        if ( !v19 )
        {
          V_LOCK();
          logfmt_raw(v41, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", 0, mutex);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
            180,
            "stratum_subscribe_rvn",
            21,
            79,
            100,
            v41);
          if ( *((_DWORD *)v6 + 1) == -1 )
            return v34;
LABEL_39:
          v21 = (unsigned int *)v6 + 1;
          __dmb(0xBu);
          do
          {
            v22 = __ldrex(v21);
            v23 = v22 - 1;
          }
          while ( __strex(v23, v21) );
          if ( !v23 )
            json_delete(v6);
          goto LABEL_12;
        }
        v13 = v19;
        v7 = 0;
        strcpy(v19, "(unknown reason)");
        V_LOCK();
        logfmt_raw(v41, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v13, mutex);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          180,
          "stratum_subscribe_rvn",
          21,
          79,
          100,
          v41);
      }
      else
      {
        if ( v15 && *v15 != 7 )
        {
          if ( v5 )
          {
LABEL_37:
            v13 = json_dumps(v15, 3);
            V_LOCK();
            logfmt_raw(v41, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v13, mutex);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
              180,
              "stratum_subscribe_rvn",
              21,
              79,
              100,
              v41);
            if ( !v13 )
            {
              if ( *((_DWORD *)v6 + 1) == -1 )
                goto LABEL_12;
              goto LABEL_39;
            }
          }
LABEL_44:
          v7 = 0;
          goto LABEL_45;
        }
        v24 = (void *)a2[20];
        if ( v24 )
          free(v24);
        v25 = json_array_get(v35, 1u);
        v26 = (const char *)json_string_value(v25);
        v27 = _strdup(v26);
        a2[20] = (int)v27;
        a2[19] = strlen(v27);
        V_LOCK();
        V_INT((int)v37, "poolno", *a2);
        logfmt_raw(
          v41,
          0x1000u,
          0,
          v38,
          v37[0],
          v37[1],
          v37[2],
          v37[3],
          v37[4],
          v37[5],
          v37[6],
          v38,
          "extra_nonce %s, len: %d",
          a2[20],
          a2[19]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          180,
          "stratum_subscribe_rvn",
          21,
          95,
          60,
          v41);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
        v28 = (void *)a2[388];
        if ( v28 )
          free(v28);
        v29 = (char *)calloc(8u, 1u);
        v30 = (const char *)a2[20];
        a2[388] = (int)v29;
        strcpy(v29, v30);
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        if ( !(*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v35, 1) )
        {
          V_LOCK();
          logfmt_raw(v41, 0x1000u, 0, "no need to parse extranonce");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
            180,
            "stratum_subscribe_rvn",
            21,
            113,
            60,
            v41);
        }
        v31 = (const char *)a2[20];
        v32 = a2[480] + 1;
        a2[480] = v32;
        sprintf(v13, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": [\"%s\"]}", v32, v31);
        v33 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v13);
        if ( v33 )
        {
          v7 = socket_full(a2[9], 30);
          if ( v7 )
            (*(void (__fastcall **)(int *))(a1 + 8))(a2);
          else
            v7 = v33;
        }
      }
LABEL_45:
      free(v13);
      if ( *((_DWORD *)v6 + 1) == -1 )
        goto LABEL_11;
      goto LABEL_7;
    }
    free(v13);
    if ( !v6 )
      return v34;
LABEL_5:
    if ( *((_DWORD *)v6 + 1) == -1 )
      goto LABEL_12;
    v7 = 0;
LABEL_7:
    v8 = (unsigned int *)v6 + 1;
    __dmb(0xBu);
    do
    {
      v9 = __ldrex(v8);
      v10 = v9 - 1;
    }
    while ( __strex(v10, v8) );
    if ( !v10 )
      json_delete(v6);
LABEL_11:
    if ( v7 )
      return 1;
LABEL_12:
    if ( v3 )
      v5 ^= 1u;
    else
      v5 = 0;
  }
  while ( v5 );
  return 0;
}
