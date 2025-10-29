int __fastcall sub_A57EC(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v5; // r0
  const char *v6; // r0
  unsigned __int8 *v7; // r7
  size_t v8; // r0
  int v9; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0
  void *v14; // r6
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  _BYTE v19[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = json_array_get(a3, a4);
  v6 = (const char *)json_string_value(v5);
  v7 = (unsigned __int8 *)v6;
  if ( !v6 )
  {
    V_LOCK(0);
    v17 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_parse_extranonce_zec",
      28,
      96,
      100,
      v19);
    goto LABEL_4;
  }
  v8 = strlen(v6);
  if ( v8 != 8 )
  {
    V_LOCK(v8);
    v9 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_parse_extranonce_zec",
      28,
      102,
      100,
      v19);
LABEL_4:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v11 = *(void **)(a2 + 80);
  if ( v11 )
    free(v11);
  *(_DWORD *)(a2 + 76) = 4;
  v12 = malloc(4u);
  *(_DWORD *)(a2 + 80) = v12;
  if ( !v12 )
  {
    V_LOCK(0);
    v18 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_parse_extranonce_zec",
      28,
      112,
      100,
      v19);
    goto LABEL_4;
  }
  hex2bin((int)v12, v7, 4);
  v13 = *(void **)(a2 + 1588);
  *(_DWORD *)(a2 + 84) = 2;
  if ( v13 )
    free(v13);
  v14 = calloc(1u, 0xB28u);
  *(_DWORD *)(a2 + 1588) = v14;
  if ( v14 )
  {
    v15 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK(v15);
    v16 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_parse_extranonce_zec",
      28,
      125,
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
