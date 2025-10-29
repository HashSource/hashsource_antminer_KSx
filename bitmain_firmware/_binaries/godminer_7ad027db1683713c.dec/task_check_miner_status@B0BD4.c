int task_check_miner_status()
{
  __int64 v0; // r6
  char *v1; // r11
  int v2; // r10
  char *all_created_runtime; // r0
  char *v4; // r8
  __int64 v5; // r6
  __int64 v6; // r0
  int v7; // t1
  char *flag_from_monitor; // r0
  __int64 v9; // r10
  char *v10; // r4
  __int64 v11; // r0
  bool v12; // zf
  __int64 v13; // r2
  int v14; // r0
  char *v15; // r10
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r0
  char *v23; // r10
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r2
  int v29; // r3
  __int64 v30; // r10
  char *v31; // r7
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r1
  __int64 v36; // r2
  int v37; // r1
  int v38; // r2
  int v39; // r3
  char *v40; // r12
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r2
  __int64 v45; // r10
  __int64 v46; // r4
  int *v47; // r0
  char *v48; // r0
  int *v49; // r0
  int *v50; // r2
  int v51; // t1
  int v52; // r4
  char *v53; // r0
  int *v54; // r5
  int v55; // t1
  char *v56; // r0
  int v57; // r4
  int v58; // kr00_4
  int v59; // r0
  int v60; // r8
  unsigned __int8 v61; // r12
  int v62; // r4
  int v63; // r0
  int v64; // r4
  int v65; // r3
  int v66; // r7
  int v67; // r5
  char *v68; // r0
  char *v69; // r8
  int v70; // t1
  int v71; // r0
  int v72; // r0
  int v73; // r3
  int v74; // r2
  int v76; // r0
  int v77; // r1
  unsigned int v78; // r4
  int v79; // [sp+20h] [bp-1304h] BYREF
  int v80; // [sp+30h] [bp-12F4h] BYREF
  int v81; // [sp+40h] [bp-12E4h]
  int v82; // [sp+44h] [bp-12E0h]
  int v83; // [sp+4Ch] [bp-12D8h]
  double v84; // [sp+50h] [bp-12D4h]
  __int64 v85; // [sp+58h] [bp-12CCh]
  int v86; // [sp+60h] [bp-12C4h]
  char *v87; // [sp+64h] [bp-12C0h]
  char *v88; // [sp+68h] [bp-12BCh]
  char *s; // [sp+6Ch] [bp-12B8h]
  double v90; // [sp+70h] [bp-12B4h]
  const char *v91; // [sp+78h] [bp-12ACh]
  int v92; // [sp+7Ch] [bp-12A8h]
  int v93; // [sp+84h] [bp-12A0h] BYREF
  _DWORD v94[7]; // [sp+88h] [bp-129Ch] BYREF
  int v95; // [sp+A4h] [bp-1280h]
  __int64 v96; // [sp+A8h] [bp-127Ch] BYREF
  int v97; // [sp+B0h] [bp-1274h]
  int v98; // [sp+B4h] [bp-1270h]
  int v99; // [sp+B8h] [bp-126Ch]
  int v100; // [sp+BCh] [bp-1268h]
  int v101; // [sp+C0h] [bp-1264h]
  int v102; // [sp+C4h] [bp-1260h]
  _DWORD v103[7]; // [sp+C8h] [bp-125Ch] BYREF
  int v104; // [sp+E4h] [bp-1240h]
  __int64 v105; // [sp+E8h] [bp-123Ch] BYREF
  int v106; // [sp+F0h] [bp-1234h]
  int v107; // [sp+F4h] [bp-1230h]
  int v108; // [sp+F8h] [bp-122Ch]
  int v109; // [sp+FCh] [bp-1228h]
  __int64 v110; // [sp+100h] [bp-1224h]
  _QWORD v111[2]; // [sp+108h] [bp-121Ch] BYREF
  int v112; // [sp+118h] [bp-120Ch]
  int v113; // [sp+11Ch] [bp-1208h]
  int v114; // [sp+120h] [bp-1204h]
  int v115; // [sp+124h] [bp-1200h]
  __int64 v116; // [sp+128h] [bp-11FCh] BYREF
  int v117; // [sp+130h] [bp-11F4h]
  int v118; // [sp+134h] [bp-11F0h]
  int v119; // [sp+138h] [bp-11ECh]
  int v120; // [sp+13Ch] [bp-11E8h]
  int v121; // [sp+140h] [bp-11E4h]
  int v122; // [sp+144h] [bp-11E0h]
  _QWORD v123[2]; // [sp+148h] [bp-11DCh] BYREF
  int v124; // [sp+158h] [bp-11CCh]
  int v125; // [sp+15Ch] [bp-11C8h]
  int v126; // [sp+160h] [bp-11C4h]
  int v127; // [sp+164h] [bp-11C0h]
  __int64 v128; // [sp+168h] [bp-11BCh] BYREF
  int v129; // [sp+170h] [bp-11B4h]
  int v130; // [sp+174h] [bp-11B0h]
  int v131; // [sp+178h] [bp-11ACh]
  int v132; // [sp+17Ch] [bp-11A8h]
  int v133; // [sp+180h] [bp-11A4h]
  int v134; // [sp+184h] [bp-11A0h]
  _QWORD v135[2]; // [sp+188h] [bp-119Ch] BYREF
  int v136; // [sp+198h] [bp-118Ch]
  int v137; // [sp+19Ch] [bp-1188h]
  int v138; // [sp+1A0h] [bp-1184h]
  int v139; // [sp+1A4h] [bp-1180h]
  __int64 v140; // [sp+1A8h] [bp-117Ch] BYREF
  int v141; // [sp+1B0h] [bp-1174h]
  int v142; // [sp+1B4h] [bp-1170h]
  int v143; // [sp+1B8h] [bp-116Ch]
  int v144; // [sp+1BCh] [bp-1168h]
  int v145; // [sp+1C0h] [bp-1164h]
  int v146; // [sp+1C4h] [bp-1160h]
  _DWORD v147[2]; // [sp+1C8h] [bp-115Ch] BYREF
  __int64 v148; // [sp+1D0h] [bp-1154h]
  int v149; // [sp+1D8h] [bp-114Ch]
  int v150; // [sp+1DCh] [bp-1148h]
  int v151; // [sp+1E0h] [bp-1144h]
  int v152; // [sp+1E4h] [bp-1140h]
  _QWORD v153[2]; // [sp+1E8h] [bp-113Ch] BYREF
  int v154; // [sp+1F8h] [bp-112Ch]
  int v155; // [sp+1FCh] [bp-1128h]
  int v156; // [sp+200h] [bp-1124h]
  int v157; // [sp+204h] [bp-1120h]
  _QWORD v158[2]; // [sp+208h] [bp-111Ch] BYREF
  int v159; // [sp+218h] [bp-110Ch]
  int v160; // [sp+21Ch] [bp-1108h]
  int v161; // [sp+220h] [bp-1104h]
  int v162; // [sp+224h] [bp-1100h]
  _DWORD v163[7]; // [sp+228h] [bp-10FCh] BYREF
  int v164; // [sp+244h] [bp-10E0h]
  double v165; // [sp+248h] [bp-10DCh] BYREF
  __int64 v166; // [sp+250h] [bp-10D4h]
  int v167; // [sp+258h] [bp-10CCh]
  int v168; // [sp+25Ch] [bp-10C8h]
  int v169; // [sp+260h] [bp-10C4h]
  int v170; // [sp+264h] [bp-10C0h]
  float v171; // [sp+268h] [bp-10BCh]
  float v172; // [sp+270h] [bp-10B4h]
  float v173; // [sp+274h] [bp-10B0h]
  _DWORD v174[1025]; // [sp+320h] [bp-1004h] BYREF

  v1 = &byte_2D35B4;
  if ( !byte_2D35B4 )
  {
    byte_2D35B8 = 0;
    byte_2D35B9 = 0;
    byte_2D35BA = 0;
    byte_2D35BB = 0;
    byte_2D35BC = 0;
    byte_2D35BD = 0;
    byte_2D35BE = 0;
    byte_2D35BF = 0;
    byte_2D35C0 = 0;
    byte_2D35B4 = 1;
  }
  pthread_mutex_lock(&stru_2D35C4);
  v2 = (unsigned __int8)byte_2D35C0 ^ 1;
  v163[0] = 0;
  all_created_runtime = (char *)get_all_created_runtime(v163);
  v165 = 0.0;
  v166 = 0;
  if ( v163[0] <= 0 )
  {
    LODWORD(v90) = 0;
    s = 0;
    v84 = 0.0;
    goto LABEL_52;
  }
  v88 = "chain";
  v4 = all_created_runtime - 4;
  v91 = "uneffective temp exceed limit";
  v83 = 0;
  s = "error";
  v86 = v2;
  v92 = (int)&byte_2D35B4;
  do
  {
    v7 = *((_DWORD *)v4 + 1);
    v4 += 4;
    flag_from_monitor = get_flag_from_monitor(v7);
    v9 = *((_QWORD *)flag_from_monitor + 2);
    v10 = flag_from_monitor;
    if ( (v9 & 1) == 0 )
    {
      if ( (v9 & 2) == 0 )
      {
        if ( (v9 & 4) == 0 )
          goto LABEL_32;
        v12 = v86 == 0;
        *((_QWORD *)flag_from_monitor + 3) |= 4uLL;
        if ( !v12 )
        {
          LODWORD(v0) = &g_zc;
          v90 = v165;
          LODWORD(v85) = "check_temp";
          LODWORD(v84) = "%s";
          v87 = (char *)&v79;
LABEL_27:
          V_LOCK();
          v22 = *(_DWORD *)v4;
          LODWORD(v90) |= 4u;
          HIDWORD(v0) = 100;
          V_INT((int)v123, v88, *(int *)(v22 + 232));
          V_STR(&v116, s, "temp too low");
          v23 = v87;
          v24 = HIDWORD(v116);
          v25 = v117;
          v26 = v118;
          v82 = v85;
          v81 = LODWORD(v84);
          *(_DWORD *)v87 = v116;
          *((_DWORD *)v23 + 1) = v24;
          *((_DWORD *)v23 + 2) = v25;
          *((_DWORD *)v23 + 3) = v26;
          v23 += 16;
          v27 = v120;
          v28 = v121;
          v29 = v122;
          *(_DWORD *)v23 = v119;
          *((_DWORD *)v23 + 1) = v27;
          *((_DWORD *)v23 + 2) = v28;
          *((_DWORD *)v23 + 3) = v29;
          logfmt_raw((char *)v174, 0x1000u, 0, v127, v123[0], v123[1], v124, v125, v126, v127);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
            189,
            "check_temp",
            10,
            53,
            100,
            v174);
          V_LOCK();
          logfmt_raw((char *)v174, 0x1000u, 0, "Sweep error string = %s.", "P:2");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
            189,
            "check_temp",
            10,
            54,
            100,
            v174);
          v165 = v90;
          v9 = *((_QWORD *)v10 + 2);
          if ( (v9 & 8) != 0 )
          {
            *((_QWORD *)v10 + 3) |= 8uLL;
            goto LABEL_29;
          }
          goto LABEL_13;
        }
LABEL_11:
        if ( (v9 & 8) != 0 )
          *((_QWORD *)v10 + 3) |= 8uLL;
LABEL_13:
        if ( (v9 & 0x10) != 0 )
        {
          v12 = v86 == 0;
          *((_QWORD *)v10 + 3) |= 0x10uLL;
          if ( !v12 )
          {
            LODWORD(v0) = &g_zc;
            LODWORD(v85) = "check_temp";
            LODWORD(v84) = "%s";
            v87 = (char *)&v79;
            goto LABEL_117;
          }
        }
        goto LABEL_16;
      }
      v11 = *((_QWORD *)flag_from_monitor + 3);
      v12 = v86 == 0;
      if ( !v86 )
        LODWORD(v0) = v9 & 4;
      HIDWORD(v13) = HIDWORD(v11);
      if ( !v86 )
        HIDWORD(v0) = 0;
      LODWORD(v13) = v11 | 2;
      *((_QWORD *)v10 + 3) = v13;
      if ( !v12 )
      {
        LODWORD(v0) = &g_zc;
        v90 = v165;
        LODWORD(v85) = "check_temp";
        LODWORD(v84) = "%s";
        v87 = (char *)&v79;
        goto LABEL_25;
      }
LABEL_9:
      if ( !v0 )
        goto LABEL_32;
      *((_QWORD *)v10 + 3) |= 4uLL;
      goto LABEL_11;
    }
    v5 = *((_QWORD *)flag_from_monitor + 3);
    v12 = v86 == 0;
    v6 = v5;
    LODWORD(v5) = v5 | 1;
    *((_QWORD *)v10 + 3) = v5;
    if ( v12 )
    {
      v0 = v9 & 4;
      if ( (v9 & 2) == 0 )
      {
        if ( (v9 & 4) == 0 )
        {
          v0 = v9 & 8;
          if ( (v9 & 8) != 0 )
          {
            LODWORD(v6) = v6 | 9;
            *((_QWORD *)v10 + 3) = v6;
LABEL_35:
            if ( (v9 & 0x10) != 0 )
              *((_QWORD *)v10 + 3) |= 0x10uLL;
            goto LABEL_16;
          }
          goto LABEL_13;
        }
        LODWORD(v6) = v6 | 5;
        *((_QWORD *)v10 + 3) = v6;
        goto LABEL_11;
      }
      LODWORD(v6) = v6 | 3;
      *((_QWORD *)v10 + 3) = v6;
      goto LABEL_9;
    }
    V_LOCK();
    v44 = *(_DWORD *)(*(_DWORD *)v4 + 232);
    v87 = (char *)&v79;
    LODWORD(v85) = "check_temp";
    V_INT((int)v147, v88, v44);
    LODWORD(v84) = "%s";
    V_STR(&v140, s, "temp lost");
    LODWORD(v0) = &g_zc;
    HIDWORD(v0) = &v80;
    logfmt_raw(
      (char *)v174,
      0x1000u,
      0,
      v152,
      v147[0],
      v147[1],
      v148,
      v149,
      v150,
      v151,
      v152,
      v140,
      v141,
      v142,
      v143,
      v144,
      v145,
      v146,
      "%s",
      "check_temp");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_temp",
      10,
      36,
      100,
      v174);
    *(_QWORD *)&v165 |= 1uLL;
    v45 = *((_QWORD *)v10 + 2);
    v90 = v165;
    if ( (v45 & 2) != 0 )
    {
      *((_QWORD *)v10 + 3) |= 2uLL;
LABEL_25:
      V_LOCK();
      v14 = *(_DWORD *)v4;
      LODWORD(v90) |= 2u;
      HIDWORD(v0) = 100;
      V_INT((int)v135, v88, *(int *)(v14 + 232));
      V_STR(&v128, s, "temp too high");
      v15 = v87;
      v16 = HIDWORD(v128);
      v17 = v129;
      v18 = v130;
      v82 = v85;
      v81 = LODWORD(v84);
      *(_DWORD *)v87 = v128;
      *((_DWORD *)v15 + 1) = v16;
      *((_DWORD *)v15 + 2) = v17;
      *((_DWORD *)v15 + 3) = v18;
      v15 += 16;
      v19 = v132;
      v20 = v133;
      v21 = v134;
      *(_DWORD *)v15 = v131;
      *((_DWORD *)v15 + 1) = v19;
      *((_DWORD *)v15 + 2) = v20;
      *((_DWORD *)v15 + 3) = v21;
      logfmt_raw((char *)v174, 0x1000u, 0, v139, v135[0], v135[1], v136, v137, v138, v139);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_temp",
        10,
        44,
        100,
        v174);
      V_LOCK();
      logfmt_raw((char *)v174, 0x1000u, 0, "Sweep error string = %s.", "P:1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_temp",
        10,
        45,
        100,
        v174);
      v165 = v90;
      v9 = *((_QWORD *)v10 + 2);
      if ( (v9 & 4) != 0 )
      {
LABEL_26:
        *((_QWORD *)v10 + 3) |= 4uLL;
        goto LABEL_27;
      }
