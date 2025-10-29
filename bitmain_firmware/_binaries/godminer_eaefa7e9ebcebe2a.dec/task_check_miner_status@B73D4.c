int task_check_miner_status()
{
  __int64 v0; // r6
  char *v1; // r10
  int v2; // r9
  int v3; // r11
  int all_created_runtime; // r0
  int v5; // r5
  int v6; // t1
  int flag_from_monitor; // r0
  __int64 v8; // r10
  int v9; // r4
  __int64 v10; // r6
  __int64 v11; // r0
  __int64 v12; // r0
  __int64 v13; // r4
  int v14; // r2
  _BOOL4 v15; // r1
  _DWORD *v16; // r0
  int v17; // r0
  int *v18; // r0
  int *v19; // r2
  int v20; // t1
  int v21; // r4
  int v22; // r0
  int v23; // r6
  int v24; // r5
  int v25; // t1
  _BYTE *v26; // r0
  int v27; // r3
  int v28; // r5
  __int64 v29; // r6
  int v30; // r3
  _BOOL4 v31; // r9
  int v32; // r2
  int v33; // r0
  int v34; // r3
  int v35; // r1
  int v36; // r0
  int v37; // r2
  int v38; // r0
  __int64 v40; // r0
  bool v41; // zf
  __int64 v42; // r2
  __int64 v43; // r0
  __int64 v44; // r0
  int v45; // r0
  __int64 v46; // r10
  int v47; // r1
  int v48; // r2
  int v49; // r3
  _DWORD *v50; // r11
  int v51; // r1
  int v52; // r2
  int v53; // r3
  int v54; // r0
  int v55; // r1
  int v56; // r2
  int v57; // r3
  _DWORD *v58; // r11
  int v59; // r1
  int v60; // r2
  int v61; // r3
  int v62; // r0
  int v63; // r1
  int v64; // r2
  int v65; // r3
  _DWORD *v66; // r11
  int v67; // r1
  int v68; // r2
  int v69; // r3
  int v70; // r0
  int v71; // r1
  int v72; // r2
  int v73; // r3
  _DWORD *v74; // r12
  int v75; // r1
  int v76; // r2
  int v77; // r3
  int v78; // r0
  int v79; // r0
  unsigned __int8 v80; // r5
  int v81; // r6
  int v82; // r0
  char **v83; // r4
  _DWORD *v84; // r7
  int v85; // r5
  int v86; // t1
  int v87; // r0
  int v88; // r0
  unsigned int v89; // r0
  int v90; // r0
  int v91; // r3
  int v92; // r3
  int v93; // r0
  int v94; // r0
  int *v95; // r12
  int v96; // r1
  int v97; // r2
  int v98; // r3
  int v99; // r0
  int v100; // r0
  int v101; // r0
  int v102; // r1
  unsigned int v103; // r4
  int v104; // r0
  int v105; // [sp+10h] [bp-123Ch] BYREF
  int v106; // [sp+14h] [bp-1238h]
  int v107; // [sp+18h] [bp-1234h]
  int v108; // [sp+1Ch] [bp-1230h]
  char *v109; // [sp+20h] [bp-122Ch] BYREF
  int v110; // [sp+24h] [bp-1228h]
  const char *v111; // [sp+28h] [bp-1224h]
  char *v112; // [sp+2Ch] [bp-1220h]
  int v113; // [sp+30h] [bp-121Ch]
  int v114; // [sp+34h] [bp-1218h]
  int v115; // [sp+38h] [bp-1214h]
  int v116; // [sp+3Ch] [bp-1210h]
  char *v117; // [sp+40h] [bp-120Ch]
  const char *v118; // [sp+44h] [bp-1208h]
  int v119; // [sp+4Ch] [bp-1200h]
  __int64 v120; // [sp+50h] [bp-11FCh]
  char **v121; // [sp+58h] [bp-11F4h]
  char *v122; // [sp+5Ch] [bp-11F0h]
  __int64 s; // [sp+60h] [bp-11ECh]
  double v124; // [sp+68h] [bp-11E4h]
  const char *v125; // [sp+70h] [bp-11DCh]
  int v126; // [sp+74h] [bp-11D8h]
  int v127; // [sp+78h] [bp-11D4h]
  int v128; // [sp+7Ch] [bp-11D0h]
  int v129; // [sp+84h] [bp-11C8h] BYREF
  char v130[16]; // [sp+88h] [bp-11C4h] BYREF
  int v131; // [sp+98h] [bp-11B4h]
  int v132; // [sp+9Ch] [bp-11B0h]
  int v133; // [sp+A0h] [bp-11ACh]
  int v134; // [sp+A4h] [bp-11A8h]
  _DWORD v135[8]; // [sp+A8h] [bp-11A4h] BYREF
  char v136[16]; // [sp+C8h] [bp-1184h] BYREF
  int v137; // [sp+D8h] [bp-1174h]
  int v138; // [sp+DCh] [bp-1170h]
  int v139; // [sp+E0h] [bp-116Ch]
  int v140; // [sp+E4h] [bp-1168h]
  _DWORD v141[8]; // [sp+E8h] [bp-1164h] BYREF
  char v142[16]; // [sp+108h] [bp-1144h] BYREF
  int v143; // [sp+118h] [bp-1134h]
  int v144; // [sp+11Ch] [bp-1130h]
  int v145; // [sp+120h] [bp-112Ch]
  int v146; // [sp+124h] [bp-1128h]
  _DWORD v147[8]; // [sp+128h] [bp-1124h] BYREF
  char v148[16]; // [sp+148h] [bp-1104h] BYREF
  int v149; // [sp+158h] [bp-10F4h]
  int v150; // [sp+15Ch] [bp-10F0h]
  int v151; // [sp+160h] [bp-10ECh]
  int v152; // [sp+164h] [bp-10E8h]
  _DWORD v153[8]; // [sp+168h] [bp-10E4h] BYREF
  char v154[16]; // [sp+188h] [bp-10C4h] BYREF
  int v155; // [sp+198h] [bp-10B4h]
  int v156; // [sp+19Ch] [bp-10B0h]
  int v157; // [sp+1A0h] [bp-10ACh]
  int v158; // [sp+1A4h] [bp-10A8h]
  _DWORD v159[8]; // [sp+1A8h] [bp-10A4h] BYREF
  char v160[16]; // [sp+1C8h] [bp-1084h] BYREF
  int v161; // [sp+1D8h] [bp-1074h]
  int v162; // [sp+1DCh] [bp-1070h]
  int v163; // [sp+1E0h] [bp-106Ch]
  int v164; // [sp+1E4h] [bp-1068h]
  _DWORD v165[8]; // [sp+1E8h] [bp-1064h] BYREF
  _DWORD v166[8]; // [sp+208h] [bp-1044h] BYREF
  double v167[4]; // [sp+228h] [bp-1024h] BYREF
  _DWORD v168[1025]; // [sp+248h] [bp-1004h] BYREF

  v1 = &byte_2E9644;
  if ( !byte_2E9644 )
  {
    byte_2E9648 = 0;
    byte_2E9649 = 0;
    byte_2E964A = 0;
    byte_2E964B = 0;
    byte_2E964C = 0;
    byte_2E964D = 0;
    byte_2E964E = 0;
    byte_2E964F = 0;
    byte_2E9650 = 0;
    byte_2E9644 = 1;
  }
  pthread_mutex_lock(&stru_2E9658);
  v2 = 0;
  v3 = (unsigned __int8)byte_2E9650 ^ 1;
  v166[0] = 0;
  all_created_runtime = get_all_created_runtime(v166);
  memset(v167, 0, 16);
  if ( v166[0] <= 0 )
  {
    v126 = 0;
    v125 = 0;
    v120 = 0;
    goto LABEL_26;
  }
  v5 = all_created_runtime - 4;
  v122 = "chain";
  v125 = "uneffective temp exceed limit";
  v119 = v3;
  v126 = (int)&byte_2E9644;
  LODWORD(s) = "error";
  do
  {
    v6 = *(_DWORD *)(v5 + 4);
    v5 += 4;
    flag_from_monitor = get_flag_from_monitor(v6);
    v8 = *(_QWORD *)(flag_from_monitor + 16);
    v9 = flag_from_monitor;
    if ( (v8 & 1) == 0 )
    {
      if ( (v8 & 2) == 0 )
      {
        if ( (v8 & 4) == 0 )
          goto LABEL_78;
        v44 = *(_QWORD *)(flag_from_monitor + 24);
        v41 = v119 == 0;
        *(_QWORD *)(v9 + 24) = v44 | 4;
        if ( !v41 )
        {
          LODWORD(v0) = "check_temp";
          HIDWORD(v0) = &g_zc;
          v124 = v167[0];
          LODWORD(v120) = "%s";
          v121 = &v109;
          goto LABEL_91;
        }
LABEL_15:
        if ( (v8 & 8) != 0 )
          *(_QWORD *)(v9 + 24) |= 8uLL;
LABEL_17:
        if ( (v8 & 0x10) != 0 )
        {
          v41 = v119 == 0;
          v12 = *(_QWORD *)(v9 + 24) | 0x10LL;
          *(_QWORD *)(v9 + 24) = v12;
          if ( !v41 )
          {
            HIDWORD(v0) = &g_zc;
            LODWORD(v120) = "%s";
            v121 = &v109;
            goto LABEL_119;
          }
        }
        goto LABEL_20;
      }
      v40 = *(_QWORD *)(flag_from_monitor + 24);
      v41 = v119 == 0;
      if ( !v119 )
        LODWORD(v0) = v8 & 4;
      HIDWORD(v42) = HIDWORD(v40);
      if ( !v119 )
        HIDWORD(v0) = 0;
      LODWORD(v42) = v40 | 2;
      *(_QWORD *)(v9 + 24) = v42;
      if ( !v41 )
      {
        LODWORD(v0) = "check_temp";
        HIDWORD(v0) = &g_zc;
        v124 = v167[0];
        LODWORD(v120) = "%s";
        v121 = &v109;
        goto LABEL_89;
      }
LABEL_76:
      if ( !v0 )
        goto LABEL_78;
      *(_QWORD *)(v9 + 24) |= 4uLL;
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(flag_from_monitor + 24);
    v41 = v119 == 0;
    v11 = v10;
    LODWORD(v10) = v10 | 1;
    *(_QWORD *)(v9 + 24) = v10;
    if ( v41 )
    {
      LODWORD(v0) = v8 & 4;
      if ( (v8 & 2) != 0 )
        LODWORD(v11) = v11 | 3;
      HIDWORD(v0) = 0;
      if ( (v8 & 2) == 0 )
      {
        if ( !v0 )
        {
          v0 = v8 & 8;
          if ( (v8 & 8) != 0 )
          {
            LODWORD(v11) = v11 | 9;
            *(_QWORD *)(v9 + 24) = v11;
LABEL_81:
            if ( (v8 & 0x10) != 0 )
              *(_QWORD *)(v9 + 24) |= 0x10uLL;
            goto LABEL_20;
          }
          goto LABEL_17;
        }
        LODWORD(v11) = v11 | 5;
        *(_QWORD *)(v9 + 24) = v11;
        goto LABEL_15;
      }
      *(_QWORD *)(v9 + 24) = v11;
      goto LABEL_76;
    }
    V_LOCK(v11);
    v121 = &v109;
    LODWORD(v0) = "check_temp";
    V_INT((int)v160, v122);
    LODWORD(v120) = "%s";
    V_STR((int)v159, (char *)s);
    v117 = "%s";
    v118 = "check_temp";
    HIDWORD(v0) = &g_zc;
    v109 = (char *)v159[0];
    v110 = v159[1];
    v111 = (const char *)v159[2];
    v112 = (char *)v159[3];
    v113 = v159[4];
    v114 = v159[5];
    v115 = v159[6];
    v116 = v159[7];
    v105 = v161;
    v106 = v162;
    v107 = v163;
    v108 = v164;
    v45 = logfmt_raw((int)v168, 0x1000u);
    V_UNLOCK(v45);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
      194,
      "check_temp",
      10,
      36,
      100,
      v168);
    *(_QWORD *)&v167[0] |= 1uLL;
    v46 = *(_QWORD *)(v9 + 16);
    v124 = v167[0];
    if ( (v46 & 2) != 0 )
    {
      v40 = *(_QWORD *)(v9 + 24) | 2LL;
      *(_QWORD *)(v9 + 24) = v40;
LABEL_89:
      V_LOCK(v40);
      LODWORD(v124) |= 2u;
      V_INT((int)v154, v122);
      V_STR((int)v153, (char *)s);
      v47 = v153[1];
      v48 = v153[2];
      v49 = v153[3];
      v50 = v121;
      v118 = "check_temp";
      v117 = (char *)v120;
      *v121 = (char *)v153[0];
      v50[1] = v47;
      v50[2] = v48;
      v50[3] = v49;
      v50 += 4;
      v51 = v153[5];
      v52 = v153[6];
      v53 = v153[7];
      *v50 = v153[4];
      v50[1] = v51;
      v50[2] = v52;
      v50[3] = v53;
      v105 = v155;
      v106 = v156;
      v107 = v157;
      v108 = v158;
      v54 = logfmt_raw((int)v168, 0x1000u);
      V_UNLOCK(v54);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "check_temp",
        10,
        44,
        100,
        v168);
      v167[0] = v124;
      v8 = *(_QWORD *)(v9 + 16);
      if ( (v8 & 4) != 0 )
      {
LABEL_90:
        v44 = *(_QWORD *)(v9 + 24) | 4LL;
        *(_QWORD *)(v9 + 24) = v44;
LABEL_91:
        V_LOCK(v44);
        LODWORD(v124) |= 4u;
        V_INT((int)v148, v122);
        V_STR((int)v147, (char *)s);
        v55 = v147[1];
        v56 = v147[2];
        v57 = v147[3];
        v58 = v121;
        v118 = "check_temp";
        v117 = (char *)v120;
        *v121 = (char *)v147[0];
        v58[1] = v55;
        v58[2] = v56;
        v58[3] = v57;
        v58 += 4;
        v59 = v147[5];
        v60 = v147[6];
        v61 = v147[7];
        *v58 = v147[4];
        v58[1] = v59;
        v58[2] = v60;
        v58[3] = v61;
        v105 = v149;
        v106 = v150;
        v107 = v151;
        v108 = v152;
        v62 = logfmt_raw((int)v168, 0x1000u);
        V_UNLOCK(v62);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
          194,
          "check_temp",
          10,
          52,
          100,
          v168);
        v167[0] = v124;
        v8 = *(_QWORD *)(v9 + 16);
        if ( (v8 & 8) != 0 )
        {
          v43 = *(_QWORD *)(v9 + 24) | 8LL;
          *(_QWORD *)(v9 + 24) = v43;
          goto LABEL_93;
        }
        goto LABEL_17;
      }
LABEL_78:
      if ( (v8 & 8) != 0 )
      {
        v43 = *(_QWORD *)(v9 + 24);
        v41 = v119 == 0;
        *(_QWORD *)(v9 + 24) = v43 | 8;
        if ( !v41 )
        {
          LODWORD(v0) = "check_temp";
          HIDWORD(v0) = &g_zc;
          LODWORD(v120) = "%s";
          v121 = &v109;
          goto LABEL_120;
        }
        goto LABEL_81;
      }
      goto LABEL_17;
    }
    if ( (v46 & 4) != 0 )
      goto LABEL_90;
    if ( (v46 & 8) != 0 )
    {
      v43 = *(_QWORD *)(v9 + 24) | 8LL;
      *(_QWORD *)(v9 + 24) = v43;
LABEL_120:
      v124 = v167[0];
LABEL_93:
      V_LOCK(v43);
      LODWORD(v124) |= 8u;
      V_INT((int)v142, v122);
      V_STR((int)v141, (char *)s);
      v63 = v141[1];
      v64 = v141[2];
      v65 = v141[3];
      v66 = v121;
      v118 = "check_temp";
      v117 = (char *)v120;
      *v121 = (char *)v141[0];
      v66[1] = v63;
      v66[2] = v64;
      v66[3] = v65;
      v66 += 4;
      v67 = v141[5];
      v68 = v141[6];
      v69 = v141[7];
      *v66 = v141[4];
      v66[1] = v67;
      v66[2] = v68;
      v66[3] = v69;
      v105 = v143;
      v106 = v144;
      v107 = v145;
      v108 = v146;
      v70 = logfmt_raw((int)v168, 0x1000u);
      V_UNLOCK(v70);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "check_temp",
        10,
        60,
        100,
        v168);
      v167[0] = v124;
      if ( (*(_DWORD *)(v9 + 16) & 0x10) == 0 )
        goto LABEL_20;
      v12 = *(_QWORD *)(v9 + 24) | 0x10LL;
      *(_QWORD *)(v9 + 24) = v12;
      goto LABEL_95;
    }
    if ( (v46 & 0x10) != 0 )
    {
      v12 = *(_QWORD *)(v9 + 24) | 0x10LL;
      *(_QWORD *)(v9 + 24) = v12;
LABEL_119:
      v124 = v167[0];
LABEL_95:
      V_LOCK(v12);
      V_INT((int)v136, v122);
      V_STR((int)v135, (char *)s);
      v71 = v135[1];
      v72 = v135[2];
      v73 = v135[3];
      v118 = "check_temp";
      v74 = v121;
      v117 = (char *)v120;
      *v121 = (char *)v135[0];
      v74[1] = v71;
      v74[2] = v72;
      v74[3] = v73;
      v74 += 4;
      v75 = v135[5];
      v76 = v135[6];
      v77 = v135[7];
      *v74 = v135[4];
      v74[1] = v75;
      v74[2] = v76;
      v74[3] = v77;
      LODWORD(v0) = &v105;
      v105 = v137;
      v106 = v138;
      v107 = v139;
      v108 = v140;
      v78 = logfmt_raw((int)v168, 0x1000u);
      V_UNLOCK(v78);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "check_temp",
        10,
        68,
        100,
        v168);
      *(_QWORD *)&v167[0] = *(_QWORD *)&v124 | 0x10LL;
    }
