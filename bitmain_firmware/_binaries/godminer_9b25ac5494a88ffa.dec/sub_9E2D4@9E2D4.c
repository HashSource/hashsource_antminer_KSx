bool __fastcall sub_9E2D4(int a1, int *a2, _DWORD *a3)
{
  _BOOL4 v4; // r4
  _DWORD *v7; // r0
  const char *v8; // r5
  _DWORD *v9; // r0
  char *v10; // r6
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r7
  _DWORD *v15; // r0
  char *v16; // r9
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  char *v19; // r10
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  int valid; // r0
  int v23; // r0
  const char *v24; // r0
  size_t v25; // r0
  int v26; // r0
  size_t v27; // r0
  size_t v28; // r0
  size_t v29; // r4
  _DWORD *v30; // r9
  _BOOL4 v31; // r0
  int v32; // r3
  int v33; // r0
  int *v34; // r10
  size_t v35; // r2
  const void *v36; // r1
  size_t v37; // r0
  char *v38; // r12
  _BYTE *i; // r1
  char v40; // t1
  size_t v41; // r2
  char *v42; // r12
  _BYTE *j; // r1
  char v44; // t1
  size_t v45; // r2
  char *v46; // r12
  _BYTE *k; // r1
  char v48; // t1
  size_t v49; // r2
  __int64 *v50; // r1
  _BYTE *v51; // r0
  char v52; // t1
  char *v53; // r0
  char *v54; // r1
  char v55; // t1
  char *v56; // r1
  signed int v57; // r3
  char v58; // t1
  bool v59; // cc
  int v60; // r0
  size_t v61; // r7
  char *v62; // r1
  _BYTE *m; // r3
  char v64; // t1
  size_t v65; // r7
  _BYTE *v66; // r2
  __int64 *p_dest; // r3
  char v68; // t1
  size_t v69; // r3
  size_t v70; // r7
  size_t v71; // r7
  int v72; // r0
  int v73; // r12
  int v74; // r0
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int v88; // r0
  int v89; // r0
  char *src; // [sp+14h] [bp-1090h]
  char *v91; // [sp+18h] [bp-108Ch]
  char *s; // [sp+1Ch] [bp-1088h]
  char *sa; // [sp+1Ch] [bp-1088h]
  void *ptr; // [sp+28h] [bp-107Ch]
  size_t ptrb; // [sp+28h] [bp-107Ch]
  char *ptra; // [sp+28h] [bp-107Ch]
  char *v97; // [sp+2Ch] [bp-1078h]
  char *v98; // [sp+30h] [bp-1074h]
  void *v99; // [sp+34h] [bp-1070h]
  signed int v100; // [sp+38h] [bp-106Ch]
  signed int v101; // [sp+3Ch] [bp-1068h]
  signed int v102; // [sp+40h] [bp-1064h]
  signed int v103; // [sp+44h] [bp-1060h]
  void *v104; // [sp+48h] [bp-105Ch]
  signed int v105; // [sp+4Ch] [bp-1058h]
  size_t n; // [sp+50h] [bp-1054h]
  size_t nmemb; // [sp+54h] [bp-1050h]
  void *v108; // [sp+5Ch] [bp-1048h]
  size_t v109; // [sp+64h] [bp-1040h]
  _BYTE v110[20]; // [sp+6Ch] [bp-1038h] BYREF
  __int64 dest; // [sp+80h] [bp-1024h] BYREF
  __int128 v112; // [sp+88h] [bp-101Ch] BYREF
  __int64 v113; // [sp+98h] [bp-100Ch]
  _BYTE v114[4100]; // [sp+A0h] [bp-1004h] BYREF

  if ( !a3 || *a3 != 1 )
    return 0;
  v7 = json_array_get(a3, 0);
  v8 = (const char *)json_string_value(v7);
  v9 = json_array_get(a3, 1u);
  v10 = (char *)json_string_value(v9);
  v11 = json_array_get(a3, 2u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 3u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 4u);
  v16 = (char *)json_string_value(v15);
  v17 = json_array_get(a3, 5u);
  s = (char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v19 = (char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v91 = (char *)json_string_value(v20);
  v21 = json_array_get(a3, 8u);
  src = (char *)json_string_value(v21);
  valid = valid_ascii(v8);
  if ( valid )
  {
    valid = valid_hex(v10);
    if ( valid )
    {
      valid = valid_hex(v14);
      if ( valid )
      {
        valid = valid_hex(v12);
        if ( valid )
        {
          valid = valid_hex(v16);
          if ( valid )
          {
            valid = valid_hex(s);
            if ( valid )
            {
              valid = valid_hex(v19);
              if ( valid )
              {
                valid = valid_hex(v91);
                if ( valid )
                {
                  valid = valid_hex(src);
                  if ( valid )
                  {
                    settime_based_notify_ntime(src);
                    if ( a2 != (int *)-456 )
                    {
                      v24 = (const char *)a2[395];
                      if ( v24 && !strcmp(v24, v8) )
                      {
                        V_LOCK(0);
                        v72 = logfmt_raw((int)v114, 0x1000u);
                        V_UNLOCK(v72);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                          185,
                          "stratum_notify_hns",
                          18,
                          142,
                          80,
                          v114);
                      }
                      v25 = strlen(v8);
                      if ( v25 > 0x1F )
                      {
                        V_LOCK(v25);
                        strlen(v8);
                        v26 = logfmt_raw((int)v114, 0x1000u);
                        V_UNLOCK(v26);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                          185,
                          "stratum_notify_hns",
                          18,
                          145,
                          80,
                          v114);
                      }
                      pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
                      ptr = (void *)a2[395];
                      a2[395] = (int)_strdup(v8);
                      if ( ptr )
                        free(ptr);
                      snprintf((char *)a2 + 100, 0x41u, "%s", v10);
                      v100 = strlen(v10) >> 1;
                      v101 = strlen(v12) >> 1;
                      v102 = strlen(v14) >> 1;
                      v105 = strlen(v16) >> 1;
                      v103 = strlen(s) >> 1;
                      ptrb = strlen(v19);
                      n = ptrb >> 1;
                      nmemb = strlen(src) >> 1;
                      snprintf((char *)a2 + 332, ptrb + 1, "%s", v19);
                      v27 = strlen(v91);
                      snprintf((char *)a2 + 344, v27 + 1, "%s", v91);
                      v28 = strlen(src);
                      snprintf((char *)a2 + 356, v28 + 1, "%s", src);
                      strcpy((char *)a2 + 1556, src);
                      *((_BYTE *)a2 + 444) = 1;
                      v29 = strlen(v91);
                      v108 = calloc(v29, 1u);
                      v4 = hex2bin((int)v108, (unsigned __int8 *)v91, v29 >> 1);
                      if ( v4 )
                      {
                        v104 = calloc(nmemb, 1u);
                        v4 = hex2bin((int)v104, (unsigned __int8 *)src, nmemb);
                        if ( v4 )
                        {
                          v99 = calloc(n, 1u);
                          v4 = hex2bin((int)v99, (unsigned __int8 *)v19, n);
                          if ( v4 )
                          {
                            v98 = (char *)calloc(v101, 1u);
                            v4 = hex2bin((int)v98, (unsigned __int8 *)v12, v101);
                            if ( v4 )
                            {
                              a2[411] = 0;
                              v97 = (char *)calloc(v102, 1u);
                              v4 = hex2bin((int)v97, (unsigned __int8 *)v14, v102);
                              if ( v4 )
                              {
                                ptra = (char *)calloc(v103, 1u);
                                v4 = hex2bin((int)ptra, (unsigned __int8 *)s, v103);
                                if ( v4 )
                                {
                                  sa = (char *)calloc(v105, 1u);
                                  v4 = hex2bin((int)sa, (unsigned __int8 *)v16, v105);
                                  if ( v4 )
                                  {
                                    v30 = calloc(v100, 1u);
                                    v31 = hex2bin((int)v30, (unsigned __int8 *)v10, v100);
                                    v4 = v31;
                                    if ( v31 )
                                    {
                                      v32 = sa == 0;
                                      if ( !v30 )
                                        v32 = 1;
                                      if ( v32 )
                                      {
                                        V_LOCK(v31);
                                        v33 = logfmt_raw((int)v114, 0x1000u);
                                        V_UNLOCK(v33);
                                        zlog(
                                          g_zc,
                                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/buil"
                                          "d/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/fronten"
                                          "d/frontend_hns/frontend_hns.c",
                                          185,
                                          "hns_padding",
                                          11,
                                          82,
                                          100,
                                          v114);
                                      }
                                      else
                                      {
                                        do
                                        {
                                          v110[v32] = *((_BYTE *)v30 + v32) ^ sa[v32];
                                          ++v32;
                                        }
                                        while ( v32 != 20 );
                                      }
                                      if ( memcmp(v30, &dword_2E8104, 0x20u) )
                                      {
                                        v73 = *v30;
                                        v112 = 0u;
                                        dword_2E8104 = v73;
                                        dest = 0;
                                        *(_QWORD *)byte_2E8124 = 0;
                                        unk_2E812C = 0;
                                        dbl_2E8134 = 0.0;
                                        dbl_2E813C = 0.0;
                                        v113 = 0;
                                        memset(v114, 0, 0xF0u);
                                        hs_blake2b_init(v114, 32);
                                        hs_blake2b_update(v114, v30, 32);
                                        hs_blake2b_update(v114, &dest, 32);
                                        hs_blake2b_final(v114, byte_2E8124, 32);
                                      }
                                      v34 = a2 + 116;
                                      v35 = a2[19];
                                      v36 = (const void *)a2[20];
                                      dest = 0;
                                      *(_QWORD *)&v112 = 0;
                                      *(_QWORD *)((char *)&v112 + 6) = 0;
                                      memcpy(&dest, v36, v35);
                                      memset(a2 + 116, 0, 0x100u);
                                      v37 = strlen(v91);
                                      memcpy(a2 + 116, v108, v37 >> 1);
                                      v109 = strlen(v91) >> 1;
                                      memcpy((char *)a2 + v109 + 464, v99, n);
                                      v38 = &v98[v101];
                                      for ( i = (char *)a2 + v109 + n + 464; v101 > i - ((char *)a2 + v109 + n + 464); ++i )
                                      {
                                        v40 = *--v38;
                                        *i = v40;
                                      }
                                      v41 = v109 + n + v101;
                                      v42 = &v97[v102];
                                      for ( j = (char *)v34 + v41; v102 > j - ((char *)v34 + v41); ++j )
                                      {
                                        v44 = *--v42;
                                        *j = v44;
                                      }
                                      v45 = v41 + v102;
                                      v46 = &ptra[v103];
                                      for ( k = (char *)v34 + v45; k - ((char *)v34 + v45) < v103; ++k )
                                      {
                                        v48 = *--v46;
                                        *k = v48;
                                      }
                                      v49 = v45 + v103;
                                      v50 = (__int64 *)((char *)&v112 + 14);
                                      v51 = (char *)v34 + v49;
                                      do
                                      {
                                        v52 = *((_BYTE *)v50 - 1);
                                        v50 = (__int64 *)((char *)v50 - 1);
                                        *v51++ = v52;
                                      }
                                      while ( &dest != v50 );
                                      v53 = (char *)&dword_2E8144;
                                      v54 = (char *)v34 + v49 + 21;
                                      do
                                      {
                                        v55 = *--v53;
                                        *++v54 = v55;
                                      }
                                      while ( byte_2E8124 != v53 );
                                      v56 = &sa[v105];
                                      v57 = 0;
                                      while ( 1 )
                                      {
                                        v59 = v105 <= v57;
                                        v60 = (int)v34 + v49 + v57++;
                                        if ( v59 )
                                          break;
                                        v58 = *--v56;
                                        *(_BYTE *)(v60 + 54) = v58;
                                      }
                                      v61 = v49 + v105 + 54;
                                      v62 = (char *)v30 + v100;
                                      for ( m = (char *)v34 + v61; m - ((char *)v34 + v61) < v100; ++m )
                                      {
                                        v64 = *--v62;
                                        *m = v64;
                                      }
                                      v65 = v61 + v100;
                                      v66 = (char *)v34 + v65;
                                      p_dest = &dest;
                                      do
                                      {
                                        v68 = *((_BYTE *)p_dest - 1);
                                        p_dest = (__int64 *)((char *)p_dest - 1);
                                        *v66++ = v68;
                                      }
                                      while ( v110 != (_BYTE *)p_dest );
                                      v69 = v65 + 20;
                                      v70 = v65 + 24;
                                      *(int *)((char *)v34 + v69) = 0;
                                      memcpy((char *)v34 + v70, v104, nmemb);
                                      v71 = v70 + nmemb;
                                      *(int *)((char *)v34 + v71) = 0;
                                      *(_WORD *)((char *)v34 + v71 + 4) = 0;
                                      *((_QWORD *)a2 + 57) = *a2;
                                    }
                                    else
                                    {
                                      V_LOCK(0);
                                      v74 = logfmt_raw((int)v114, 0x1000u);
                                      V_UNLOCK(v74);
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/"
                                        "rootfs/buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/fr"
                                        "ontend_hns/frontend_hns.c",
                                        185,
                                        "stratum_notify_hns",
                                        18,
                                        233,
                                        100,
                                        v114);
                                    }
                                  }
                                  else
                                  {
                                    V_LOCK(0);
                                    v30 = 0;
                                    v89 = logfmt_raw((int)v114, 0x1000u);
                                    V_UNLOCK(v89);
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/ro"
                                      "otfs/buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/fronte"
                                      "nd_hns/frontend_hns.c",
                                      185,
                                      "stratum_notify_hns",
                                      18,
                                      225,
                                      100,
                                      v114);
                                  }
                                }
                                else
                                {
                                  V_LOCK(0);
                                  v30 = 0;
                                  v87 = logfmt_raw((int)v114, 0x1000u);
                                  sa = 0;
                                  V_UNLOCK(v87);
                                  zlog(
                                    g_zc,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/root"
                                    "fs/buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_h"
                                    "ns/frontend_hns.c",
                                    185,
                                    "stratum_notify_hns",
                                    18,
                                    217,
                                    100,
                                    v114);
                                }
                              }
                              else
                              {
                                V_LOCK(0);
                                v30 = 0;
                                v88 = logfmt_raw((int)v114, 0x1000u);
                                ptra = 0;
                                V_UNLOCK(v88);
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs"
                                  "/buildroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                                  185,
                                  "stratum_notify_hns",
                                  18,
                                  209,
                                  100,
                                  v114);
                                sa = 0;
                              }
                            }
                            else
                            {
                              V_LOCK(0);
                              v30 = 0;
                              v83 = logfmt_raw((int)v114, 0x1000u);
                              ptra = 0;
                              V_UNLOCK(v83);
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/b"
                                "uildroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                                185,
                                "stratum_notify_hns",
                                18,
                                197,
                                100,
                                v114);
                              sa = 0;
                              v97 = 0;
                            }
                          }
                          else
                          {
                            V_LOCK(0);
                            v30 = 0;
                            v84 = logfmt_raw((int)v114, 0x1000u);
                            ptra = 0;
                            V_UNLOCK(v84);
                            sa = 0;
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/bui"
                              "ldroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                              185,
                              "stratum_notify_hns",
                              18,
                              189,
                              100,
                              v114);
                            v97 = 0;
                            v98 = 0;
                          }
                        }
                        else
                        {
                          V_LOCK(0);
                          v30 = 0;
                          v85 = logfmt_raw((int)v114, 0x1000u);
                          ptra = 0;
                          V_UNLOCK(v85);
                          sa = 0;
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/build"
                            "root/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                            185,
                            "stratum_notify_hns",
                            18,
                            181,
                            100,
                            v114);
                          v97 = 0;
                          v98 = 0;
                          v99 = 0;
                        }
                      }
                      else
                      {
                        V_LOCK(0);
                        v30 = 0;
                        v86 = logfmt_raw((int)v114, 0x1000u);
                        v104 = 0;
                        V_UNLOCK(v86);
                        ptra = 0;
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                          185,
                          "stratum_notify_hns",
                          18,
                          173,
                          100,
                          v114);
                        sa = 0;
                        v97 = 0;
                        v98 = 0;
                        v99 = 0;
                      }
                      v75 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
                      V_LOCK(v75);
                      v76 = logfmt_raw((int)v114, 0x1000u);
                      V_UNLOCK(v76);
                      v77 = zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/bui"
                              "ldroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                              185,
                              "stratum_notify_hns",
                              18,
                              303,
                              20,
                              v114);
                      V_LOCK(v77);
                      v78 = logfmt_raw((int)v114, 0x1000u);
                      V_UNLOCK(v78);
                      v79 = zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/bui"
                              "ldroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                              185,
                              "stratum_notify_hns",
                              18,
                              304,
                              20,
                              v114);
                      V_LOCK(v79);
                      v80 = logfmt_raw((int)v114, 0x1000u);
                      V_UNLOCK(v80);
                      v81 = zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/bui"
                              "ldroot/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                              185,
                              "stratum_notify_hns",
                              18,
                              305,
                              20,
                              v114);
                      V_LOCK(v81);
                      v82 = logfmt_raw((int)v114, 0x1000u);
                      V_UNLOCK(v82);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot"
                        "/tmp/release/build/godminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
                        185,
                        "stratum_notify_hns",
                        18,
                        306,
                        20,
                        v114);
                      if ( v108 )
                        free(v108);
                      if ( v104 )
                        free(v104);
                      if ( v99 )
                        free(v99);
                      if ( v98 )
                        free(v98);
                      if ( v97 )
                        free(v97);
                      if ( ptra )
                        free(ptra);
                      if ( sa )
                        free(sa);
                      if ( v30 )
                        free(v30);
                      return v4;
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  V_LOCK(valid);
  v23 = logfmt_raw((int)v114, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/frontend/frontend_hns/frontend_hns.c",
    185,
    "stratum_notify_hns",
    18,
    134,
    100,
    v114);
  return 0;
}