LABEL_32:
      if ( (v9 & 8) != 0 )
      {
        v12 = v86 == 0;
        *((_QWORD *)v10 + 3) |= 8uLL;
        if ( !v12 )
        {
          LODWORD(v0) = &g_zc;
          LODWORD(v85) = "check_temp";
          LODWORD(v84) = "%s";
          v87 = (char *)&v79;
          goto LABEL_118;
        }
        goto LABEL_35;
      }
      goto LABEL_13;
    }
    if ( (v45 & 4) != 0 )
      goto LABEL_26;
    if ( (v45 & 8) != 0 )
    {
      *((_QWORD *)v10 + 3) |= 8uLL;
LABEL_118:
      v90 = v165;
LABEL_29:
      V_LOCK();
      v30 = *(_QWORD *)&v90 | 8LL;
      V_INT((int)v111, v88, *(int *)(*(_DWORD *)v4 + 232));
      V_STR(&v105, s, "read no temp");
      v31 = v87;
      v32 = HIDWORD(v105);
      v33 = v106;
      v34 = v107;
      v82 = v85;
      v81 = LODWORD(v84);
      *(_DWORD *)v87 = v105;
      *((_DWORD *)v31 + 1) = v32;
      *((_DWORD *)v31 + 2) = v33;
      *((_DWORD *)v31 + 3) = v34;
      HIDWORD(v0) = v31 + 16;
      v35 = v109;
      v36 = v110;
      *(_DWORD *)HIDWORD(v0) = v108;
      *(_DWORD *)(HIDWORD(v0) + 4) = v35;
      *(_QWORD *)(HIDWORD(v0) + 8) = v36;
      logfmt_raw((char *)v174, 0x1000u, 0, v115, v111[0], v111[1], v112, v113, v114, v115);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_temp",
        10,
        62,
        100,
        v174);
      v165 = *(double *)&v30;
      if ( (*((_DWORD *)v10 + 4) & 0x10) == 0 )
        goto LABEL_16;
      *((_QWORD *)v10 + 3) |= 0x10uLL;
      goto LABEL_31;
    }
    if ( (v45 & 0x10) != 0 )
    {
      *((_QWORD *)v10 + 3) |= 0x10uLL;
LABEL_117:
      *(double *)&v30 = v165;
LABEL_31:
      V_LOCK();
      V_INT((int)v103, v88, *(int *)(*(_DWORD *)v4 + 232));
      V_STR(&v96, s, v91);
      v37 = HIDWORD(v96);
      v38 = v97;
      v39 = v98;
      v40 = v87;
      v82 = v85;
      v81 = LODWORD(v84);
      *(_DWORD *)v87 = v96;
      *((_DWORD *)v40 + 1) = v37;
      *((_DWORD *)v40 + 2) = v38;
      *((_DWORD *)v40 + 3) = v39;
      v40 += 16;
      v41 = v100;
      v42 = v101;
      v43 = v102;
      *(_DWORD *)v40 = v99;
      *((_DWORD *)v40 + 1) = v41;
      *((_DWORD *)v40 + 2) = v42;
      *((_DWORD *)v40 + 3) = v43;
      logfmt_raw((char *)v174, 0x1000u, 0, v104, v103[0], v103[1], v103[2], v103[3], v103[4], v103[5], v103[6], v104);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_temp",
        10,
        70,
        100,
        v174);
      LODWORD(v30) = v30 | 0x10;
      v165 = *(double *)&v30;
    }
