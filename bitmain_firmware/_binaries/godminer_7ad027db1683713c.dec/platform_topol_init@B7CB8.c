int platform_topol_init()
{
  double *file; // r0
  double *v1; // r11
  _DWORD *v2; // r0
  _DWORD *v3; // r9
  _DWORD *v4; // r0
  const char *v5; // r9
  size_t v6; // r0
  char *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r9
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r9
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r8
  _DWORD *v16; // r0
  _DWORD *v17; // r8
  _DWORD *v18; // r0
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v22; // r9
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  int v26; // r9
  int v27; // r0
  size_t v28; // r9
  _DWORD *v29; // r0
  int v30; // r6
  int v31; // r0
  _DWORD *v32; // r0
  int v33; // r6
  int v34; // r0
  _DWORD *v35; // r0
  int v36; // r6
  int v37; // r0
  _DWORD *v38; // r0
  int v39; // r6
  int v40; // r0
  _DWORD *v41; // r0
  int v42; // r8
  int v43; // r0
  _DWORD *v44; // r0
  _DWORD *v45; // r8
  char *v46; // r2
  _DWORD *v47; // r0
  int v48; // r8
  int v49; // r0
  _DWORD *v50; // r0
  int v51; // r8
  int v52; // r0
  size_t v53; // r0
  int v54; // r6
  void *v55; // r0
  _DWORD *v56; // r0
  int v57; // r6
  int v58; // r0
  _DWORD *v59; // r0
  int v60; // r6
  int v61; // r0
  _DWORD *v62; // r0
  int v63; // r6
  int v64; // r0
  _DWORD *v65; // r0
  int v66; // r6
  int v67; // r0
  int v68; // r3
  _DWORD *v69; // r0
  _DWORD *v70; // r0
  _DWORD *v71; // r8
  _DWORD *v72; // r0
  int v73; // r7
  int v74; // r0
  int v75; // r11
  int v76; // r0
  _DWORD *v77; // r0
  _DWORD *v78; // r7
  _DWORD *v79; // r0
  const char *v80; // r6
  _DWORD *v81; // r0
  int v82; // r6
  int v83; // r0
  _DWORD *v84; // r0
  _DWORD *v85; // r9
  _DWORD *v86; // r0
  char **v87; // r7
  int v88; // r6
  const char *v89; // r0
  const char *v90; // r1
  const char *v91; // r9
  const char *v92; // t1
  _DWORD *v93; // r0
  _DWORD *v94; // r8
  _DWORD *v95; // r0
  char **v96; // r7
  int v97; // r6
  const char *v98; // r0
  const char *v99; // r1
  const char *v100; // r8
  const char *v101; // t1
  _DWORD *v102; // r0
  _DWORD *v103; // r0
  int v104; // r8
  _DWORD *v105; // r0
  _DWORD *v106; // r0
  int v107; // r11
  const char *v108; // r6
  const char *v109; // r0
  int v110; // r4
  const char *v111; // r1
  const char *v112; // r7
  const char *v113; // t1
  int v114; // r2
  _DWORD *v115; // r0
  int v116; // r6
  int v117; // r0
  int v118; // r4
  int v119; // r5
  int v120; // r0
  int v121; // r3
  int v122; // r6
  int v123; // r5
  int v124; // r4
  void *v125; // r0
  unsigned int *v126; // r3
  unsigned int v127; // r2
  unsigned int v128; // r2
  _DWORD *v129; // r0
  _DWORD *v130; // r0
  _DWORD *v131; // r9
  _DWORD *v132; // r0
  int v133; // r7
  int v134; // r0
  int v135; // r0
  _DWORD *v136; // r11
  _DWORD *v137; // r0
  _DWORD *v138; // r7
  _DWORD *v139; // r0
  const char *v140; // r6
  int v141; // r3
  _DWORD *v142; // r0
  int v143; // r6
  int v144; // r0
  _DWORD *v145; // r0
  _DWORD *v146; // r8
  _DWORD *v147; // r0
  char **v148; // r7
  int v149; // r6
  const char *v150; // r0
  const char *v151; // r1
  const char *v152; // r8
  const char *v153; // t1
  _DWORD *v154; // r0
  _DWORD *v155; // r8
  char **v156; // r7
  _DWORD *v157; // r0
  int v158; // r6
  const char *v159; // r0
  const char *v160; // r1
  const char *v161; // r8
  const char *v162; // t1
  _DWORD *v163; // [sp+14h] [bp-1128h]
  int v164; // [sp+14h] [bp-1128h]
  unsigned int v165; // [sp+18h] [bp-1124h]
  _DWORD *v166; // [sp+18h] [bp-1124h]
  unsigned int v167; // [sp+18h] [bp-1124h]
  _DWORD *v168; // [sp+1Ch] [bp-1120h]
  _DWORD *v169; // [sp+1Ch] [bp-1120h]
  double *v170; // [sp+1Ch] [bp-1120h]
  _DWORD *v171; // [sp+20h] [bp-111Ch]
  double *v172; // [sp+20h] [bp-111Ch]
  _DWORD *v173; // [sp+20h] [bp-111Ch]
  double *v174; // [sp+24h] [bp-1118h]
  int v175; // [sp+34h] [bp-1108h]
  char v176[252]; // [sp+3Ch] [bp-1100h] BYREF
  char v177[4100]; // [sp+138h] [bp-1004h] BYREF

  file = json_load_file("/etc/topol.conf", 0, v176);
  v1 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "load topol config file %s failed", "/etc/topol.conf");
    v22 = -1;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1488,
      20,
      v177);
    return v22;
  }
  v2 = (_DWORD *)json_object_get(file, "machine");
  v3 = v2;
  if ( !v2 || *v2 != 2 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get machine failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_machine",
      14,
      139,
      100,
      v177);
