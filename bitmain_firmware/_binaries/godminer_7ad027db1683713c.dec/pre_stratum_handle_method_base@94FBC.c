const char *__fastcall pre_stratum_handle_method_base(int a1, int a2, double *a3, _DWORD *a4)
{
  double *v8; // r0
  double *v9; // r5
  _DWORD *v10; // r0
  const char *v11; // r4
  int v12; // r10
  int v13; // r0
  _BYTE *v14; // r1
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  char v19[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v20[160]; // [sp+70h] [bp-10A0h] BYREF
  char v21[4096]; // [sp+110h] [bp-1000h] BYREF

  v8 = json_loads(a3, 0, v19);
  v9 = v8;
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v19, v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "pre_stratum_handle_method_base",
      30,
      123,
      100,
      v21);
    return 0;
  }
  v10 = (_DWORD *)json_object_get(v8, "method");
  v11 = (const char *)json_string_value(v10);
  if ( !v11 )
  {
LABEL_8:
    if ( *((_DWORD *)v9 + 1) != -1 )
      goto LABEL_9;
    return v11;
  }
  v12 = json_object_get(v9, "params");
  if ( !v12 )
    v12 = json_object_get(v9, "result");
  json_object_get(v9, "id");
  if ( strcasecmp(v11, "mining.notify") )
  {
    if ( !strcasecmp(v11, "mining.set_difficulty") || !strcasecmp(v11, "mining.set_target") )
    {
      *a4 = "set diff or target";
      v11 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 56))(a1, a2, v12);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "unknown stratum method %s!", a3);
      v11 = 0;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_base.c",
        168,
        "pre_stratum_handle_method_base",
        30,
        156,
        80,
        v21);
    }
    goto LABEL_8;
  }
  v13 = (*(int (__fastcall **)(int, int, int))(a1 + 48))(a1, a2, v12);
  v14 = (_BYTE *)(a2 + 1916);
  v11 = (const char *)v13;
  if ( v13 )
  {
    *a4 = "notify";
    pool_tset(a2, v14, 1);
    goto LABEL_8;
  }
  pool_tclear(a2, v14, 0);
  if ( *((_DWORD *)v9 + 1) == -1 )
    return v11;
LABEL_9:
  v15 = (unsigned int *)v9 + 1;
  __dmb(0xBu);
  do
  {
    v16 = __ldrex(v15);
    v17 = v16 - 1;
  }
  while ( __strex(v17, v15) );
  if ( v17 )
    return v11;
  json_delete(v9);
  return v11;
}
