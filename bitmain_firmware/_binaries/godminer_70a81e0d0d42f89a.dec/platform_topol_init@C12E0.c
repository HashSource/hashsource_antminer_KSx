int platform_topol_init()
{
  _DWORD *file; // r0
  _DWORD *v1; // r11
  _DWORD *v2; // r0
  _DWORD *v3; // r9
  int v4; // r0
  const char *v5; // r9
  size_t v6; // r0
  char *v7; // r0
  char *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r9
  int v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r9
  int v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r8
  int v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r8
  int v21; // r0
  int v22; // r0
  int v23; // r0
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  int v27; // r9
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  _DWORD *v36; // r0
  int v37; // r0
  _DWORD *v38; // r0
  int v39; // r9
  int v40; // r0
  size_t v41; // r9
  int v42; // r0
  _DWORD *v43; // r0
  int v44; // r6
  int v45; // r0
  _DWORD *v46; // r0
  int v47; // r6
  int v48; // r0
  _DWORD *v49; // r0
  int v50; // r6
  int v51; // r0
  _DWORD *v52; // r0
  int v53; // r6
  int v54; // r0
  _DWORD *v55; // r0
  int v56; // r8
  int v57; // r0
  _DWORD *v58; // r0
  _DWORD *v59; // r8
  int v60; // r0
  _DWORD *v61; // r0
  int v62; // r8
  int v63; // r0
  _DWORD *v64; // r0
  int v65; // r8
  int v66; // r0
  size_t v67; // r0
  int v68; // r6
  void *v69; // r0
  _DWORD *v70; // r0
  int v71; // r6
  int v72; // r0
  _DWORD *v73; // r0
  int v74; // r6
  int v75; // r0
  _DWORD *v76; // r0
  int v77; // r6
  int v78; // r0
  _DWORD *v79; // r0
  int v80; // r6
  int v81; // r0
  int v82; // r0
  int v83; // r3
  _DWORD *v84; // r0
  int v85; // r0
  _DWORD *v86; // r0
  _DWORD *v87; // r8
  _DWORD *v88; // r0
  int v89; // r7
  int v90; // r11
  int v91; // r0
  int v92; // r0
  _DWORD *v93; // r0
  _DWORD *v94; // r7
  int v95; // r0
  const char *v96; // r6
  _DWORD *v97; // r0
  int v98; // r6
  int v99; // r0
  _DWORD *v100; // r0
  _DWORD *v101; // r9
  char **v102; // r7
  int v103; // r6
  int v104; // r0
  const char *v105; // r0
  const char *v106; // r1
  const char *v107; // r9
  const char *v108; // t1
  _DWORD *v109; // r0
  _DWORD *v110; // r8
  char **v111; // r7
  int v112; // r6
  int v113; // r0
  const char *v114; // r0
  const char *v115; // r1
  const char *v116; // r8
  const char *v117; // t1
  int v118; // r0
  int v119; // r0
  int v120; // r0
  int v121; // r0
  int v122; // r0
  int v123; // r0
  int v124; // r0
  int v125; // r0
  int v126; // r0
  int v127; // r0
  int v128; // r0
  _DWORD *v129; // r0
  _DWORD *v130; // r0
  int v131; // r8
  int v132; // r0
  _DWORD *v133; // r0
  int v134; // r0
  int v135; // r11
  char **v136; // r6
  const char *v137; // r0
  int v138; // r4
  const char *v139; // r1
  const char *v140; // r7
  const char *v141; // t1
  int v142; // r2
  _DWORD *v143; // r0
  int v144; // r6
  int v145; // r0
  int v146; // r4
  int v147; // r5
  int v148; // r0
  int v149; // r3
  int v150; // r6
  int v151; // r5
  int v152; // r4
  void *v153; // r0
  unsigned int *v154; // r3
  unsigned int v155; // r2
  unsigned int v156; // r2
  int v157; // r0
  int v158; // r0
  int v159; // r0
  int v160; // r0
  int v161; // r0
  int v162; // r0
  int v163; // r0
  int v164; // r0
  int v165; // r0
  _DWORD *v166; // r0
  int v167; // r0
  _DWORD *v168; // r0
  _DWORD *v169; // r9
  _DWORD *v170; // r0
  int v171; // r7
  int v172; // r0
  int v173; // r0
  _DWORD *v174; // r11
  _DWORD *v175; // r0
  _DWORD *v176; // r7
  int v177; // r0
  const char *v178; // r6
  int v179; // r3
  _DWORD *v180; // r0
  int v181; // r6
  int v182; // r0
  _DWORD *v183; // r0
  _DWORD *v184; // r8
  char **v185; // r7
  int v186; // r6
  int v187; // r0
  const char *v188; // r0
  const char *v189; // r1
  const char *v190; // r8
  const char *v191; // t1
  _DWORD *v192; // r0
  _DWORD *v193; // r8
  char **v194; // r7
  int v195; // r6
  int v196; // r0
  const char *v197; // r0
  const char *v198; // r1
  const char *v199; // r8
  const char *v200; // t1
  int v201; // r0
  int v202; // r0
  int v203; // r0
  int v204; // r0
  int v205; // r0
  int v206; // r0
  int v207; // r0
  int v208; // r0
  int v209; // r0
  int v210; // r0
  int v211; // r0
  int v212; // r0
  int v213; // r0
  int v214; // r0
  int v215; // r0
  int v216; // r0
  int v217; // r0
  int v218; // r0
  int v219; // r0
  int v220; // r0
  int v221; // r0
  int v222; // r0
  int v223; // r0
  int v224; // r0
  int v225; // r0
  int v226; // r0
  int v227; // r0
  int v228; // r0
  int v229; // r0
  int v230; // r0
  int v231; // r0
  int v232; // r0
  _DWORD *v233; // [sp+14h] [bp-1128h]
  int v234; // [sp+14h] [bp-1128h]
  unsigned int v235; // [sp+18h] [bp-1124h]
  _DWORD *v236; // [sp+18h] [bp-1124h]
  unsigned int v237; // [sp+18h] [bp-1124h]
  _DWORD *v238; // [sp+1Ch] [bp-1120h]
  _DWORD *v239; // [sp+1Ch] [bp-1120h]
  _DWORD *v240; // [sp+1Ch] [bp-1120h]
  _DWORD *v241; // [sp+20h] [bp-111Ch]
  _DWORD *v242; // [sp+20h] [bp-111Ch]
  _DWORD *v243; // [sp+20h] [bp-111Ch]
  _DWORD *v244; // [sp+24h] [bp-1118h]
  int v245; // [sp+34h] [bp-1108h]
  char v246[252]; // [sp+3Ch] [bp-1100h] BYREF
  _BYTE v247[4100]; // [sp+138h] [bp-1004h] BYREF

  file = (_DWORD *)json_load_file("/etc/topol.conf", 0, v246);
  v1 = file;
  if ( !file || *file )
  {
    V_LOCK(file);
    v124 = logfmt_raw((int)v247, 0x1000u);
    v27 = -1;
    V_UNLOCK(v124);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "platform_topol_init",
      19,
      1512,
      20,
      v247);
    return v27;
  }
  v2 = (_DWORD *)json_object_get(file, "machine");
  v3 = v2;
  if ( !v2 || *v2 != 2 )
  {
    V_LOCK(v2);
    v31 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v31);
    v32 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
            170,
            "_parse_machine",
            14,
            140,
            100,
            v247);