LABEL_26:
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "parse machine failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1495,
      20,
      v177);
    goto LABEL_16;
  }
  V_LOCK();
  v4 = json_string_value(v3);
  logfmt_raw(v177, 0x1000u, 0, "load machine %s conf", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_machine",
    14,
    142,
    20,
    v177);
  v5 = (const char *)json_string_value(v3);
  v6 = strlen(v5);
  v7 = (char *)calloc(v6 + 1, 1u);
  topol_machine = (int)v7;
  if ( !v7 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get machine failed, Cannot allocate space");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_machine",
      14,
      148,
      100,
      v177);
    goto LABEL_26;
  }
  strcpy(v7, v5);
  V_LOCK();
  logfmt_raw(v177, 0x1000u, 0, "machine : %s ", topol_machine);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_machine",
    14,
    153,
    20,
    v177);
  v8 = (_DWORD *)json_object_get(v1, "hw_version");
  v9 = v8;
  if ( !v8 || *v8 != 2 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get hw_version failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_machine",
      14,
      158,
      100,
      v177);
    goto LABEL_26;
  }
  V_LOCK();
  v10 = json_string_value(v9);
  logfmt_raw(v177, 0x1000u, 0, "hw_version: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_machine",
    14,
    161,
    20,
    v177);
  v11 = (_DWORD *)json_object_get(v1, "sw_version");
  v12 = v11;
  if ( !v11 || *v11 != 2 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get sw_version failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_machine",
      14,
      166,
      100,
      v177);
    goto LABEL_26;
  }
  V_LOCK();
  v13 = json_string_value(v12);
  logfmt_raw(v177, 0x1000u, 0, "sw_version: %s", v13);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_machine",
    14,
    169,
    20,
    v177);
  v14 = (_DWORD *)json_object_get(v1, "processor");
  v15 = v14;
  if ( !v14 || *v14 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get processor failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_processor",
      16,
      181,
      100,
      v177);