LABEL_16:
    ++v83;
  }
  while ( v83 < v163[0] );
  v2 = v86;
  v46 = LOBYTE(v165) & 4;
  v1 = (char *)v92;
  v84 = v165;
  s = (char *)((LOBYTE(v165) & 4) != 0);
  if ( (LOBYTE(v165) & 2) != 0 )
  {
    V_LOCK();
    logfmt_raw((char *)v174, 0x1000u, 0, "Sweep error string = %s.", "P:1");
    LODWORD(v90) = 1;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "task_check_miner_status",
      23,
      286,
      100,
      v174);
    set_miner_6060info_status_high_temp_err(1);
  }
  else
  {
    LODWORD(v90) = 0;
  }
  if ( v46 )
  {
    V_LOCK();
    logfmt_raw((char *)v174, 0x1000u, 0, "Sweep error string = %s.", "P:2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "task_check_miner_status",
      23,
      293,
      100,
      v174);
  }
LABEL_52:
  LODWORD(v165) = 0;
  v47 = (int *)get_all_created_runtime(&v165);
  v48 = get_flag_from_monitor(*v47);
  if ( (*((_DWORD *)v48 + 8) & 4) != 0 && (*((_QWORD *)v48 + 5) |= 4uLL, v2) )
  {
    V_LOCK();
    V_STR(v153, "error", "fan error exceed limit");
    v86 = v2;
    logfmt_raw((char *)v174, 0x1000u, 0, v157, v153[0], v153[1], v154, v155, v156, v157, "%s", "check_fan_err");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_fan_err",
      13,
      87,
      100,
      v174);
  }
  else
  {
    v86 = 0;
  }
  v93 = 0;
  v49 = (int *)get_all_created_runtime(&v93);
  if ( v93 > 0 )
  {
    v50 = &v49[v93];
    do
    {
      v51 = *v49++;
      v2 = (unsigned __int8)(v2 & *(_BYTE *)(v51 + 238));
    }
    while ( v50 != v49 );
  }
  v52 = 0;
  LODWORD(v158[0]) = 0;
  v53 = (char *)get_all_created_runtime(v158);
  v83 = 0;
  if ( SLODWORD(v158[0]) > 0 )
  {
    v54 = (int *)(v53 - 4);
    LODWORD(v85) = "chain";
    v87 = "%s low hashrate happened!";
    do
    {
      while ( 1 )
      {
        v55 = v54[1];
        ++v54;
        v56 = get_flag_from_monitor(v55);
        if ( (*(_DWORD *)v56 & 1) != 0 )
        {
          *((_QWORD *)v56 + 1) |= 1uLL;
          if ( v2 )
            break;
        }
        if ( ++v52 >= SLODWORD(v158[0]) )
          goto LABEL_64;
      }
      V_LOCK();
      ++v52;
      V_INT((int)v163, (char *)v85, *(int *)(*v54 + 232));
      v83 = v2;
      logfmt_raw(
        (char *)v174,
        0x1000u,
        0,
        v164,
        v163[0],
        v163[1],
        v163[2],
        v163[3],
        v163[4],
        v163[5],
        v163[6],
        v164,
        v87,
        "check_low_hashrate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_low_hashrate",
        18,
        119,
        80,
        v174);
      read_status_from_monitor(&v165, *v54);
      V_LOCK();
      logfmt_raw((char *)v174, 0x1000u, 0, "no ratio hashrate last_5s: %f", v171 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_low_hashrate",
        18,
        122,
        80,
        v174);
      V_LOCK();
      logfmt_raw((char *)v174, 0x1000u, 0, "no ratio hashrate last_30min: %f", v172 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_low_hashrate",
        18,
        123,
        80,
        v174);
      V_LOCK();
      logfmt_raw((char *)v174, 0x1000u, 0, "no ratio hashrate lifetime: %f", v173 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_low_hashrate",
        18,
        124,
        80,
        v174);
    }
    while ( v52 < SLODWORD(v158[0]) );
  }
