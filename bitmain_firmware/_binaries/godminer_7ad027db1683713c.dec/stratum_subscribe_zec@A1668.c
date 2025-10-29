int __fastcall stratum_subscribe_zec(int a1, int *a2)
{
  int v2; // r4
  double *v5; // r11
  char *v6; // r0
  const char *v7; // r10
  char *v8; // r6
  size_t v9; // r9
  const char *v10; // r3
  int v11; // t1
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  int v15; // r9
  double *v17; // r0
  double *v18; // r9
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
  int v29; // [sp+4h] [bp-11B0h]
  double *v30; // [sp+2Ch] [bp-1188h]
  _DWORD *v31; // [sp+38h] [bp-117Ch]
  char dest[16]; // [sp+40h] [bp-1174h] BYREF
  _DWORD v33[7]; // [sp+50h] [bp-1164h] BYREF
  int v34; // [sp+6Ch] [bp-1148h]
  char v35[64]; // [sp+74h] [bp-1140h] BYREF
  char v36[92]; // [sp+B4h] [bp-1100h] BYREF
  _BYTE v37[160]; // [sp+110h] [bp-10A4h] BYREF
  char v38[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v2 = *((unsigned __int8 *)a2 + 1656);
  if ( *((_BYTE *)a2 + 1656) )
  {
    V_LOCK();
    logfmt_raw(v38, 0x1000u, 0, "pool %d is jsonrpc_2, no need to subscribe", *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_subscribe_zec",
      21,
      167,
      20,
      v38);
    return v2;
  }
  v5 = (double *)*((unsigned __int8 *)a2 + 1656);
  v30 = v5;
  do
  {
    v6 = (char *)malloc(0x80u);
    v7 = (const char *)a2[3];
    v8 = v6;
    v9 = strlen(v7) - 1;
    v10 = &v7[v9];
    if ( v7[v9] != 58 )
    {
      do
      {
        v11 = *(unsigned __int8 *)--v10;
        --v9;
      }
      while ( v11 != 58 );
    }
    strncpy(v35, v7, v9);
    v35[v9] = 0;
    strcpy(dest, &v7[v9 + 1]);
    if ( v2 )
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null, \"%s\", \"%s\"]}",
        v35,
        dest);
    else
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null, \"%s\", \"%s\"]}",
        v35,
        dest);
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v8) )
    {
      V_LOCK();
      logfmt_raw(v38, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
        180,
        "stratum_subscribe_zec",
        21,
        182,
        100,
        v38);
LABEL_9:
      if ( !v8 )
      {
        if ( !v5 )
          goto LABEL_15;
        if ( *((_DWORD *)v5 + 1) == -1 )
          goto LABEL_15;
        v12 = (unsigned int *)v5 + 1;
        __dmb(0xBu);
        do
        {
          v13 = __ldrex(v12);
          v14 = v13 - 1;
        }
        while ( __strex(v14, v12) );
        if ( v14 )
          goto LABEL_15;
        v15 = 0;
LABEL_50:
        json_delete(v5);
        goto LABEL_34;
      }
      free(v8);
      if ( !v5 )
        goto LABEL_15;
      v15 = 0;
      goto LABEL_30;
    }
    if ( !socket_full(a2[9], 30) )
    {
      V_LOCK();
      V_INT((int)v33, "poolno", *a2);
      logfmt_raw(
        v38,
        0x1000u,
        0,
        v34,
        v33[0],
        v33[1],
        v33[2],
        v33[3],
        v33[4],
        v33[5],
        v33[6],
        v34,
        "stratum_subscribe timed out");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
        180,
        "stratum_subscribe_zec",
        21,
        188,
        100,
        v38);
      goto LABEL_9;
    }
    v17 = (double *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v18 = v17;
    v30 = v17;
    if ( !v17 )
      goto LABEL_9;
    v5 = json_loads(v17, 0, v36);
    free(v18);
    if ( !v5 )
    {
      V_LOCK();
      logfmt_raw(v38, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v36, v37);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
        180,
        "stratum_subscribe_zec",
        21,
        201,
        100,
        v38);
      if ( v8 )
        free(v8);
      goto LABEL_15;
    }
    v19 = (_DWORD *)json_object_get(v5, "result");
    v31 = (_DWORD *)json_object_get(v5, "error");
    v20 = json_object_get(v5, "id");
    v21 = json_integer_value(v20);
    v22 = v19 == 0;
    if ( v21 != 1 )
      v22 = 1;
    v23 = v21;
    if ( !v22 && *v19 != 7 )
    {
      if ( !v31 || *v31 == 7 )
      {
        v15 = (*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v19, 1);
        if ( v15 )
        {
          v27 = (const char *)a2[8];
          a2[480] = 2;
          if ( v27 )
          {
            if ( strstr(v27, "nicehash") )
            {
              a2[480] = 3;
              sprintf(v8, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v28 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v8);
              if ( v28 )
              {
                v15 = socket_full(a2[9], 30);
                if ( v15 )
                {
                  (*(void (__fastcall **)(int *))(a1 + 8))(a2);
                  free(v8);
                  goto LABEL_30;
                }
                v15 = v28;
              }
LABEL_45:
              free(v8);
              goto LABEL_30;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_43:
          v8 = json_dumps(v31, 3);
          goto LABEL_44;
        }
LABEL_28:
        v15 = v2;
      }
      if ( v8 )
        goto LABEL_45;
      goto LABEL_30;
    }
    if ( !v2 )
      goto LABEL_28;
    if ( v31 )
      goto LABEL_43;
    v8 = (char *)malloc(0x11u);
    if ( v8 )
      strcpy(v8, "(unknown reason)");
LABEL_44:
    V_LOCK();
    v29 = v23;
    v15 = 0;
    logfmt_raw(v38, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v8, v29);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_subscribe_zec",
      21,
      218,
      100,
      v38);
    if ( v8 )
      goto LABEL_45;
LABEL_30:
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
        goto LABEL_50;
    }
LABEL_34:
    if ( v15 )
      return v15;
LABEL_15:
    if ( v30 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
