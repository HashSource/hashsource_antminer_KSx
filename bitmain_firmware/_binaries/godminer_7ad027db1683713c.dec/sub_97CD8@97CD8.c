bool __fastcall sub_97CD8(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _BOOL4 v7; // r4
  _DWORD *v9; // r0
  const char *v10; // r7
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r9
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  char *v17; // r11
  _DWORD *v18; // r0
  const char *v19; // r10
  _DWORD *v20; // r0
  bool v21; // r4
  const char *v22; // r0
  const char *v23; // r0
  void *v24; // r7
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r3
  int i; // r4
  void *v30; // r0
  char *v31; // r5
  void *v32; // r10
  int v33; // r8
  unsigned __int8 *v34; // r7
  unsigned __int8 *v35; // r3
  unsigned __int8 *v36; // r2
  bool v37; // cf
  unsigned int v38; // t1
  bool v39; // cc
  int j; // r0
  int v41; // t1
  _BOOL4 v42; // r1
  int v43; // r2
  void *v44; // r0
  void *v45; // r9
  unsigned int *v46; // r3
  int *v47; // r1
  unsigned int v48; // t1
  int v49; // r1
  signed int v50; // r10
  _DWORD *v51; // r0
  unsigned __int8 *v52; // r0
  unsigned __int8 *v53; // r4
  void *v54; // r0
  size_t v55; // r0
  int v56; // [sp+14h] [bp-1038h]
  const char *v57; // [sp+18h] [bp-1034h]
  unsigned int v58; // [sp+18h] [bp-1034h]
  char *s; // [sp+1Ch] [bp-1030h]
  _BOOL4 v60; // [sp+20h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+28h] [bp-1024h]
  size_t nmemb; // [sp+2Ch] [bp-1020h]
  size_t n; // [sp+30h] [bp-101Ch]
  size_t v64; // [sp+34h] [bp-1018h]
  size_t v65; // [sp+38h] [bp-1014h]
  int v66; // [sp+3Ch] [bp-1010h]
  int v67; // [sp+44h] [bp-1008h] BYREF
  char v68[4100]; // [sp+48h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v56 = (int)json_array_size(v5);
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 2u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v15);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  v19 = (const char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v57 = (const char *)json_string_value(v20);
  if ( json_array_get(a3, 8u) )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v60 = v21;
  }
  else
  {
    v21 = 0;
    v60 = 0;
  }
  if ( valid_ascii(v10) && valid_hex(v12) && valid_hex(v14) && valid_hex(v17) && valid_hex(v19) && valid_hex(v57) )
  {
    settime_based_notify_ntime(v57);
    if ( a2 == (int *)-456 )
      return 0;
    v22 = (const char *)a2[395];
    if ( v22 && !strcmp(v22, v10) )
    {
      V_LOCK();
      logfmt_raw(v68, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        180,
        "stratum_notify_dcr",
        18,
        112,
        80,
        v68);
    }
    if ( strlen(v10) > 0x1F )
    {
      V_LOCK();
      v55 = strlen(v10);
      logfmt_raw(v68, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v10, v55);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        180,
        "stratum_notify_dcr",
        18,
        115,
        80,
        v68);
    }
    mutex = (pthread_mutex_t *)(a2 + 398);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    v23 = v10;
    v24 = (void *)a2[395];
    a2[395] = (int)_strdup(v23);
    if ( v24 )
      free(v24);
    snprintf((char *)a2 + 100, 0x41u, "%s", v12);
    nmemb = strlen(v12) >> 1;
    v65 = strlen(v17) >> 1;
    n = strlen(v14) >> 1;
    v64 = strlen(s) >> 1;
    snprintf((char *)a2 + 332, 9u, "%s", v17);
    snprintf((char *)a2 + 344, 9u, "%s", v19);
    snprintf((char *)a2 + 356, 9u, "%s", v57);
    strcpy((char *)a2 + 1556, v57);
    v25 = a2[81];
    v26 = a2[21];
    v27 = n + a2[19];
    *((_BYTE *)a2 + 444) = v21;
    a2[80] = v27;
    v58 = v64 + v26 + v27;
    a2[74] = v58;
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
    if ( v56 )
    {
      v50 = 0;
      a2[82] = (int)realloc((void *)a2[82], 4 * v56);
      while ( 1 )
      {
        v66 = 4 * v50;
        if ( v56 <= v50 )
          break;
        v51 = json_array_get(v6, v50);
        v52 = (unsigned __int8 *)json_string_value(v51);
        v67 = a2[82];
        v53 = v52;
        v54 = malloc(0x20u);
        *(_DWORD *)(v67 + 4 * v50) = v54;
        if ( !v54 )
        {
          V_LOCK();
          logfmt_raw(v68, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            180,
            "stratum_notify_dcr",
            18,
            146,
            100,
            v68);
        }
        if ( opt_protocol )
        {
          V_LOCK();
          logfmt_raw(v68, 0x1000u, 0, "merkle %d: %s", v50, v53);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            180,
            "stratum_notify_dcr",
            18,
            148,
            20,
            v68);
        }
        ++v50;
        if ( !hex2bin(*(_DWORD *)(a2[82] + v66), v53, 32) )
        {
          v7 = 0;
          V_LOCK();
          logfmt_raw(v68, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            180,
            "stratum_notify_dcr",
            18,
            153,
            100,
            v68);
          pthread_mutex_unlock(mutex);
          return v7;
        }
      }
    }
    a2[81] = v56;
    if ( v60 )
      *((_QWORD *)a2 + 39) = 0;
    v31 = (char *)calloc(nmemb, 1u);
    v7 = hex2bin((int)v31, (unsigned __int8 *)v12, nmemb);
    if ( v7 )
    {
      v32 = calloc(v65, 1u);
      v33 = hex2bin((int)v32, (unsigned __int8 *)v17, v65);
      if ( v33 )
      {
        v34 = (unsigned __int8 *)calloc(n, 1u);
        v33 = hex2bin((int)v34, (unsigned __int8 *)v14, n);
        if ( v33 )
        {
          v35 = v34 + 32;
          v36 = v34 + 160;
          v37 = v34[32] == 255;
          if ( v34[32] != 255 )
            v37 = v35 >= v36;
          if ( !v37 )
          {
            do
            {
              v38 = *++v35;
              v39 = v38 > 0xFF;
              if ( v38 != 255 )
                v39 = v36 > v35;
            }
            while ( v39 );
          }
          for ( j = *v35; ; j = v41 )
          {
            v42 = j == 255;
            if ( v36 <= v35 )
              v42 = 0;
            if ( !v42 )
              break;
            v41 = *++v35;
          }
          if ( *(v35 - 1) == 255 && *(v35 - 2) == 255 )
          {
            v49 = v35[1];
            v43 = (unsigned __int16)(v35[2] + (v35[3] << 8));
            if ( v49 == 3 )
            {
              v43 += v35[4] << 16;
            }
            else if ( v49 == 4 )
            {
              v43 += (v35[4] + (v35[5] << 8)) << 16;
            }
          }
          else
          {
            v43 = 0;
          }
          a2[411] = v43;
          v33 = (int)calloc(v64, 1u);
          v7 = hex2bin(v33, (unsigned __int8 *)s, v64);
          if ( v7 )
          {
            v44 = (void *)a2[75];
            if ( v44 )
              free(v44);
            if ( (v58 & 3) != 0 )
              v58 = (v58 & 0xFFFFFFFC) + 4;
            v45 = calloc(v58, 1u);
            a2[75] = (int)v45;
            if ( !v45 )
            {
              V_LOCK();
              logfmt_raw(v68, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                180,
                "stratum_notify_dcr",
                18,
                197,
                100,
                v68);
            }
            v46 = (unsigned int *)(v31 - 4);
            v47 = &v67;
            do
            {
              v48 = v46[1];
              ++v46;
              v47[1] = bswap32(v48);
              ++v47;
            }
            while ( v31 + 28 != (char *)v46 );
            memcpy((void *)a2[75], v34, n);
            memcpy(a2 + 116, v32, v65);
            memcpy((char *)a2 + v65 + 464, v68, nmemb);
            memcpy((char *)a2 + nmemb + v65 + 464, v34, n);
            memcpy(a2 + 152, (const void *)a2[20], a2[19]);
            memcpy(a2 + 160, (const void *)v33, v64);
            *((_QWORD *)a2 + 57) = *a2;
            pthread_mutex_unlock(mutex);
            if ( !v31 )
              goto LABEL_59;
            goto LABEL_57;
          }
          V_LOCK();
          logfmt_raw(v68, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            180,
            "stratum_notify_dcr",
            18,
            190,
            100,
            v68);
        }
        else
        {
          V_LOCK();
          logfmt_raw(v68, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            180,
            "stratum_notify_dcr",
            18,
            182,
            100,
            v68);
        }
      }
      else
      {
        V_LOCK();
        v34 = 0;
        logfmt_raw(v68, 0x1000u, 0, "Failed to convert block_version to block_version_bin in parse_notify");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
          180,
          "stratum_notify_dcr",
          18,
          174,
          100,
          v68);
      }
      pthread_mutex_unlock(mutex);
      if ( !v31 )
      {
        v7 = 0;
LABEL_58:
        if ( !v32 )
        {
LABEL_60:
          if ( v34 )
            free(v34);
          if ( v33 )
            free((void *)v33);
          return v7;
        }
LABEL_59:
        free(v32);
        goto LABEL_60;
      }
      v7 = 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v68, 0x1000u, 0, "Failed to convert prev_bloc_hash to prev_bloc_hash_bin in parse_notify");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        180,
        "stratum_notify_dcr",
        18,
        166,
        100,
        v68);
      pthread_mutex_unlock(mutex);
      if ( !v31 )
        return v7;
      v33 = 0;
      v34 = 0;
      v32 = 0;
    }
LABEL_57:
    free(v31);
    goto LABEL_58;
  }
  V_LOCK();
  logfmt_raw(v68, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
    180,
    "stratum_notify_dcr",
    18,
    104,
    100,
    v68);
  return 0;
}
