int task_check_miner_status()
{
  __int64 v0; // r6
  char *v1; // r11
  int v2; // r10
  int all_created_runtime; // r0
  int v4; // r8
  __int64 v5; // r6
  __int64 v6; // r0
  int v7; // t1
  int flag_from_monitor; // r0
  __int64 v9; // r10
  int v10; // r4
  __int64 v11; // r0
  bool v12; // zf
  __int64 v13; // r2
  _DWORD *v14; // r10
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r0
  int v22; // r0
  int v23; // r0
  __int64 v24; // r0
  _DWORD *v25; // r10
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r0
  int v33; // r0
  int v34; // r0
  __int64 v35; // r10
  _DWORD *v36; // r7
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r1
  __int64 v41; // r2
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r3
  _DWORD *v46; // r12
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r0
  int v51; // r0
  __int64 v52; // r10
  __int64 v53; // r4
  int v54; // r0
  int v55; // r0
  _DWORD *v56; // r0
  int v57; // r0
  int *v58; // r0
  int *v59; // r2
  int v60; // t1
  int v61; // r4
  int v62; // r0
  _DWORD *v63; // r5
  int v64; // t1
  int v65; // r0
  int v66; // r0
  int status_from_monitor; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r4
  int v74; // r8
  unsigned __int8 v75; // r12
  int v76; // r4
  int v77; // r0
  int v78; // r4
  int v79; // r3
  char v80; // r7
  int v81; // r5
  int v82; // r0
  _DWORD *v83; // r8
  int v84; // t1
  int v85; // r0
  int v86; // r0
  unsigned int v87; // r0
  int v88; // r0
  int v89; // r3
  int v90; // r0
  int v91; // r2
  int v92; // r0
  int v94; // r0
  int v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // r0
  int v99; // r0
  int v100; // r1
  unsigned int v101; // r4
  int v102; // r0
  char *v103; // [sp+20h] [bp-1304h] BYREF
  const char *v104; // [sp+24h] [bp-1300h]
  char *v105; // [sp+28h] [bp-12FCh]
  int v106; // [sp+2Ch] [bp-12F8h]
  const char *v107; // [sp+30h] [bp-12F4h] BYREF
  char *v108; // [sp+34h] [bp-12F0h]
  int v109; // [sp+38h] [bp-12ECh]
  int v110; // [sp+3Ch] [bp-12E8h]
  char *v111; // [sp+40h] [bp-12E4h]
  const char *v112; // [sp+44h] [bp-12E0h]
  int v113; // [sp+4Ch] [bp-12D8h]
  double v114; // [sp+50h] [bp-12D4h]
  __int64 v115; // [sp+58h] [bp-12CCh]
  int v116; // [sp+60h] [bp-12C4h]
  const char *v117; // [sp+64h] [bp-12C0h]
  char *v118; // [sp+68h] [bp-12BCh]
  char *s; // [sp+6Ch] [bp-12B8h]
  double v120; // [sp+70h] [bp-12B4h]
  int v121; // [sp+78h] [bp-12ACh]
  int v122; // [sp+7Ch] [bp-12A8h]
  int v123; // [sp+84h] [bp-12A0h] BYREF
  int v124; // [sp+88h] [bp-129Ch] BYREF
  _DWORD v125[8]; // [sp+A8h] [bp-127Ch] BYREF
  int v126; // [sp+C8h] [bp-125Ch] BYREF
  _DWORD v127[6]; // [sp+E8h] [bp-123Ch] BYREF
  __int64 v128; // [sp+100h] [bp-1224h]
  __int64 v129[4]; // [sp+108h] [bp-121Ch] BYREF
  _DWORD v130[8]; // [sp+128h] [bp-11FCh] BYREF
  __int64 v131[4]; // [sp+148h] [bp-11DCh] BYREF
  _DWORD v132[8]; // [sp+168h] [bp-11BCh] BYREF
  __int64 v133[4]; // [sp+188h] [bp-119Ch] BYREF
  _DWORD v134[8]; // [sp+1A8h] [bp-117Ch] BYREF
  int v135; // [sp+1C8h] [bp-115Ch] BYREF
  int v136; // [sp+1E8h] [bp-113Ch] BYREF
  _DWORD v137[8]; // [sp+208h] [bp-111Ch] BYREF
  _DWORD v138[8]; // [sp+228h] [bp-10FCh] BYREF
  double v139[27]; // [sp+248h] [bp-10DCh] BYREF
  _DWORD v140[1025]; // [sp+320h] [bp-1004h] BYREF

  v1 = &byte_2D4AA4;
  if ( !byte_2D4AA4 )
  {
    byte_2D4AA8 = 0;
    byte_2D4AA9 = 0;
    byte_2D4AAA = 0;
    byte_2D4AAB = 0;
    byte_2D4AAC = 0;
    byte_2D4AAD = 0;
    byte_2D4AAE = 0;
    byte_2D4AAF = 0;
    byte_2D4AB0 = 0;
    byte_2D4AA4 = 1;
  }
  pthread_mutex_lock(&stru_2D4AB4);
  v2 = (unsigned __int8)byte_2D4AB0 ^ 1;
  v138[0] = 0;
  all_created_runtime = get_all_created_runtime(v138);
  memset(v139, 0, 16);
  if ( v138[0] <= 0 )
  {
    LODWORD(v120) = 0;
    s = 0;
    v114 = 0.0;
    goto LABEL_52;
  }
  v118 = "chain";
  v4 = all_created_runtime - 4;
  v121 = (int)"uneffective temp exceed limit";
  v113 = 0;
  s = "error";
  v116 = v2;
  v122 = (int)&byte_2D4AA4;
  do
  {
    v7 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    flag_from_monitor = get_flag_from_monitor(v7);
    v9 = *(_QWORD *)(flag_from_monitor + 16);
    v10 = flag_from_monitor;
    if ( (v9 & 1) == 0 )
    {
      if ( (v9 & 2) == 0 )
      {
        if ( (v9 & 4) == 0 )
          goto LABEL_32;
        v24 = *(_QWORD *)(flag_from_monitor + 24);
        v12 = v116 == 0;
        *(_QWORD *)(v10 + 24) = v24 | 4;
        if ( !v12 )
        {
          LODWORD(v0) = &g_zc;
          v120 = v139[0];
          v117 = "check_temp";
          LODWORD(v114) = "%s";
          LODWORD(v115) = &v103;
LABEL_27:
          V_LOCK(v24);
          LODWORD(v120) |= 4u;
          HIDWORD(v0) = 100;
          V_INT((int)v131, v118);
          V_STR((int)v130, s);
          v25 = (_DWORD *)v115;
          v26 = v130[1];
          v27 = v130[2];
          v28 = v130[3];
          v112 = v117;
          v111 = (char *)LODWORD(v114);
          *(_DWORD *)v115 = v130[0];
          v25[1] = v26;
          v25[2] = v27;
          v25[3] = v28;
          v25 += 4;
          v29 = v130[5];
          v30 = v130[6];
          v31 = v130[7];
          *v25 = v130[4];
          v25[1] = v29;
          v25[2] = v30;
          v25[3] = v31;
          v32 = logfmt_raw((int)v140, 0x1000u);
          V_UNLOCK(v32);
          v33 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
                  189,
                  "check_temp",
                  10,
                  53,
                  100,
                  v140);
          V_LOCK(v33);
          v34 = logfmt_raw((int)v140, 0x1000u);
          V_UNLOCK(v34);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
            189,
            "check_temp",
            10,
            54,
            100,
            v140);
          v139[0] = v120;
          v9 = *(_QWORD *)(v10 + 16);
          LODWORD(v6) = v9 & 8;
          if ( (v9 & 8) != 0 )
          {
            v6 = *(_QWORD *)(v10 + 24) | 8LL;
            *(_QWORD *)(v10 + 24) = v6;
            goto LABEL_29;
          }
          goto LABEL_13;
        }
LABEL_11:
        LODWORD(v6) = v9 & 8;
        if ( (v9 & 8) != 0 )
        {
          v6 = *(_QWORD *)(v10 + 24);
          *(_QWORD *)(v10 + 24) = v6 | 8;
        }
LABEL_13:
        if ( (v9 & 0x10) != 0 )
        {
          v12 = v116 == 0;
          v6 = *(_QWORD *)(v10 + 24) | 0x10LL;
          *(_QWORD *)(v10 + 24) = v6;
          if ( !v12 )
          {
            LODWORD(v0) = &g_zc;
            v117 = "check_temp";
            LODWORD(v114) = "%s";
            LODWORD(v115) = &v103;
            goto LABEL_117;
          }
        }
        goto LABEL_16;
      }
      v11 = *(_QWORD *)(flag_from_monitor + 24);
      v12 = v116 == 0;
      if ( !v116 )
        LODWORD(v0) = v9 & 4;
      HIDWORD(v13) = HIDWORD(v11);
      if ( !v116 )
        HIDWORD(v0) = 0;
      LODWORD(v13) = v11 | 2;
      *(_QWORD *)(v10 + 24) = v13;
      if ( !v12 )
      {
        LODWORD(v0) = &g_zc;
        v120 = v139[0];
        v117 = "check_temp";
        LODWORD(v114) = "%s";
        LODWORD(v115) = &v103;
        goto LABEL_25;
      }
LABEL_9:
      if ( !v0 )
        goto LABEL_32;
      *(_QWORD *)(v10 + 24) |= 4uLL;
      goto LABEL_11;
    }
    v5 = *(_QWORD *)(flag_from_monitor + 24);
    v12 = v116 == 0;
    v6 = v5;
    LODWORD(v5) = v5 | 1;
    *(_QWORD *)(v10 + 24) = v5;
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
            *(_QWORD *)(v10 + 24) = v6;