LABEL_20:
    ++v2;
  }
  while ( v2 < v166[0] );
  v1 = (char *)v126;
  v13 = LOBYTE(v167[0]) & 4;
  v3 = v119;
  v120 = *(_QWORD *)&v167[0];
  v14 = LOBYTE(v167[0]) & 2;
  v15 = (LOBYTE(v167[0]) & 4) != 0;
  v125 = (const char *)v15;
  if ( (LOBYTE(v167[0]) & 2) != 0 )
  {
    v126 = 1;
    set_miner_6060info_status_high_temp_err();
  }
  else
  {
    v126 = 0;
  }
  if ( v13 )
    set_miner_6060info_status_low_temp_err(1, v15, v14, v13);
LABEL_26:
  LODWORD(v167[0]) = 0;
  v16 = (_DWORD *)get_all_created_runtime(v167);
  v17 = get_flag_from_monitor(*v16);
  if ( (*(_DWORD *)(v17 + 32) & 4) != 0 && (*(_QWORD *)(v17 + 40) |= 4uLL, v3) )
  {
    V_LOCK(v17);
    V_STR((int)v165, "error");
    v110 = (int)"check_fan_err";
    v122 = (char *)v3;
    v109 = "%s";
    v105 = v165[4];
    v106 = v165[5];
    v107 = v165[6];
    v108 = v165[7];
    v93 = logfmt_raw((int)v168, 0x1000u);
    V_UNLOCK(v93);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
      194,
      "check_fan_err",
      13,
      85,
      100,
      v168);
  }
  else
  {
    v122 = 0;
  }
  v129 = 0;
  v18 = (int *)get_all_created_runtime(&v129);
  if ( v129 > 0 )
  {
    v19 = &v18[v129];
    do
    {
      v20 = *v18++;
      v3 = (unsigned __int8)(v3 & *(_BYTE *)(v20 + 254));
    }
    while ( v19 != v18 );
  }
  v21 = 0;
  v168[0] = 0;
  v22 = get_all_created_runtime(v168);
  if ( v168[0] > 0 )
  {
    v23 = v22 - 4;
    v24 = 0;
    do
    {
      v25 = *(_DWORD *)(v23 + 4);
      v23 += 4;
      ++v24;
      v26 = (_BYTE *)get_flag_from_monitor(v25);
      if ( ((unsigned __int8)v3 & *v26 & 1) != 0 )
        v21 = (unsigned __int8)v3 & *v26 & 1;
    }
    while ( v24 < v168[0] );
  }
  v27 = (unsigned __int8)v1[44];
  v121 = (char **)v21;
  if ( !v27 )
  {
    clock_gettime(1, &stru_2E9674);
    v1[44] = 1;
  }
  if ( total_pools > 0 )
  {
    v28 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v28),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v28) + 1904))
           || !pools_active )
      {
        if ( ++v28 >= total_pools )
          goto LABEL_45;
      }
      clock_gettime(1, &stru_2E9674);
      set_miner_6060info_network_lost_err(0);
      ++v28;
    }
    while ( v28 < total_pools );
  }
