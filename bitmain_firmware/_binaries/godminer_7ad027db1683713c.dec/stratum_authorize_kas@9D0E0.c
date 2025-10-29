int __fastcall stratum_authorize_kas(int a1, int *a2, double *a3)
{
  int v3; // r6
  double *v6; // r11
  int v8; // r8
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r8
  const char *v13; // r10
  size_t v14; // r5
  size_t v15; // r0
  char *v16; // r5
  double *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r10
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  _DWORD *v27; // [sp+30h] [bp-112Ch]
  int v28; // [sp+34h] [bp-1128h]
  _DWORD v29[7]; // [sp+38h] [bp-1124h] BYREF
  int v30; // [sp+54h] [bp-1108h]
  char v31[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v32[160]; // [sp+B8h] [bp-10A4h] BYREF
  char v33[4100]; // [sp+158h] [bp-1004h] BYREF

  v3 = 0;
  v6 = 0;
  while ( 1 )
  {
    v12 = (const char *)a2[4];
    v13 = (const char *)a2[5];
    v14 = strlen(v12);
    v15 = strlen(v13);
    v16 = (char *)malloc(v14 + v15 + 128);
    sprintf(v16, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", 2, v12, v13);
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v16) )
      goto LABEL_2;
    v8 = socket_full(a2[9], 30);
    if ( !v8 )
    {
      V_LOCK();
      logfmt_raw(v33, 0x1000u, 0, "stratum_subscribe timed out");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_authorize_kas",
        21,
        139,
        100,
        v33);
LABEL_2:
      free(v16);
      if ( !v6 )
        goto LABEL_10;
      goto LABEL_3;
    }
    v17 = (double *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    a3 = v17;
    if ( v17 )
      break;
    free(v16);
    if ( !v6 )
      return 0;
LABEL_3:
    if ( *((_DWORD *)v6 + 1) != -1 )
    {
      v8 = 0;
LABEL_5:
      v9 = (unsigned int *)v6 + 1;
      __dmb(0xBu);
      do
      {
        v10 = __ldrex(v9);
        v11 = v10 - 1;
      }
      while ( __strex(v11, v9) );
      if ( !v11 )
        json_delete(v6);
      if ( v8 )
        return v8;
    }
LABEL_10:
    if ( a3 )
      v3 ^= 1u;
    else
      v3 = 0;
    if ( !v3 )
      return 0;
  }
  v6 = json_loads(v17, 0, v31);
  free(a3);
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v31, v32);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
      180,
      "stratum_authorize_kas",
      21,
      153,
      100,
      v33);
    free(v16);
    goto LABEL_10;
  }
  v18 = json_object_get(v6, "id");
  v28 = json_integer_value(v18);
  v19 = (_DWORD *)json_object_get(v6, "error");
  v20 = v19;
  v27 = v19;
  if ( !v19 || *v19 == 7 )
    goto LABEL_22;
  V_LOCK();
  V_INT((int)v29, "poolno", *a2);
  v21 = json_array_get(v20, 1u);
  v22 = json_string_value(v21);
  logfmt_raw(
    v33,
    0x1000u,
    0,
    v30,
    v29[0],
    v29[1],
    v29[2],
    v29[3],
    v29[4],
    v29[5],
    v29[6],
    v30,
    "authorize failed reason: %s",
    v22);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
    180,
    "stratum_authorize_kas",
    21,
    163,
    80,
    v33);
  if ( !v3
    || (v16 = json_dumps(v27, 3),
        V_LOCK(),
        logfmt_raw(v33, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v16, v28),
        V_UNLOCK(),
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          180,
          "stratum_authorize_kas",
          21,
          170,
          100,
          v33),
        v16) )
  {
    v8 = 0;
LABEL_22:
    free(v16);
    if ( *((_DWORD *)v6 + 1) != -1 )
      goto LABEL_5;
    if ( v8 )
      return v8;
    goto LABEL_10;
  }
  if ( *((_DWORD *)v6 + 1) != -1 )
  {
    v24 = (unsigned int *)v6 + 1;
    __dmb(0xBu);
    do
    {
      v25 = __ldrex(v24);
      v26 = v25 - 1;
    }
    while ( __strex(v26, v24) );
    if ( !v26 )
      json_delete(v6);
  }
  return 0;
}