LABEL_35:
            if ( (v9 & 0x10) != 0 )
            {
              v6 = *(_QWORD *)(v10 + 24) | 0x10LL;
              *(_QWORD *)(v10 + 24) = v6;
            }
            goto LABEL_16;
          }
          goto LABEL_13;
        }
        LODWORD(v6) = v6 | 5;
        *(_QWORD *)(v10 + 24) = v6;
        goto LABEL_11;
      }
      LODWORD(v6) = v6 | 3;
      *(_QWORD *)(v10 + 24) = v6;
      goto LABEL_9;
    }
    V_LOCK(v6);
    LODWORD(v115) = &v103;
    v117 = "check_temp";
    V_INT((int)&v135, v118);
    LODWORD(v114) = "%s";
    V_STR((int)v134, s);
    v112 = "check_temp";
    v111 = "%s";
    LODWORD(v0) = &g_zc;
    v103 = (char *)v134[0];
    v104 = (const char *)v134[1];
    v105 = (char *)v134[2];
    v106 = v134[3];
    HIDWORD(v0) = &v107;
    v107 = (const char *)v134[4];
    v108 = (char *)v134[5];
    v109 = v134[6];
    v110 = v134[7];
    v51 = logfmt_raw((int)v140, 0x1000u);
    V_UNLOCK(v51);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_temp",
      10,
      36,
      100,
      v140);
    *(_QWORD *)&v139[0] |= 1uLL;
    v52 = *(_QWORD *)(v10 + 16);
    v120 = v139[0];
    if ( (v52 & 2) != 0 )
    {
      v11 = *(_QWORD *)(v10 + 24) | 2LL;
      *(_QWORD *)(v10 + 24) = v11;
LABEL_25:
      V_LOCK(v11);
      LODWORD(v120) |= 2u;
      HIDWORD(v0) = 100;
      V_INT((int)v133, v118);
      V_STR((int)v132, s);
      v14 = (_DWORD *)v115;
      v15 = v132[1];
      v16 = v132[2];
      v17 = v132[3];
      v112 = v117;
      v111 = (char *)LODWORD(v114);
      *(_DWORD *)v115 = v132[0];
      v14[1] = v15;
      v14[2] = v16;
      v14[3] = v17;
      v14 += 4;
      v18 = v132[5];
      v19 = v132[6];
      v20 = v132[7];
      *v14 = v132[4];
      v14[1] = v18;
      v14[2] = v19;
      v14[3] = v20;
      v21 = logfmt_raw((int)v140, 0x1000u);
      V_UNLOCK(v21);
      v22 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
              189,
              "check_temp",
              10,
              44,
              100,
              v140);
      V_LOCK(v22);
      v23 = logfmt_raw((int)v140, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_temp",
        10,
        45,
        100,
        v140);
      v139[0] = v120;
      v9 = *(_QWORD *)(v10 + 16);
      if ( (v9 & 4) != 0 )
      {
LABEL_26:
        v24 = *(_QWORD *)(v10 + 24) | 4LL;
        *(_QWORD *)(v10 + 24) = v24;
        goto LABEL_27;
      }