LABEL_94:
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "parse processor failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1502,
      20,
      v177);
    goto LABEL_16;
  }
  V_LOCK();
  logfmt_raw(v177, 0x1000u, 0, "processor:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_processor",
    16,
    184,
    20,
    v177);
  v16 = (_DWORD *)json_object_get(v15, "type");
  v17 = v16;
  if ( !v16 || *v16 != 2 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get type failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_processor",
      16,
      189,
      100,
      v177);
    goto LABEL_94;
  }
  V_LOCK();
  v18 = json_string_value(v17);
  logfmt_raw(v177, 0x1000u, 0, "type: %s", v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_processor",
    16,
    192,
    20,
    v177);
  if ( sub_B51D0(v1) )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "parse power failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1509,
      20,
      v177);
    goto LABEL_16;
  }
  if ( sub_B58D4(v1) )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "parse fan failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1516,
      20,
      v177);
    goto LABEL_16;
  }
  v24 = (_DWORD *)json_object_get(v1, "chain");
  v163 = v24;
  if ( !v24 || *v24 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get chain failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      908,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  logfmt_raw(v177, 0x1000u, 0, "chain:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    911,
    20,
    v177);
  v25 = (_DWORD *)json_object_get(v163, "chain_num");
  v26 = (int)v25;
  if ( !v25 || *v25 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get chain_num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      916,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v27 = json_integer_value(v26);
  logfmt_raw(v177, 0x1000u, 0, "chain_num : %d", v27);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    919,
    20,
    v177);
  v28 = json_integer_value(v26);
  dword_2E9F50 = v28;
  V_LOCK();
  logfmt_raw(v177, 0x1000u, 0, "chain_num %d", v28);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_alloc_chain",
    12,
    80,
    20,
    v177);
  dword_2E9F70 = (int)calloc(v28, 0x78u);
  if ( !dword_2E9F70 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "malloc %d chain_t failed", v28);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_alloc_chain",
      12,
      85,
      100,
      v177);
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "Sweep error string = %s.", "M:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_alloc_chain",
      12,
      86,
      100,
      v177);
    goto LABEL_96;
  }
  v29 = (_DWORD *)json_object_get(v163, "chain_row");
  v30 = (int)v29;
  if ( !v29 || *v29 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get chain_row failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      927,
      100,
      v177);
LABEL_96:
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "parse chain failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "platform_topol_init",
      19,
      1524,
      20,
      v177);
