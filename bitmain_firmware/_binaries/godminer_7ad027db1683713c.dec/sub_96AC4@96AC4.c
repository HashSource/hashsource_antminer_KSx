bool __fastcall sub_96AC4(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _BOOL4 v7; // r6
  _DWORD *v9; // r0
  const char *v10; // r8
  _DWORD *v11; // r0
  const char *v12; // r10
  _DWORD *v13; // r0
  char *v14; // r9
  _DWORD *v15; // r0
  char *v16; // r11
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // r6
  const char *v22; // r0
  size_t v23; // r0
  void *v24; // r7
  int v25; // r2
  int v26; // r1
  int v27; // r3
  int v28; // r3
  int i; // r6
  void *v30; // r0
  void *v31; // r0
  void *v32; // r7
  char *v33; // r2
  signed int v34; // r7
  _DWORD *v35; // r0
  unsigned __int8 *v36; // r0
  int v37; // r6
  unsigned __int8 *v38; // r8
  void *v39; // r11
  const char *v40; // [sp+1Ch] [bp-1140h]
  int ptr; // [sp+20h] [bp-113Ch]
  void *ptra; // [sp+20h] [bp-113Ch]
  const char *v43; // [sp+24h] [bp-1138h]
  const char *v44; // [sp+28h] [bp-1134h]
  _BOOL4 v45; // [sp+2Ch] [bp-1130h]
  void *src; // [sp+30h] [bp-112Ch]
  unsigned int v47; // [sp+34h] [bp-1128h]
  size_t n; // [sp+38h] [bp-1124h]
  size_t nmemb; // [sp+3Ch] [bp-1120h]
  char *v50; // [sp+44h] [bp-1118h]
  const char *v51; // [sp+48h] [bp-1114h]
  int v52; // [sp+68h] [bp-10F4h]
  char s[228]; // [sp+74h] [bp-10E8h] BYREF
  char v54[4100]; // [sp+158h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  ptr = (int)json_array_size(v5);
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (const char *)json_string_value(v11);
  v13 = json_array_get(a3, 2u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 3u);
  v16 = (char *)json_string_value(v15);
  v17 = json_array_get(a3, 5u);
  v40 = (const char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v44 = (const char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v43 = (const char *)json_string_value(v19);
  v20 = json_array_get(a3, 8u);
  v21 = (char)v20;
  if ( v20 )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v45 = v21;
  }
  else
  {
    v45 = 0;
  }
  if ( valid_ascii(v10)
    && valid_hex(v12)
    && valid_hex(v14)
    && valid_hex(v16)
    && valid_hex(v40)
    && valid_hex(v44)
    && valid_hex(v43) )
  {
    settime_based_notify_ntime(v43);
    if ( a2 != (int *)-456 )
    {
      v22 = (const char *)a2[395];
      if ( v22 && !strcmp(v22, v10) )
      {
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          88,
          80,
          v54);
      }
      if ( strlen(v10) > 0x3F )
      {
        V_LOCK();
        v23 = strlen(v10);
        logfmt_raw(v54, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 64", v10, v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          91,
          80,
          v54);
      }
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
      v24 = (void *)a2[395];
      a2[395] = (int)_strdup(v10);
      if ( v24 )
        free(v24);
      snprintf((char *)a2 + 100, 0x41u, "%s", v12);
      nmemb = strlen(v14) >> 1;
      n = strlen(v16) >> 1;
      snprintf((char *)a2 + 332, 9u, "%s", v40);
      snprintf((char *)a2 + 344, 9u, "%s", v44);
      snprintf((char *)a2 + 356, 9u, "%s", v43);
      v25 = a2[81];
      v26 = a2[21];
      v27 = nmemb + a2[19];
      *((_BYTE *)a2 + 444) = v21;
      a2[80] = v27;
      v47 = n + v26 + v27;
      a2[74] = v47;
      if ( v25 > 0 )
      {
        v28 = a2[82];
        for ( i = 0; i < v25; ++i )
        {
          v30 = *(void **)(v28 + 4 * i);
          if ( v30 )
          {
            free(v30);
            v28 = a2[82];
            v25 = a2[81];
            *(_DWORD *)(v28 + 4 * i) = 0;
          }
        }
      }
      if ( ptr )
      {
        v34 = 0;
        v50 = v16;
        v51 = v10;
        a2[82] = (int)realloc((void *)a2[82], 4 * ptr);
        do
        {
          v52 = 4 * v34;
          if ( ptr <= v34 )
          {
            v16 = v50;
            v10 = v51;
            goto LABEL_30;
          }
          v35 = json_array_get(v6, v34);
          v36 = (unsigned __int8 *)json_string_value(v35);
          v37 = a2[82];
          v38 = v36;
          v39 = malloc(0x20u);
          *(_DWORD *)(v37 + 4 * v34) = v39;
          if ( !v39 )
          {
            V_LOCK();
            logfmt_raw(v54, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              182,
              "stratum_notify_dash",
              19,
              119,
              100,
              v54);
            V_LOCK();
            logfmt_raw(v54, 0x1000u, 0, "Sweep error string = %s.", "M:1");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              182,
              "stratum_notify_dash",
              19,
              120,
              100,
              v54);
          }
          if ( opt_protocol )
          {
            V_LOCK();
            logfmt_raw(v54, 0x1000u, 0, "merkle %d: %s", v34, v38);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              182,
              "stratum_notify_dash",
              19,
              123,
              20,
              v54);
          }
          ++v34;
        }
        while ( hex2bin(*(_DWORD *)(a2[82] + v52), v38, 32) );
        v7 = 0;
        v16 = v50;
        v10 = v51;
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
        V_UNLOCK();
        ptra = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          128,
          100,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "Sweep error string = %s.", "M:1");
        src = 0;
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          129,
          100,
          v54);
      }
      else
      {
LABEL_30:
        a2[81] = ptr;
        if ( v45 )
          *((_QWORD *)a2 + 39) = 0;
        snprintf(
          s,
          0xE1u,
          "%s%s%s%s%s%s%s",
          (const char *)a2 + 332,
          (const char *)a2 + 100,
          "0000000000000000000000000000000000000000000000000000000000000000",
          (const char *)a2 + 356,
          (const char *)a2 + 344,
          "00000000",
          workpadding[0]);
        v7 = hex2bin((int)(a2 + 42), (unsigned __int8 *)s, 112);
        if ( v7 )
        {
          src = calloc(nmemb, 1u);
          v7 = hex2bin((int)src, (unsigned __int8 *)v14, nmemb);
          if ( v7 )
          {
            ptra = calloc(n, 1u);
            v7 = hex2bin((int)ptra, (unsigned __int8 *)v16, n);
            if ( v7 )
            {
              v31 = (void *)a2[75];
              if ( v31 )
                free(v31);
              if ( (v47 & 3) != 0 )
                v47 = (v47 & 0xFFFFFFFC) + 4;
              v32 = calloc(v47, 1u);
              a2[75] = (int)v32;
              if ( !v32 )
              {
                V_LOCK();
                logfmt_raw(v54, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                  182,
                  "stratum_notify_dash",
                  19,
                  170,
                  100,
                  v54);
              }
              memcpy((void *)a2[75], src, nmemb);
              memcpy((void *)(a2[75] + nmemb), (const void *)a2[20], a2[19]);
              memcpy((void *)(a2[75] + a2[19] + a2[21] + nmemb), ptra, n);
              *((_QWORD *)a2 + 57) = *a2;
            }
            else
            {
              V_LOCK();
              logfmt_raw(v54, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                182,
                "stratum_notify_dash",
                19,
                163,
                100,
                v54);
            }
          }
          else
          {
            V_LOCK();
            ptra = 0;
            logfmt_raw(v54, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              182,
              "stratum_notify_dash",
              19,
              156,
              100,
              v54);
          }
        }
        else
        {
          V_LOCK();
          ptra = 0;
          logfmt_raw(v54, 0x1000u, 0, "Failed to convert header to header_bin in parse_notify");
          src = 0;
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            182,
            "stratum_notify_dash",
            19,
            149,
            100,
            v54);
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
      if ( opt_protocol )
      {
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "job_id: %s", v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          188,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "prev_hash: %s", v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          189,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "coinbase1: %s", v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          190,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "coinbase2: %s", v16);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          191,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "bbversion: %s", v40);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          192,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "nbit: %s", v44);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          193,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "ntime: %s", v43);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          194,
          20,
          v54);
        V_LOCK();
        v33 = "yes";
        if ( !v45 )
          v33 = "no";
        logfmt_raw(v54, 0x1000u, 0, "clean: %s", v33);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          182,
          "stratum_notify_dash",
          19,
          195,
          20,
          v54);
      }
      if ( src )
        free(src);
      if ( ptra )
        free(ptra);
      return v7;
    }
    return 0;
  }
  V_LOCK();
  logfmt_raw(v54, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
    182,
    "stratum_notify_dash",
    19,
    80,
    100,
    v54);
  return 0;
}