LABEL_32:
      LODWORD(v6) = v9 & 8;
      if ( (v9 & 8) != 0 )
      {
        v6 = *(_QWORD *)(v10 + 24);
        v12 = v116 == 0;
        *(_QWORD *)(v10 + 24) = v6 | 8;
        if ( !v12 )
        {
          LODWORD(v0) = &g_zc;
          v117 = "check_temp";
          LODWORD(v114) = "%s";
          LODWORD(v115) = &v103;
          goto LABEL_118;
        }
        goto LABEL_35;
      }
      goto LABEL_13;
    }
    if ( (v52 & 4) != 0 )
      goto LABEL_26;
    LODWORD(v6) = v52 & 8;
    if ( (v52 & 8) != 0 )
    {
      v6 = *(_QWORD *)(v10 + 24) | 8LL;
      *(_QWORD *)(v10 + 24) = v6;
LABEL_118:
      v120 = v139[0];
LABEL_29:
      V_LOCK(v6);
      v35 = *(_QWORD *)&v120 | 8LL;
      V_INT((int)v129, v118);
      V_STR((int)v127, s);
      v36 = (_DWORD *)v115;
      v37 = v127[1];
      v38 = v127[2];
      v39 = v127[3];
      v112 = v117;
      v111 = (char *)LODWORD(v114);
      *(_DWORD *)v115 = v127[0];
      v36[1] = v37;
      v36[2] = v38;
      v36[3] = v39;
      HIDWORD(v0) = v36 + 4;
      v40 = v127[5];
      v41 = v128;
      *(_DWORD *)HIDWORD(v0) = v127[4];
      *(_DWORD *)(HIDWORD(v0) + 4) = v40;
      *(_QWORD *)(HIDWORD(v0) + 8) = v41;
      v42 = logfmt_raw((int)v140, 0x1000u);
      V_UNLOCK(v42);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_temp",
        10,
        62,
        100,
        v140);
      *(_QWORD *)&v139[0] = v35;
      LODWORD(v6) = *(_DWORD *)(v10 + 16) & 0x10;
      if ( !(_DWORD)v6 )
        goto LABEL_16;
      v6 = *(_QWORD *)(v10 + 24) | 0x10LL;
      *(_QWORD *)(v10 + 24) = v6;
      goto LABEL_31;
    }
    if ( (v52 & 0x10) != 0 )
    {
      v6 = *(_QWORD *)(v10 + 24) | 0x10LL;
      *(_QWORD *)(v10 + 24) = v6;
LABEL_117:
      v35 = *(_QWORD *)&v139[0];
LABEL_31:
      V_LOCK(v6);
      V_INT((int)&v126, v118);
      V_STR((int)v125, s);
      v43 = v125[1];
      v44 = v125[2];
      v45 = v125[3];
      v46 = (_DWORD *)v115;
      v112 = v117;
      v111 = (char *)LODWORD(v114);
      *(_DWORD *)v115 = v125[0];
      v46[1] = v43;
      v46[2] = v44;
      v46[3] = v45;
      v46 += 4;
      v47 = v125[5];
      v48 = v125[6];
      v49 = v125[7];
      *v46 = v125[4];
      v46[1] = v47;
      v46[2] = v48;
      v46[3] = v49;
      v50 = logfmt_raw((int)v140, 0x1000u);
      V_UNLOCK(v50);
      LODWORD(v6) = zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
                      189,
                      "check_temp",
                      10,
                      70,
                      100,
                      v140);
      LODWORD(v35) = v35 | 0x10;
      *(_QWORD *)&v139[0] = v35;
    }
