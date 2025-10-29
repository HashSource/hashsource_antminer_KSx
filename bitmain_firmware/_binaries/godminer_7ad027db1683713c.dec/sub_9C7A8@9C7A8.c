int __fastcall sub_9C7A8(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  char *v6; // r5
  unsigned int v7; // r4
  double *v8; // r6
  const char *v9; // r9
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  __int64 v13; // r6
  __int64 v14; // t1
  int v15; // r4
  const char *v17; // r0
  unsigned __int64 v18; // r6
  char *v19; // r0
  int *v20; // r2
  unsigned __int64 *v21; // r3
  unsigned int v22; // t1
  unsigned int v23; // r1
  int v24; // r12
  int v25; // r0
  int v26; // r10
  int v27; // r1
  int v28; // r12
  int v29; // r0
  int v30; // r1
  size_t v31; // r10
  size_t v32; // r0
  unsigned __int64 v33; // [sp+10h] [bp-102Ch] BYREF
  double v34; // [sp+18h] [bp-1024h] BYREF
  int v35; // [sp+20h] [bp-101Ch]
  int v36; // [sp+24h] [bp-1018h]
  int v37; // [sp+28h] [bp-1014h]
  int v38; // [sp+2Ch] [bp-1010h]
  int v39; // [sp+30h] [bp-100Ch]
  int v40; // [sp+34h] [bp-1008h]
  char v41[4100]; // [sp+38h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (char *)&v34;
  v7 = 0;
  v8 = &v34;
  v9 = (const char *)json_string_value(v5);
  do
  {
    v10 = json_array_get(a3, 1u);
    v11 = json_array_get(v10, v7++);
    *(_QWORD *)v8++ = json_integer_value((int)v11);
  }
  while ( v7 != 4 );
  v12 = json_array_get(a3, 2u);
  v13 = json_integer_value((int)v12);
  v33 = v13;
  do
  {
    v14 = *(_QWORD *)v6;
    v6 += 8;
    if ( !v14 )
    {
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "Stratum notify: invalid parameters");
      v15 = 0;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_notify_kas",
        18,
        381,
        100,
        v41);
      return v15;
    }
  }
  while ( v6 != v41 );
  v15 = valid_ascii(v9) ^ 1;
  if ( !v13 )
    LOBYTE(v15) = v15 | 1;
  v15 = (unsigned __int8)v15;
  if ( (_BYTE)v15 )
  {
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, "Stratum notify: invalid parameters");
    v15 = 0;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
      180,
      "stratum_notify_kas",
      18,
      387,
      100,
      v41);
  }
  else if ( a2 != (int *)-456 )
  {
    v17 = (const char *)a2[395];
    if ( v17 && !strcmp(v17, v9) )
    {
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_notify_kas",
        18,
        395,
        80,
        v41);
    }
    if ( strlen(v9) > 0x1F )
    {
      V_LOCK();
      v32 = strlen(v9);
      logfmt_raw(v41, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v9, v32);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_notify_kas",
        18,
        399,
        80,
        v41);
    }
    v18 = _byteswap_uint64(__PAIR64__(v13, HIDWORD(v13)));
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    v19 = _strdup(v9);
    v33 = __PAIR64__(v18, HIDWORD(v18));
    v20 = a2 + 118;
    v21 = &v33;
    a2[395] = (int)v19;
    *((_QWORD *)a2 + 58) = v33;
    do
    {
      v22 = *((_DWORD *)v21++ + 2);
      v20 += 2;
      v23 = *((_DWORD *)v21 + 1);
      *((_DWORD *)v21 + 1) = bswap32(v22);
      v24 = *((_DWORD *)v21 + 1);
      *(_DWORD *)v21 = bswap32(v23);
      v25 = *((_DWORD *)v21 + 2);
      v26 = *(_DWORD *)v21;
      v27 = *((_DWORD *)v21 + 3);
      *(v20 - 1) = v24;
      *(v20 - 2) = v26;
      *v20 = v25;
      v20[1] = v27;
      v28 = *((_DWORD *)v21 + 5);
      v29 = *((_DWORD *)v21 + 6);
      v30 = *((_DWORD *)v21 + 7);
      v20[2] = *((_DWORD *)v21 + 4);
      v20[3] = v28;
      v20[4] = v29;
      v20[5] = v30;
    }
    while ( v20 != a2 + 126 );
    v31 = a2[19];
    memcpy(v20, (const void *)a2[20], v31);
    memset((char *)a2 + v31 + 504, 0, 8 - v31);
    *((_QWORD *)a2 + 57) = *a2;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    v15 = (unsigned __int8)opt_protocol;
    if ( opt_protocol )
    {
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "job_id: %s", v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_notify_kas",
        18,
        427,
        20,
        v41);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "header0: %llx", v34);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_notify_kas",
        18,
        428,
        20,
        v41);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "header1: %llx", v35, v36);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_notify_kas",
        18,
        429,
        20,
        v41);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "header2: %llx", v37, v38);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_notify_kas",
        18,
        430,
        20,
        v41);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "header3: %llx", v39, v40);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_notify_kas",
        18,
        431,
        20,
        v41);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, "timestamp: %llx", HIDWORD(v18), (_DWORD)v18);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        180,
        "stratum_notify_kas",
        18,
        432,
        20,
        v41);
    }
    else
    {
      return 1;
    }
  }
  return v15;
}