LABEL_16:
    if ( *((_DWORD *)v1 + 1) != -1 )
    {
      v19 = (unsigned int *)v1 + 1;
      __dmb(0xBu);
      do
      {
        v20 = __ldrex(v19);
        v21 = v20 - 1;
      }
      while ( __strex(v21, v19) );
      if ( !v21 )
        json_delete(v1);
    }
    return 34;
  }
  V_LOCK();
  v31 = json_integer_value(v30);
  logfmt_raw(v177, 0x1000u, 0, "chain_row: %d", v31);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    930,
    20,
    v177);
  dword_2E9F54 = json_integer_value(v30);
  v32 = (_DWORD *)json_object_get(v163, "chain_column");
  v33 = (int)v32;
  if ( !v32 || *v32 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get chain_column failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      936,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v34 = json_integer_value(v33);
  logfmt_raw(v177, 0x1000u, 0, "chain_column: %d", v34);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    939,
    20,
    v177);
  dword_2E9F58 = json_integer_value(v33);
  v35 = (_DWORD *)json_object_get(v163, "chain_domain_num");
  v36 = (int)v35;
  if ( !v35 || *v35 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get chain_domain_num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      945,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v37 = json_integer_value(v36);
  logfmt_raw(v177, 0x1000u, 0, "chain_domain_num : %d", v37);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    948,
    20,
    v177);
  dword_2E9F5C = json_integer_value(v36);
  v38 = (_DWORD *)json_object_get(v163, "chain_asic_num");
  v39 = (int)v38;
  if ( !v38 || *v38 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get chain_asic_num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      954,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v40 = json_integer_value(v39);
  logfmt_raw(v177, 0x1000u, 0, "chain_asic_num : %d", v40);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    957,
    20,
    v177);
  dword_2E9F60 = json_integer_value(v39);
  v41 = (_DWORD *)json_object_get(v163, "domain_asic_num");
  v42 = (int)v41;
  if ( !v41 || *v41 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get domain_asic_num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      963,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v43 = json_integer_value(v42);
  logfmt_raw(v177, 0x1000u, 0, "domain_asic_num : %d", v43);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    966,
    20,
    v177);
  dword_2E9F64 = json_integer_value(v42);
  v44 = (_DWORD *)json_object_get(v163, "pic_mcu_en");
  v45 = v44;
  if ( !v44 || (unsigned int)(*v44 - 5) > 1 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get pic_mcu_en failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      972,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v46 = "true";
  if ( *v45 != 5 )
    v46 = "false";
  logfmt_raw(v177, 0x1000u, 0, "pic_mcu_en: %s", v46);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    975,
    20,
    v177);
  byte_2E9F68 = *v45 == 5;
  v47 = (_DWORD *)json_object_get(v163, "sensor_mode");
  v48 = (int)v47;
  if ( !v47 || *v47 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get sensor_mode failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      981,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v49 = json_integer_value(v48);
  logfmt_raw(v177, 0x1000u, 0, "sensor mode : %d", v49);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    984,
    20,
    v177);
  *(_DWORD *)(dword_2E9F70 + 88) = json_integer_value(v48);
  v50 = (_DWORD *)json_object_get(v163, "sensor_num");
  v51 = (int)v50;
  if ( !v50 || *v50 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get sensor num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      990,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v52 = json_integer_value(v51);
  logfmt_raw(v177, 0x1000u, 0, "sensor num : %d", v52);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    993,
    20,
    v177);
  v53 = json_integer_value(v51);
  v54 = dword_2E9F70;
  *(_DWORD *)(dword_2E9F70 + 92) = v53;
  v55 = calloc(v53, 0x18u);
  *(_DWORD *)(v54 + 84) = v55;
  if ( !v55 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "calloc sensor failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_alloc_sensor",
      13,
      97,
      100,
      v177);
    goto LABEL_96;
  }
  v56 = (_DWORD *)json_object_get(v163, "max_chip_temp");
  v57 = (int)v56;
  if ( !v56 || *v56 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get max_chip_temp failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      1001,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v58 = json_integer_value(v57);
  logfmt_raw(v177, 0x1000u, 0, "max_chip_temp : %d", v58);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    1004,
    20,
    v177);
  *(_DWORD *)(dword_2E9F70 + 96) = json_integer_value(v57);
  v59 = (_DWORD *)json_object_get(v163, "max_pcb_temp");
  v60 = (int)v59;
  if ( !v59 || *v59 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get max_pcb_temp failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      1010,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v61 = json_integer_value(v60);
  logfmt_raw(v177, 0x1000u, 0, "max_pcb_temp : %d", v61);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    1013,
    20,
    v177);
  *(_DWORD *)(dword_2E9F70 + 100) = json_integer_value(v60);
  v62 = (_DWORD *)json_object_get(v163, "min_pcb_temp");
  v63 = (int)v62;
  if ( !v62 || *v62 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get min_pcb_temp failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      1019,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v64 = json_integer_value(v63);
  logfmt_raw(v177, 0x1000u, 0, "min_pcb_temp : %d", v64);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    1022,
    20,
    v177);
  *(_DWORD *)(dword_2E9F70 + 104) = json_integer_value(v63);
  v65 = (_DWORD *)json_object_get(v163, "max_uneffective_count");
  v66 = (int)v65;
  if ( !v65 || *v65 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get max_uneffective_count failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      1028,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v67 = json_integer_value(v66);
  logfmt_raw(v177, 0x1000u, 0, "max_uneffective_count : %d", v67);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain",
    12,
    1031,
    20,
    v177);
  *(_DWORD *)(dword_2E9F70 + 108) = json_integer_value(v66);
  v22 = sub_B67E4(v163);
  if ( v22 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "parse asic failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      1037,
      100,
      v177);
    goto LABEL_96;
  }
  if ( byte_2E9F68 && sub_B6FEC(v163) )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "parse chain pic failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      1045,
      100,
      v177);
    goto LABEL_96;
  }
  v68 = *(_DWORD *)(dword_2E9F70 + 88);
  if ( v68 == 3 )
  {
    v129 = (_DWORD *)json_object_get(v163, "ctrlboard_sensor");
    v173 = v129;
    if ( !v129 || *v129 != 1 )
    {
      V_LOCK();
      logfmt_raw(v177, 0x1000u, 0, "get ctrlboard_sensor sensor failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        640,
        100,
        v177);
LABEL_185:
      V_LOCK();
      logfmt_raw(v177, 0x1000u, 0, "parse chain ctrlboard failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain",
        12,
        1054,
        100,
        v177);
      goto LABEL_96;
    }
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "ctrlboard_sensor:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_ctrlboard_sensor",
      29,
      643,
      20,
      v177);
    v167 = 0;
    v170 = v1;
    while ( v167 < (unsigned int)json_array_size(v173) )
    {
      v130 = json_array_get(v173, v167);
      v131 = v130;
      if ( !v130 || *v130 )
      {
        v1 = v170;
        V_LOCK();
        logfmt_raw(v177, 0x1000u, 0, "get array %d failed", v167);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_ctrlboard_sensor",
          29,
          650,
          100,
          v177);
        goto LABEL_185;
      }
      v132 = (_DWORD *)json_object_get(v130, "index");
      v133 = (int)v132;
      if ( !v132 || *v132 != 3 )
      {
        v1 = v170;
        V_LOCK();
        logfmt_raw(v177, 0x1000u, 0, "get array %d index failed", v167);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_ctrlboard_sensor",
          29,
          657,
          100,
          v177);
        goto LABEL_185;
      }
      V_LOCK();
      v134 = json_integer_value(v133);
      logfmt_raw(v177, 0x1000u, 0, "index: %d", v134);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        660,
        20,
        v177);
      v135 = json_integer_value(v133);
      v136 = (_DWORD *)(*(_DWORD *)(dword_2E9F70 + 84) + 24 * v135);
      *v136 = v135;
      v136[2] = 2;
      v137 = (_DWORD *)json_object_get(v131, "type");
      v138 = v137;
      if ( !v137 || *v137 != 2 )
      {
        v1 = v170;
        V_LOCK();
        logfmt_raw(v177, 0x1000u, 0, "get array %d type failed", v167);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_ctrlboard_sensor",
          29,
          669,
          100,
          v177);
        goto LABEL_185;
      }
      V_LOCK();
      v139 = json_string_value(v138);
      logfmt_raw(v177, 0x1000u, 0, "type: %s", v139);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        672,
        20,
        v177);
      v140 = (const char *)json_string_value(v138);
      v141 = strcmp(v140, "TMP451");
      if ( v141 )
      {
        if ( !strcmp(v140, "LM75A") )
        {
          v141 = 1;
        }
        else if ( !strcmp(v140, "unknow") )
        {
          v141 = 2;
        }
        else
        {
          v141 = 3;
        }
      }
      v136[1] = v141;
      v142 = (_DWORD *)json_object_get(v131, "iic");
      v143 = (int)v142;
      if ( !v142 || *v142 != 3 )
      {
        v1 = v170;
        V_LOCK();
        logfmt_raw(v177, 0x1000u, 0, "get array %d bind_asic failed", v167);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_ctrlboard_sensor",
          29,
          678,
          100,
          v177);
        goto LABEL_185;
      }
      V_LOCK();
      v144 = json_integer_value(v143);
      logfmt_raw(v177, 0x1000u, 0, "iic: %d", v144);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        681,
        20,
        v177);
      v136[5] = json_integer_value(v143);
      v145 = (_DWORD *)json_object_get(v131, "x");
      v146 = v145;
      if ( !v145 || *v145 != 2 )
      {
        v1 = v170;
        V_LOCK();
        logfmt_raw(v177, 0x1000u, 0, "get array %d x failed", v167);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_ctrlboard_sensor",
          29,
          687,
          100,
          v177);
        goto LABEL_185;
      }
      V_LOCK();
      v147 = json_string_value(v146);
      v148 = off_27724C;
      v149 = 0;
      logfmt_raw(v177, 0x1000u, 0, "x: %s", v147);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        690,
        20,
        v177);
      v150 = (const char *)json_string_value(v146);
      v151 = "air_in";
      v152 = v150;
      while ( strcmp(v152, v151) )
      {
        v153 = *v148++;
        v151 = v153;
        ++v149;
      }
      v136[3] = v149;
      v154 = (_DWORD *)json_object_get(v131, "y");
      v155 = v154;
      if ( !v154 || *v154 != 2 )
      {
        v1 = v170;
        V_LOCK();
        logfmt_raw(v177, 0x1000u, 0, "get array %d y failed", v167);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_ctrlboard_sensor",
          29,
          696,
          100,
          v177);
        goto LABEL_185;
      }
      V_LOCK();
      v156 = off_27726C;
      v157 = json_string_value(v155);
      v158 = 0;
      logfmt_raw(v177, 0x1000u, 0, "y: %s", v157);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_ctrlboard_sensor",
        29,
        699,
        20,
        v177);
      v159 = (const char *)json_string_value(v155);
      v160 = "top";
      v161 = v159;
      while ( strcmp(v161, v160) )
      {
        v162 = *v156++;
        v160 = v162;
        ++v158;
      }
      v136[4] = v158;
      ++v167;
    }
    v1 = v170;
    v22 = 0;
    v68 = *(_DWORD *)(dword_2E9F70 + 88);
  }
  if ( (v68 & 0xFFFFFFFD) == 0 )
  {
    v69 = (_DWORD *)json_object_get(v163, "asic_sensor");
    v171 = v69;
    if ( v69 && *v69 == 1 )
    {
      V_LOCK();
      logfmt_raw(v177, 0x1000u, 0, "asic_sensor:");
      v165 = 0;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_sensor",
        19,
        802,
        20,
        v177);
      v174 = v1;
      v175 = v22;
      while ( 1 )
      {
        if ( v165 >= (unsigned int)json_array_size(v171) )
        {
          v1 = v174;
          v22 = v175;
          goto LABEL_103;
        }
        v70 = json_array_get(v171, v165);
        v71 = v70;
        if ( !v70 || *v70 )
          break;
        v72 = (_DWORD *)json_object_get(v70, "index");
        v73 = (int)v72;
        if ( !v72 || *v72 != 3 )
        {
          v1 = v174;
          V_LOCK();
          logfmt_raw(v177, 0x1000u, 0, "get array %d index failed", v165);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
            "_parse_chain_sensor",
            19,
            817,
            100,
            v177);
          goto LABEL_169;
        }
        V_LOCK();
        v74 = json_integer_value(v73);
        v75 = 1;
        logfmt_raw(v177, 0x1000u, 0, "index: %d", v74);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          820,
          20,
          v177);
        v76 = json_integer_value(v73);
        v168 = (_DWORD *)(*(_DWORD *)(dword_2E9F70 + 84) + 24 * v76);
        *v168 = v76;
        v168[2] = 1;
        v77 = (_DWORD *)json_object_get(v71, "type");
        v78 = v77;
        if ( !v77 || *v77 != 2 )
        {
          v1 = v174;
          V_LOCK();
          logfmt_raw(v177, 0x1000u, 0, "get array %d type failed", v165);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
            "_parse_chain_sensor",
            19,
            829,
            100,
            v177);
          goto LABEL_169;
        }
        V_LOCK();
        v79 = json_string_value(v78);
        logfmt_raw(v177, 0x1000u, 0, "type: %s", v79);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          832,
          20,
          v177);
        v80 = (const char *)json_string_value(v78);
        if ( !strcmp(v80, "TMP451") )
        {
          v75 = 0;
        }
        else if ( strcmp(v80, "LM75A") )
        {
          if ( !strcmp(v80, "unknow") )
            v75 = 2;
          else
            v75 = 3;
        }
        v168[1] = v75;
        v81 = (_DWORD *)json_object_get(v71, "bind_asic");
        v82 = (int)v81;
        if ( !v81 || *v81 != 3 )
        {
          v1 = v174;
          V_LOCK();
          logfmt_raw(v177, 0x1000u, 0, "get array %d bind_asic failed", v165);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
            "_parse_chain_sensor",
            19,
            838,
            100,
            v177);
          goto LABEL_169;
        }
        V_LOCK();
        v83 = json_integer_value(v82);
        logfmt_raw(v177, 0x1000u, 0, "bind_asic: %d", v83);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          841,
          20,
          v177);
        v168[5] = json_integer_value(v82);
        v84 = (_DWORD *)json_object_get(v71, "x");
        v85 = v84;
        if ( !v84 || *v84 != 2 )
        {
          v1 = v174;
          V_LOCK();
          logfmt_raw(v177, 0x1000u, 0, "get array %d x failed", v165);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
            "_parse_chain_sensor",
            19,
            847,
            100,
            v177);
          goto LABEL_169;
        }
        V_LOCK();
        v86 = json_string_value(v85);
        v87 = off_27724C;
        v88 = 0;
        logfmt_raw(v177, 0x1000u, 0, "x: %s", v86);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          850,
          20,
          v177);
        v89 = (const char *)json_string_value(v85);
        v90 = "air_in";
        v91 = v89;
        while ( strcmp(v91, v90) )
        {
          v92 = *v87++;
          v90 = v92;
          ++v88;
        }
        v168[3] = v88;
        v93 = (_DWORD *)json_object_get(v71, "y");
        v94 = v93;
        if ( !v93 || *v93 != 2 )
        {
          v1 = v174;
          V_LOCK();
          logfmt_raw(v177, 0x1000u, 0, "get array %d y failed", v165);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
            165,
            "_parse_chain_sensor",
            19,
            856,
            100,
            v177);
          goto LABEL_169;
        }
        V_LOCK();
        v95 = json_string_value(v94);
        v96 = off_27726C;
        v97 = 0;
        logfmt_raw(v177, 0x1000u, 0, "y: %s", v95);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
          165,
          "_parse_chain_sensor",
          19,
          859,
          20,
          v177);
        v98 = (const char *)json_string_value(v94);
        v99 = "top";
        v100 = v98;
        while ( strcmp(v100, v99) )
        {
          v101 = *v96++;
          v99 = v101;
          ++v97;
        }
        v168[4] = v97;
        ++v165;
      }
      v1 = v174;
      V_LOCK();
      logfmt_raw(v177, 0x1000u, 0, "get array %d failed", v165);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_sensor",
        19,
        810,
        100,
        v177);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v177, 0x1000u, 0, "get sensor failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
        165,
        "_parse_chain_sensor",
        19,
        799,
        100,
        v177);
    }