LABEL_16:
    ++v113;
  }
  while ( v113 < v138[0] );
  v2 = v116;
  v53 = LOBYTE(v139[0]) & 4;
  v1 = (char *)v122;
  v114 = v139[0];
  s = (char *)((LOBYTE(v139[0]) & 4) != 0);
  if ( (LOBYTE(v139[0]) & 2) != 0 )
  {
    V_LOCK(v6);
    v54 = logfmt_raw((int)v140, 0x1000u);
    LODWORD(v120) = 1;
    V_UNLOCK(v54);
    LODWORD(v6) = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
                    189,
                    "task_check_miner_status",
                    23,
                    286,
                    100,
                    v140);
  }
  else
  {
    LODWORD(v120) = 0;
  }
  if ( v53 )
  {
    V_LOCK(v6);
    v55 = logfmt_raw((int)v140, 0x1000u);
    V_UNLOCK(v55);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "task_check_miner_status",
      23,
      293,
      100,
      v140);
  }
LABEL_52:
  LODWORD(v139[0]) = 0;
  v56 = (_DWORD *)get_all_created_runtime(v139);
  v57 = get_flag_from_monitor(*v56);
  if ( (*(_DWORD *)(v57 + 32) & 4) != 0 && (*(_QWORD *)(v57 + 40) |= 4uLL, v2) )
  {
    V_LOCK(v57);
    V_STR((int)&v136, "error");
    v104 = "check_fan_err";
    v103 = "%s";
    v116 = v2;
    v95 = logfmt_raw((int)v140, 0x1000u);
    V_UNLOCK(v95);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_fan_err",
      13,
      87,
      100,
      v140);
  }
  else
  {
    v116 = 0;
  }
  v123 = 0;
  v58 = (int *)get_all_created_runtime(&v123);
  if ( v123 > 0 )
  {
    v59 = &v58[v123];
    do
    {
      v60 = *v58++;
      v2 = (unsigned __int8)(v2 & *(_BYTE *)(v60 + 238));
    }
    while ( v59 != v58 );
  }
  v61 = 0;
  v137[0] = 0;
  v62 = get_all_created_runtime(v137);
  v113 = 0;
  if ( v137[0] > 0 )
  {
    v63 = (_DWORD *)(v62 - 4);
    LODWORD(v115) = "chain";
    v117 = "%s low hashrate happened!";
    do
    {
      while ( 1 )
      {
        v64 = v63[1];
        ++v63;
        v65 = get_flag_from_monitor(v64);
        if ( (*(_DWORD *)v65 & 1) != 0 )
        {
          *(_QWORD *)(v65 + 8) |= 1uLL;
          if ( v2 )
            break;
        }
        if ( ++v61 >= v137[0] )
          goto LABEL_64;
      }
      V_LOCK(v65);
      ++v61;
      V_INT((int)v138, (char *)v115);
      v104 = "check_low_hashrate";
      v103 = (char *)v117;
      v113 = v2;
      v66 = logfmt_raw((int)v140, 0x1000u);
      V_UNLOCK(v66);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_low_hashrate",
        18,
        119,
        80,
        v140);
      status_from_monitor = read_status_from_monitor(v139, *v63);
      V_LOCK(status_from_monitor);
      v68 = logfmt_raw((int)v140, 0x1000u);
      V_UNLOCK(v68);
      v69 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
              189,
              "check_low_hashrate",
              18,
              122,
              80,
              v140);
      V_LOCK(v69);
      v70 = logfmt_raw((int)v140, 0x1000u);
      V_UNLOCK(v70);
      v71 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
              189,
              "check_low_hashrate",
              18,
              123,
              80,
              v140);
      V_LOCK(v71);
      v72 = logfmt_raw((int)v140, 0x1000u);
      V_UNLOCK(v72);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_low_hashrate",
        18,
        124,
        80,
        v140);
    }
    while ( v61 < v137[0] );
  }
