int __fastcall sub_A0E08(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r0
  char *v9; // r8
  int v10; // r0
  _DWORD *v12; // r0
  int v13; // r0
  size_t v14; // r6
  void *v15; // r0
  size_t v16; // r10
  void *v17; // r0
  void *v18; // r0
  _DWORD *v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  _BYTE v24[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  v9 = v8;
  if ( !v8 || (v8 = (char *)strlen(v8), ((unsigned __int8)v8 & 1) != 0) )
  {
    V_LOCK(v8);
    v10 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_kda/frontend_kda.c",
      185,
      "stratum_parse_extranonce_kda",
      28,
      65,
      100,
      v24);
    return 0;
  }
  v12 = json_array_get(a3, a4 + 1);
  v13 = json_integer_value((int)v12);
  v14 = v13 - 5;
  if ( (unsigned int)(v13 - 5) > 3 )
  {
    V_LOCK(v13);
    v22 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_kda/frontend_kda.c",
      185,
      "stratum_parse_extranonce_kda",
      28,
      71,
      100,
      v24);
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
    V_LOCK(0);
    v23 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_kda/frontend_kda.c",
      185,
      "stratum_parse_extranonce_kda",
      28,
      79,
      100,
      v24);
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
    *(_DWORD *)(a2 + 84) = v14;
    *v19 = v14;
    memset(v19 + 1, 0, v14);
    v20 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK(v20);
    v21 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_kda/frontend_kda.c",
      185,
      "stratum_parse_extranonce_kda",
      28,
      94,
      20,
      v24);
    return 1;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