LABEL_169:
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "parse chain sensor failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      1064,
      100,
      v177);
    goto LABEL_96;
  }
LABEL_103:
  v102 = v163;
  v164 = dword_2E9F50;
  v103 = (_DWORD *)json_object_get(v102, "eeprom");
  v166 = v103;
  if ( !v103 || (v104 = *v103) != 0 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get eeprom failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_eeprom",
      19,
      760,
      100,
      v177);
    goto LABEL_179;
  }
  V_LOCK();
  logfmt_raw(v177, 0x1000u, 0, "eeprom:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_eeprom",
    19,
    763,
    20,
    v177);
  v105 = (_DWORD *)json_object_get(v166, "type");
  v169 = v105;
  if ( !v105 || *v105 != 2 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get type failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_eeprom",
      19,
      768,
      100,
      v177);
    goto LABEL_179;
  }
  V_LOCK();
  v106 = json_string_value(v169);
  logfmt_raw(v177, 0x1000u, 0, "type: %s", v106);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_eeprom",
    19,
    771,
    20,
    v177);
  if ( v164 > 0 )
  {
    v172 = v1;
    v107 = 0;
    do
    {
      v108 = "\\}'";
      v109 = (const char *)json_string_value(v169);
      v110 = 0;
      v111 = "AT24C02D";
      v112 = v109;
      while ( strcmp(v112, v111) )
      {
        v113 = (const char *)*((_DWORD *)v108 + 1);
        v108 += 4;
        v111 = v113;
        ++v110;
      }
      ++v107;
      v114 = dword_2E9F70 + v104;
      v104 += 120;
      *(_DWORD *)(v114 + 112) = v110;
    }
    while ( v164 != v107 );
    v1 = v172;
  }
  v115 = (_DWORD *)json_object_get(v166, "i2c_addr");
  v116 = (int)v115;
  if ( !v115 || *v115 != 3 )
  {
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "get i2c_addr failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain_eeprom",
      19,
      780,
      100,
      v177);
