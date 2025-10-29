bool __fastcall sub_9AEA0(int a1, int *a2, _DWORD *a3)
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
  int valid; // r0
  int v23; // r0
  const char *v24; // r0
  size_t v25; // r0
  const char *v26; // r0
  void *v27; // r7
  int v28; // r2
  int v29; // r3
  size_t v30; // r1
  int v31; // r3
  int i; // r4
  void *v33; // r0
  char *v34; // r5
  void *v35; // r10
  int v36; // r8
  unsigned __int8 *v37; // r7
  unsigned __int8 *v38; // r3
  unsigned __int8 *v39; // r2
  bool v40; // cf
  unsigned int v41; // t1
  bool v42; // cc
  int j; // r0
  int v44; // t1
  _BOOL4 v45; // r1
  int v46; // r2
  void *v47; // r0
  void *v48; // r0
  unsigned int *v49; // r3
  int *v50; // r1
  unsigned int v51; // t1
  int v52; // r1
  signed int v53; // r10
  _DWORD *v54; // r0
  unsigned __int8 *v55; // r0
  unsigned __int8 *v56; // r4
  void *v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // [sp+14h] [bp-1038h]
  const char *v69; // [sp+18h] [bp-1034h]
  unsigned int v70; // [sp+18h] [bp-1034h]
  char *s; // [sp+1Ch] [bp-1030h]
  _BOOL4 v72; // [sp+20h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+28h] [bp-1024h]
  size_t nmemb; // [sp+2Ch] [bp-1020h]
  size_t n; // [sp+30h] [bp-101Ch]
  size_t v76; // [sp+34h] [bp-1018h]
  size_t v77; // [sp+38h] [bp-1014h]
  int v78; // [sp+3Ch] [bp-1010h]
  int v79; // [sp+44h] [bp-1008h] BYREF
  _BYTE v80[4100]; // [sp+48h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v68 = (int)json_array_size(v5);
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
  v69 = (const char *)json_string_value(v20);
  if ( json_array_get(a3, 8u) )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v72 = v21;
  }
  else
  {
    v21 = 0;
    v72 = 0;
  }
  valid = valid_ascii(v10);
  if ( valid )
  {
    valid = valid_hex(v12);
    if ( valid )
    {
      valid = valid_hex(v14);
      if ( valid )
      {
        valid = valid_hex(v17);
        if ( valid )
        {
          valid = valid_hex(v19);
          if ( valid )
          {
            valid = valid_hex(v69);
            if ( valid )
            {
              settime_based_notify_ntime(v69);
              if ( a2 == (int *)-456 )
                return 0;
              v24 = (const char *)a2[395];
              if ( v24 && !strcmp(v24, v10) )
              {
                V_LOCK(0);
                v62 = logfmt_raw((int)v80, 0x1000u);
                V_UNLOCK(v62);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
                  185,
                  "stratum_notify_dcr",
                  18,
                  112,
                  80,
                  v80);
              }
              v25 = strlen(v10);
              if ( v25 > 0x1F )
              {
                V_LOCK(v25);
                strlen(v10);
                v61 = logfmt_raw((int)v80, 0x1000u);
                V_UNLOCK(v61);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
                  185,
                  "stratum_notify_dcr",
                  18,
                  115,
                  80,
                  v80);
              }
              mutex = (pthread_mutex_t *)(a2 + 398);
              pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
              v26 = v10;
              v27 = (void *)a2[395];
              a2[395] = (int)_strdup(v26);
              if ( v27 )
                free(v27);
              snprintf((char *)a2 + 100, 0x41u, "%s", v12);
              nmemb = strlen(v12) >> 1;
              v77 = strlen(v17) >> 1;
              n = strlen(v14) >> 1;
              v76 = strlen(s) >> 1;
              snprintf((char *)a2 + 332, 9u, "%s", v17);
              snprintf((char *)a2 + 344, 9u, "%s", v19);
              snprintf((char *)a2 + 356, 9u, "%s", v69);
              strcpy((char *)a2 + 1556, v69);
              v28 = a2[81];
              v29 = a2[21];
              v30 = n + a2[19];
              *((_BYTE *)a2 + 444) = v21;
              a2[80] = v30;
              v70 = v76 + v29 + v30;
              a2[74] = v70;
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
              if ( v68 )
              {
                v53 = 0;
                a2[82] = (int)realloc((void *)a2[82], 4 * v68);
                while ( 1 )
                {
                  v78 = 4 * v53;
                  if ( v68 <= v53 )
                    break;
                  v54 = json_array_get(v6, v53);
                  v55 = (unsigned __int8 *)json_string_value(v54);
                  v79 = a2[82];
                  v56 = v55;
                  v57 = malloc(0x20u);
                  *(_DWORD *)(v79 + 4 * v53) = v57;
                  if ( !v57 )
                  {
                    v79 = 0;
                    V_LOCK(0);
                    v60 = logfmt_raw((int)v80, 0x1000u);
                    V_UNLOCK(v60);
                    v57 = (void *)zlog(
                                    g_zc,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/root"
                                    "fs/buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_d"
                                    "cr/frontend_dcr.c",
                                    185,
                                    "stratum_notify_dcr",
                                    18,
                                    146,
                                    100,
                                    v80);
                  }
                  if ( opt_protocol )
                  {
                    V_LOCK(v57);
                    v58 = logfmt_raw((int)v80, 0x1000u);
                    V_UNLOCK(v58);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
                      185,
                      "stratum_notify_dcr",
                      18,
                      148,
                      20,
                      v80);
                  }
                  ++v53;
                  if ( !hex2bin(*(_DWORD *)(a2[82] + v78), v56, 32) )
                  {
                    v7 = 0;
                    V_LOCK(0);
                    v59 = logfmt_raw((int)v80, 0x1000u);
                    V_UNLOCK(v59);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
                      185,
                      "stratum_notify_dcr",
                      18,
                      153,
                      100,
                      v80);
                    pthread_mutex_unlock(mutex);
                    return v7;
                  }
                }
              }
              a2[81] = v68;
              if ( v72 )
                *((_QWORD *)a2 + 39) = 0;
              v34 = (char *)calloc(nmemb, 1u);
              v7 = hex2bin((int)v34, (unsigned __int8 *)v12, nmemb);
              if ( v7 )
              {
                v35 = calloc(v77, 1u);
                v36 = hex2bin((int)v35, (unsigned __int8 *)v17, v77);
                if ( v36 )
                {
                  v37 = (unsigned __int8 *)calloc(n, 1u);
                  v36 = hex2bin((int)v37, (unsigned __int8 *)v14, n);
                  if ( v36 )
                  {
                    v38 = v37 + 32;
                    v39 = v37 + 160;
                    v40 = v37[32] == 255;
                    if ( v37[32] != 255 )
                      v40 = v38 >= v39;
                    if ( !v40 )
                    {
                      do
                      {
                        v41 = *++v38;
                        v42 = v41 > 0xFF;
                        if ( v41 != 255 )
                          v42 = v39 > v38;
                      }
                      while ( v42 );
                    }
                    for ( j = *v38; ; j = v44 )
                    {
                      v45 = j == 255;
                      if ( v39 <= v38 )
                        v45 = 0;
                      if ( !v45 )
                        break;
                      v44 = *++v38;
                    }
                    if ( *(v38 - 1) == 255 && *(v38 - 2) == 255 )
                    {
                      v52 = v38[1];
                      v46 = (unsigned __int16)(v38[2] + (v38[3] << 8));
                      if ( v52 == 3 )
                      {
                        v46 += v38[4] << 16;
                      }
                      else if ( v52 == 4 )
                      {
                        v46 += (v38[4] + (v38[5] << 8)) << 16;
                      }
                    }
                    else
                    {
                      v46 = 0;
                    }
                    a2[411] = v46;
                    v36 = (int)calloc(v76, 1u);
                    v7 = hex2bin(v36, (unsigned __int8 *)s, v76);
                    if ( v7 )
                    {
                      v47 = (void *)a2[75];
                      if ( v47 )
                        free(v47);
                      if ( (v70 & 3) != 0 )
                        v70 = (v70 & 0xFFFFFFFC) + 4;
                      v48 = calloc(v70, 1u);
                      a2[75] = (int)v48;
                      if ( !v48 )
                      {
                        V_LOCK(0);
                        v64 = logfmt_raw((int)v80, 0x1000u);
                        V_UNLOCK(v64);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
                          185,
                          "stratum_notify_dcr",
                          18,
                          197,
                          100,
                          v80);
                      }
                      v49 = (unsigned int *)(v34 - 4);
                      v50 = &v79;
                      do
                      {
                        v51 = v49[1];
                        ++v49;
                        v50[1] = bswap32(v51);
                        ++v50;
                      }
                      while ( v34 + 28 != (char *)v49 );
                      memcpy((void *)a2[75], v37, n);
                      memcpy(a2 + 116, v35, v77);
                      memcpy((char *)a2 + v77 + 464, v80, nmemb);
                      memcpy((char *)a2 + nmemb + v77 + 464, v37, n);
                      memcpy(a2 + 152, (const void *)a2[20], a2[19]);
                      memcpy(a2 + 160, (const void *)v36, v76);
                      *((_QWORD *)a2 + 57) = *a2;
                      pthread_mutex_unlock(mutex);
                      if ( !v34 )
                        goto LABEL_59;
                      goto LABEL_57;
                    }
                    V_LOCK(0);
                    v65 = logfmt_raw((int)v80, 0x1000u);
                    V_UNLOCK(v65);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
                      185,
                      "stratum_notify_dcr",
                      18,
                      190,
                      100,
                      v80);
                  }
                  else
                  {
                    V_LOCK(0);
                    v66 = logfmt_raw((int)v80, 0x1000u);
                    V_UNLOCK(v66);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
                      185,
                      "stratum_notify_dcr",
                      18,
                      182,
                      100,
                      v80);
                  }
                }
                else
                {
                  V_LOCK(0);
                  v37 = 0;
                  v67 = logfmt_raw((int)v80, 0x1000u);
                  V_UNLOCK(v67);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
                    185,
                    "stratum_notify_dcr",
                    18,
                    174,
                    100,
                    v80);
                }
                pthread_mutex_unlock(mutex);
                if ( !v34 )
                {
                  v7 = 0;
LABEL_58:
                  if ( !v35 )
                  {
LABEL_60:
                    if ( v37 )
                      free(v37);
                    if ( v36 )
                      free((void *)v36);
                    return v7;
                  }
LABEL_59:
                  free(v35);
                  goto LABEL_60;
                }
                v7 = 0;
              }
              else
              {
                V_LOCK(0);
                v63 = logfmt_raw((int)v80, 0x1000u);
                V_UNLOCK(v63);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
                  185,
                  "stratum_notify_dcr",
                  18,
                  166,
                  100,
                  v80);
                pthread_mutex_unlock(mutex);
                if ( !v34 )
                  return v7;
                v36 = 0;
                v37 = 0;
                v35 = 0;
              }
LABEL_57:
              free(v34);
              goto LABEL_58;
            }
          }
        }
      }
    }
  }
  V_LOCK(valid);
  v23 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/frontend/frontend_dcr/frontend_dcr.c",
    185,
    "stratum_notify_dcr",
    18,
    104,
    100,
    v80);
  return 0;
}
