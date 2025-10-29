int __fastcall sub_9D4F4(int a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  char *v6; // r9
  _DWORD *v7; // r0
  char *v8; // r0
  char *v9; // r8
  _BOOL4 v10; // r3
  int v11; // r0
  size_t v12; // r0
  size_t v13; // r7
  _BOOL4 v14; // r4
  int v15; // r0
  int v16; // r0
  int v17; // r3
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  const char *v26; // r0
  size_t v27; // r0
  int v28; // r7
  int v29; // r1
  void *v30; // r0
  int v31; // r7
  int v32; // r11
  int v33; // t1
  char *v34; // r11
  int v35; // t1
  int v36; // r0
  int v37; // r0
  char *v38; // r4
  int v39; // r0
  int v40; // t1
  char *v41; // r0
  int v42; // r0
  void *v43; // r0
  char *v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  char *s2; // [sp+14h] [bp-10A8h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-10A4h]
  size_t v53; // [sp+1Ch] [bp-10A0h]
  int v54; // [sp+1Ch] [bp-10A0h]
  _WORD *v55; // [sp+20h] [bp-109Ch]
  char s[4]; // [sp+28h] [bp-1094h] BYREF
  char src[4]; // [sp+2Ch] [bp-1090h] BYREF
  __int64 v58; // [sp+30h] [bp-108Ch] BYREF
  char v59[64]; // [sp+38h] [bp-1084h] BYREF
  char v60[64]; // [sp+78h] [bp-1044h] BYREF
  _BYTE v61[4100]; // [sp+B8h] [bp-1004h] BYREF

  v4 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v4);
  v5 = json_array_get(a3, 1u);
  v6 = (char *)json_string_value(v5);
  v7 = json_array_get(a3, 2u);
  v8 = (char *)json_string_value(v7);
  v9 = v8;
  v10 = v8 == 0;
  if ( !s2 )
    v10 = 1;
  if ( !v6 )
    v10 = 1;
  if ( v10 )
  {
    V_LOCK(v8);
    v11 = logfmt_raw((int)v61, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_notify_eth_2282",
      23,
      908,
      100,
      v61);
  }
  v53 = strlen(v6);
  v12 = strlen(v9);
  mutex = (pthread_mutex_t *)(a2 + 1592);
  v13 = v12;
  v14 = v12 == 0;
  if ( !v53 )
    v14 = 1;
  if ( v14 )
  {
    V_LOCK(v12);
    v15 = logfmt_raw((int)v61, 0x1000u);
    V_UNLOCK(v15);
    v16 = g_zc;
    v17 = 914;
LABEL_11:
    zlog(
      v16,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_notify_eth_2282",
      23,
      v17,
      100,
      v61);
    pthread_mutex_unlock(mutex);
    return 0;
  }
  V_LOCK(v12);
  v19 = logfmt_raw((int)v61, 0x1000u);
  V_UNLOCK(v19);
  v20 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
          190,
          "stratum_notify_eth_2282",
          23,
          919,
          40,
          v61);
  V_LOCK(v20);
  v21 = logfmt_raw((int)v61, 0x1000u);
  V_UNLOCK(v21);
  v22 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
          190,
          "stratum_notify_eth_2282",
          23,
          920,
          40,
          v61);
  V_LOCK(v22);
  v23 = logfmt_raw((int)v61, 0x1000u);
  V_UNLOCK(v23);
  v24 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
          190,
          "stratum_notify_eth_2282",
          23,
          921,
          40,
          v61);
  V_LOCK(v24);
  v25 = logfmt_raw((int)v61, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
    190,
    "stratum_notify_eth_2282",
    23,
    922,
    40,
    v61);
  if ( a2 != -456 )
  {
    v26 = *(const char **)(a2 + 1580);
    if ( v26 && !strcmp(v26, s2) )
    {
      V_LOCK(0);
      v47 = logfmt_raw((int)v61, 0x1000u);
      V_UNLOCK(v47);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        190,
        "stratum_notify_eth_2282",
        23,
        928,
        80,
        v61);
    }
    v27 = strlen(s2);
    if ( v27 > 0x1F )
    {
      V_LOCK(v27);
      strlen(s2);
      v48 = logfmt_raw((int)v61, 0x1000u);
      V_UNLOCK(v48);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        190,
        "stratum_notify_eth_2282",
        23,
        931,
        80,
        v61);
    }
    v28 = v13 >> 1;
    pthread_mutex_lock(mutex);
    *(_BYTE *)(a2 + 444) = 1;
    if ( !hex2bin(a2 + 464, (unsigned __int8 *)v9, v28) )
    {
      V_LOCK(0);
      v49 = logfmt_raw((int)v61, 0x1000u);
      V_UNLOCK(v49);
      v16 = g_zc;
      v17 = 940;
      goto LABEL_11;
    }
    v55 = *(_WORD **)(a2 + 1588);
    if ( !v55 )
    {
      v55 = calloc(1u, 0x6Bu);
      *(_DWORD *)(a2 + 1588) = v55;
      if ( !v55 )
      {
        printf("invalid pointer(%s)!\n", "work->private");
        return 0;
      }
    }
    v54 = v53 >> 1;
    if ( !hex2bin((int)v55, (unsigned __int8 *)v6, v54) )
    {
      V_LOCK(0);
      v46 = logfmt_raw((int)v61, 0x1000u);
      V_UNLOCK(v46);
      v16 = g_zc;
      v17 = 952;
      goto LABEL_11;
    }
    *(_DWORD *)(a2 + 1536) = get_epoch_number_eth_2282(v55, v29);
    v55[52] = 0;
    *((_BYTE *)v55 + 106) = 0;
    v30 = memcpy(v55 + 52, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    *(_WORD *)s = 0;
    memset(v59, 0, sizeof(v59));
    memset(v60, 0, sizeof(v60));
    if ( v28 )
    {
      v31 = a2 + 463 + v28;
      v32 = a2 + 463;
      do
      {
        v33 = *(unsigned __int8 *)++v32;
        sprintf(s, "%02x", v33);
        v30 = strcat(v59, s);
      }
      while ( v32 != v31 );
    }
    if ( v54 )
    {
      v34 = (char *)v55 - 1;
      do
      {
        v35 = (unsigned __int8)*++v34;
        sprintf(s, "%02x", v35);
        v30 = strcat(v60, s);
      }
      while ( (char *)v55 + v54 - 1 != v34 );
    }
    V_LOCK(v30);
    v36 = logfmt_raw((int)v61, 0x1000u);
    V_UNLOCK(v36);
    v37 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
            190,
            "stratum_notify_eth_2282",
            23,
            970,
            40,
            v61);
    v38 = (char *)v55 + 103;
    V_LOCK(v37);
    v39 = logfmt_raw((int)v61, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_notify_eth_2282",
      23,
      971,
      40,
      v61);
    *(_WORD *)src = 0;
    v58 = 0;
    do
    {
      v40 = (unsigned __int8)*++v38;
      sprintf(src, "%02x", v40);
      v41 = strcat((char *)&v58, src);
    }
    while ( v55 + 53 != (_WORD *)v38 );
    V_LOCK(v41);
    v42 = logfmt_raw((int)v61, 0x1000u);
    V_UNLOCK(v42);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_notify_eth_2282",
      23,
      979,
      40,
      v61);
    v43 = *(void **)(a2 + 1580);
    if ( v43 )
      free(v43);
    v44 = _strdup(s2);
    *(_DWORD *)(a2 + 1580) = v44;
    V_LOCK(v44);
    v45 = logfmt_raw((int)v61, 0x1000u);
    V_UNLOCK(v45);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_notify_eth_2282",
      23,
      985,
      40,
      v61);
  }
  pthread_mutex_unlock(mutex);
  return 1;
}
