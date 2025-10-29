int platform_topol_init()
{
  double *file; // r0
  double *v1; // r11
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
  int v88; // r6
  _DWORD *v89; // r0
  int v90; // r7
  int v91; // r0
  int v92; // r0
  _DWORD *v93; // r11
  _DWORD *v94; // r0
  _DWORD *v95; // r7
  int v96; // r0
  const char *v97; // r7
  _DWORD *v98; // r0
  int v99; // r6
  int v100; // r0
  _DWORD *v101; // r0
  _DWORD *v102; // r9
  char **v103; // r7
  int v104; // r6
  int v105; // r0
  const char *v106; // r0
  const char *v107; // r1
  const char *v108; // r9
  const char *v109; // t1
  _DWORD *v110; // r0
  _DWORD *v111; // r8
  char **v112; // r7
  int v113; // r6
  int v114; // r0
  const char *v115; // r0
  const char *v116; // r1
  const char *v117; // r8
  const char *v118; // t1
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
  int v129; // r0
  _DWORD *v130; // r0
  _DWORD *v131; // r0
  int v132; // r8
  int v133; // r0
  _DWORD *v134; // r0
  int v135; // r0
  int v136; // r11
  const char *v137; // r6
  const char *v138; // r0
  int v139; // r4
  const char *v140; // r1
  const char *v141; // r7
  const char *v142; // t1
  int v143; // r2
  _DWORD *v144; // r0
  int v145; // r6
  int v146; // r0
  int v147; // r4
  int v148; // r5
  int v149; // r0
  int v150; // r3
  int v151; // r6
  int v152; // r5
  int v153; // r4
  void *v154; // r0
  unsigned int *v155; // r3
  unsigned int v156; // r2
  unsigned int v157; // r2
  int v158; // r0
  int v159; // r0
  int v160; // r0
  int v161; // r0
  int v162; // r0
  int v163; // r0
  int v164; // r0
  int v165; // r0
  int v166; // r0
  _DWORD *v167; // r0
  int v168; // r0
  _DWORD *v169; // r0
  _DWORD *v170; // r9
  int v171; // r6
  _DWORD *v172; // r0
  int v173; // r7
  int v174; // r0
  int v175; // r0
  _DWORD *v176; // r11
  _DWORD *v177; // r0
  _DWORD *v178; // r7
  int v179; // r0
  const char *v180; // r7
  _DWORD *v181; // r0
  int v182; // r6
  int v183; // r0
  _DWORD *v184; // r0
  _DWORD *v185; // r8
  char **v186; // r7
  int v187; // r6
  int v188; // r0
  const char *v189; // r0
  const char *v190; // r1
  const char *v191; // r8
  const char *v192; // t1
  _DWORD *v193; // r0
  _DWORD *v194; // r8
  char **v195; // r7
  int v196; // r6
  int v197; // r0
  const char *v198; // r0
  const char *v199; // r1
  const char *v200; // r8
  const char *v201; // t1
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
  int v233; // r0
  _DWORD *v234; // [sp+14h] [bp-1120h]
  int v235; // [sp+14h] [bp-1120h]
  unsigned int v236; // [sp+18h] [bp-111Ch]
  _DWORD *v237; // [sp+18h] [bp-111Ch]
  unsigned int i; // [sp+18h] [bp-111Ch]
  _DWORD *v239; // [sp+1Ch] [bp-1118h]
  _DWORD *v240; // [sp+1Ch] [bp-1118h]
  double *v241; // [sp+1Ch] [bp-1118h]
  double *v242; // [sp+20h] [bp-1114h]
  double *v243; // [sp+20h] [bp-1114h]
  _DWORD *v244; // [sp+20h] [bp-1114h]
  int v245; // [sp+2Ch] [bp-1108h]
  char v246[252]; // [sp+34h] [bp-1100h] BYREF
  _BYTE v247[4100]; // [sp+130h] [bp-1004h] BYREF

  file = json_load_file("/etc/topol.conf", 0, v246);
  v1 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK(file);
    v125 = logfmt_raw((int)v247, 0x1000u);
    v27 = -1;
    V_UNLOCK(v125);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1489,
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
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
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
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1496,
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
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
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
    v127 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v127);
    v32 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
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
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
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
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
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
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
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
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
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
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
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
    v119 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v119);
    v120 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_processor",
             16,
             182,
             100,
             v247);