LABEL_26:
    V_LOCK(v32);
    v33 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "platform_topol_init",
      19,
      1519,
      20,
      v247);
    goto LABEL_16;
  }
  V_LOCK(v2);
  json_string_value(v3);
  v4 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_machine",
    14,
    143,
    20,
    v247);
  v5 = (const char *)json_string_value(v3);
  v6 = strlen(v5);
  v7 = (char *)calloc(v6 + 1, 1u);
  topol_machine = (int)v7;
  if ( !v7 )
  {
    V_LOCK(0);
    v126 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v126);
    v32 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
            170,
            "_parse_machine",
            14,
            149,
            100,
            v247);
    goto LABEL_26;
  }
  v8 = strcpy(v7, v5);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_machine",
    14,
    154,
    20,
    v247);
  v10 = (_DWORD *)json_object_get(v1, "hw_version");
  v11 = v10;
  if ( !v10 || *v10 != 2 )
  {
    V_LOCK(v10);
    v34 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v34);
    v32 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
            170,
            "_parse_machine",
            14,
            159,
            100,
            v247);
    goto LABEL_26;
  }
  V_LOCK(v10);
  json_string_value(v11);
  v12 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_machine",
    14,
    162,
    20,
    v247);
  v13 = (_DWORD *)json_object_get(v1, "sw_version");
  v14 = v13;
  if ( !v13 || *v13 != 2 )
  {
    V_LOCK(v13);
    v35 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v35);
    v32 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
            170,
            "_parse_machine",
            14,
            167,
            100,
            v247);
    goto LABEL_26;
  }
  V_LOCK(v13);
  json_string_value(v14);
  v15 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_machine",
    14,
    170,
    20,
    v247);
  v16 = (_DWORD *)json_object_get(v1, "processor");
  v17 = v16;
  if ( !v16 || *v16 )
  {
    V_LOCK(v16);
    v118 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v118);
    v119 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_processor",
             16,
             182,
             100,
             v247);
