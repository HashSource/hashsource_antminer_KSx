int __fastcall sub_9AF10(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v5; // r0
  char *v6; // r4
  void *v7; // r0
  size_t v8; // r7
  void *v9; // r0
  _WORD *v10; // r4
  int v12; // r0
  int v13; // r0
  _BYTE v14[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = json_array_get(a3, a4);
  v6 = (char *)json_string_value(v5);
  if ( v6 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    v7 = *(void **)(a2 + 80);
    if ( v7 )
    {
      free(v7);
      *(_DWORD *)(a2 + 80) = 0;
    }
    v8 = strlen(v6) >> 1;
    *(_DWORD *)(a2 + 76) = v8;
    v9 = calloc(1u, v8);
    *(_DWORD *)(a2 + 80) = v9;
    if ( v9 )
    {
      hex2bin((int)v9, (unsigned __int8 *)v6, v8);
      v10 = *(_WORD **)(a2 + 1588);
      if ( v10 || (v10 = calloc(1u, 0x6Bu), (*(_DWORD *)(a2 + 1588) = v10) != 0) )
      {
        v10[52] = 0;
        *((_BYTE *)v10 + 106) = 0;
        memcpy(v10 + 52, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
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
      v13 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
        180,
        "stratum_parse_extranonce_eth",
        28,
        804,
        100,
        v14);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v12 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      180,
      "stratum_parse_extranonce_eth",
      28,
      794,
      100,
      v14);
    return 0;
  }
}