LABEL_90:
    V_LOCK(v120);
    v121 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v121);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1503,
      20,
      v247);
    goto LABEL_16;
  }
  V_LOCK(v16);
  v18 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
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
    v126 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v126);
    v120 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_processor",
             16,
             190,
             100,
             v247);
    goto LABEL_90;
  }
  V_LOCK(v19);
  json_string_value(v20);
  v21 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_processor",
    16,
    193,
    20,
    v247);
  v22 = sub_BE2A0(v1);
  if ( v22 )
  {
    V_LOCK(v22);
    v23 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1510,
      20,
      v247);
    goto LABEL_16;
  }
  v29 = sub_BE9A4(v1);
  if ( v29 )
  {
    V_LOCK(v29);
    v30 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v30);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1517,
      20,
      v247);
    goto LABEL_16;
  }
  v36 = (_DWORD *)json_object_get(v1, "chain");
  v234 = v36;
  if ( !v36 || *v36 )
  {
    V_LOCK(v36);
    v129 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v129);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             909,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v36);
  v37 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    912,
    20,
    v247);
  v38 = (_DWORD *)json_object_get(v234, "chain_num");
  v39 = (int)v38;
  if ( !v38 || *v38 != 3 )
  {
    V_LOCK(v38);
    v128 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v128);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             917,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v38);
  json_integer_value(v39);
  v40 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v40);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    920,
    20,
    v247);
  v41 = json_integer_value(v39);
  dword_312D30 = v41;
  V_LOCK(v41);
  v42 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v42);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_alloc_chain",
    12,
    81,
    20,
    v247);
  dword_312D50 = (int)calloc(v41, 0x78u);
  if ( !dword_312D50 )
  {
    V_LOCK(0);
    v204 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v204);
    v205 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_alloc_chain",
             12,
             86,
             100,
             v247);
    V_LOCK(v205);
    v206 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v206);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_alloc_chain",
             12,
             87,
             100,
             v247);
    goto LABEL_92;
  }
  v43 = (_DWORD *)json_object_get(v234, "chain_row");
  v44 = (int)v43;
  if ( !v43 || *v43 != 3 )
  {
    V_LOCK(v43);
    v122 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v122);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             928,
             100,
             v247);
LABEL_92:
    V_LOCK(v123);
    v124 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v124);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1525,
      20,
      v247);
