int __fastcall sub_A18FC(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  double *v6; // r5
  unsigned int v7; // r4
  double *v8; // r6
  const char *v9; // r9
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  __int64 v13; // r0
  unsigned __int64 v14; // r6
  int valid; // r0
  int v17; // r4
  int v18; // r0
  const char *v20; // r0
  size_t v21; // r0
  char *v22; // r0
  int *v23; // r2
  unsigned __int64 *v24; // r3
  int v25; // r1
  unsigned int v26; // t1
  unsigned int v27; // r1
  int v28; // r12
  int v29; // r0
  int v30; // r10
  int v31; // r1
  int v32; // r12
  int v33; // r0
  int v34; // r1
  size_t v35; // r10
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
  int v48; // r0
  int v49; // r0
  int v50; // r0
  unsigned __int64 v51; // [sp+10h] [bp-102Ch] BYREF
  double v52[4]; // [sp+18h] [bp-1024h] BYREF
  _BYTE v53[4100]; // [sp+38h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = v52;
  v7 = 0;
  v8 = v52;
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
  v14 = v13;
  v51 = v13;
  do
  {
    if ( !*(_QWORD *)v6++ )
    {
      V_LOCK(v13);
      v48 = logfmt_raw((int)v53, 0x1000u);
      v17 = 0;
      V_UNLOCK(v48);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
        185,
        "stratum_notify_ks5",
        18,
        388,
        100,
        v53);
      return v17;
    }
  }
  while ( v6 != (double *)v53 );
  valid = valid_ascii(v9);
  LOBYTE(v17) = valid ^ 1;
  if ( !v14 )
    LOBYTE(v17) = v17 | 1;
  v17 = (unsigned __int8)v17;
  if ( (_BYTE)v17 )
  {
    V_LOCK(valid);
    v18 = logfmt_raw((int)v53, 0x1000u);
    v17 = 0;
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
      185,
      "stratum_notify_ks5",
      18,
      394,
      100,
      v53);
  }
  else if ( a2 != (int *)-456 )
  {
    v20 = (const char *)a2[395];
    if ( v20 && !strcmp(v20, v9) )
    {
      V_LOCK(0);
      v50 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v50);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
        185,
        "stratum_notify_ks5",
        18,
        402,
        80,
        v53);
    }
    v21 = strlen(v9);
    if ( v21 > 0x1F )
    {
      V_LOCK(v21);
      strlen(v9);
      v49 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v49);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
        185,
        "stratum_notify_ks5",
        18,
        406,
        80,
        v53);
    }
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    v22 = _strdup(v9);
    v51 = _byteswap_uint64(v14);
    v23 = a2 + 118;
    v24 = &v51;
    a2[395] = (int)v22;
    v25 = HIDWORD(v51);
    a2[116] = v51;
    a2[117] = v25;
    do
    {
      v26 = *((_DWORD *)v24++ + 2);
      v23 += 2;
      v27 = *((_DWORD *)v24 + 1);
      *((_DWORD *)v24 + 1) = bswap32(v26);
      v28 = *((_DWORD *)v24 + 1);
      *(_DWORD *)v24 = bswap32(v27);
      v29 = *((_DWORD *)v24 + 2);
      v30 = *(_DWORD *)v24;
      v31 = *((_DWORD *)v24 + 3);
      *(v23 - 1) = v28;
      *(v23 - 2) = v30;
      *v23 = v29;
      v23[1] = v31;
      v32 = *((_DWORD *)v24 + 5);
      v33 = *((_DWORD *)v24 + 6);
      v34 = *((_DWORD *)v24 + 7);
      v23[2] = *((_DWORD *)v24 + 4);
      v23[3] = v32;
      v23[4] = v33;
      v23[5] = v34;
    }
    while ( v23 != a2 + 126 );
    v35 = a2[19];
    memcpy(v23, (const void *)a2[20], v35);
    memset((char *)a2 + v35 + 504, 0, 8 - v35);
    *((_QWORD *)a2 + 57) = *a2;
    v36 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    v17 = (unsigned __int8)opt_protocol;
    if ( opt_protocol )
    {
      V_LOCK(v36);
      v37 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v37);
      v38 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
              185,
              "stratum_notify_ks5",
              18,
              434,
              20,
              v53);
      V_LOCK(v38);
      v39 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v39);
      v40 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
              185,
              "stratum_notify_ks5",
              18,
              435,
              20,
              v53);
      V_LOCK(v40);
      v41 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v41);
      v42 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
              185,
              "stratum_notify_ks5",
              18,
              436,
              20,
              v53);
      V_LOCK(v42);
      v43 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v43);
      v44 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
              185,
              "stratum_notify_ks5",
              18,
              437,
              20,
              v53);
      V_LOCK(v44);
      v45 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v45);
      v46 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
              185,
              "stratum_notify_ks5",
              18,
              438,
              20,
              v53);
      V_LOCK(v46);
      v47 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v47);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
        185,
        "stratum_notify_ks5",
        18,
        439,
        20,
        v53);
    }
    else
    {
      return 1;
    }
  }
  return v17;
}
