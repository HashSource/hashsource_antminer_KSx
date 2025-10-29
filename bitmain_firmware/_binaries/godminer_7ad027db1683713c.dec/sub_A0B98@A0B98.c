bool __fastcall sub_A0B98(int a1, int *a2, _DWORD *a3)
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
  _BOOL4 v19; // r4
  const char *v21; // r0
  void *v22; // r0
  int *v23; // r3
  int v24; // lr
  int v25; // r8
  int v26; // r0
  int v27; // lr
  char *v28; // r2
  char *src; // [sp+1Ch] [bp-1128h]
  char *v30; // [sp+20h] [bp-1124h]
  char *s; // [sp+24h] [bp-1120h]
  size_t v32; // [sp+28h] [bp-111Ch]
  size_t v33; // [sp+2Ch] [bp-1118h]
  _BOOL4 v34; // [sp+30h] [bp-1114h]
  _BOOL4 v35; // [sp+34h] [bp-1110h]
  char v36[260]; // [sp+3Ch] [bp-1108h] BYREF
  char v37[4100]; // [sp+140h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (const char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v11);
  v12 = json_array_get(a3, 4u);
  v30 = (char *)json_string_value(v12);
  v13 = json_array_get(a3, 5u);
  v14 = (const char *)json_string_value(v13);
  v15 = json_array_get(a3, 6u);
  src = (char *)json_string_value(v15);
  if ( json_array_get(a3, 7u) )
  {
    v35 = *json_array_get(a3, 7u) == 5;
    v34 = v35;
  }
  else
  {
    LOBYTE(v35) = 0;
    v34 = 0;
  }
  v16 = strlen(v8);
  v33 = strlen(v10);
  v32 = strlen(s);
  v17 = strlen(v30);
  v18 = strlen(v14);
  v19 = v16 + v33 + v32 + v17 + v18 + strlen(src) != 216 || v6 == 0;
  if ( v19 )
  {
    V_LOCK();
    v19 = 0;
    logfmt_raw(v37, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_notify_zec",
      18,
      34,
      100,
      v37);
    return v19;
  }
  if ( a2 == (int *)-456 )
    return v19;
  v21 = (const char *)a2[395];
  if ( v21 && !strcmp(v21, v6) )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change(%s)", a2[395]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_notify_zec",
      18,
      41,
      20,
      v37);
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
  v22 = (void *)a2[395];
  if ( v22 )
  {
    free(v22);
    a2[395] = 0;
  }
  a2[395] = (int)_strdup(v6);
  strncpy((char *)a2 + 332, v8, 0xCu);
  strncpy((char *)a2 + 100, v10, 0x44u);
  v23 = (int *)strncpy((char *)a2 + 356, v14, 0x18u);
  v24 = v23[1];
  v25 = v23[3];
  v26 = v23[2];
  a2[389] = *v23;
  a2[390] = v24;
  a2[391] = v26;
  a2[392] = v25;
  v27 = v23[5];
  a2[393] = v23[4];
  a2[394] = v27;
  strncpy((char *)a2 + 344, src, 0xCu);
  *((_BYTE *)a2 + 444) = v35;
  if ( v34 )
    *((_QWORD *)a2 + 39) = 0;
  snprintf(v36, 0x104u, "%s%s%s%s%s%s%s", v8, v10, s, v30, v14, src, "0000000000000000000000000000000000000000");
  v19 = hex2bin((int)(a2 + 42), (unsigned __int8 *)v36, 128);
  if ( v19 )
  {
    *((_QWORD *)a2 + 57) = *a2;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "%s: Failed to convert header to header_bin, got %s", "stratum_notify_zec", v36);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_notify_zec",
      18,
      59,
      100,
      v37);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
  if ( !opt_protocol )
    return v19;
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "job_id: %s", v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
    180,
    "stratum_notify_zec",
    18,
    68,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "version: %s", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
    180,
    "stratum_notify_zec",
    18,
    69,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "prevhash: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
    180,
    "stratum_notify_zec",
    18,
    70,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "merkle: %s", s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
    180,
    "stratum_notify_zec",
    18,
    71,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "reserved: %s", v30);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
    180,
    "stratum_notify_zec",
    18,
    72,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "ntime: %s", v14);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
    180,
    "stratum_notify_zec",
    18,
    73,
    20,
    v37);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "nbits: %s", src);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
    180,
    "stratum_notify_zec",
    18,
    74,
    20,
    v37);
  V_LOCK();
  v28 = "yes";
  if ( !v34 )
    v28 = "no";
  logfmt_raw(v37, 0x1000u, 0, "clean: %s", v28);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
    180,
    "stratum_notify_zec",
    18,
    75,
    20,
    v37);
  return v19;
}