LABEL_92:
    V_LOCK(v119);
    v120 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v120);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "platform_topol_init",
      19,
      1526,
      20,
      v247);
    goto LABEL_16;
  }
  V_LOCK(v16);
  v18 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_processor",
    16,
    185,
    20,
    v247);
  v19 = (_DWORD *)json_object_get(v17, "type");
  v20 = v19;
  if ( !v19 || *v19 != 2 )
  {
    V_LOCK(v19);
    v125 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v125);
    v119 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_processor",
             16,
             190,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v19);
  json_string_value(v20);
  v21 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_processor",
    16,
    193,
    20,
    v247);
  v22 = sub_BE7F8(v1);
  if ( v22 )
  {
    V_LOCK(v22);
    v23 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "platform_topol_init",
      19,
      1533,
      20,
      v247);
    goto LABEL_16;
  }
  v29 = sub_BEEFC(v1);
  if ( v29 )
  {
    V_LOCK(v29);
    v30 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v30);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "platform_topol_init",
      19,
      1540,
      20,
      v247);
    goto LABEL_16;
  }
  v36 = (_DWORD *)json_object_get(v1, "chain");
  v233 = v36;
  if ( !v36 || *v36 )
  {
    V_LOCK(v36);
    v128 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v128);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             909,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v36);
  v37 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    912,
    20,
    v247);
  v38 = (_DWORD *)json_object_get(v233, "chain_num");
  v39 = (int)v38;
  if ( !v38 || *v38 != 3 )
  {
    V_LOCK(v38);
    v127 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v127);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             917,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v38);
  json_integer_value(v39);
  v40 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v40);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    920,
    20,
    v247);
  v41 = json_integer_value(v39);
  dword_30E8E0 = v41;
  V_LOCK(v41);
  v42 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v42);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_alloc_chain",
    12,
    81,
    20,
    v247);
  dword_30E900 = (int)calloc(v41, 0x78u);
  if ( !dword_30E900 )
  {
    V_LOCK(0);
    v206 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v206);
    v207 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_alloc_chain",
             12,
             86,
             100,
             v247);
    V_LOCK(v207);
    v208 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v208);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_alloc_chain",
             12,
             87,
             100,
             v247);
    goto LABEL_94;
  }
  v43 = (_DWORD *)json_object_get(v233, "chain_row");
  v44 = (int)v43;
  if ( !v43 || *v43 != 3 )
  {
    V_LOCK(v43);
    v121 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v121);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             928,
             100,
             v247);
