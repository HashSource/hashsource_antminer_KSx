int __fastcall sub_95EBC(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r5
  size_t v12; // r0
  void *v14; // r0
  size_t v15; // r6
  void *v16; // r0
  void *v17; // r0
  _DWORD *v18; // r0
  char v19[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      73,
      100,
      v19);
    return 0;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "Failed to get extranonce2_size");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      78,
      100,
      v19);
    return 0;
  }
  if ( v10 - 4 > 0xB )
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      82,
      100,
      v19);
    return 0;
  }
  if ( v10 + (strlen(v8) >> 1) != 16 )
  {
    V_LOCK();
    v12 = strlen(v8);
    logfmt_raw(v19, 0x1000u, 0, "n1size %d, n2size %d, n1size + n2size != %d, in parse_extranonce", v12 >> 1, v11, 16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      86,
      100,
      v19);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v14 = *(void **)(a2 + 80);
  if ( v14 )
  {
    free(v14);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v15 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 76) = v15;
  v16 = calloc(1u, v15);
  *(_DWORD *)(a2 + 80) = v16;
  if ( v16 )
  {
    hex2bin((int)v16, (unsigned __int8 *)v8, v15);
    memcpy((void *)(a2 + 496), *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    v17 = *(void **)(a2 + 1588);
    *(_DWORD *)(a2 + 84) = v11;
    if ( v17 )
      free(v17);
    v18 = calloc(1u, 0x14u);
    *(_DWORD *)(a2 + 1588) = v18;
    if ( v18 )
    {
      *v18 = v11;
      memset(v18 + 1, 0, v11);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
        180,
        "stratum_parse_extranonce_ckb",
        28,
        121,
        20,
        v19);
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
    logfmt_raw(v19, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      180,
      "stratum_parse_extranonce_ckb",
      28,
      95,
      100,
      v19);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
