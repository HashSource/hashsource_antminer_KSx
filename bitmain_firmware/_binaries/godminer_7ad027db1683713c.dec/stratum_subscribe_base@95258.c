int __fastcall stratum_subscribe_base(int a1, int *a2)
{
  int v2; // r4
  double *v5; // r7
  double *v6; // r11
  const char *v7; // r0
  size_t v8; // r0
  _BYTE *v9; // r0
  const char *v10; // r1
  size_t v11; // r2
  _BYTE *v12; // r6
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v16; // r9
  double *v18; // r0
  _DWORD *v19; // r10
  int v20; // r0
  int v21; // r0
  _BOOL4 v22; // r2
  int v23; // r9
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  const char *v27; // r0
  int v28; // r10
  int v29; // [sp+4h] [bp-1158h]
  _DWORD *v30; // [sp+30h] [bp-112Ch]
  _DWORD v31[7]; // [sp+38h] [bp-1124h] BYREF
  int v32; // [sp+54h] [bp-1108h]
  char v33[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v34[160]; // [sp+B8h] [bp-10A4h] BYREF
  char v35[4100]; // [sp+158h] [bp-1004h] BYREF

  v2 = *((unsigned __int8 *)a2 + 1656);
  if ( *((_BYTE *)a2 + 1656) )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "pool %d is jsonrpc_2, no need to subscribe", *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_subscribe_base",
      22,
      174,
      20,
      v35);
    return v2;
  }
  v5 = (double *)*((unsigned __int8 *)a2 + 1656);
  v6 = v5;
  do
  {
    v7 = (const char *)a2[18];
    if ( v7 )
      v8 = strlen(v7) + 128;
    else
      v8 = 128;
    v9 = malloc(v8);
    if ( v2 )
    {
      v10 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null]}";
      v11 = 77;
    }
    else
    {
      v10 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}";
      v11 = 76;
    }
    v12 = v9;
    memcpy(v9, v10, v11);
    if ( !(*(int (__fastcall **)(int *, _BYTE *))(a1 + 12))(a2, v12) )
    {
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_base.c",
        168,
        "stratum_subscribe_base",
        22,
        190,
        100,
        v35);
LABEL_11:
      if ( !v12 )
      {
        if ( !v5 )
          goto LABEL_17;
        if ( *((_DWORD *)v5 + 1) == -1 )
          goto LABEL_17;
        v13 = (unsigned int *)v5 + 1;
        __dmb(0xBu);
        do
        {
          v14 = __ldrex(v13);
          v15 = v14 - 1;
        }
        while ( __strex(v15, v13) );
        if ( v15 )
          goto LABEL_17;
        v16 = 0;
LABEL_51:
        json_delete(v5);
        goto LABEL_36;
      }
      free(v12);
      if ( !v5 )
        goto LABEL_17;
      v16 = 0;
      goto LABEL_32;
    }
    if ( !socket_full(a2[9], 30) )
    {
      V_LOCK();
      V_INT((int)v31, "poolno", *a2);
      logfmt_raw(
        v35,
        0x1000u,
        0,
        v32,
        v31[0],
        v31[1],
        v31[2],
        v31[3],
        v31[4],
        v31[5],
        v31[6],
        v32,
        "stratum_subscribe timed out");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_base.c",
        168,
        "stratum_subscribe_base",
        22,
        195,
        100,
        v35);
      goto LABEL_11;
    }
    v18 = (double *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v6 = v18;
    if ( !v18 )
      goto LABEL_11;
    v5 = json_loads(v18, 0, v33);
    free(v6);
    if ( !v5 )
    {
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v33, v34);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_base.c",
        168,
        "stratum_subscribe_base",
        22,
        206,
        100,
        v35);
      if ( v12 )
        free(v12);
      goto LABEL_17;
    }
    v19 = (_DWORD *)json_object_get(v5, "result");
    v30 = (_DWORD *)json_object_get(v5, "error");
    v20 = json_object_get(v5, "id");
    v21 = json_integer_value(v20);
    v22 = v19 == 0;
    if ( v21 != 1 )
      v22 = 1;
    v23 = v21;
    if ( !v22 && *v19 != 7 )
    {
      if ( !v30 || *v30 == 7 )
      {
        v16 = (*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v19, 1);
        if ( v16 )
        {
          v27 = (const char *)a2[8];
          a2[480] = 2;
          if ( v27 )
          {
            if ( strstr(v27, "nicehash") )
            {
              a2[480] = 3;
              sprintf(v12, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v28 = (*(int (__fastcall **)(int *, _BYTE *))(a1 + 12))(a2, v12);
              if ( v28 )
              {
                v16 = socket_full(a2[9], 30);
                if ( v16 )
                {
                  (*(void (__fastcall **)(int *))(a1 + 8))(a2);
                  free(v12);
                  goto LABEL_32;
                }
                v16 = v28;
              }
LABEL_46:
              free(v12);
              goto LABEL_32;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_44:
          v12 = json_dumps(v30, 3);
          goto LABEL_45;
        }
LABEL_30:
        v16 = v2;
      }
      if ( v12 )
        goto LABEL_46;
      goto LABEL_32;
    }
    if ( !v2 )
      goto LABEL_30;
    if ( v30 )
      goto LABEL_44;
    v12 = malloc(0x11u);
    if ( v12 )
      strcpy(v12, "(unknown reason)");
LABEL_45:
    V_LOCK();
    v29 = v23;
    v16 = 0;
    logfmt_raw(v35, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v12, v29);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_subscribe_base",
      22,
      221,
      100,
      v35);
    if ( v12 )
      goto LABEL_46;
LABEL_32:
    if ( *((_DWORD *)v5 + 1) != -1 )
    {
      v24 = (unsigned int *)v5 + 1;
      __dmb(0xBu);
      do
      {
        v25 = __ldrex(v24);
        v26 = v25 - 1;
      }
      while ( __strex(v26, v24) );
      if ( !v26 )
        goto LABEL_51;
    }
LABEL_36:
    if ( v16 )
      return v16;
LABEL_17:
    if ( v6 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
