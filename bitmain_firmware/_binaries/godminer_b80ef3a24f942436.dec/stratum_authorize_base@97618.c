int __fastcall stratum_authorize_base(int a1, _DWORD *a2)
{
  const char *v4; // r8
  size_t v5; // r6
  size_t v6; // r0
  char *v7; // r0
  char *v8; // r7
  int v9; // r8
  void *v11; // r6
  double *v12; // r5
  int v13; // r0
  _DWORD *v14; // r9
  _DWORD *v15; // r6
  int v16; // r0
  int v17; // r0
  _BOOL4 v18; // r3
  int v19; // r0
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v23; // r0
  char v24[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v25[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = (const char *)a2[5];
  v5 = strlen((const char *)a2[4]);
  v6 = strlen(v4);
  v7 = (char *)malloc(v5 + v6 + 80);
  ++a2[480];
  v8 = v7;
  sprintf(v7, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}");
  v9 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v8);
  if ( !v9 )
    goto LABEL_2;
  while ( 1 )
  {
    v11 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    if ( !v11 )
    {
      free(v8);
      return 0;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v11);
  }
  v12 = json_loads((double *)v11, 0, v24);
  free(v11);
  if ( !v12 )
  {
    V_LOCK(v13);
    v9 = 0;
    v23 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_authorize_base",
      22,
      283,
      100,
      v25);
LABEL_2:
    free(v8);
    return v9;
  }
  v14 = (_DWORD *)json_object_get(v12, "result");
  v15 = (_DWORD *)json_object_get(v12, "error");
  v16 = json_object_get(v12, "id");
  v17 = json_integer_value(v16);
  v18 = v14 == 0;
  if ( a2[480] - 1 != v17 )
    v18 = 1;
  if ( v18 || *v14 == 6 || v15 && *v15 != 7 )
  {
    V_LOCK(v17);
    v19 = logfmt_raw((int)v25, 0x1000u);
    v9 = 0;
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_authorize_base",
      22,
      293,
      100,
      v25);
  }
  free(v8);
  if ( *((_DWORD *)v12 + 1) == -1 )
    return v9;
  v20 = (unsigned int *)v12 + 1;
  __dmb(0xBu);
  do
  {
    v21 = __ldrex(v20);
    v22 = v21 - 1;
  }
  while ( __strex(v22, v20) );
  if ( v22 )
    return v9;
  json_delete(v12);
  return v9;
}