LABEL_64:
  if ( !v1[40] )
  {
    clock_gettime(1, &stru_2D4AD0);
    v1[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v73 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v73),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v73) + 1904))
           || !pools_active )
      {
        if ( ++v73 >= total_pools )
          goto LABEL_72;
      }
      clock_gettime(1, &stru_2D4AD0);
      ++v73;
    }
    while ( v73 < total_pools );
  }
LABEL_72:
  clock_gettime(1, &stru_2D4AD8);
  if ( 1000LL * (*((_DWORD *)v1 + 13) - *((_DWORD *)v1 + 11)) + (*((_DWORD *)v1 + 14) - *((_DWORD *)v1 + 12)) / 1000000 > 59999 )
    v74 = 0;
  else
    v74 = v1[60] & 1;
  v115 = 1000LL * (*((_DWORD *)v1 + 13) - *((_DWORD *)v1 + 11))
       + (*((_DWORD *)v1 + 14) - *((_DWORD *)v1 + 12)) / 1000000;
  if ( v74 )
  {
    v98 = rand();
    v99 = sub_25BA0C(v98, 120);
    v101 = v100 + 60;
    V_LOCK(v99);
    v102 = logfmt_raw((int)v140, 0x1000u);
    V_UNLOCK(v102);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_lost_connection_to_pool",
      29,
      157,
      80,
      v140);
    sleep(v101);
    exit(1);
  }
  v75 = v116;
  if ( (LOBYTE(v114) & 0x1E) != 0 )
    v75 = v116 | 1;
  v76 = LODWORD(v114) >> 3;
  v77 = LODWORD(v114) >> 4;
  LODWORD(v114) = (LOBYTE(v114) & 0x1A) != 0;
  v121 = v75;
  v117 = (const char *)(v76 & 1);
  v78 = (unsigned __int8)(v113 | v75);
  v118 = (char *)(v77 & 1);
  if ( !v2 )
    goto LABEL_88;
  if ( v115 <= 60000 )
  {
    *((_DWORD *)v1 + 16) = 0;
LABEL_88:
    v80 = v1[12];
    if ( v80 )
      goto LABEL_98;
    if ( !v121 )
    {
      if ( v78 )
      {
        LOBYTE(v74) = v121;
        goto LABEL_98;
      }
      goto LABEL_96;
    }
    LODWORD(v115) = (unsigned __int8)v1[12];
LABEL_91:
    v81 = 0;
    v1[12] = 1;
    v140[0] = 0;
    v82 = get_all_created_runtime(v140);
    if ( v140[0] > 0 )
    {
      v83 = (_DWORD *)(v82 - 4);
      do
      {
        v84 = v83[1];
        ++v83;
        ++v81;
        v85 = (*(int (**)(void))(v84 + 20))();
        v86 = dev_ctrl(v85);
        (*(void (__fastcall **)(_DWORD))(v86 + 28))(*(_DWORD *)(*v83 + 228));
      }
      while ( v81 < v140[0] );
    }
    v87 = power_off();
    V_LOCK(v87);
    V_BOOL((int)&v124, "poweroff");
    v108 = v118;
    v109 = v115;
    v103 = "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d";
    v107 = v117;
    v106 = v116;
    v105 = s;
    v104 = (const char *)LODWORD(v120);
    v88 = logfmt_raw((int)v140, 0x1000u);
    V_UNLOCK(v88);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "task_check_miner_status",
      23,
      331,
      120,
      v140);
    if ( v78 || v1[12] )
      goto LABEL_97;
