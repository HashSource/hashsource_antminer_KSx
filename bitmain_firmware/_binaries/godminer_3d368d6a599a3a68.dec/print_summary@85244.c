int print_summary()
{
  double v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int result; // r0
  _DWORD *v39; // r12
  int v40; // r0
  int v41; // r12
  int v42; // r4
  int v43; // r8
  int v44; // r6
  int v45; // r5
  int v46; // r0
  int v47; // r3
  __int64 *v48; // r5
  __int64 *v49; // r6
  int v50; // r4
  __int64 v51; // d16
  size_t v52; // r1
  char *v53; // r0
  double v54; // r4
  __int64 v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r6
  _QWORD *v60; // r6
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r0
  __int64 v74; // r4
  __int64 v75; // r0
  int v76; // r0
  int v77; // [sp+4h] [bp-74h]
  _DWORD *v78; // [sp+1Ch] [bp-5Ch]
  int v79; // [sp+1Ch] [bp-5Ch]
  int v80; // [sp+28h] [bp-50h]
  int v81; // [sp+2Ch] [bp-4Ch]
  int v82; // [sp+3Ch] [bp-3Ch] BYREF
  char v83[24]; // [sp+40h] [bp-38h] BYREF
  char v84[4040]; // [sp+78h] [bp+0h] BYREF
  _BYTE v85[4100]; // [sp+1078h] [bp+1000h] BYREF

  read_system_status_from_monitor(v83);
  get_miner_elapsed_time();
  v0 = sub_26D300(LODWORD(total_accepted), HIDWORD(total_accepted));
  V_LOCK(LODWORD(v0));
  v1 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v1);
  v2 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/api_new.c",
         158,
         "print_summary",
         13,
         2286,
         80,
         v85);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/api_new.c",
         158,
         "print_summary",
         13,
         2287,
         80,
         v85);
  V_LOCK(v4);
  v5 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v5);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/api_new.c",
         158,
         "print_summary",
         13,
         2288,
         80,
         v85);
  V_LOCK(v6);
  v7 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v7);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/api_new.c",
         158,
         "print_summary",
         13,
         2289,
         80,
         v85);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v9);
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2290,
          80,
          v85);
  V_LOCK(v10);
  v11 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v11);
  v12 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2291,
          80,
          v85);
  V_LOCK(v12);
  v13 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v13);
  v14 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2292,
          80,
          v85);
  V_LOCK(v14);
  v15 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v15);
  v16 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2293,
          80,
          v85);
  V_LOCK(v16);
  v17 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v17);
  v18 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2294,
          80,
          v85);
  V_LOCK(v18);
  v19 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v19);
  v20 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2295,
          80,
          v85);
  V_LOCK(v20);
  v21 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v21);
  v22 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2296,
          80,
          v85);
  V_LOCK(v22);
  v23 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v23);
  v24 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2297,
          80,
          v85);
  if ( *(_QWORD *)&total_accepted || *(_QWORD *)&total_rejected )
  {
    V_LOCK(v24);
    v54 = total_rejected;
    v55 = 3LL * *(_QWORD *)&total_rejected
        + vshld_n_s64(3LL * *(_QWORD *)&total_rejected, 5u)
        + *(_QWORD *)&total_rejected;
    sub_26D300(v55, HIDWORD(v55));
    sub_26D300(LODWORD(total_accepted) + LODWORD(v54), (*(_QWORD *)&total_accepted + *(_QWORD *)&v54) >> 32);
    v56 = logfmt_raw((int)v85, 0x1000u);
    V_UNLOCK(v56);
    v24 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/api_new.c",
            158,
            "print_summary",
            13,
            2300,
            80,
            v85);
  }
  V_LOCK(v24);
  v25 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v25);
  v26 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2302,
          80,
          v85);
  V_LOCK(v26);
  v27 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v27);
  v28 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2303,
          80,
          v85);
  V_LOCK(v28);
  v29 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v29);
  v30 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2304,
          80,
          v85);
  V_LOCK(v30);
  v31 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v31);
  v32 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2305,
          80,
          v85);
  V_LOCK(v32);
  v33 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v33);
  v34 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2306,
          80,
          v85);
  V_LOCK(v34);
  v35 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v35);
  v36 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/api_new.c",
          158,
          "print_summary",
          13,
          2307,
          80,
          v85);
  if ( total_pools > 0 )
  {
    V_LOCK(v36);
    v58 = logfmt_raw((int)v85, 0x1000u);
    V_UNLOCK(v58);
    v36 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/api_new.c",
            158,
            "print_summary",
            13,
            2311,
            80,
            v85);
    if ( total_pools > 0 )
    {
      v79 = 0;
      do
      {
        v59 = *(_DWORD *)(pools + 4 * v79);
        V_LOCK(v36);
        v60 = (_QWORD *)(v59 + 1936);
        v61 = logfmt_raw((int)v85, 0x1000u);
        V_UNLOCK(v61);
        v62 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/api_new.c",
                158,
                "print_summary",
                13,
                2316,
                80,
                v85);
        V_LOCK(v62);
        v63 = logfmt_raw((int)v85, 0x1000u);
        V_UNLOCK(v63);
        v64 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/api_new.c",
                158,
                "print_summary",
                13,
                2317,
                80,
                v85);
        V_LOCK(v64);
        v65 = logfmt_raw((int)v85, 0x1000u);
        V_UNLOCK(v65);
        v66 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/api_new.c",
                158,
                "print_summary",
                13,
                2318,
                80,
                v85);
        V_LOCK(v66);
        v67 = logfmt_raw((int)v85, 0x1000u);
        V_UNLOCK(v67);
        v68 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/api_new.c",
                158,
                "print_summary",
                13,
                2319,
                80,
                v85);
        V_LOCK(v68);
        v69 = logfmt_raw((int)v85, 0x1000u);
        V_UNLOCK(v69);
        v70 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/api_new.c",
                158,
                "print_summary",
                13,
                2320,
                80,
                v85);
        V_LOCK(v70);
        v71 = logfmt_raw((int)v85, 0x1000u);
        V_UNLOCK(v71);
        v72 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/api_new.c",
                158,
                "print_summary",
                13,
                2321,
                80,
                v85);
        V_LOCK(v72);
        v73 = logfmt_raw((int)v85, 0x1000u);
        V_UNLOCK(v73);
        v36 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/api_new.c",
                158,
                "print_summary",
                13,
                2322,
                80,
                v85);
        if ( *(v60 - 1) || *v60 )
        {
          V_LOCK(v36);
          v74 = *v60;
          v75 = 3LL * *v60 + vshld_n_s64(3LL * *v60, 5u) + *v60;
          sub_26D300(v75, HIDWORD(v75));
          sub_26D300(*((_DWORD *)v60 - 2) + v74, (unsigned __int64)(*(v60 - 1) + v74) >> 32);
          v76 = logfmt_raw((int)v85, 0x1000u);
          V_UNLOCK(v76);
          v36 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/api_new.c",
                  158,
                  "print_summary",
                  13,
                  2325,
                  80,
                  v85);
        }
        ++v79;
      }
      while ( total_pools > v79 );
    }
  }
  V_LOCK(v36);
  v37 = logfmt_raw((int)v85, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/api_new.c",
    158,
    "print_summary",
    13,
    2330,
    80,
    v85);
  v82 = 0;
  result = get_all_created_runtime(&v82);
  if ( v82 > 0 )
  {
    v78 = (_DWORD *)(result - 4);
    v81 = 0;
    do
    {
      v39 = (_DWORD *)v78[1];
      ++v78;
      v40 = snprintf(
              v84,
              0x1000u,
              "chain %d device %d wc %llu nc %llu detail: ",
              v39[62],
              v39[61],
              v77,
              v39[110],
              v39[111],
              v39[112],
              v39[113]);
      v41 = *v78;
      v80 = *(_DWORD *)(*v78 + 332);
      v42 = v40;
      if ( v80 > 0 )
      {
        v43 = 0;
        while ( 1 )
        {
          v44 = 48 * v43++;
          v45 = *(_DWORD *)(v41 + 456);
          v46 = snprintf(&v84[v42], 4096 - v42, "%d:", v43);
          v47 = v45 + 48;
          v48 = (__int64 *)(v45 + v44);
          v49 = (__int64 *)(v47 + v44);
          v50 = v46 + v42;
          do
          {
            v51 = *v48++;
            v50 += snprintf(&v84[v50], 4096 - v50, " %llu", v51);
          }
          while ( v49 != v48 );
          v52 = 4096 - v50;
          v53 = &v84[v50];
          v42 = v50 + 2;
          v40 = snprintf(v53, v52, " /");
          if ( v43 == v80 )
            break;
          v41 = *v78;
        }
      }
      V_LOCK(v40);
      ++v81;
      v57 = logfmt_raw((int)v85, 0x1000u);
      V_UNLOCK(v57);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/api_new.c",
                 158,
                 "print_summary",
                 13,
                 2350,
                 80,
                 v85);
    }
    while ( v82 > v81 );
  }
  return result;
}
