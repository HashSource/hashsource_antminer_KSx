int __fastcall stratum_authorize_eth(int a1, int *a2)
{
  char *v4; // r2
  const char *v5; // r10
  const char *v6; // r11
  size_t v7; // r6
  size_t v8; // r0
  char *v9; // r9
  int v10; // r10
  void *v12; // r6
  int v13; // r0
  double *v14; // r5
  _DWORD *v15; // r6
  _DWORD *v16; // r11
  int v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  const char *v23; // [sp+2Ch] [bp-1128h]
  _DWORD v24[7]; // [sp+30h] [bp-1124h] BYREF
  int v25; // [sp+4Ch] [bp-1108h]
  int s; // [sp+54h] [bp-1100h] BYREF
  __int64 v27; // [sp+58h] [bp-10FCh]
  int v28; // [sp+60h] [bp-10F4h]
  __int64 v29; // [sp+64h] [bp-10F0h]
  __int64 v30; // [sp+6Ch] [bp-10E8h]
  _BYTE v31[160]; // [sp+B0h] [bp-10A4h] BYREF
  time_t v32[4]; // [sp+150h] [bp-1004h] BYREF
  unsigned __int8 v33; // [sp+162h] [bp-FF2h]
  unsigned __int8 v34; // [sp+163h] [bp-FF1h]
  unsigned __int8 v35; // [sp+164h] [bp-FF0h]
  unsigned __int8 v36; // [sp+165h] [bp-FEFh]
  unsigned __int8 v37; // [sp+166h] [bp-FEEh]
  unsigned __int8 v38; // [sp+167h] [bp-FEDh]

  if ( a2[6] )
  {
    V_LOCK();
    logfmt_raw((char *)v32, 0x1000u, 0, "Will Use Worker Name!->'%s'", a2[6]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_authorize_eth",
      21,
      379,
      20,
      v32);
    v4 = (char *)a2[6];
    goto LABEL_3;
  }
  V_LOCK();
  logfmt_raw((char *)v32, 0x1000u, 0, "Didn't Set Worker Name, Will Use MacAddr!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
    180,
    "stratum_authorize_eth",
    21,
    361,
    20,
    v32);
  v27 = 0;
  v28 = 0;
  s = 0;
  v29 = 0;
  v30 = 0;
  v13 = socket(2, 1, 0);
  if ( v13 < 0 )
  {
    perror("socket");
  }
  else
  {
    strcpy((char *)v32, "eth0");
    if ( ioctl(v13, 0x8927u, v32) >= 0 )
    {
      sprintf((char *)&s, "%02X%02X%02X%02X%02X%02X", v33, v34, v35, v36, v37, v38);
      v4 = _strdup((const char *)&s);
      a2[6] = (int)v4;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  V_LOCK();
  logfmt_raw((char *)v32, 0x1000u, 0, "Get Mac Failed, Will Use Current Time!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
    180,
    "stratum_authorize_eth",
    21,
    370,
    20,
    v32);
  time(v32);
  sprintf((char *)&s, "%d", v32[0]);
  v4 = _strdup((const char *)&s);
  a2[6] = (int)v4;
LABEL_3:
  v5 = (const char *)a2[4];
  v23 = v4;
  v6 = (const char *)a2[5];
  v7 = strlen(v5);
  v8 = strlen(v6);
  v9 = (char *)malloc(v7 + v8 + 128);
  sprintf(
    v9,
    "{\"worker\": \"%s\", \"jsonrpc\": \"2.0\", \"params\": [\"%s\", \"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}",
    v23,
    v5,
    v6,
    2);
  v10 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v9);
  if ( !v10 )
  {
LABEL_4:
    free(v9);
    return v10;
  }
  while ( 1 )
  {
    v12 = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    if ( !v12 )
    {
      free(v9);
      return 0;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v12);
  }
  v14 = json_loads((double *)v12, 0, (char *)&s);
  free(v12);
  if ( !v14 )
  {
    V_LOCK();
    logfmt_raw((char *)v32, 0x1000u, 0, "JSON decode failed(%d): %s", s, v31);
    v10 = 0;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_authorize_eth",
      21,
      404,
      100,
      v32);
    goto LABEL_4;
  }
  v15 = (_DWORD *)json_object_get(v14, "result");
  v16 = (_DWORD *)json_object_get(v14, "error");
  v17 = json_object_get(v14, "id");
  json_integer_value(v17);
  if ( v15 && *v15 != 6 && (!v16 || *v16 == 7) )
  {
    a2[480] = 40;
  }
  else
  {
    V_LOCK();
    v10 = 0;
    V_INT((int)v24, "poolno", *a2);
    v18 = json_array_get(v16, 1u);
    v19 = json_string_value(v18);
    logfmt_raw(
      (char *)v32,
      0x1000u,
      0,
      v25,
      v24[0],
      v24[1],
      v24[2],
      v24[3],
      v24[4],
      v24[5],
      v24[6],
      v25,
      "authorize failed reason: %s",
      v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_authorize_eth",
      21,
      415,
      80,
      v32);
  }
  free(v9);
  if ( *((_DWORD *)v14 + 1) == -1 )
    return v10;
  v20 = (unsigned int *)v14 + 1;
  __dmb(0xBu);
  do
  {
    v21 = __ldrex(v20);
    v22 = v21 - 1;
  }
  while ( __strex(v22, v20) );
  if ( v22 )
    return v10;
  json_delete(v14);
  return v10;
}
