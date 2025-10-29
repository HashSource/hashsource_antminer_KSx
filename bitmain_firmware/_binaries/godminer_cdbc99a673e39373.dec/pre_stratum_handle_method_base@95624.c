const char *__fastcall pre_stratum_handle_method_base(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  _DWORD *v9; // r0
  const char *v10; // r4
  int v11; // r10
  int v12; // r0
  _BYTE *v13; // r1
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  int v18; // r0
  int v19; // r0
  int v20; // r0
  char v21[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v22[4096]; // [sp+110h] [bp-1000h] BYREF

  v7 = (_DWORD *)json_loads(a3, 0, v21);
  v8 = v7;
  if ( !v7 )
  {
    V_LOCK(0);
    v18 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "pre_stratum_handle_method_base",
      30,
      123,
      100,
      v22);
    return 0;
  }
  v9 = (_DWORD *)json_object_get(v7, "method");
  v10 = (const char *)json_string_value(v9);
  if ( !v10 )
  {
LABEL_8:
    if ( v8[1] != -1 )
      goto LABEL_9;
    return v10;
  }
  v11 = json_object_get(v8, "params");
  if ( !v11 )
    v11 = json_object_get(v8, "result");
  json_object_get(v8, "id");
  if ( strcasecmp(v10, "mining.notify") )
  {
    if ( !strcasecmp(v10, "mining.set_difficulty") || (v19 = strcasecmp(v10, "mining.set_target")) == 0 )
    {
      *a4 = "set diff or target";
      v10 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 56))(a1, a2, v11);
    }
    else
    {
      V_LOCK(v19);
      v20 = logfmt_raw((int)v22, 0x1000u);
      v10 = 0;
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_base.c",
        168,
        "pre_stratum_handle_method_base",
        30,
        156,
        80,
        v22);
    }
    goto LABEL_8;
  }
  v12 = (*(int (__fastcall **)(int, int, int))(a1 + 48))(a1, a2, v11);
  v13 = (_BYTE *)(a2 + 1916);
  v10 = (const char *)v12;
  if ( v12 )
  {
    *a4 = "notify";
    pool_tset(a2, v13, 1);
    goto LABEL_8;
  }
  pool_tclear(a2, v13, 0);
  if ( v8[1] == -1 )
    return v10;
LABEL_9:
  v14 = v8 + 1;
  __dmb(0xBu);
  do
  {
    v15 = __ldrex(v14);
    v16 = v15 - 1;
  }
  while ( __strex(v16, v14) );
  if ( v16 )
    return v10;
  json_delete(v8);
  return v10;
}