LABEL_94:
    V_LOCK(v122);
    v123 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v123);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "platform_topol_init",
      19,
      1548,
      20,
      v247);
LABEL_16:
    if ( v1[1] != -1 )
    {
      v24 = v1 + 1;
      __dmb(0xBu);
      do
      {
        v25 = __ldrex(v24);
        v26 = v25 - 1;
      }
      while ( __strex(v26, v24) );
      if ( !v26 )
        json_delete(v1);
    }
    return 34;
  }
  V_LOCK(v43);
  json_integer_value(v44);
  v45 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v45);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    931,
    20,
    v247);
  dword_30E8E4 = json_integer_value(v44);
  v46 = (_DWORD *)json_object_get(v233, "chain_column");
  v47 = (int)v46;
  if ( !v46 || *v46 != 3 )
  {
    V_LOCK(v46);
    v157 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v157);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             937,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v46);
  json_integer_value(v47);
  v48 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v48);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    940,
    20,
    v247);
  dword_30E8E8 = json_integer_value(v47);
  v49 = (_DWORD *)json_object_get(v233, "chain_domain_num");
  v50 = (int)v49;
  if ( !v49 || *v49 != 3 )
  {
    V_LOCK(v49);
    v158 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v158);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             946,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v49);
  json_integer_value(v50);
  v51 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v51);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    949,
    20,
    v247);
  dword_30E8EC = json_integer_value(v50);
  v52 = (_DWORD *)json_object_get(v233, "chain_asic_num");
  v53 = (int)v52;
  if ( !v52 || *v52 != 3 )
  {
    V_LOCK(v52);
    v159 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v159);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             955,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v52);
  json_integer_value(v53);
  v54 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v54);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    958,
    20,
    v247);
  dword_30E8F0 = json_integer_value(v53);
  v55 = (_DWORD *)json_object_get(v233, "domain_asic_num");
  v56 = (int)v55;
  if ( !v55 || *v55 != 3 )
  {
    V_LOCK(v55);
    v160 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v160);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             964,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v55);
  json_integer_value(v56);
  v57 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v57);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    967,
    20,
    v247);
  dword_30E8F4 = json_integer_value(v56);
  v58 = (_DWORD *)json_object_get(v233, "pic_mcu_en");
  v59 = v58;
  if ( !v58 || (unsigned int)(*v58 - 5) > 1 )
  {
    V_LOCK(v58);
    v161 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v161);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             973,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v58);
  v60 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v60);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    976,
    20,
    v247);
  byte_30E8F8 = *v59 == 5;
  v61 = (_DWORD *)json_object_get(v233, "sensor_mode");
  v62 = (int)v61;
  if ( !v61 || *v61 != 3 )
  {
    V_LOCK(v61);
    v165 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v165);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             982,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v61);
  json_integer_value(v62);
  v63 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v63);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    985,
    20,
    v247);
  *(_DWORD *)(dword_30E900 + 88) = json_integer_value(v62);
  v64 = (_DWORD *)json_object_get(v233, "sensor_num");
  v65 = (int)v64;
  if ( !v64 || *v64 != 3 )
  {
    V_LOCK(v64);
    v164 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v164);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             991,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v64);
  json_integer_value(v65);
  v66 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v66);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    994,
    20,
    v247);
  v67 = json_integer_value(v65);
  v68 = dword_30E900;
  *(_DWORD *)(dword_30E900 + 92) = v67;
  v69 = calloc(v67, 0x18u);
  *(_DWORD *)(v68 + 84) = v69;
  if ( !v69 )
  {
    V_LOCK(0);
    v230 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v230);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_alloc_sensor",
             13,
             98,
             100,
             v247);
    goto LABEL_94;
  }
  v70 = (_DWORD *)json_object_get(v233, "max_chip_temp");
  v71 = (int)v70;
  if ( !v70 || *v70 != 3 )
  {
    V_LOCK(v70);
    v201 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v201);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             1002,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v70);
  json_integer_value(v71);
  v72 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v72);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    1005,
    20,
    v247);
  *(_DWORD *)(dword_30E900 + 96) = json_integer_value(v71);
  v73 = (_DWORD *)json_object_get(v233, "max_pcb_temp");
  v74 = (int)v73;
  if ( !v73 || *v73 != 3 )
  {
    V_LOCK(v73);
    v202 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v202);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             1011,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v73);
  json_integer_value(v74);
  v75 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v75);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    1014,
    20,
    v247);
  *(_DWORD *)(dword_30E900 + 100) = json_integer_value(v74);
  v76 = (_DWORD *)json_object_get(v233, "min_pcb_temp");
  v77 = (int)v76;
  if ( !v76 || *v76 != 3 )
  {
    V_LOCK(v76);
    v214 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v214);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             1020,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v76);
  json_integer_value(v77);
  v78 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v78);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    1023,
    20,
    v247);
  *(_DWORD *)(dword_30E900 + 104) = json_integer_value(v77);
  v79 = (_DWORD *)json_object_get(v233, "max_uneffective_count");
  v80 = (int)v79;
  if ( !v79 || *v79 != 3 )
  {
    V_LOCK(v79);
    v215 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v215);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             1029,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v79);
  json_integer_value(v80);
  v81 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v81);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain",
    12,
    1032,
    20,
    v247);
  *(_DWORD *)(dword_30E900 + 108) = json_integer_value(v80);
  v82 = sub_BFE0C(v233);
  v27 = v82;
  if ( v82 )
  {
    V_LOCK(v82);
    v231 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v231);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             1038,
             100,
             v247);
    goto LABEL_94;
  }
  if ( byte_30E8F8 )
  {
    v162 = sub_C0614(v233);
    if ( v162 )
    {
      V_LOCK(v162);
      v163 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v163);
      v122 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
               170,
               "_parse_chain",
               12,
               1046,
               100,
               v247);
      goto LABEL_94;
    }
  }
  v83 = *(_DWORD *)(dword_30E900 + 88);
  if ( v83 == 3 )
  {
    v166 = (_DWORD *)json_object_get(v233, "ctrlboard_sensor");
    v243 = v166;
    if ( !v166 || *v166 != 1 )
    {
      V_LOCK(v166);
      v232 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v232);
      v223 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
               170,
               "_parse_chain_ctrlboard_sensor",
               29,
               641,
               100,
               v247);