LABEL_45:
  clock_gettime(1, &stru_2E967C);
  v29 = 1000LL * (*((_DWORD *)v1 + 14) - *((_DWORD *)v1 + 12)) + (*((_DWORD *)v1 + 15) - *((_DWORD *)v1 + 13)) / 1000000;
  if ( v29 > 59999 )
    v30 = 0;
  else
    v30 = v1[64] & 1;
  v119 = v30;
  if ( v30 )
  {
    v100 = rand();
    v101 = sub_26CC64(v100, 120);
    v103 = v102 + 60;
    V_LOCK(v101);
    v104 = logfmt_raw((int)v168, 0x1000u);
    V_UNLOCK(v104);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
      194,
      "check_lost_connection_to_pool",
      29,
      150,
      80,
      v168);
    sleep(v103);
    exit(1);
  }
  v31 = (v120 & 0xA) != 0;
  if ( v3 )
  {
    if ( v29 <= 60000 )
    {
      v91 = v119;
      *((_DWORD *)v1 + 17) = v119;
      v127 = v91;
      LODWORD(s) = v91;
    }
    else
    {
      v32 = *((_DWORD *)v1 + 17);
      v33 = v32 + 1;
      *((_DWORD *)v1 + 17) = v32 + 1;
      if ( !(v32 % 60) )
      {
        LODWORD(s) = v167;
        V_LOCK(v33);
        V_STR(s, "error");
        v95 = (int *)(s + 16);
        s = 274877907LL * (int)v29;
        v109 = "lost internet for %d seconds";
        v110 = (int)v29 / 1000;
        v96 = v95[1];
        v97 = v95[2];
        v98 = v95[3];
        v105 = *v95;
        v106 = v96;
        v107 = v97;
        v108 = v98;
        v99 = logfmt_raw((int)v168, 0x1000u);
        V_UNLOCK(v99);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
          194,
          "check_lost_connection_to_pool",
          29,
          158,
          100,
          v168);
        v33 = set_miner_6060info_network_lost_err(1);
      }
      if ( (unsigned int)&loc_124F80 >= v29 )
      {
        LODWORD(s) = v3;
        v127 = 0;
      }
      else
      {
        v34 = (unsigned __int8)v1[64];
        LODWORD(s) = v34;
        if ( v34 )
        {
          v127 = 0;
        }
        else
        {
          V_LOCK(v33);
          V_STR((int)v166, "error");
          v109 = "lost internet %d seconds > 20 minutes, poweroff.";
          v110 = (int)v29 / 1000;
          v31 = v3;
          v127 = v3;
          v105 = v166[4];
          v106 = v166[5];
          v107 = v166[6];
          v108 = v166[7];
          v94 = logfmt_raw((int)v168, 0x1000u);
          LODWORD(s) = v3;
          V_UNLOCK(v94);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
            194,
            "check_lost_connection_to_pool",
            29,
            169,
            120,
            v168);
          v1[64] = 1;
          system("reboot");
        }
      }
    }
  }
  else
  {
    v127 = 0;
    LODWORD(s) = 0;
  }
  LODWORD(v124) = (v120 >> 3) & 1;
  if ( (v120 & 0x10) != 0 )
  {
    set_miner_6060info_uneffective_temp_err(1);
    v92 = (unsigned __int8)v1[12];
    v119 = v92;
    if ( v92 )
    {
      v31 = v119;
    }
    else
    {
      v31 = 1;
      LODWORD(v120) = 1;
      v128 = 1;
      v119 = 1;
LABEL_109:
      v81 = 0;
      v1[12] = 1;
      v168[0] = 0;
      v82 = get_all_created_runtime(v168);
      if ( v168[0] > 0 )
      {
        v83 = v121;
        v84 = (_DWORD *)(v82 - 4);
        v85 = v119;
        do
        {
          v86 = v84[1];
          ++v84;
          ++v81;
          v87 = (*(int (**)(void))(v86 + 20))();
          v88 = dev_ctrl(v87);
          (*(void (__fastcall **)(_DWORD))(v88 + 28))(*(_DWORD *)(*v84 + 244));
        }
        while ( v81 < v168[0] );
        v121 = v83;
        v119 = v85;
      }
      v89 = power_off();
      V_LOCK(v89);
      V_BOOL((int)v130, "poweroff");
      v115 = v127;
      v109 = "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d";
      v114 = v128;
      v113 = LODWORD(v124);
      v112 = v122;
      v111 = v125;
      v110 = v126;
      v105 = v131;
      v106 = v132;
      v107 = v133;
      v108 = v134;
      v90 = logfmt_raw((int)v168, 0x1000u);
      V_UNLOCK(v90);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "task_check_miner_status",
        23,
        333,
        120,
        v168);
      if ( !(_DWORD)v120 && !v1[12] )
        goto LABEL_125;
    }
    goto LABEL_60;
  }
  v35 = (unsigned __int8)v1[12];
  if ( v1[12] )
    goto LABEL_60;
  v80 = (unsigned __int8)v122;
  if ( (v120 & 0xE) != 0 )
    v80 = (unsigned __int8)v122 | 1;
  v119 = (unsigned __int8)(v127 | v80);
  LODWORD(v120) = (unsigned __int8)(s | (unsigned __int8)v121 | v80);
  if ( (unsigned __int8)v127 | v80 )
  {
    v119 = v35;
    v128 = v35;
    goto LABEL_109;
  }
  if ( (_DWORD)v120 )
  {
LABEL_60:
    v1[11] = 1;
    goto LABEL_61;
  }
LABEL_125:
  v1[11] = 0;
LABEL_61:
  if ( v3 )
  {
    v41 = v121 == 0;
    v1[4] = v126;
    v1[5] = (char)v125;
    v1[8] = (char)v122;
    if ( v41 )
      v121 = (char **)(unsigned __int8)v1[12];
    v1[9] = (char)v121;
    v1[10] = s;
    v1[6] = LOBYTE(v124);
    v1[7] = v119;
  }
  v36 = pthread_mutex_unlock(&stru_2E9658);
  v37 = (unsigned __int8)v1[11];
  byte_2E5E44 ^= 1u;
  if ( v37 )
  {
    v38 = green_led_off(v36);
    if ( byte_2E5E44 )
    {
      red_led_on(v38);
      if ( !v31 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off(v38);
  }
  else
  {
    v79 = red_led_off(v36);
    if ( byte_2E5E44 )
      green_led_on(v79);
    else
      green_led_off(v79);
  }
  if ( v31 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