LABEL_16:
    if ( *((_DWORD *)v1 + 1) != -1 )
    {
      v24 = (unsigned int *)v1 + 1;
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
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    931,
    20,
    v247);
  dword_312D34 = json_integer_value(v44);
  v46 = (_DWORD *)json_object_get(v234, "chain_column");
  v47 = (int)v46;
  if ( !v46 || *v46 != 3 )
  {
    V_LOCK(v46);
    v158 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v158);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             937,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v46);
  json_integer_value(v47);
  v48 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v48);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    940,
    20,
    v247);
  dword_312D38 = json_integer_value(v47);
  v49 = (_DWORD *)json_object_get(v234, "chain_domain_num");
  v50 = (int)v49;
  if ( !v49 || *v49 != 3 )
  {
    V_LOCK(v49);
    v159 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v159);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             946,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v49);
  json_integer_value(v50);
  v51 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v51);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    949,
    20,
    v247);
  dword_312D3C = json_integer_value(v50);
  v52 = (_DWORD *)json_object_get(v234, "chain_asic_num");
  v53 = (int)v52;
  if ( !v52 || *v52 != 3 )
  {
    V_LOCK(v52);
    v160 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v160);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             955,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v52);
  json_integer_value(v53);
  v54 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v54);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    958,
    20,
    v247);
  dword_312D40 = json_integer_value(v53);
  v55 = (_DWORD *)json_object_get(v234, "domain_asic_num");
  v56 = (int)v55;
  if ( !v55 || *v55 != 3 )
  {
    V_LOCK(v55);
    v161 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v161);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             964,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v55);
  json_integer_value(v56);
  v57 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v57);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    967,
    20,
    v247);
  dword_312D44 = json_integer_value(v56);
  v58 = (_DWORD *)json_object_get(v234, "pic_mcu_en");
  v59 = v58;
  if ( !v58 || (unsigned int)(*v58 - 5) > 1 )
  {
    V_LOCK(v58);
    v164 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v164);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             973,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v58);
  v60 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v60);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    976,
    20,
    v247);
  byte_312D48 = *v59 == 5;
  v61 = (_DWORD *)json_object_get(v234, "sensor_mode");
  v62 = (int)v61;
  if ( !v61 || *v61 != 3 )
  {
    V_LOCK(v61);
    v163 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v163);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             982,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v61);
  json_integer_value(v62);
  v63 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v63);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    985,
    20,
    v247);
  *(_DWORD *)(dword_312D50 + 88) = json_integer_value(v62);
  v64 = (_DWORD *)json_object_get(v234, "sensor_num");
  v65 = (int)v64;
  if ( !v64 || *v64 != 3 )
  {
    V_LOCK(v64);
    v162 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v162);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             991,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v64);
  json_integer_value(v65);
  v66 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v66);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    994,
    20,
    v247);
  v67 = json_integer_value(v65);
  v68 = dword_312D50;
  *(_DWORD *)(dword_312D50 + 92) = v67;
  v69 = calloc(v67, 0x18u);
  *(_DWORD *)(v68 + 84) = v69;
  if ( !v69 )
  {
    V_LOCK(0);
    v231 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v231);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_alloc_sensor",
             13,
             98,
             100,
             v247);
    goto LABEL_92;
  }
  v70 = (_DWORD *)json_object_get(v234, "max_chip_temp");
  v71 = (int)v70;
  if ( !v70 || *v70 != 3 )
  {
    V_LOCK(v70);
    v203 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v203);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             1002,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v70);
  json_integer_value(v71);
  v72 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v72);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    1005,
    20,
    v247);
  *(_DWORD *)(dword_312D50 + 96) = json_integer_value(v71);
  v73 = (_DWORD *)json_object_get(v234, "max_pcb_temp");
  v74 = (int)v73;
  if ( !v73 || *v73 != 3 )
  {
    V_LOCK(v73);
    v202 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v202);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             1011,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v73);
  json_integer_value(v74);
  v75 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v75);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    1014,
    20,
    v247);
  *(_DWORD *)(dword_312D50 + 100) = json_integer_value(v74);
  v76 = (_DWORD *)json_object_get(v234, "min_pcb_temp");
  v77 = (int)v76;
  if ( !v76 || *v76 != 3 )
  {
    V_LOCK(v76);
    v208 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v208);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             1020,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v76);
  json_integer_value(v77);
  v78 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v78);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    1023,
    20,
    v247);
  *(_DWORD *)(dword_312D50 + 104) = json_integer_value(v77);
  v79 = (_DWORD *)json_object_get(v234, "max_uneffective_count");
  v80 = (int)v79;
  if ( !v79 || *v79 != 3 )
  {
    V_LOCK(v79);
    v207 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v207);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             1029,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v79);
  json_integer_value(v80);
  v81 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v81);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    1032,
    20,
    v247);
  *(_DWORD *)(dword_312D50 + 108) = json_integer_value(v80);
  v82 = sub_BF8B4(v234);
  v27 = v82;
  if ( v82 )
  {
    V_LOCK(v82);
    v232 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v232);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             1038,
             100,
             v247);
    goto LABEL_92;
  }
  if ( byte_312D48 )
  {
    v165 = sub_C00BC(v234);
    if ( v165 )
    {
      V_LOCK(v165);
      v166 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v166);
      v123 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/topol/topol.c",
               165,
               "_parse_chain",
               12,
               1046,
               100,
               v247);
      goto LABEL_92;
    }
  }
  v83 = *(_DWORD *)(dword_312D50 + 88);
  if ( v83 == 3 )
  {
    v167 = (_DWORD *)json_object_get(v234, "ctrlboard_sensor");
    v244 = v167;
    if ( !v167 || *v167 != 1 )
    {
      V_LOCK(v167);
      v233 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v233);
      v224 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/topol/topol.c",
               165,
               "_parse_chain_ctrlboard_sensor",
               29,
               641,
               100,
               v247);