LABEL_183:
      V_LOCK(v223);
      v224 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v224);
      v122 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
               170,
               "_parse_chain",
               12,
               1055,
               100,
               v247);
      goto LABEL_94;
    }
    V_LOCK(v166);
    v167 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v167);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
      170,
      "_parse_chain_ctrlboard_sensor",
      29,
      644,
      20,
      v247);
    v237 = 0;
    v240 = v1;
    while ( v237 < (unsigned int)json_array_size(v243) )
    {
      v168 = json_array_get(v243, v237);
      v169 = v168;
      if ( !v168 || *v168 )
      {
        v1 = v240;
        V_LOCK(v168);
        v228 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v228);
        v223 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                 170,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 651,
                 100,
                 v247);
        goto LABEL_183;
      }
      v170 = (_DWORD *)json_object_get(v168, "index");
      v171 = (int)v170;
      if ( !v170 || *v170 != 3 )
      {
        v1 = v240;
        V_LOCK(v170);
        v227 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v227);
        v223 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                 170,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 658,
                 100,
                 v247);
        goto LABEL_183;
      }
      V_LOCK(v170);
      json_integer_value(v171);
      v172 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v172);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_ctrlboard_sensor",
        29,
        661,
        20,
        v247);
      v173 = json_integer_value(v171);
      v174 = (_DWORD *)(*(_DWORD *)(dword_30E900 + 84) + 24 * v173);
      *v174 = v173;
      v174[2] = 2;
      v175 = (_DWORD *)json_object_get(v169, "type");
      v176 = v175;
      if ( !v175 || *v175 != 2 )
      {
        v1 = v240;
        V_LOCK(v175);
        v226 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v226);
        v223 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                 170,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 670,
                 100,
                 v247);
        goto LABEL_183;
      }
      V_LOCK(v175);
      json_string_value(v176);
      v177 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v177);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_ctrlboard_sensor",
        29,
        673,
        20,
        v247);
      v178 = (const char *)json_string_value(v176);
      v179 = strcmp(v178, "TMP451");
      if ( v179 )
      {
        if ( !strcmp(v178, "LM75A") )
        {
          v179 = 1;
        }
        else if ( !strcmp(v178, "unknow") )
        {
          v179 = 2;
        }
        else
        {
          v179 = 3;
        }
      }
      v174[1] = v179;
      v180 = (_DWORD *)json_object_get(v169, "iic");
      v181 = (int)v180;
      if ( !v180 || *v180 != 3 )
      {
        v1 = v240;
        V_LOCK(v180);
        v225 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v225);
        v223 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                 170,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 679,
                 100,
                 v247);
        goto LABEL_183;
      }
      V_LOCK(v180);
      json_integer_value(v181);
      v182 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v182);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_ctrlboard_sensor",
        29,
        682,
        20,
        v247);
      v174[5] = json_integer_value(v181);
      v183 = (_DWORD *)json_object_get(v169, "x");
      v184 = v183;
      if ( !v183 || *v183 != 2 )
      {
        v1 = v240;
        V_LOCK(v183);
        v222 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v222);
        v223 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                 170,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 688,
                 100,
                 v247);
        goto LABEL_183;
      }
      V_LOCK(v183);
      json_string_value(v184);
      v185 = off_28C9BC;
      v186 = 0;
      v187 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v187);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_ctrlboard_sensor",
        29,
        691,
        20,
        v247);
      v188 = (const char *)json_string_value(v184);
      v189 = "air_in";
      v190 = v188;
      while ( strcmp(v190, v189) )
      {
        v191 = *v185++;
        v189 = v191;
        ++v186;
      }
      v174[3] = v186;
      v192 = (_DWORD *)json_object_get(v169, "y");
      v193 = v192;
      if ( !v192 || *v192 != 2 )
      {
        v1 = v240;
        V_LOCK(v192);
        v229 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v229);
        v223 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                 170,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 697,
                 100,
                 v247);
        goto LABEL_183;
      }
      V_LOCK(v192);
      v194 = off_28C9DC;
      json_string_value(v193);
      v195 = 0;
      v196 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v196);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_ctrlboard_sensor",
        29,
        700,
        20,
        v247);
      v197 = (const char *)json_string_value(v193);
      v198 = "top";
      v199 = v197;
      while ( strcmp(v199, v198) )
      {
        v200 = *v194++;
        v198 = v200;
        ++v195;
      }
      v174[4] = v195;
      ++v237;
    }
    v1 = v240;
    v27 = 0;
    v83 = *(_DWORD *)(dword_30E900 + 88);
  }
  if ( (v83 & 0xFFFFFFFD) == 0 )
  {
    v84 = (_DWORD *)json_object_get(v233, "asic_sensor");
    v241 = v84;
    if ( v84 && *v84 == 1 )
    {
      V_LOCK(v84);
      v85 = logfmt_raw((int)v247, 0x1000u);
      v235 = 0;
      V_UNLOCK(v85);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
        170,
        "_parse_chain_sensor",
        19,
        803,
        20,
        v247);
      v244 = v1;
      v245 = v27;
      while ( 1 )
      {
        if ( v235 >= (unsigned int)json_array_size(v241) )
        {
          v1 = v244;
          v27 = v245;
          goto LABEL_101;
        }
        v86 = json_array_get(v241, v235);
        v87 = v86;
        if ( !v86 || *v86 )
          break;
        v88 = (_DWORD *)json_object_get(v86, "index");
        v89 = (int)v88;
        if ( !v88 || *v88 != 3 )
        {
          v1 = v244;
          V_LOCK(v88);
          v212 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v212);
          v204 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                   170,
                   "_parse_chain_sensor",
                   19,
                   818,
                   100,
                   v247);
          goto LABEL_167;
        }
        V_LOCK(v88);
        json_integer_value(v89);
        v90 = 1;
        v91 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v91);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_sensor",
          19,
          821,
          20,
          v247);
        v92 = json_integer_value(v89);
        v238 = (_DWORD *)(*(_DWORD *)(dword_30E900 + 84) + 24 * v92);
        *v238 = v92;
        v238[2] = 1;
        v93 = (_DWORD *)json_object_get(v87, "type");
        v94 = v93;
        if ( !v93 || *v93 != 2 )
        {
          v1 = v244;
          V_LOCK(v93);
          v211 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v211);
          v204 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                   170,
                   "_parse_chain_sensor",
                   19,
                   830,
                   100,
                   v247);
          goto LABEL_167;
        }
        V_LOCK(v93);
        json_string_value(v94);
        v95 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v95);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_sensor",
          19,
          833,
          20,
          v247);
        v96 = (const char *)json_string_value(v94);
        if ( !strcmp(v96, "TMP451") )
        {
          v90 = 0;
        }
        else if ( strcmp(v96, "LM75A") )
        {
          if ( !strcmp(v96, "unknow") )
            v90 = 2;
          else
            v90 = 3;
        }
        v238[1] = v90;
        v97 = (_DWORD *)json_object_get(v87, "bind_asic");
        v98 = (int)v97;
        if ( !v97 || *v97 != 3 )
        {
          v1 = v244;
          V_LOCK(v97);
          v203 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v203);
          v204 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                   170,
                   "_parse_chain_sensor",
                   19,
                   839,
                   100,
                   v247);
          goto LABEL_167;
        }
        V_LOCK(v97);
        json_integer_value(v98);
        v99 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v99);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_sensor",
          19,
          842,
          20,
          v247);
        v238[5] = json_integer_value(v98);
        v100 = (_DWORD *)json_object_get(v87, "x");
        v101 = v100;
        if ( !v100 || *v100 != 2 )
        {
          v1 = v244;
          V_LOCK(v100);
          v210 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v210);
          v204 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                   170,
                   "_parse_chain_sensor",
                   19,
                   848,
                   100,
                   v247);
          goto LABEL_167;
        }
        V_LOCK(v100);
        json_string_value(v101);
        v102 = off_28C9BC;
        v103 = 0;
        v104 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v104);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_sensor",
          19,
          851,
          20,
          v247);
        v105 = (const char *)json_string_value(v101);
        v106 = "air_in";
        v107 = v105;
        while ( strcmp(v107, v106) )
        {
          v108 = *v102++;
          v106 = v108;
          ++v103;
        }
        v238[3] = v103;
        v109 = (_DWORD *)json_object_get(v87, "y");
        v110 = v109;
        if ( !v109 || *v109 != 2 )
        {
          v1 = v244;
          V_LOCK(v109);
          v209 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v209);
          v204 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
                   170,
                   "_parse_chain_sensor",
                   19,
                   857,
                   100,
                   v247);
          goto LABEL_167;
        }
        V_LOCK(v109);
        json_string_value(v110);
        v111 = off_28C9DC;
        v112 = 0;
        v113 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v113);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
          170,
          "_parse_chain_sensor",
          19,
          860,
          20,
          v247);
        v114 = (const char *)json_string_value(v110);
        v115 = "top";
        v116 = v114;
        while ( strcmp(v116, v115) )
        {
          v117 = *v111++;
          v115 = v117;
          ++v112;
        }
        v238[4] = v112;
        ++v235;
      }
      v1 = v244;
      V_LOCK(v86);
      v213 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v213);
      v204 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
               170,
               "_parse_chain_sensor",
               19,
               811,
               100,
               v247);
    }
    else
    {
      V_LOCK(v84);
      v221 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v221);
      v204 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
               170,
               "_parse_chain_sensor",
               19,
               800,
               100,
               v247);
    }