LABEL_64:
  if ( !v1[40] )
  {
    clock_gettime(1, &stru_2D35E0);
    v1[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v57 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v57),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v57) + 1904))
           || !pools_active )
      {
        if ( ++v57 >= total_pools )
          goto LABEL_72;
      }
      clock_gettime(1, &stru_2D35E0);
      ++v57;
    }
    while ( v57 < total_pools );
  }
LABEL_72:
  clock_gettime(1, &stru_2D35E8);
  v58 = *((_DWORD *)v1 + 14) - *((_DWORD *)v1 + 12);
  v59 = *((_DWORD *)v1 + 13) - *((_DWORD *)v1 + 11);
  if ( 1000LL * v59 + v58 / 1000000 > 59999 )
    v60 = 0;
  else
    v60 = v1[60] & 1;
  v85 = 1000LL * v59 + v58 / 1000000;
  if ( v60 )
  {
    v76 = rand();
    sub_25A89C(v76, 120);
    v78 = v77 + 60;
    V_LOCK();
    logfmt_raw(
      (char *)v174,
      0x1000u,
      0,
      "The pool connection recovered after the system poweroff. Exit and restart mining(%d)!",
      v78);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_lost_connection_to_pool",
      29,
      157,
      80,
      v174);
    sleep(v78);
    exit(1);
  }
  v61 = v86;
  if ( (LOBYTE(v84) & 0x1E) != 0 )
    v61 = v86 | 1;
  v62 = LODWORD(v84) >> 3;
  v63 = LODWORD(v84) >> 4;
  LODWORD(v84) = (LOBYTE(v84) & 0x1A) != 0;
  v91 = (const char *)v61;
  v87 = (char *)(v62 & 1);
  v64 = (unsigned __int8)(v83 | v61);
  v88 = (char *)(v63 & 1);
  if ( !v2 )
    goto LABEL_88;
  if ( v85 <= 60000 )
  {
    *((_DWORD *)v1 + 16) = 0;
LABEL_88:
    LOBYTE(v66) = v1[12];
    if ( (_BYTE)v66 )
      goto LABEL_98;
    if ( !v91 )
    {
      if ( v64 )
      {
        LOBYTE(v60) = (_BYTE)v91;
        goto LABEL_98;
      }
      goto LABEL_96;
    }
    LODWORD(v85) = (unsigned __int8)v1[12];
LABEL_91:
    v67 = 0;
    v1[12] = 1;
    v174[0] = 0;
    v68 = (char *)get_all_created_runtime(v174);
    if ( v174[0] > 0 )
    {
      v69 = v68 - 4;
      do
      {
        v70 = *((_DWORD *)v69 + 1);
        v69 += 4;
        ++v67;
        v71 = (*(int (**)(void))(v70 + 20))();
        v72 = dev_ctrl(v71);
        (*(void (__fastcall **)(_DWORD))(v72 + 28))(*(_DWORD *)(*(_DWORD *)v69 + 228));
      }
      while ( v67 < v174[0] );
    }
    power_off();
    V_LOCK();
    V_BOOL((int)v94, "poweroff", 1);
    logfmt_raw(
      (char *)v174,
      0x1000u,
      0,
      v95,
      v94[0],
      v94[1],
      v94[2],
      v94[3],
      v94[4],
      v94[5],
      v94[6],
      v95,
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
      LODWORD(v90),
      s,
      v86,
      v87,
      v88,
      (_DWORD)v85);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "task_check_miner_status",
      23,
      331,
      120,
      v174);
    if ( v64 || v1[12] )
      goto LABEL_97;
