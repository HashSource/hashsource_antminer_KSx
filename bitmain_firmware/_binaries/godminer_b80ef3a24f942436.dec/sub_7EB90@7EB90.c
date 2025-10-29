int __fastcall sub_7EB90(_DWORD *a1, int a2)
{
  _BOOL4 v2; // r4
  _DWORD *v4; // r7
  _DWORD *v5; // r5
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  char *v9; // r0
  char *v10; // r0
  _DWORD *v11; // r0
  int v13; // r0
  _BYTE v14[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a2 )
    v2 = a1 == 0;
  else
    v2 = 1;
  if ( v2 )
  {
    V_LOCK(a1);
    v13 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_version_old",
      15,
      1705,
      100,
      v14);
    return -2147483646;
  }
  else
  {
    sub_7E9FC((int)a1, 1, 22, *(_DWORD *)(a2 + 8));
    v4 = json_array();
    v5 = json_object();
    v6 = BUFX_strdup("2.12");
    json_object_set_new(v5, "BMMiner", v6);
    v7 = BUFX_strdup("3.1");
    json_object_set_new(v5, "API", v7);
    v8 = BUFX_strdup(g_miner_version);
    json_object_set_new(v5, "Miner", v8);
    v9 = BUFX_strdup(g_miner_compiletime);
    json_object_set_new(v5, "CompileTime", v9);
    v10 = BUFX_strdup(g_miner_type);
    json_object_set_new(v5, "Type", v10);
    json_array_append_new(v4, v5);
    json_object_set_new(a1, "VERSION", v4);
    v11 = json_integer(1);
    json_object_set_new(a1, "id", v11);
    return 0;
  }
}
