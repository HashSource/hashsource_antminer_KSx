bool __fastcall sub_9B194(int a1, int *a2, _DWORD *a3)
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
  const char *v22; // r0
  size_t v23; // r0
  size_t v24; // r0
  size_t v25; // r0
  size_t v26; // r4
  unsigned __int64 *v27; // r9
  int v28; // r3
  int *v29; // r10
  size_t v30; // r2
  const void *v31; // r1
  size_t v32; // r0
  char *v33; // r12
  _BYTE *i; // r1
  char v35; // t1
  size_t v36; // r2
  char *v37; // r12
  _BYTE *j; // r1
  char v39; // t1
  size_t v40; // r2
  char *v41; // r12
  _BYTE *k; // r1
  char v43; // t1
  size_t v44; // r2
  unsigned __int64 *v45; // r1
  _BYTE *v46; // r0
  char v47; // t1
  char *v48; // r0
  char *v49; // r1
  char v50; // t1
  char *v51; // r1
  signed int v52; // r3
  char v53; // t1
  bool v54; // cc
  int v55; // r0
  size_t v56; // r7
  char *v57; // r1
  _BYTE *m; // r3
  char v59; // t1
  size_t v60; // r7
  _BYTE *v61; // r2
  unsigned __int64 *p_dest; // r3
  char v63; // t1
  size_t v64; // r3
  size_t v65; // r7
  size_t v66; // r7
  int v67; // r12
  char *src; // [sp+14h] [bp-1090h]
  char *v69; // [sp+18h] [bp-108Ch]
  char *s; // [sp+1Ch] [bp-1088h]
  char *sa; // [sp+1Ch] [bp-1088h]
  void *ptr; // [sp+28h] [bp-107Ch]
  size_t ptrb; // [sp+28h] [bp-107Ch]
  char *ptra; // [sp+28h] [bp-107Ch]
  char *v75; // [sp+2Ch] [bp-1078h]
  char *v76; // [sp+30h] [bp-1074h]
  void *v77; // [sp+34h] [bp-1070h]
  signed int v78; // [sp+38h] [bp-106Ch]
  signed int v79; // [sp+3Ch] [bp-1068h]
  signed int v80; // [sp+40h] [bp-1064h]
  signed int v81; // [sp+44h] [bp-1060h]
  void *v82; // [sp+48h] [bp-105Ch]
  signed int v83; // [sp+4Ch] [bp-1058h]
  size_t n; // [sp+50h] [bp-1054h]
  size_t nmemb; // [sp+54h] [bp-1050h]
  void *v86; // [sp+5Ch] [bp-1048h]
  size_t v87; // [sp+64h] [bp-1040h]
  _BYTE v88[20]; // [sp+6Ch] [bp-1038h] BYREF
  unsigned __int64 dest; // [sp+80h] [bp-1024h] BYREF
  __int128 v90; // [sp+88h] [bp-101Ch] BYREF
  __int64 v91; // [sp+98h] [bp-100Ch]
  _DWORD v92[1025]; // [sp+A0h] [bp-1004h] BYREF

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
  v69 = (char *)json_string_value(v20);
  v21 = json_array_get(a3, 8u);
  src = (char *)json_string_value(v21);
  if ( valid_ascii(v8)
    && valid_hex(v10)
    && valid_hex(v14)
    && valid_hex(v12)
    && valid_hex(v16)
    && valid_hex(s)
    && valid_hex(v19)
    && valid_hex(v69)
    && valid_hex(src) )
  {
    settime_based_notify_ntime(src);
    if ( a2 != (int *)-456 )
    {
      v22 = (const char *)a2[395];
      if ( v22 && !strcmp(v22, v8) )
      {
        V_LOCK();
        logfmt_raw((char *)v92, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          180,
          "stratum_notify_hns",
          18,
          142,
          80,
          v92);
      }
      if ( strlen(v8) > 0x1F )
      {
        V_LOCK();
        v23 = strlen(v8);
        logfmt_raw((char *)v92, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v8, v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          180,
          "stratum_notify_hns",
          18,
          145,
          80,
          v92);
      }
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
      ptr = (void *)a2[395];
      a2[395] = (int)_strdup(v8);
      if ( ptr )
        free(ptr);
      snprintf((char *)a2 + 100, 0x41u, "%s", v10);
      v78 = strlen(v10) >> 1;
      v79 = strlen(v12) >> 1;
      v80 = strlen(v14) >> 1;
      v83 = strlen(v16) >> 1;
      v81 = strlen(s) >> 1;
      ptrb = strlen(v19);
      n = ptrb >> 1;
      nmemb = strlen(src) >> 1;
      snprintf((char *)a2 + 332, ptrb + 1, "%s", v19);
      v24 = strlen(v69);
      snprintf((char *)a2 + 344, v24 + 1, "%s", v69);
      v25 = strlen(src);
      snprintf((char *)a2 + 356, v25 + 1, "%s", src);
      strcpy((char *)a2 + 1556, src);
      *((_BYTE *)a2 + 444) = 1;
      v26 = strlen(v69);
      v86 = calloc(v26, 1u);
      v4 = hex2bin((int)v86, (unsigned __int8 *)v69, v26 >> 1);
      if ( v4 )
      {
        v82 = calloc(nmemb, 1u);
        v4 = hex2bin((int)v82, (unsigned __int8 *)src, nmemb);
        if ( v4 )
        {
          v77 = calloc(n, 1u);
          v4 = hex2bin((int)v77, (unsigned __int8 *)v19, n);
          if ( v4 )
          {
            v76 = (char *)calloc(v79, 1u);
            v4 = hex2bin((int)v76, (unsigned __int8 *)v12, v79);
            if ( v4 )
            {
              a2[411] = 0;
              v75 = (char *)calloc(v80, 1u);
              v4 = hex2bin((int)v75, (unsigned __int8 *)v14, v80);
              if ( v4 )
              {
                ptra = (char *)calloc(v81, 1u);
                v4 = hex2bin((int)ptra, (unsigned __int8 *)s, v81);
                if ( v4 )
                {
                  sa = (char *)calloc(v83, 1u);
                  v4 = hex2bin((int)sa, (unsigned __int8 *)v16, v83);
                  if ( v4 )
                  {
                    v27 = (unsigned __int64 *)calloc(v78, 1u);
                    v4 = hex2bin((int)v27, (unsigned __int8 *)v10, v78);
                    if ( v4 )
                    {
                      v28 = sa == 0;
                      if ( !v27 )
                        v28 = 1;
                      if ( v28 )
                      {
                        V_LOCK();
                        logfmt_raw((char *)v92, 0x1000u, 0, "%s input value error", "hns_padding");
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                          180,
                          "hns_padding",
                          11,
                          82,
                          100,
                          v92);
                      }
                      else
                      {
                        do
                        {
                          v88[v28] = *((_BYTE *)v27 + v28) ^ sa[v28];
                          ++v28;
                        }
                        while ( v28 != 20 );
                      }
                      if ( memcmp(v27, &dword_2D30D4, 0x20u) )
                      {
                        v67 = *(_DWORD *)v27;
                        v90 = 0u;
                        dword_2D30D4 = v67;
                        dest = 0;
                        *(_QWORD *)byte_2D30F4 = 0;
                        unk_2D30FC = 0;
                        dbl_2D3104 = 0.0;
                        dbl_2D310C = 0.0;
                        v91 = 0;
                        memset(v92, 0, 0xF0u);
                        hs_blake2b_init(v92, 32);
                        hs_blake2b_update((int)v92, v27, 0x20u);
                        hs_blake2b_update((int)v92, &dest, 0x20u);
                        hs_blake2b_final((int)v92, byte_2D30F4, 0x20u);
                      }
                      v29 = a2 + 116;
                      v30 = a2[19];
                      v31 = (const void *)a2[20];
                      dest = 0;
                      *(_QWORD *)&v90 = 0;
                      *(_QWORD *)((char *)&v90 + 6) = 0;
                      memcpy(&dest, v31, v30);
                      memset(a2 + 116, 0, 0x100u);
                      v32 = strlen(v69);
                      memcpy(a2 + 116, v86, v32 >> 1);
                      v87 = strlen(v69) >> 1;
                      memcpy((char *)a2 + v87 + 464, v77, n);
                      v33 = &v76[v79];
                      for ( i = (char *)a2 + v87 + n + 464; v79 > i - ((char *)a2 + v87 + n + 464); ++i )
                      {
                        v35 = *--v33;
                        *i = v35;
                      }
                      v36 = v87 + n + v79;
                      v37 = &v75[v80];
                      for ( j = (char *)v29 + v36; v80 > j - ((char *)v29 + v36); ++j )
                      {
                        v39 = *--v37;
                        *j = v39;
                      }
                      v40 = v36 + v80;
                      v41 = &ptra[v81];
                      for ( k = (char *)v29 + v40; k - ((char *)v29 + v40) < v81; ++k )
                      {
                        v43 = *--v41;
                        *k = v43;
                      }
                      v44 = v40 + v81;
                      v45 = (unsigned __int64 *)((char *)&v90 + 14);
                      v46 = (char *)v29 + v44;
                      do
                      {
                        v47 = *((_BYTE *)v45 - 1);
                        v45 = (unsigned __int64 *)((char *)v45 - 1);
                        *v46++ = v47;
                      }
                      while ( &dest != v45 );
                      v48 = (char *)&dword_2D3114;
                      v49 = (char *)v29 + v44 + 21;
                      do
                      {
                        v50 = *--v48;
                        *++v49 = v50;
                      }
                      while ( byte_2D30F4 != v48 );
                      v51 = &sa[v83];
                      v52 = 0;
                      while ( 1 )
                      {
                        v54 = v83 <= v52;
                        v55 = (int)v29 + v44 + v52++;
                        if ( v54 )
                          break;
                        v53 = *--v51;
                        *(_BYTE *)(v55 + 54) = v53;
                      }
                      v56 = v44 + v83 + 54;
                      v57 = (char *)v27 + v78;
                      for ( m = (char *)v29 + v56; m - ((char *)v29 + v56) < v78; ++m )
                      {
                        v59 = *--v57;
                        *m = v59;
                      }
                      v60 = v56 + v78;
                      v61 = (char *)v29 + v60;
                      p_dest = &dest;
                      do
                      {
                        v63 = *((_BYTE *)p_dest - 1);
                        p_dest = (unsigned __int64 *)((char *)p_dest - 1);
                        *v61++ = v63;
                      }
                      while ( v88 != (_BYTE *)p_dest );
                      v64 = v60 + 20;
                      v65 = v60 + 24;
                      *(int *)((char *)v29 + v64) = 0;
                      memcpy((char *)v29 + v65, v82, nmemb);
                      v66 = v65 + nmemb;
                      *(int *)((char *)v29 + v66) = 0;
                      *(_WORD *)((char *)v29 + v66 + 4) = 0;
                      *((_QWORD *)a2 + 57) = *a2;
                    }
                    else
                    {
                      V_LOCK();
                      logfmt_raw((char *)v92, 0x1000u, 0, "parse prev_hash failed!");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot"
                        "/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                        180,
                        "stratum_notify_hns",
                        18,
                        233,
                        100,
                        v92);
                    }
                  }
                  else
                  {
                    V_LOCK();
                    v27 = 0;
                    logfmt_raw((char *)v92, 0x1000u, 0, "parse nameroot failed!");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                      180,
                      "stratum_notify_hns",
                      18,
                      225,
                      100,
                      v92);
                  }
                }
                else
                {
                  V_LOCK();
                  v27 = 0;
                  logfmt_raw((char *)v92, 0x1000u, 0, "parse reserved_root failed!");
                  sa = 0;
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                    180,
                    "stratum_notify_hns",
                    18,
                    217,
                    100,
                    v92);
                }
              }
              else
              {
                V_LOCK();
                v27 = 0;
                logfmt_raw((char *)v92, 0x1000u, 0, "parse witness failed!");
                ptra = 0;
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                  180,
                  "stratum_notify_hns",
                  18,
                  209,
                  100,
                  v92);
                sa = 0;
              }
            }
            else
            {
              V_LOCK();
              v27 = 0;
              logfmt_raw((char *)v92, 0x1000u, 0, "parse merkle failed!");
              ptra = 0;
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                180,
                "stratum_notify_hns",
                18,
                197,
                100,
                v92);
              sa = 0;
              v75 = 0;
            }
          }
          else
          {
            V_LOCK();
            v27 = 0;
            logfmt_raw((char *)v92, 0x1000u, 0, "parse bloc_version failed!");
            ptra = 0;
            V_UNLOCK();
            sa = 0;
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
              180,
              "stratum_notify_hns",
              18,
              189,
              100,
              v92);
            v75 = 0;
            v76 = 0;
          }
        }
        else
        {
          V_LOCK();
          v27 = 0;
          logfmt_raw((char *)v92, 0x1000u, 0, "parse ntime failed!");
          ptra = 0;
          V_UNLOCK();
          sa = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
            180,
            "stratum_notify_hns",
            18,
            181,
            100,
            v92);
          v75 = 0;
          v76 = 0;
          v77 = 0;
        }
      }
      else
      {
        V_LOCK();
        v27 = 0;
        logfmt_raw((char *)v92, 0x1000u, 0, "parse nbits failed!");
        v82 = 0;
        V_UNLOCK();
        ptra = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          180,
          "stratum_notify_hns",
          18,
          173,
          100,
          v92);
        sa = 0;
        v75 = 0;
        v76 = 0;
        v77 = 0;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
      V_LOCK();
      logfmt_raw((char *)v92, 0x1000u, 0, "job_id: %s", v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
        180,
        "stratum_notify_hns",
        18,
        303,
        20,
        v92);
      V_LOCK();
      logfmt_raw((char *)v92, 0x1000u, 0, "prev_hash: %s", v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
        180,
        "stratum_notify_hns",
        18,
        304,
        20,
        v92);
      V_LOCK();
      logfmt_raw((char *)v92, 0x1000u, 0, "nbit: %s", v69);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
        180,
        "stratum_notify_hns",
        18,
        305,
        20,
        v92);
      V_LOCK();
      logfmt_raw((char *)v92, 0x1000u, 0, "ntime: %s", src);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
        180,
        "stratum_notify_hns",
        18,
        306,
        20,
        v92);
      if ( v86 )
        free(v86);
      if ( v82 )
        free(v82);
      if ( v77 )
        free(v77);
      if ( v76 )
        free(v76);
      if ( v75 )
        free(v75);
      if ( ptra )
        free(ptra);
      if ( sa )
        free(sa);
      if ( v27 )
        free(v27);
      return v4;
    }
    return 0;
  }
  V_LOCK();
  logfmt_raw((char *)v92, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
    180,
    "stratum_notify_hns",
    18,
    134,
    100,
    v92);
  return 0;
}