LABEL_96:
    LOBYTE(v60) = v66;
    v1[11] = 0;
    goto LABEL_99;
  }
  v65 = *((_DWORD *)v1 + 16);
  *((_DWORD *)v1 + 16) = v65 + 1;
  v92 = v65 % 60;
  if ( !(v65 % 60) )
  {
    V_LOCK();
    V_STR(&v165, "error", "net lost");
    logfmt_raw(
      (char *)v174,
      0x1000u,
      v92,
      v170,
      v165,
      v166,
      v167,
      v168,
      v169,
      v170,
      "lost internet for %d seconds",
      (int)v85 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_lost_connection_to_pool",
      29,
      165,
      100,
      v174);
  }
  if ( v85 <= 1200000 )
  {
    LOBYTE(v60) = v1[12];
    if ( (_BYTE)v60 )
      goto LABEL_98;
    if ( !v91 )
    {
      LOBYTE(v60) = v2;
      goto LABEL_98;
    }
    v64 = (int)v91;
    LODWORD(v85) = (unsigned __int8)v1[12];
    LOBYTE(v66) = (_BYTE)v91;
    goto LABEL_91;
  }
  v66 = (unsigned __int8)v1[60];
  if ( !v1[60] )
  {
    V_LOCK();
    V_STR(v158, "error", "net lost");
    logfmt_raw(
      (char *)v174,
      0x1000u,
      v66,
      v162,
      v158[0],
      v158[1],
      v159,
      v160,
      v161,
      v162,
      "lost internet %d seconds > 20 minutes, poweroff.",
      (int)v85 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_lost_connection_to_pool",
      29,
      175,
      120,
      v174);
    v60 = (unsigned __int8)v1[12];
    v1[60] = 1;
    if ( v60 )
    {
      LODWORD(v84) = v60;
      goto LABEL_98;
    }
    LODWORD(v85) = 1;
    v64 = v2;
    LODWORD(v84) = v2;
    LOBYTE(v66) = v2;
    goto LABEL_91;
  }
  LOBYTE(v60) = v1[12];
  if ( !(_BYTE)v60 )
  {
    if ( v91 )
    {
      v64 = (int)v91;
      LODWORD(v85) = (unsigned __int8)v1[12];
      LOBYTE(v66) = (_BYTE)v91;
      goto LABEL_91;
    }
LABEL_97:
    LOBYTE(v60) = v66;
  }
LABEL_98:
  v1[11] = 1;
LABEL_99:
  if ( v2 )
  {
    v73 = v83;
    v1[10] = v60;
    v1[4] = LOBYTE(v90);
    v1[5] = (char)s;
    v1[8] = v86;
    if ( !v73 )
      v83 = (unsigned __int8)v1[12];
    v1[9] = v83;
    v1[6] = (char)v87;
    v1[7] = (char)v88;
  }
  pthread_mutex_unlock(&stru_2D35C4);
  v74 = (unsigned __int8)v1[11];
  byte_2D09C8 ^= 1u;
  if ( v74 )
  {
    green_led_off();
    if ( byte_2D09C8 )
    {
      red_led_on();
      if ( !LODWORD(v84) )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_2D09C8 )
      green_led_on();
    else
      green_led_off();
  }
  if ( LODWORD(v84) )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
