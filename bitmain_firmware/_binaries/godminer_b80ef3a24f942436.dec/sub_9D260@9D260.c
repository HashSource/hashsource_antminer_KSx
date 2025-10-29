int __fastcall sub_9D260(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v5; // r0
  char *v6; // r4
  void *v7; // r0
  size_t v8; // r6
  void *v9; // r0
  _WORD *v10; // r4
  char *v11; // r6
  char *v12; // r4
  int v13; // t1
  char *v14; // r0
  int v15; // r0
  int v17; // r0
  int v18; // r0
  char s[4]; // [sp+14h] [bp-1010h] BYREF
  __int64 v20; // [sp+18h] [bp-100Ch] BYREF
  _BYTE v21[4100]; // [sp+20h] [bp-1004h] BYREF

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
        v11 = (char *)v10 + 103;
        memcpy(v10 + 52, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
        v12 = (char *)(v10 + 53);
        *(_WORD *)s = 0;
        v20 = 0;
        do
        {
          v13 = (unsigned __int8)*++v11;
          sprintf(s, "%02x", v13);
          v14 = strcat((char *)&v20, s);
        }
        while ( v11 != v12 );
        V_LOCK(v14);
        v15 = logfmt_raw((int)v21, 0x1000u);
        V_UNLOCK(v15);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
          190,
          "stratum_parse_extranonce_eth_2282",
          33,
          825,
          40,
          v21);
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
      v18 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        190,
        "stratum_parse_extranonce_eth_2282",
        33,
        806,
        100,
        v21);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v17 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_parse_extranonce_eth_2282",
      33,
      796,
      100,
      v21);
    return 0;
  }
}
