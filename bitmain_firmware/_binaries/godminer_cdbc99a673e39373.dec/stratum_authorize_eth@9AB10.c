int __fastcall stratum_authorize_eth(int a1, _DWORD *a2)
{
  int v4; // r0
  char *v5; // r2
  const char *v6; // r10
  const char *v7; // r11
  size_t v8; // r6
  size_t v9; // r0
  char *v10; // r9
  int v11; // r10
  void *v13; // r6
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r5
  int v17; // r0
  _DWORD *v18; // r6
  _DWORD *v19; // r11
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  int v23; // r0
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  int v27; // r0
  int v28; // r0
  int v29; // r0
  const char *v30; // [sp+2Ch] [bp-1128h]
  int v31; // [sp+30h] [bp-1124h] BYREF
  int s; // [sp+54h] [bp-1100h] BYREF
  __int64 v33; // [sp+58h] [bp-10FCh]
  int v34; // [sp+60h] [bp-10F4h]
  __int64 v35; // [sp+64h] [bp-10F0h]
  __int64 v36; // [sp+6Ch] [bp-10E8h]
  time_t v37[4]; // [sp+150h] [bp-1004h] BYREF
  unsigned __int8 v38; // [sp+162h] [bp-FF2h]
  unsigned __int8 v39; // [sp+163h] [bp-FF1h]
  unsigned __int8 v40; // [sp+164h] [bp-FF0h]
  unsigned __int8 v41; // [sp+165h] [bp-FEFh]
  unsigned __int8 v42; // [sp+166h] [bp-FEEh]
  unsigned __int8 v43; // [sp+167h] [bp-FEDh]

  if ( a2[6] )
  {
    V_LOCK(a1);
    v4 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_authorize_eth",
      21,
      379,
      20,
      v37);
    v5 = (char *)a2[6];
    goto LABEL_3;
  }
  V_LOCK(a1);
  v14 = logfmt_raw((int)v37, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
    180,
    "stratum_authorize_eth",
    21,
    361,
    20,
    v37);
  v33 = 0;
  v34 = 0;
  s = 0;
  v35 = 0;
  v36 = 0;
  v15 = socket(2, 1, 0);
  if ( v15 < 0 )
  {
    perror("socket");
  }
  else
  {
    strcpy((char *)v37, "eth0");
    if ( ioctl(v15, 0x8927u, v37) >= 0 )
    {
      sprintf((char *)&s, "%02X%02X%02X%02X%02X%02X", v38, v39, v40, v41, v42, v43);
      v5 = _strdup((const char *)&s);
      a2[6] = v5;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  V_LOCK(v28);
  v29 = logfmt_raw((int)v37, 0x1000u);
  V_UNLOCK(v29);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
    180,
    "stratum_authorize_eth",
    21,
    370,
    20,
    v37);
  time(v37);
  sprintf((char *)&s, "%d", v37[0]);
  v5 = _strdup((const char *)&s);
  a2[6] = v5;
LABEL_3:
  v6 = (const char *)a2[4];
  v30 = v5;
  v7 = (const char *)a2[5];
  v8 = strlen(v6);
  v9 = strlen(v7);
  v10 = (char *)malloc(v8 + v9 + 128);
  sprintf(
    v10,
    "{\"worker\": \"%s\", \"jsonrpc\": \"2.0\", \"params\": [\"%s\", \"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}",
    v30,
    v6,
    v7,
    2);
  v11 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v10);
  if ( !v11 )
  {
LABEL_4:
    free(v10);
    return v11;
  }
  while ( 1 )
  {
    v13 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    if ( !v13 )
    {
      free(v10);
      return 0;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v13);
  }
  v16 = (_DWORD *)json_loads((int)v13, 0, (char *)&s);
  free(v13);
  if ( !v16 )
  {
    V_LOCK(v17);
    v27 = logfmt_raw((int)v37, 0x1000u);
    v11 = 0;
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_authorize_eth",
      21,
      404,
      100,
      v37);
    goto LABEL_4;
  }
  v18 = (_DWORD *)json_object_get(v16, "result");
  v19 = (_DWORD *)json_object_get(v16, "error");
  v20 = json_object_get(v16, "id");
  v21 = json_integer_value(v20);
  if ( v18 && *v18 != 6 && (!v19 || *v19 == 7) )
  {
    a2[480] = 40;
  }
  else
  {
    V_LOCK(v21);
    v11 = 0;
    V_INT((int)&v31, "poolno");
    v22 = json_array_get(v19, 1u);
    json_string_value(v22);
    v23 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_authorize_eth",
      21,
      415,
      80,
      v37);
  }
  free(v10);
  if ( v16[1] == -1 )
    return v11;
  v24 = v16 + 1;
  __dmb(0xBu);
  do
  {
    v25 = __ldrex(v24);
    v26 = v25 - 1;
  }
  while ( __strex(v26, v24) );
  if ( v26 )
    return v11;
  json_delete(v16);
  return v11;
}