LABEL_167:
    V_LOCK(v204);
    v205 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v205);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             1065,
             100,
             v247);
    goto LABEL_94;
  }
LABEL_101:
  v129 = v233;
  v234 = dword_30E8E0;
  v130 = (_DWORD *)json_object_get(v129, "eeprom");
  v236 = v130;
  if ( !v130 || (v131 = *v130) != 0 )
  {
    V_LOCK(v130);
    v220 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v220);
    v217 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain_eeprom",
             19,
             761,
             100,
             v247);
    goto LABEL_177;
  }
  V_LOCK(v130);
  v132 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v132);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain_eeprom",
    19,
    764,
    20,
    v247);
  v133 = (_DWORD *)json_object_get(v236, "type");
  v239 = v133;
  if ( !v133 || *v133 != 2 )
  {
    V_LOCK(v133);
    v219 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v219);
    v217 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain_eeprom",
             19,
             769,
             100,
             v247);
    goto LABEL_177;
  }
  V_LOCK(v133);
  json_string_value(v239);
  v134 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v134);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain_eeprom",
    19,
    772,
    20,
    v247);
  if ( v234 > 0 )
  {
    v242 = v1;
    v135 = 0;
    do
    {
      v136 = off_28CAA8;
      v137 = (const char *)json_string_value(v239);
      v138 = 0;
      v139 = "AT24C02D";
      v140 = v137;
      while ( strcmp(v140, v139) )
      {
        v141 = v136[1];
        ++v136;
        v139 = v141;
        ++v138;
      }
      ++v135;
      v142 = dword_30E900 + v131;
      v131 += 120;
      *(_DWORD *)(v142 + 112) = v138;
    }
    while ( v234 != v135 );
    v1 = v242;
  }
  v143 = (_DWORD *)json_object_get(v236, "i2c_addr");
  v144 = (int)v143;
  if ( !v143 || *v143 != 3 )
  {
    V_LOCK(v143);
    v216 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v216);
    v217 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain_eeprom",
             19,
             781,
             100,
             v247);
