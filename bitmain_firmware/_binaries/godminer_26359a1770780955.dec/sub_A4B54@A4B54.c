int __fastcall sub_A4B54(int a1, int a2)
{
  void *v3; // r9
  int v5; // r10
  _DWORD *v6; // r11
  int v7; // r0
  int v8; // r8
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r0
  size_t v13; // r0
  char *v14; // r5
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r7
  int v18; // r0
  int v19; // r0
  _BOOL4 v20; // r3
  char *v21; // r0
  int v22; // r0
  int v24; // r0
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  int v28; // r0
  void *v29; // r0
  _DWORD *v30; // r0
  const char *v31; // r0
  char *v32; // r0
  size_t v33; // r0
  int v34; // r0
  void *v35; // r0
  char *v36; // r0
  const char *v37; // r1
  const char *v38; // r3
  int v39; // r2
  int v40; // r7
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // [sp+38h] [bp-113Ch]
  _DWORD *v45; // [sp+3Ch] [bp-1138h]
  _BYTE v46[36]; // [sp+50h] [bp-1124h] BYREF
  char v47[92]; // [sp+74h] [bp-1100h] BYREF
  _BYTE v48[4100]; // [sp+170h] [bp-1004h] BYREF

  v44 = *(unsigned __int8 *)(a2 + 1656);
  if ( *(_BYTE *)(a2 + 1656) )
    return 1;
  v3 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v12 = *(const char **)(a2 + 72);
    if ( v12 )
      v13 = strlen(v12) + 256;
    else
      v13 = 256;
    v14 = (char *)malloc(v13);
    strcpy(v14, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}");
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v14) )
    {
      V_LOCK(0);
      v7 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
        185,
        "stratum_subscribe_rvn",
        21,
        43,
        100,
        v48);
      goto LABEL_4;
    }
    v8 = socket_full(*(_DWORD *)(a2 + 36), 30);
    if ( !v8 )
    {
      V_LOCK(0);
      v41 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v41);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
        185,
        "stratum_subscribe_rvn",
        21,
        49,
        100,
        v48);
LABEL_4:
      free(v14);
      if ( !v6 )
        goto LABEL_12;
      goto LABEL_5;
    }
    v15 = (*(int (__fastcall **)(int))(a1 + 8))(a2);
    v3 = (void *)v15;
    if ( v15 )
    {
      v6 = (_DWORD *)json_loads(v15, 0, v47);
      free(v3);
      if ( !v6 )
      {
        V_LOCK(v16);
        v28 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v28);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
          185,
          "stratum_subscribe_rvn",
          21,
          62,
          100,
          v48);
        free(v14);
        goto LABEL_12;
      }
      v45 = (_DWORD *)json_object_get(v6, "result");
      v17 = (_DWORD *)json_object_get(v6, "error");
      v18 = json_object_get(v6, "id");
      v19 = json_integer_value(v18);
      v20 = v45 == 0;
      if ( v19 != 1 )
        v20 = 1;
      if ( v20 || *v45 == 7 )
      {
        if ( !v5 )
          goto LABEL_44;
        if ( v17 )
          goto LABEL_37;
        v21 = (char *)malloc(0x11u);
        if ( !v21 )
        {
          V_LOCK(0);
          v42 = logfmt_raw((int)v48, 0x1000u);
          V_UNLOCK(v42);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
            185,
            "stratum_subscribe_rvn",
            21,
            79,
            100,
            v48);
          if ( v6[1] == -1 )
            return v44;
LABEL_39:
          v25 = v6 + 1;
          __dmb(0xBu);
          do
          {
            v26 = __ldrex(v25);
            v27 = v26 - 1;
          }
          while ( __strex(v27, v25) );
          if ( !v27 )
            json_delete(v6);
          goto LABEL_12;
        }
        v14 = v21;
        v8 = 0;
        strcpy(v21, "(unknown reason)");
        V_LOCK(*(_DWORD *)"(unknown reason)");
        v22 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v22);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
          185,
          "stratum_subscribe_rvn",
          21,
          79,
          100,
          v48);
      }
      else
      {
        if ( v17 && *v17 != 7 )
        {
          if ( v5 )
          {
LABEL_37:
            v14 = (char *)json_dumps(v17, 3);
            V_LOCK(v14);
            v24 = logfmt_raw((int)v48, 0x1000u);
            V_UNLOCK(v24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
              185,
              "stratum_subscribe_rvn",
              21,
              79,
              100,
              v48);
            if ( !v14 )
            {
              if ( v6[1] == -1 )
                goto LABEL_12;
              goto LABEL_39;
            }
          }
LABEL_44:
          v8 = 0;
          goto LABEL_45;
        }
        v29 = *(void **)(a2 + 80);
        if ( v29 )
          free(v29);
        v30 = json_array_get(v45, 1u);
        v31 = (const char *)json_string_value(v30);
        v32 = _strdup(v31);
        *(_DWORD *)(a2 + 80) = v32;
        v33 = strlen(v32);
        *(_DWORD *)(a2 + 76) = v33;
        V_LOCK(v33);
        V_INT((int)v46, "poolno");
        v34 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v34);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
          185,
          "stratum_subscribe_rvn",
          21,
          95,
          60,
          v48);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
        v35 = *(void **)(a2 + 1552);
        if ( v35 )
          free(v35);
        v36 = (char *)calloc(8u, 1u);
        v37 = *(const char **)(a2 + 80);
        *(_DWORD *)(a2 + 1552) = v36;
        strcpy(v36, v37);
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
        if ( !(*(int (__fastcall **)(int, int, _DWORD *, int))(a1 + 52))(a1, a2, v45, 1) )
        {
          V_LOCK(0);
          v43 = logfmt_raw((int)v48, 0x1000u);
          V_UNLOCK(v43);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/frontend/frontend_rvn/frontend_rvn.c",
            185,
            "stratum_subscribe_rvn",
            21,
            113,
            60,
            v48);
        }
        v38 = *(const char **)(a2 + 80);
        v39 = *(_DWORD *)(a2 + 1920) + 1;
        *(_DWORD *)(a2 + 1920) = v39;
        sprintf(v14, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": [\"%s\"]}", v39, v38);
        v40 = (*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v14);
        if ( v40 )
        {
          v8 = socket_full(*(_DWORD *)(a2 + 36), 30);
          if ( v8 )
            (*(void (__fastcall **)(int))(a1 + 8))(a2);
          else
            v8 = v40;
        }
      }
LABEL_45:
      free(v14);
      if ( v6[1] == -1 )
        goto LABEL_11;
      goto LABEL_7;
    }
    free(v14);
    if ( !v6 )
      return v44;
LABEL_5:
    if ( v6[1] == -1 )
      goto LABEL_12;
    v8 = 0;
LABEL_7:
    v9 = v6 + 1;
    __dmb(0xBu);
    do
    {
      v10 = __ldrex(v9);
      v11 = v10 - 1;
    }
    while ( __strex(v11, v9) );
    if ( !v11 )
      json_delete(v6);
LABEL_11:
    if ( v8 )
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
