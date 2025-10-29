int __fastcall sub_9D4FC(int a1, int *a2)
{
  int v2; // r7
  double *v5; // r6
  double *v6; // r9
  int v7; // r10
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  const char *v11; // r0
  size_t v12; // r0
  char *v13; // r5
  double *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  _BOOL4 v17; // r3
  int v18; // r2
  int v19; // r11
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  char *v24; // r0
  int v25; // [sp+14h] [bp-1110h]
  _DWORD *v26; // [sp+1Ch] [bp-1108h]
  char v27[92]; // [sp+24h] [bp-1100h] BYREF
  _BYTE v28[160]; // [sp+80h] [bp-10A4h] BYREF
  char v29[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = 0;
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
      logfmt_raw(v29, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_subscribe_kas",
        21,
        42,
        100,
        v29);
      goto LABEL_3;
    }
    v7 = socket_full(a2[9], 30);
    if ( !v7 )
    {
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, "stratum_subscribe timed out");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_subscribe_kas",
        21,
        48,
        100,
        v29);
LABEL_3:
      free(v13);
      if ( !v5 )
        goto LABEL_11;
      goto LABEL_4;
    }
    v14 = (double *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v6 = v14;
    if ( v14 )
    {
      v5 = json_loads(v14, 0, v27);
      free(v6);
      if ( !v5 )
      {
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v27, v28);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          180,
          "stratum_subscribe_kas",
          21,
          61,
          100,
          v29);
        free(v13);
        goto LABEL_11;
      }
      v15 = json_object_get(v5, "id");
      v25 = json_integer_value(v15);
      v26 = (_DWORD *)json_object_get(v5, "result");
      v16 = (_DWORD *)json_object_get(v5, "error");
      v17 = v26 == 0;
      if ( v25 != 1 )
        v17 = 1;
      if ( v17 || *v26 == 7 )
      {
        if ( !v2 )
          goto LABEL_47;
        if ( v16 )
        {
LABEL_35:
          v13 = json_dumps(v16, 3);
          V_LOCK();
          logfmt_raw(v29, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v13, v25);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
            180,
            "stratum_subscribe_kas",
            21,
            77,
            100,
            v29);
          if ( !v13 )
          {
            if ( *((_DWORD *)v5 + 1) == -1 )
              goto LABEL_11;
            goto LABEL_37;
          }
LABEL_47:
          v7 = 0;
          goto LABEL_48;
        }
        v24 = (char *)malloc(0x11u);
        if ( !v24 )
        {
          V_LOCK();
          logfmt_raw(v29, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", 0, v25);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
            180,
            "stratum_subscribe_kas",
            21,
            77,
            100,
            v29);
          if ( *((_DWORD *)v5 + 1) == -1 )
            return 0;
LABEL_37:
          v20 = (unsigned int *)v5 + 1;
          __dmb(0xBu);
          do
          {
            v21 = __ldrex(v20);
            v22 = v21 - 1;
          }
          while ( __strex(v22, v20) );
          if ( !v22 )
            json_delete(v5);
          goto LABEL_11;
        }
        v13 = v24;
        v7 = 0;
        strcpy(v24, "(unknown reason)");
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v13, v25);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          180,
          "stratum_subscribe_kas",
          21,
          77,
          100,
          v29);
      }
      else
      {
        if ( v16 && *v16 != 7 )
        {
          if ( !v2 )
            goto LABEL_47;
          goto LABEL_35;
        }
        if ( !(*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v26, 1) )
        {
          V_LOCK();
          logfmt_raw(v29, 0x1000u, 0, "no need to parse extranonce");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
            180,
            "stratum_subscribe_kas",
            21,
            88,
            60,
            v29);
        }
        v18 = a2[480] + 1;
        a2[480] = v18;
        sprintf(v13, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v18);
        v19 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v13);
        if ( v19 )
        {
          v7 = socket_full(a2[9], 30);
          if ( v7 )
            (*(void (__fastcall **)(int *))(a1 + 8))(a2);
          else
            v7 = v19;
        }
      }
LABEL_48:
      free(v13);
      if ( *((_DWORD *)v5 + 1) == -1 )
        goto LABEL_10;
      goto LABEL_6;
    }
    free(v13);
    if ( !v5 )
      return 0;
LABEL_4:
    if ( *((_DWORD *)v5 + 1) == -1 )
      goto LABEL_11;
    v7 = 0;
LABEL_6:
    v8 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v9 = __ldrex(v8);
      v10 = v9 - 1;
    }
    while ( __strex(v10, v8) );
    if ( !v10 )
      json_delete(v5);
LABEL_10:
    if ( v7 )
      return v7;
LABEL_11:
    if ( v6 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
