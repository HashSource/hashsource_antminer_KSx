int __fastcall stratum_authorize_kas(int a1, _DWORD *a2, void *a3)
{
  int v3; // r6
  _DWORD *v6; // r11
  int v8; // r8
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r8
  const char *v13; // r10
  size_t v14; // r5
  size_t v15; // r0
  char *v16; // r5
  int v17; // r0
  int v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r10
  _DWORD *v22; // r0
  int v23; // r0
  int v25; // r0
  int v26; // r0
  unsigned int *v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r2
  int v30; // r0
  _DWORD *v31; // [sp+30h] [bp-112Ch]
  _BYTE v32[36]; // [sp+38h] [bp-1124h] BYREF
  char v33[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v34[4100]; // [sp+158h] [bp-1004h] BYREF

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
    if ( !(*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v16) )
      goto LABEL_2;
    v8 = socket_full(a2[9], 30);
    if ( !v8 )
    {
      V_LOCK(0);
      v30 = logfmt_raw((int)v34, 0x1000u);
      V_UNLOCK(v30);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_kas/frontend_kas.c",
        185,
        "stratum_authorize_kas",
        21,
        139,
        100,
        v34);
LABEL_2:
      free(v16);
      if ( !v6 )
        goto LABEL_10;
      goto LABEL_3;
    }
    v17 = (*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    a3 = (void *)v17;
    if ( v17 )
      break;
    free(v16);
    if ( !v6 )
      return 0;
LABEL_3:
    if ( v6[1] != -1 )
    {
      v8 = 0;
LABEL_5:
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
  v6 = (_DWORD *)json_loads(v17, 0, v33);
  free(a3);
  if ( !v6 )
  {
    V_LOCK(v18);
    v25 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_kas/frontend_kas.c",
      185,
      "stratum_authorize_kas",
      21,
      153,
      100,
      v34);
    free(v16);
    goto LABEL_10;
  }
  v19 = json_object_get(v6, "id");
  json_integer_value(v19);
  v20 = (_DWORD *)json_object_get(v6, "error");
  v21 = v20;
  v31 = v20;
  if ( !v20 || *v20 == 7 )
    goto LABEL_22;
  V_LOCK(v20);
  V_INT((int)v32, "poolno");
  v22 = json_array_get(v21, 1u);
  json_string_value(v22);
  v23 = logfmt_raw((int)v34, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/frontend/frontend_kas/frontend_kas.c",
    185,
    "stratum_authorize_kas",
    21,
    163,
    80,
    v34);
  if ( !v3
    || (v16 = (char *)json_dumps(v31, 3),
        V_LOCK(v16),
        v26 = logfmt_raw((int)v34, 0x1000u),
        V_UNLOCK(v26),
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_kas/frontend_kas.c",
          185,
          "stratum_authorize_kas",
          21,
          170,
          100,
          v34),
        v16) )
  {
    v8 = 0;
LABEL_22:
    free(v16);
    if ( v6[1] != -1 )
      goto LABEL_5;
    if ( v8 )
      return v8;
    goto LABEL_10;
  }
  if ( v6[1] != -1 )
  {
    v27 = v6 + 1;
    __dmb(0xBu);
    do
    {
      v28 = __ldrex(v27);
      v29 = v28 - 1;
    }
    while ( __strex(v29, v27) );
    if ( !v29 )
      json_delete(v6);
  }
  return 0;
}