LABEL_177:
    V_LOCK(v217);
    v218 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v218);
    v122 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/topol/topol.c",
             170,
             "_parse_chain",
             12,
             1073,
             100,
             v247);
    goto LABEL_94;
  }
  V_LOCK(v143);
  json_integer_value(v144);
  v145 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v145);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/topol/topol.c",
    170,
    "_parse_chain_eeprom",
    19,
    784,
    20,
    v247);
  if ( v234 > 0 )
  {
    v146 = 0;
    v147 = 0;
    do
    {
      ++v146;
      v148 = json_integer_value(v144);
      v149 = dword_30E900 + v147;
      v147 += 120;
      *(_DWORD *)(v149 + 116) = v148;
    }
    while ( v234 != v146 );
  }
  v150 = dword_30E8E0;
  if ( dword_30E8E0 > 1 )
  {
    v151 = 120;
    v152 = 1;
    do
    {
      ++v152;
      v153 = (void *)(dword_30E900 + v151);
      v151 += 120;
      memcpy(v153, (const void *)dword_30E900, 0x78u);
    }
    while ( v150 != v152 );
  }
  if ( v1[1] != -1 )
  {
    v154 = v1 + 1;
    __dmb(0xBu);
    do
    {
      v155 = __ldrex(v154);
      v156 = v155 - 1;
    }
    while ( __strex(v156, v154) );
    if ( !v156 )
      json_delete(v1);
  }
  return v27;
}