LABEL_96:
    LOBYTE(v74) = v80;
    v1[11] = 0;
    goto LABEL_99;
  }
  v79 = *((_DWORD *)v1 + 16);
  *((_DWORD *)v1 + 16) = v79 + 1;
  v122 = v79 % 60;
  if ( !(v79 % 60) )
  {
    V_LOCK(v79 + 1);
    V_STR((int)v139, "error");
    v103 = "lost internet for %d seconds";
    v104 = (const char *)((int)v115 / 1000);
    v97 = logfmt_raw((int)v140, 0x1000u);
    V_UNLOCK(v97);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_lost_connection_to_pool",
      29,
      165,
      100,
      v140);
  }
  if ( v115 <= 1200000 )
  {
    LOBYTE(v74) = v1[12];
    if ( (_BYTE)v74 )
      goto LABEL_98;
    if ( !v121 )
    {
      LOBYTE(v74) = v2;
      goto LABEL_98;
    }
    v78 = v121;
    LODWORD(v115) = (unsigned __int8)v1[12];
    v80 = v121;
    goto LABEL_91;
  }
  v80 = v1[60];
  if ( !v80 )
  {
    V_LOCK(v115);
    V_STR((int)v137, "error");
    v103 = "lost internet %d seconds > 20 minutes, poweroff.";
    v104 = (const char *)((int)v115 / 1000);
    v96 = logfmt_raw((int)v140, 0x1000u);
    V_UNLOCK(v96);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_lost_connection_to_pool",
      29,
      175,
      120,
      v140);
    v74 = (unsigned __int8)v1[12];
    v1[60] = 1;
    if ( v74 )
    {
      LODWORD(v114) = v74;
      goto LABEL_98;
    }
    LODWORD(v115) = 1;
    v78 = v2;
    LODWORD(v114) = v2;
    v80 = v2;
    goto LABEL_91;
  }
  LOBYTE(v74) = v1[12];
  if ( !(_BYTE)v74 )
  {
    if ( v121 )
    {
      v78 = v121;
      LODWORD(v115) = (unsigned __int8)v1[12];
      v80 = v121;
      goto LABEL_91;
    }
LABEL_97:
    LOBYTE(v74) = v80;
  }
LABEL_98:
  v1[11] = 1;
LABEL_99:
  if ( v2 )
  {
    v89 = v113;
    v1[10] = v74;
    v1[4] = LOBYTE(v120);
    v1[5] = (char)s;
    v1[8] = v116;
    if ( !v89 )
      v113 = (unsigned __int8)v1[12];
    v1[9] = v113;
    v1[6] = (char)v117;
    v1[7] = (char)v118;
  }
  v90 = pthread_mutex_unlock(&stru_2D4AB4);
  v91 = (unsigned __int8)v1[11];
  byte_2D19E8 ^= 1u;
  if ( v91 )
  {
    v92 = green_led_off(v90);
    if ( byte_2D19E8 )
    {
      red_led_on(v92);
      if ( !LODWORD(v114) )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off(v92);
  }
  else
  {
    v94 = red_led_off(v90);
    if ( byte_2D19E8 )
      green_led_on(v94);
    else
      green_led_off(v94);
  }
  if ( LODWORD(v114) )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