LABEL_177:
      V_LOCK(v224);
      v225 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v225);
      v123 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/topol/topol.c",
               165,
               "_parse_chain",
               12,
               1055,
               100,
               v247);
      goto LABEL_92;
    }
    V_LOCK(v167);
    v168 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v168);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_ctrlboard_sensor",
      29,
      644,
      20,
      v247);
    v241 = v1;
    for ( i = 0; i < (unsigned int)json_array_size(v244); ++i )
    {
      v169 = json_array_get(v244, i);
      v170 = v169;
      if ( !v169 || (v171 = *v169) != 0 )
      {
        v1 = v241;
        V_LOCK(v169);
        v228 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v228);
        v224 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                 165,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 651,
                 100,
                 v247);
        goto LABEL_177;
      }
      v172 = (_DWORD *)json_object_get(v169, "index");
      v173 = (int)v172;
      if ( !v172 || *v172 != 3 )
      {
        v1 = v241;
        V_LOCK(v172);
        v227 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v227);
        v224 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                 165,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 658,
                 100,
                 v247);
        goto LABEL_177;
      }
      V_LOCK(v172);
      json_integer_value(v173);
      v174 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v174);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        661,
        20,
        v247);
      v175 = json_integer_value(v173);
      v176 = (_DWORD *)(*(_DWORD *)(dword_312D50 + 84) + 24 * v175);
      *v176 = v175;
      v176[2] = 2;
      v177 = (_DWORD *)json_object_get(v170, "type");
      v178 = v177;
      if ( !v177 || *v177 != 2 )
      {
        v1 = v241;
        V_LOCK(v177);
        v226 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v226);
        v224 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                 165,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 670,
                 100,
                 v247);
        goto LABEL_177;
      }
      V_LOCK(v177);
      json_string_value(v178);
      v179 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v179);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        673,
        20,
        v247);
      v180 = (const char *)json_string_value(v178);
      if ( strcmp(v180, "TMP451") )
      {
        do
          ++v171;
        while ( v171 != 5 && strcmp(v180, *(const char **)&aJ[4 * v171]) );
      }
      v176[1] = v171;
      v181 = (_DWORD *)json_object_get(v170, "iic");
      v182 = (int)v181;
      if ( !v181 || *v181 != 3 )
      {
        v1 = v241;
        V_LOCK(v181);
        v223 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v223);
        v224 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                 165,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 679,
                 100,
                 v247);
        goto LABEL_177;
      }
      V_LOCK(v181);
      json_integer_value(v182);
      v183 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v183);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        682,
        20,
        v247);
      v176[5] = json_integer_value(v182);
      v184 = (_DWORD *)json_object_get(v170, "x");
      v185 = v184;
      if ( !v184 || *v184 != 2 )
      {
        v1 = v241;
        V_LOCK(v184);
        v229 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v229);
        v224 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                 165,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 688,
                 100,
                 v247);
        goto LABEL_177;
      }
      V_LOCK(v184);
      json_string_value(v185);
      v186 = off_296068;
      v187 = 0;
      v188 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v188);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        691,
        20,
        v247);
      v189 = (const char *)json_string_value(v185);
      v190 = "air_in";
      v191 = v189;
      while ( strcmp(v191, v190) )
      {
        v192 = *v186++;
        v190 = v192;
        ++v187;
      }
      v176[3] = v187;
      v193 = (_DWORD *)json_object_get(v170, "y");
      v194 = v193;
      if ( !v193 || *v193 != 2 )
      {
        v1 = v241;
        V_LOCK(v193);
        v230 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v230);
        v224 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                 165,
                 "_parse_chain_ctrlboard_sensor",
                 29,
                 697,
                 100,
                 v247);
        goto LABEL_177;
      }
      V_LOCK(v193);
      v195 = off_296088;
      json_string_value(v194);
      v196 = 0;
      v197 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v197);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        700,
        20,
        v247);
      v198 = (const char *)json_string_value(v194);
      v199 = "top";
      v200 = v198;
      while ( strcmp(v200, v199) )
      {
        v201 = *v195++;
        v199 = v201;
        ++v196;
      }
      v176[4] = v196;
    }
    v1 = v241;
    v27 = 0;
    v83 = *(_DWORD *)(dword_312D50 + 88);
  }
  if ( (v83 & 0xFFFFFFFD) == 0 )
  {
    v84 = (_DWORD *)json_object_get(v234, "asic_sensor");
    v239 = v84;
    if ( v84 && *v84 == 1 )
    {
      V_LOCK(v84);
      v85 = logfmt_raw((int)v247, 0x1000u);
      v236 = 0;
      V_UNLOCK(v85);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_sensor",
        19,
        803,
        20,
        v247);
      v242 = v1;
      v245 = v27;
      while ( 1 )
      {
        if ( v236 >= (unsigned int)json_array_size(v239) )
        {
          v1 = v242;
          v27 = v245;
          goto LABEL_99;
        }
        v86 = json_array_get(v239, v236);
        v87 = v86;
        if ( !v86 )
          break;
        v88 = *v86;
        if ( *v86 )
          break;
        v89 = (_DWORD *)json_object_get(v86, "index");
        v90 = (int)v89;
        if ( !v89 || *v89 != 3 )
        {
          v1 = v242;
          V_LOCK(v89);
          v219 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v219);
          v214 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                   165,
                   "_parse_chain_sensor",
                   19,
                   818,
                   100,
                   v247);
          goto LABEL_168;
        }
        V_LOCK(v89);
        json_integer_value(v90);
        v91 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v91);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          821,
          20,
          v247);
        v92 = json_integer_value(v90);
        v93 = (_DWORD *)(*(_DWORD *)(dword_312D50 + 84) + 24 * v92);
        *v93 = v92;
        v93[2] = 1;
        v94 = (_DWORD *)json_object_get(v87, "type");
        v95 = v94;
        if ( !v94 || *v94 != 2 )
        {
          v1 = v242;
          V_LOCK(v94);
          v218 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v218);
          v214 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                   165,
                   "_parse_chain_sensor",
                   19,
                   830,
                   100,
                   v247);
          goto LABEL_168;
        }
        V_LOCK(v94);
        json_string_value(v95);
        v96 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v96);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          833,
          20,
          v247);
        v97 = (const char *)json_string_value(v95);
        if ( strcmp(v97, "TMP451") )
        {
          do
            ++v88;
          while ( v88 != 5 && strcmp(v97, *(const char **)&aJ[4 * v88]) );
        }
        v93[1] = v88;
        v98 = (_DWORD *)json_object_get(v87, "bind_asic");
        v99 = (int)v98;
        if ( !v98 || *v98 != 3 )
        {
          v1 = v242;
          V_LOCK(v98);
          v217 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v217);
          v214 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                   165,
                   "_parse_chain_sensor",
                   19,
                   839,
                   100,
                   v247);
          goto LABEL_168;
        }
        V_LOCK(v98);
        json_integer_value(v99);
        v100 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v100);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          842,
          20,
          v247);
        v93[5] = json_integer_value(v99);
        v101 = (_DWORD *)json_object_get(v87, "x");
        v102 = v101;
        if ( !v101 || *v101 != 2 )
        {
          v1 = v242;
          V_LOCK(v101);
          v216 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v216);
          v214 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                   165,
                   "_parse_chain_sensor",
                   19,
                   848,
                   100,
                   v247);
          goto LABEL_168;
        }
        V_LOCK(v101);
        json_string_value(v102);
        v103 = off_296068;
        v104 = 0;
        v105 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v105);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          851,
          20,
          v247);
        v106 = (const char *)json_string_value(v102);
        v107 = "air_in";
        v108 = v106;
        while ( strcmp(v108, v107) )
        {
          v109 = *v103++;
          v107 = v109;
          ++v104;
        }
        v93[3] = v104;
        v110 = (_DWORD *)json_object_get(v87, "y");
        v111 = v110;
        if ( !v110 || *v110 != 2 )
        {
          v1 = v242;
          V_LOCK(v110);
          v213 = logfmt_raw((int)v247, 0x1000u);
          V_UNLOCK(v213);
          v214 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                   165,
                   "_parse_chain_sensor",
                   19,
                   857,
                   100,
                   v247);
          goto LABEL_168;
        }
        V_LOCK(v110);
        json_string_value(v111);
        v112 = off_296088;
        v113 = 0;
        v114 = logfmt_raw((int)v247, 0x1000u);
        V_UNLOCK(v114);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          860,
          20,
          v247);
        v115 = (const char *)json_string_value(v111);
        v116 = "top";
        v117 = v115;
        while ( strcmp(v117, v116) )
        {
          v118 = *v112++;
          v116 = v118;
          ++v113;
        }
        v93[4] = v113;
        ++v236;
      }
      v1 = v242;
      V_LOCK(v86);
      v220 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v220);
      v214 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/topol/topol.c",
               165,
               "_parse_chain_sensor",
               19,
               811,
               100,
               v247);
    }
    else
    {
      V_LOCK(v84);
      v222 = logfmt_raw((int)v247, 0x1000u);
      V_UNLOCK(v222);
      v214 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/backend/topol/topol.c",
               165,
               "_parse_chain_sensor",
               19,
               800,
               100,
               v247);
    }
