int __fastcall sub_97998(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r6
  void *v12; // r0
  size_t v13; // r7
  void *v14; // r0
  void *v15; // r0
  _DWORD *v16; // r0
  size_t v17; // r2
  char v19[4096]; // [sp+10h] [bp-1000h] BYREF

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
      "/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      180,
      "stratum_parse_extranonce_dcr",
      28,
      251,
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
      "/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      180,
      "stratum_parse_extranonce_dcr",
      28,
      256,
      100,
      v19);
    return 0;
  }
  if ( (unsigned int)(v10 - 2) > 0xE )
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      180,
      "stratum_parse_extranonce_dcr",
      28,
      260,
      100,
      v19);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v12 = *(void **)(a2 + 80);
  if ( v12 )
  {
    free(v12);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v13 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 76) = v13;
  v14 = calloc(1u, v13);
  *(_DWORD *)(a2 + 80) = v14;
  if ( v14 )
  {
    hex2bin((int)v14, (unsigned __int8 *)v8, v13);
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "save xnonce1 into work->xnonce2 to submit");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      180,
      "stratum_parse_extranonce_dcr",
      28,
      276,
      20,
      v19);
    v15 = *(void **)(a2 + 1588);
    if ( v15 )
      free(v15);
    v16 = calloc(1u, 0x10u);
    *(_DWORD *)(a2 + 1588) = v16;
    if ( v16 )
    {
      v17 = *(_DWORD *)(a2 + 76);
      *v16 = v17;
      memset(v16 + 1, 0, v17);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        180,
        "stratum_parse_extranonce_dcr",
        28,
        285,
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
      "/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      180,
      "stratum_parse_extranonce_dcr",
      28,
      269,
      100,
      v19);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
