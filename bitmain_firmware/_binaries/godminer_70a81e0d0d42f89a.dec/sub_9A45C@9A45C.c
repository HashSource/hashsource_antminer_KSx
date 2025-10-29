bool __fastcall sub_9A45C(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _BOOL4 v7; // r9
  int v9; // r8
  _DWORD *v10; // r0
  const char *v11; // r6
  _DWORD *v12; // r0
  const char *v13; // r7
  _DWORD *v14; // r0
  char *v15; // r11
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // r9
  int valid; // r0
  int v23; // r0
  const char *v24; // r0
  size_t v25; // r0
  int v26; // r0
  void *v27; // r10
  int v28; // r2
  int v29; // r1
  size_t v30; // r3
  int v31; // r3
  int i; // r9
  void *v33; // r0
  void *v34; // r10
  void *v35; // r0
  void *v36; // r0
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
  int v51; // r0
  int v52; // r0
  signed int v53; // r6
  _DWORD *v54; // r0
  unsigned __int8 *v55; // r0
  int v56; // r10
  unsigned __int8 *v57; // r9
  void *v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  char *s; // [sp+1Ch] [bp-1138h]
  const char *v68; // [sp+20h] [bp-1134h]
  const char *v69; // [sp+24h] [bp-1130h]
  const char *v70; // [sp+28h] [bp-112Ch]
  _BOOL4 v71; // [sp+2Ch] [bp-1128h]
  void *src; // [sp+30h] [bp-1124h]
  size_t n; // [sp+34h] [bp-1120h]
  size_t nmemb; // [sp+38h] [bp-111Ch]
  unsigned int v75; // [sp+3Ch] [bp-1118h]
  int v76; // [sp+5Ch] [bp-10F8h]
  char v77[228]; // [sp+6Ch] [bp-10E8h] BYREF
  _BYTE v78[4100]; // [sp+150h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v9 = (int)json_array_size(v5);
  v10 = json_array_get(a3, 0);
  v11 = (const char *)json_string_value(v10);
  v12 = json_array_get(a3, 1u);
  v13 = (const char *)json_string_value(v12);
  v14 = json_array_get(a3, 2u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v16);
  v17 = json_array_get(a3, 5u);
  v68 = (const char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v70 = (const char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v69 = (const char *)json_string_value(v19);
  v20 = json_array_get(a3, 8u);
  v21 = (char)v20;
  if ( v20 )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v71 = v21;
  }
  else
  {
    v71 = 0;
  }
  valid = valid_ascii(v11);
  if ( valid )
  {
    valid = valid_hex(v13);
    if ( valid )
    {
      valid = valid_hex(v15);
      if ( valid )
      {
        valid = valid_hex(s);
        if ( valid )
        {
          valid = valid_hex(v68);
          if ( valid )
          {
            valid = valid_hex(v70);
            if ( valid )
            {
              valid = valid_hex(v69);
              if ( valid )
              {
                settime_based_notify_ntime(v69);
                if ( a2 != (int *)-456 )
                {
                  v24 = (const char *)a2[395];
                  if ( v24 && !strcmp(v24, v11) )
                  {
                    V_LOCK(0);
                    v62 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v62);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                      187,
                      "stratum_notify_dash",
                      19,
                      89,
                      80,
                      v78);
                  }
                  v25 = strlen(v11);
                  if ( v25 > 0x3F )
                  {
                    V_LOCK(v25);
                    strlen(v11);
                    v26 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v26);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                      187,
                      "stratum_notify_dash",
                      19,
                      92,
                      80,
                      v78);
                  }
                  pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
                  v27 = (void *)a2[395];
                  a2[395] = (int)_strdup(v11);
                  if ( v27 )
                    free(v27);
                  snprintf((char *)a2 + 100, 0x41u, "%s", v13);
                  nmemb = strlen(v15) >> 1;
                  n = strlen(s) >> 1;
                  snprintf((char *)a2 + 332, 9u, "%s", v68);
                  snprintf((char *)a2 + 344, 9u, "%s", v70);
                  snprintf((char *)a2 + 356, 9u, "%s", v69);
                  v28 = a2[81];
                  v29 = a2[21];
                  v30 = nmemb + a2[19];
                  *((_BYTE *)a2 + 444) = v21;
                  a2[80] = v30;
                  v75 = n + v29 + v30;
                  a2[74] = v75;
                  if ( v28 > 0 )
                  {
                    v31 = a2[82];
                    for ( i = 0; i < v28; ++i )
                    {
                      v33 = *(void **)(v31 + 4 * i);
                      if ( v33 )
                      {
                        free(v33);
                        v31 = a2[82];
                        v28 = a2[81];
                        *(_DWORD *)(v31 + 4 * i) = 0;
                      }
                    }
                  }
                  if ( v9 )
                  {
                    v53 = 0;
                    a2[82] = (int)realloc((void *)a2[82], 4 * v9);
                    while ( 1 )
                    {
                      v76 = 4 * v53;
                      if ( v9 <= v53 )
                        break;
                      v54 = json_array_get(v6, v53);
                      v55 = (unsigned __int8 *)json_string_value(v54);
                      v56 = a2[82];
                      v57 = v55;
                      v58 = malloc(0x20u);
                      *(_DWORD *)(v56 + 4 * v53) = v58;
                      if ( !v58 )
                      {
                        V_LOCK(0);
                        v60 = logfmt_raw((int)v78, 0x1000u);
                        V_UNLOCK(v60);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                          187,
                          "stratum_notify_dash",
                          19,
                          120,
                          100,
                          v78);
                        v58 = (void *)set_miner_6060info_malloc_failed_err(1);
                      }
                      if ( opt_protocol )
                      {
                        V_LOCK(v58);
                        v59 = logfmt_raw((int)v78, 0x1000u);
                        V_UNLOCK(v59);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                          187,
                          "stratum_notify_dash",
                          19,
                          124,
                          20,
                          v78);
                      }
                      ++v53;
                      if ( !hex2bin(*(_DWORD *)(a2[82] + v76), v57, 32) )
                      {
                        v7 = 0;
                        V_LOCK(0);
                        v34 = 0;
                        v61 = logfmt_raw((int)v78, 0x1000u);
                        src = 0;
                        V_UNLOCK(v61);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                          187,
                          "stratum_notify_dash",
                          19,
                          129,
                          100,
                          v78);
                        set_miner_6060info_malloc_failed_err(1);
                        goto LABEL_42;
                      }
                    }
                  }
                  a2[81] = v9;
                  if ( v71 )
                    *((_QWORD *)a2 + 39) = 0;
                  snprintf(
                    v77,
                    0xE1u,
                    "%s%s%s%s%s%s%s",
                    (const char *)a2 + 332,
                    (const char *)a2 + 100,
                    "0000000000000000000000000000000000000000000000000000000000000000",
                    (const char *)a2 + 356,
                    (const char *)a2 + 344,
                    "00000000",
                    workpadding[0]);
                  v7 = hex2bin((int)(a2 + 42), (unsigned __int8 *)v77, 112);
                  if ( v7 )
                  {
                    src = calloc(nmemb, 1u);
                    v7 = hex2bin((int)src, (unsigned __int8 *)v15, nmemb);
                    if ( v7 )
                    {
                      v34 = calloc(n, 1u);
                      v7 = hex2bin((int)v34, (unsigned __int8 *)s, n);
                      if ( v7 )
                      {
                        v35 = (void *)a2[75];
                        if ( v35 )
                          free(v35);
                        if ( (v75 & 3) != 0 )
                          v75 = (v75 & 0xFFFFFFFC) + 4;
                        v36 = calloc(v75, 1u);
                        a2[75] = (int)v36;
                        if ( !v36 )
                        {
                          V_LOCK(0);
                          v63 = logfmt_raw((int)v78, 0x1000u);
                          V_UNLOCK(v63);
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                            187,
                            "stratum_notify_dash",
                            19,
                            171,
                            100,
                            v78);
                        }
                        memcpy((void *)a2[75], src, nmemb);
                        memcpy((void *)(a2[75] + nmemb), (const void *)a2[20], a2[19]);
                        memcpy((void *)(a2[75] + a2[19] + a2[21] + nmemb), v34, n);
                        *((_QWORD *)a2 + 57) = *a2;
                      }
                      else
                      {
                        V_LOCK(0);
                        v64 = logfmt_raw((int)v78, 0x1000u);
                        V_UNLOCK(v64);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                          187,
                          "stratum_notify_dash",
                          19,
                          164,
                          100,
                          v78);
                      }
                    }
                    else
                    {
                      V_LOCK(0);
                      v34 = 0;
                      v65 = logfmt_raw((int)v78, 0x1000u);
                      V_UNLOCK(v65);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot"
                        "/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                        187,
                        "stratum_notify_dash",
                        19,
                        157,
                        100,
                        v78);
                    }
                  }
                  else
                  {
                    V_LOCK(0);
                    v34 = 0;
                    v66 = logfmt_raw((int)v78, 0x1000u);
                    src = 0;
                    V_UNLOCK(v66);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                      187,
                      "stratum_notify_dash",
                      19,
                      150,
                      100,
                      v78);
                  }
