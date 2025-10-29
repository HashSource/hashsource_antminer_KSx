int __fastcall sub_96524(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r5
  size_t v12; // r0
  int v13; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  void *v18; // r0
  size_t v19; // r6
  void *v20; // r0
  void *v21; // r0
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  _BYTE v26[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v15 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      73,
      100,
      v26);
    return 0;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v16 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      78,
      100,
      v26);
    return 0;
  }
  if ( v10 - 4 > 0xB )
  {
    V_LOCK(v10);
    v17 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      82,
      100,
      v26);
    return 0;
  }
  v12 = v10 + (strlen(v8) >> 1);
  if ( v12 != 16 )
  {
    V_LOCK(v12);
    strlen(v8);
    v13 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      86,
      100,
      v26);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v18 = *(void **)(a2 + 80);
  if ( v18 )
  {
    free(v18);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v19 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 76) = v19;
  v20 = calloc(1u, v19);
  *(_DWORD *)(a2 + 80) = v20;
  if ( v20 )
  {
    hex2bin((int)v20, (unsigned __int8 *)v8, v19);
    memcpy((void *)(a2 + 496), *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    v21 = *(void **)(a2 + 1588);
    *(_DWORD *)(a2 + 84) = v11;
    if ( v21 )
      free(v21);
    v22 = calloc(1u, 0x14u);
    *(_DWORD *)(a2 + 1588) = v22;
    if ( v22 )
    {
      *v22 = v11;
      memset(v22 + 1, 0, v11);
      v23 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK(v23);
      v24 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
        180,
        "stratum_parse_extranonce_ckb",
        28,
        121,
        20,
        v26);
      return 1;
    }
    else
    {
      printf("invalid pointer(%s)!\n", "work->private");
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v25 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      95,
      100,
      v26);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
