int __fastcall sub_9DC30(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  const char *v8; // r0
  char *v9; // r8
  _DWORD *v11; // r0
  int v12; // r0
  size_t v13; // r6
  int v14; // r7
  void *v15; // r0
  size_t v16; // r10
  void *v17; // r0
  void *v18; // r0
  _DWORD *v19; // r0
  char v20[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (const char *)json_string_value(v7);
  v9 = (char *)v8;
  if ( !v8 || (strlen(v8) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_kda/frontend_kda.c",
      180,
      "stratum_parse_extranonce_kda",
      28,
      65,
      100,
      v20);
    return 0;
  }
  v11 = json_array_get(a3, a4 + 1);
  v12 = json_integer_value((int)v11);
  v13 = v12 - 5;
  v14 = v12;
  if ( (unsigned int)(v12 - 5) > 3 )
  {
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "Get invalid n2size in parse_extranonce, xn2_size=%d", v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_kda/frontend_kda.c",
      180,
      "stratum_parse_extranonce_kda",
      28,
      71,
      100,
      v20);
    return 0;
  }
  v15 = *(void **)(a2 + 80);
  if ( v15 )
  {
    free(v15);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v16 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 76) = v16;
  v17 = calloc(1u, v16);
  *(_DWORD *)(a2 + 80) = v17;
  if ( !v17 )
  {
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_kda/frontend_kda.c",
      180,
      "stratum_parse_extranonce_kda",
      28,
      79,
      100,
      v20);
    return 0;
  }
  hex2bin((int)v17, (unsigned __int8 *)v9, v16);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v18 = *(void **)(a2 + 1588);
  if ( v18 )
    free(v18);
  v19 = calloc(1u, 0x14u);
  *(_DWORD *)(a2 + 1588) = v19;
  if ( v19 )
  {
    *(_DWORD *)(a2 + 84) = v13;
    *v19 = v13;
    memset(v19 + 1, 0, v13);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v9, v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_kda/frontend_kda.c",
      180,
      "stratum_parse_extranonce_kda",
      28,
      94,
      20,
      v20);
    return 1;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
