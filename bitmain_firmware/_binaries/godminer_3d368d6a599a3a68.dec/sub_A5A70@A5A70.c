bool __fastcall sub_A5A70(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r10
  _DWORD *v7; // r0
  const char *v8; // r7
  _DWORD *v9; // r0
  const char *v10; // r6
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  const char *v14; // r5
  _DWORD *v15; // r0
  size_t v16; // r8
  size_t v17; // r4
  size_t v18; // r11
  size_t v19; // r0
  _BOOL4 v20; // r4
  int v21; // r0
  const char *v23; // r0
  int v24; // r0
  void *v25; // r0
  char *v26; // r3
  int v27; // lr
  int v28; // r8
  int v29; // r0
  int v30; // lr
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  char *src; // [sp+1Ch] [bp-1128h]
  char *v49; // [sp+20h] [bp-1124h]
  char *s; // [sp+24h] [bp-1120h]
  size_t v51; // [sp+28h] [bp-111Ch]
  size_t v52; // [sp+2Ch] [bp-1118h]
  _BOOL4 v53; // [sp+30h] [bp-1114h]
  _BOOL4 v54; // [sp+34h] [bp-1110h]
  char v55[260]; // [sp+3Ch] [bp-1108h] BYREF
  _BYTE v56[4100]; // [sp+140h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (const char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v11);
  v12 = json_array_get(a3, 4u);
  v49 = (char *)json_string_value(v12);
  v13 = json_array_get(a3, 5u);
  v14 = (const char *)json_string_value(v13);
  v15 = json_array_get(a3, 6u);
  src = (char *)json_string_value(v15);
  if ( json_array_get(a3, 7u) )
  {
    v54 = *json_array_get(a3, 7u) == 5;
    v53 = v54;
  }
  else
  {
    LOBYTE(v54) = 0;
    v53 = 0;
  }
  v16 = strlen(v8);
  v52 = strlen(v10);
  v51 = strlen(s);
  v17 = strlen(v49);
  v18 = strlen(v14);
  v19 = strlen(src);
  v20 = v16 + v52 + v51 + v17 + v18 + v19 != 216 || v6 == 0;
  if ( v20 )
  {
    V_LOCK(v19);
    v20 = 0;
    v21 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_notify_zec",
      18,
      34,
      100,
      v56);
    return v20;
  }
  if ( a2 == (int *)-456 )
    return v20;
  v23 = (const char *)a2[395];
  if ( v23 && !strcmp(v23, v6) )
  {
    V_LOCK(0);
    v24 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_notify_zec",
      18,
      41,
      20,
      v56);
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
  v25 = (void *)a2[395];
  if ( v25 )
  {
    free(v25);
    a2[395] = 0;
  }
  a2[395] = (int)_strdup(v6);
  strncpy((char *)a2 + 332, v8, 0xCu);
  strncpy((char *)a2 + 100, v10, 0x44u);
  v26 = strncpy((char *)a2 + 356, v14, 0x18u);
  v27 = *((_DWORD *)v26 + 1);
  v28 = *((_DWORD *)v26 + 3);
  v29 = *((_DWORD *)v26 + 2);
  a2[389] = *(_DWORD *)v26;
  a2[390] = v27;
  a2[391] = v29;
  a2[392] = v28;
  v30 = *((_DWORD *)v26 + 5);
  a2[393] = *((_DWORD *)v26 + 4);
  a2[394] = v30;
  strncpy((char *)a2 + 344, src, 0xCu);
  *((_BYTE *)a2 + 444) = v54;
  if ( v53 )
    *((_QWORD *)a2 + 39) = 0;
  snprintf(v55, 0x104u, "%s%s%s%s%s%s%s", v8, v10, s, v49, v14, src, "0000000000000000000000000000000000000000");
  v20 = hex2bin((int)(a2 + 42), (unsigned __int8 *)v55, 128);
  if ( v20 )
  {
    *((_QWORD *)a2 + 57) = *a2;
  }
  else
  {
    V_LOCK(0);
    v47 = logfmt_raw((int)v56, 0x1000u);
    V_UNLOCK(v47);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_notify_zec",
      18,
      59,
      100,
      v56);
  }
  v31 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
  if ( !opt_protocol )
    return v20;
  V_LOCK(v31);
  v32 = logfmt_raw((int)v56, 0x1000u);
  V_UNLOCK(v32);
  v33 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
          185,
          "stratum_notify_zec",
          18,
          68,
          20,
          v56);
  V_LOCK(v33);
  v34 = logfmt_raw((int)v56, 0x1000u);
  V_UNLOCK(v34);
  v35 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
          185,
          "stratum_notify_zec",
          18,
          69,
          20,
          v56);
  V_LOCK(v35);
  v36 = logfmt_raw((int)v56, 0x1000u);
  V_UNLOCK(v36);
  v37 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
          185,
          "stratum_notify_zec",
          18,
          70,
          20,
          v56);
  V_LOCK(v37);
  v38 = logfmt_raw((int)v56, 0x1000u);
  V_UNLOCK(v38);
  v39 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
          185,
          "stratum_notify_zec",
          18,
          71,
          20,
          v56);
  V_LOCK(v39);
  v40 = logfmt_raw((int)v56, 0x1000u);
  V_UNLOCK(v40);
  v41 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
          185,
          "stratum_notify_zec",
          18,
          72,
          20,
          v56);
  V_LOCK(v41);
  v42 = logfmt_raw((int)v56, 0x1000u);
  V_UNLOCK(v42);
  v43 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
          185,
          "stratum_notify_zec",
          18,
          73,
          20,
          v56);
  V_LOCK(v43);
  v44 = logfmt_raw((int)v56, 0x1000u);
  V_UNLOCK(v44);
  v45 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
          185,
          "stratum_notify_zec",
          18,
          74,
          20,
          v56);
  V_LOCK(v45);
  v46 = logfmt_raw((int)v56, 0x1000u);
  V_UNLOCK(v46);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
    185,
    "stratum_notify_zec",
    18,
    75,
    20,
    v56);
  return v20;
}