LABEL_179:
    V_LOCK();
    logfmt_raw(v177, 0x1000u, 0, "parse chain eeprom failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/topol/topol.c",
      165,
      "_parse_chain",
      12,
      1072,
      100,
      v177);
    goto LABEL_96;
  }
  V_LOCK();
  v117 = json_integer_value(v116);
  logfmt_raw(v177, 0x1000u, 0, "i2c_addr: %d", v117);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/topol/topol.c",
    165,
    "_parse_chain_eeprom",
    19,
    783,
    20,
    v177);
  if ( v164 > 0 )
  {
    v118 = 0;
    v119 = 0;
    do
    {
      ++v118;
      v120 = json_integer_value(v116);
      v121 = dword_2E9F70 + v119;
      v119 += 120;
      *(_DWORD *)(v121 + 116) = v120;
    }
    while ( v164 != v118 );
  }
  v122 = dword_2E9F50;
  if ( dword_2E9F50 > 1 )
  {
    v123 = 120;
    v124 = 1;
    do
    {
      ++v124;
      v125 = (void *)(dword_2E9F70 + v123);
      v123 += 120;
      memcpy(v125, (const void *)dword_2E9F70, 0x78u);
    }
    while ( v122 != v124 );
  }
  if ( *((_DWORD *)v1 + 1) != -1 )
  {
    v126 = (unsigned int *)v1 + 1;
    __dmb(0xBu);
    do
    {
      v127 = __ldrex(v126);
      v128 = v127 - 1;
    }
    while ( __strex(v128, v126) );
    if ( !v128 )
      json_delete(v1);
  }
  return v22;
}