LABEL_42:
                  v37 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
                  if ( opt_protocol )
                  {
                    V_LOCK(v37);
                    v38 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v38);
                    v39 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                            187,
                            "stratum_notify_dash",
                            19,
                            189,
                            20,
                            v78);
                    V_LOCK(v39);
                    v40 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v40);
                    v41 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                            187,
                            "stratum_notify_dash",
                            19,
                            190,
                            20,
                            v78);
                    V_LOCK(v41);
                    v42 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v42);
                    v43 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                            187,
                            "stratum_notify_dash",
                            19,
                            191,
                            20,
                            v78);
                    V_LOCK(v43);
                    v44 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v44);
                    v45 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                            187,
                            "stratum_notify_dash",
                            19,
                            192,
                            20,
                            v78);
                    V_LOCK(v45);
                    v46 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v46);
                    v47 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                            187,
                            "stratum_notify_dash",
                            19,
                            193,
                            20,
                            v78);
                    V_LOCK(v47);
                    v48 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v48);
                    v49 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                            187,
                            "stratum_notify_dash",
                            19,
                            194,
                            20,
                            v78);
                    V_LOCK(v49);
                    v50 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v50);
                    v51 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                            187,
                            "stratum_notify_dash",
                            19,
                            195,
                            20,
                            v78);
                    V_LOCK(v51);
                    v52 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v52);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
                      187,
                      "stratum_notify_dash",
                      19,
                      196,
                      20,
                      v78);
                  }
                  if ( src )
                    free(src);
                  if ( v34 )
                    free(v34);
                  return v7;
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
  V_LOCK(valid);
  v23 = logfmt_raw((int)v78, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/frontend/frontend_dash/frontend_dash.c",
    187,
    "stratum_notify_dash",
    19,
    81,
    100,
    v78);
  return 0;
}