LABEL_168:
    V_LOCK(v214);
    v215 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v215);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             1065,
             100,
             v247);
    goto LABEL_92;
  }
LABEL_99:
  v130 = v234;
  v235 = dword_312D30;
  v131 = (_DWORD *)json_object_get(v130, "eeprom");
  v237 = v131;
  if ( !v131 || (v132 = *v131) != 0 )
  {
    V_LOCK(v131);
    v221 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v221);
    v210 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain_eeprom",
             19,
             761,
             100,
             v247);
    goto LABEL_165;
  }
  V_LOCK(v131);
  v133 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v133);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_eeprom",
    19,
    764,
    20,
    v247);
  v134 = (_DWORD *)json_object_get(v237, "type");
  v240 = v134;
  if ( !v134 || *v134 != 2 )
  {
    V_LOCK(v134);
    v209 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v209);
    v210 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain_eeprom",
             19,
             769,
             100,
             v247);
LABEL_165:
    V_LOCK(v210);
    v211 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v211);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain",
             12,
             1073,
             100,
             v247);
    goto LABEL_92;
  }
  V_LOCK(v134);
  json_string_value(v240);
  v135 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v135);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_eeprom",
    19,
    772,
    20,
    v247);
  if ( v235 > 0 )
  {
    v243 = v1;
    v136 = 0;
    do
    {
      v137 = "hk)";
      v138 = (const char *)json_string_value(v240);
      v139 = 0;
      v140 = "AT24C02D";
      v141 = v138;
      while ( strcmp(v141, v140) )
      {
        v142 = (const char *)*((_DWORD *)v137 + 1);
        v137 += 4;
        v140 = v142;
        ++v139;
      }
      ++v132;
      v143 = dword_312D50 + v136;
      v136 += 120;
      *(_DWORD *)(v143 + 112) = v139;
    }
    while ( v235 != v132 );
    v1 = v243;
  }
  v144 = (_DWORD *)json_object_get(v237, "i2c_addr");
  v145 = (int)v144;
  if ( !v144 || *v144 != 3 )
  {
    V_LOCK(v144);
    v212 = logfmt_raw((int)v247, 0x1000u);
    V_UNLOCK(v212);
    v210 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
             165,
             "_parse_chain_eeprom",
             19,
             781,
             100,
             v247);
    goto LABEL_165;
  }
  V_LOCK(v144);
  json_integer_value(v145);
  v146 = logfmt_raw((int)v247, 0x1000u);
  V_UNLOCK(v146);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_eeprom",
    19,
    784,
    20,
    v247);
  if ( v235 > 0 )
  {
    v147 = 0;
    v148 = 0;
    do
    {
      ++v147;
      v149 = json_integer_value(v145);
      v150 = dword_312D50 + v148;
      v148 += 120;
      *(_DWORD *)(v150 + 116) = v149;
    }
    while ( v235 != v147 );
  }
  v151 = dword_312D30;
  if ( dword_312D30 > 1 )
  {
    v152 = 120;
    v153 = 1;
    do
    {
      ++v153;
      v154 = (void *)(dword_312D50 + v152);
      v152 += 120;
      memcpy(v154, (const void *)dword_312D50, 0x78u);
    }
    while ( v151 != v153 );
  }
  if ( *((_DWORD *)v1 + 1) != -1 )
  {
    v155 = (unsigned int *)v1 + 1;
    __dmb(0xBu);
    do
    {
      v156 = __ldrex(v155);
      v157 = v156 - 1;
    }
    while ( __strex(v157, v155) );
    if ( !v157 )
      json_delete(v1);
  }
  return v27;
}
