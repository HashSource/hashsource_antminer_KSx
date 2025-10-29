int __fastcall sub_A0914(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v5; // r0
  const char *v6; // r0
  unsigned __int8 *v7; // r7
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r6
  char v13[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = json_array_get(a3, a4);
  v6 = (const char *)json_string_value(v5);
  v7 = (unsigned __int8 *)v6;
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_parse_extranonce_zec",
      28,
      96,
      100,
      v13);
    goto LABEL_4;
  }
  if ( strlen(v6) != 8 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "extranonce1 len is not 8");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_parse_extranonce_zec",
      28,
      102,
      100,
      v13);
LABEL_4:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v9 = *(void **)(a2 + 80);
  if ( v9 )
    free(v9);
  *(_DWORD *)(a2 + 76) = 4;
  v10 = malloc(4u);
  *(_DWORD *)(a2 + 80) = v10;
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "Failed to mlloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_parse_extranonce_zec",
      28,
      112,
      100,
      v13);
    goto LABEL_4;
  }
  hex2bin((int)v10, v7, 4);
  v11 = *(void **)(a2 + 1588);
  *(_DWORD *)(a2 + 84) = 2;
  if ( v11 )
    free(v11);
  v12 = calloc(1u, 0xB28u);
  *(_DWORD *)(a2 + 1588) = v12;
  if ( v12 )
  {
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v7, *(_DWORD *)(a2 + 84));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_parse_extranonce_zec",
      28,
      125,
      20,
      v13);
    return 1;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
