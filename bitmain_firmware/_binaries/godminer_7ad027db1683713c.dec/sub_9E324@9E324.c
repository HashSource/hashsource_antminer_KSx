int __fastcall sub_9E324(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  const char *v8; // r0
  char *v9; // r8
  _DWORD *v11; // r0
  size_t v12; // r5
  void *v13; // r0
  size_t v14; // r9
  void *v15; // r0
  void *v16; // r0
  _DWORD *v17; // r0
  char v18[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (const char *)json_string_value(v7);
  v9 = (char *)v8;
  if ( !v8 || (strlen(v8) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      179,
      "stratum_parse_extranonce_ltc",
      28,
      142,
      100,
      v18);
    return 0;
  }
  v11 = json_array_get(a3, a4 + 1);
  v12 = json_integer_value((int)v11);
  if ( v12 - 2 > 0xE )
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Get invalid n2size in parse_extranonce, xn2_size=%d", v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      179,
      "stratum_parse_extranonce_ltc",
      28,
      147,
      60,
      v18);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v13 = *(void **)(a2 + 80);
  if ( v13 )
  {
    free(v13);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v14 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 76) = v14;
  v15 = calloc(1u, v14);
  *(_DWORD *)(a2 + 80) = v15;
  if ( v15 )
  {
    hex2bin((int)v15, (unsigned __int8 *)v9, v14);
    v16 = *(void **)(a2 + 1588);
    *(_DWORD *)(a2 + 84) = v12;
    if ( v16 )
      free(v16);
    v17 = calloc(1u, 0x14u);
    *(_DWORD *)(a2 + 1588) = v17;
    if ( v17 )
    {
      *v17 = v12;
      memset(v17 + 1, 0, v12);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v9, v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        179,
        "stratum_parse_extranonce_ltc",
        28,
        182,
        20,
        v18);
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
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      179,
      "stratum_parse_extranonce_ltc",
      28,
      156,
      100,
      v18);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
