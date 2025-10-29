int task_check_miner_status()
{
  __int64 v0; // r6
  char *v1; // r10
  int v2; // r9
  int v3; // r11
  char *all_created_runtime; // r0
  char *v5; // r5
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
  int v21; // r6
  char *v22; // r0
  char *v23; // r5
  int v24; // r4
  int v25; // r9
  int v26; // t1
  int v27; // r0
  __int64 v28; // r2
  int v29; // r4
  __int64 v30; // d16
  __int64 v31; // r0
  int v32; // r3
  _BOOL4 v33; // r9
  int v34; // r2
  int v35; // r3
  int v36; // r1
  char v37; // r3
  int v38; // r0
  int v39; // r2
  int v40; // r0
  __int64 v42; // r0
  bool v43; // zf
  __int64 v44; // r2
  __int64 v45; // r0
  __int64 v46; // r0
  int v47; // r2
  int v48; // r0
  __int64 v49; // r10
  int v50; // r0
  int v51; // r1
  int v52; // r2
  int v53; // r3
  __int64 *v54; // r11
  int v55; // r1
  int v56; // r2
  int v57; // r3
  int v58; // r0
  int v59; // r0
  int v60; // r1
  int v61; // r2
  int v62; // r3
  __int64 *v63; // r11
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v67; // r0
  int v68; // r0
  int v69; // r1
  int v70; // r2
  int v71; // r3
  __int64 *v72; // r11
  int v73; // r1
  int v74; // r2
  int v75; // r3
  int v76; // r0
  int v77; // r1
  int v78; // r2
  int v79; // r3
  __int64 *v80; // r12
  int v81; // r1
  int v82; // r2
  int v83; // r3
  int v84; // r0
  int v85; // r0
  unsigned __int8 v86; // r4
  int v87; // r5
  char *v88; // r0
  int v89; // r4
  char *v90; // r7
  int v91; // t1
  int v92; // r0
  int v93; // r0
  unsigned int v94; // r0
  int v95; // r0
  int v96; // r3
  int v97; // r3
  int v98; // r0
  int v99; // kr04_4
  int v100; // r0
  int v101; // r0
  int v102; // r0
  int v103; // r0
  int v104; // r1
  unsigned int v105; // r4
  int v106; // r0
  int v107; // [sp+10h] [bp-123Ch] BYREF
  int v108; // [sp+14h] [bp-1238h]
  int v109; // [sp+18h] [bp-1234h]
  int v110; // [sp+1Ch] [bp-1230h]
  __int64 v111; // [sp+20h] [bp-122Ch] BYREF
  int v112; // [sp+28h] [bp-1224h]
  __int64 *v113; // [sp+2Ch] [bp-1220h]
  int v114; // [sp+30h] [bp-121Ch]
  int v115; // [sp+34h] [bp-1218h]
  int v116; // [sp+38h] [bp-1214h]
  int v117; // [sp+3Ch] [bp-1210h]
  char *v118; // [sp+40h] [bp-120Ch]
  const char *v119; // [sp+44h] [bp-1208h]
  int v120; // [sp+4Ch] [bp-1200h]
  __int64 v121; // [sp+50h] [bp-11FCh]
  __int64 v122; // [sp+58h] [bp-11F4h]
  __int64 s; // [sp+60h] [bp-11ECh]
  double v124; // [sp+68h] [bp-11E4h]
  __int64 *v125; // [sp+70h] [bp-11DCh]
  const char *v126; // [sp+74h] [bp-11D8h]
  int v127; // [sp+78h] [bp-11D4h]
  int v128; // [sp+7Ch] [bp-11D0h]
  int v129; // [sp+84h] [bp-11C8h] BYREF
  char v130[16]; // [sp+88h] [bp-11C4h] BYREF
  int v131; // [sp+98h] [bp-11B4h]
  int v132; // [sp+9Ch] [bp-11B0h]
  int v133; // [sp+A0h] [bp-11ACh]
  int v134; // [sp+A4h] [bp-11A8h]
  __int64 v135; // [sp+A8h] [bp-11A4h] BYREF
  int v136; // [sp+B0h] [bp-119Ch]
  int v137; // [sp+B4h] [bp-1198h]
  int v138; // [sp+B8h] [bp-1194h]
  int v139; // [sp+BCh] [bp-1190h]
  int v140; // [sp+C0h] [bp-118Ch]
  int v141; // [sp+C4h] [bp-1188h]
  char v142[16]; // [sp+C8h] [bp-1184h] BYREF
  int v143; // [sp+D8h] [bp-1174h]
  int v144; // [sp+DCh] [bp-1170h]
  int v145; // [sp+E0h] [bp-116Ch]
  int v146; // [sp+E4h] [bp-1168h]
  __int64 v147; // [sp+E8h] [bp-1164h] BYREF
  int v148; // [sp+F0h] [bp-115Ch]
  int v149; // [sp+F4h] [bp-1158h]
  int v150; // [sp+F8h] [bp-1154h]
  int v151; // [sp+FCh] [bp-1150h]
  int v152; // [sp+100h] [bp-114Ch]
  int v153; // [sp+104h] [bp-1148h]
  char v154[16]; // [sp+108h] [bp-1144h] BYREF
  int v155; // [sp+118h] [bp-1134h]
  int v156; // [sp+11Ch] [bp-1130h]
  int v157; // [sp+120h] [bp-112Ch]
  int v158; // [sp+124h] [bp-1128h]
  __int64 v159; // [sp+128h] [bp-1124h] BYREF
  int v160; // [sp+130h] [bp-111Ch]
  int v161; // [sp+134h] [bp-1118h]
  int v162; // [sp+138h] [bp-1114h]
  int v163; // [sp+13Ch] [bp-1110h]
  int v164; // [sp+140h] [bp-110Ch]
  int v165; // [sp+144h] [bp-1108h]
  char v166[16]; // [sp+148h] [bp-1104h] BYREF
  int v167; // [sp+158h] [bp-10F4h]
  int v168; // [sp+15Ch] [bp-10F0h]
  int v169; // [sp+160h] [bp-10ECh]
  int v170; // [sp+164h] [bp-10E8h]
  __int64 v171; // [sp+168h] [bp-10E4h] BYREF
  int v172; // [sp+170h] [bp-10DCh]
  int v173; // [sp+174h] [bp-10D8h]
  int v174; // [sp+178h] [bp-10D4h]
  int v175; // [sp+17Ch] [bp-10D0h]
  int v176; // [sp+180h] [bp-10CCh]
  int v177; // [sp+184h] [bp-10C8h]
  char v178[16]; // [sp+188h] [bp-10C4h] BYREF
  int v179; // [sp+198h] [bp-10B4h]
  int v180; // [sp+19Ch] [bp-10B0h]
  int v181; // [sp+1A0h] [bp-10ACh]
  int v182; // [sp+1A4h] [bp-10A8h]
  __int64 v183; // [sp+1A8h] [bp-10A4h] BYREF
  int v184; // [sp+1B0h] [bp-109Ch]
  __int64 *v185; // [sp+1B4h] [bp-1098h]
  int v186; // [sp+1B8h] [bp-1094h]
  int v187; // [sp+1BCh] [bp-1090h]
  int v188; // [sp+1C0h] [bp-108Ch]
  int v189; // [sp+1C4h] [bp-1088h]
  char v190[16]; // [sp+1C8h] [bp-1084h] BYREF
  int v191; // [sp+1D8h] [bp-1074h]
  int v192; // [sp+1DCh] [bp-1070h]
  int v193; // [sp+1E0h] [bp-106Ch]
  int v194; // [sp+1E4h] [bp-1068h]
  __int64 v195; // [sp+1E8h] [bp-1064h] BYREF
  int v196; // [sp+1F8h] [bp-1054h]
  int v197; // [sp+1FCh] [bp-1050h]
  int v198; // [sp+200h] [bp-104Ch]
  int v199; // [sp+204h] [bp-1048h]
  int v200[4]; // [sp+208h] [bp-1044h] BYREF
  int v201; // [sp+218h] [bp-1034h]
  int v202; // [sp+21Ch] [bp-1030h]
  int v203; // [sp+220h] [bp-102Ch]
  int v204; // [sp+224h] [bp-1028h]
  double v205[2]; // [sp+228h] [bp-1024h] BYREF
  int v206; // [sp+238h] [bp-1014h]
  int v207; // [sp+23Ch] [bp-1010h]
  int v208; // [sp+240h] [bp-100Ch]
  int v209; // [sp+244h] [bp-1008h]
  _DWORD v210[1025]; // [sp+248h] [bp-1004h] BYREF

  v1 = &byte_2F3E74;
  if ( !byte_2F3E74 )
  {
    byte_2F3E78 = 0;
    byte_2F3E79 = 0;
    byte_2F3E7A = 0;
    byte_2F3E7B = 0;
    byte_2F3E7C = 0;
    byte_2F3E7D = 0;
    byte_2F3E7E = 0;
    byte_2F3E7F = 0;
    byte_2F3E80 = 0;
    byte_2F3E74 = 1;
  }
  pthread_mutex_lock(&stru_2F3E84);
  v2 = 0;
  v3 = (unsigned __int8)byte_2F3E80 ^ 1;
  v200[0] = 0;
  all_created_runtime = (char *)get_all_created_runtime(v200);
  memset(v205, 0, sizeof(v205));
  if ( v200[0] <= 0 )
  {
    v126 = 0;
    LODWORD(v124) = 0;
    v121 = 0;
    goto LABEL_26;
  }
  v5 = all_created_runtime - 4;
  LODWORD(v122) = "chain";
  v126 = "uneffective temp exceed limit";
  v120 = v3;
  v127 = (int)&byte_2F3E74;
  LODWORD(s) = "error";
  do
  {
    v6 = *((_DWORD *)v5 + 1);
    v5 += 4;
    flag_from_monitor = get_flag_from_monitor(v6);
    v8 = *(_QWORD *)(flag_from_monitor + 16);
    v9 = flag_from_monitor;
    if ( (v8 & 1) == 0 )
    {
      if ( (v8 & 2) == 0 )
      {
        if ( (v8 & 4) == 0 )
          goto LABEL_83;
        v46 = *(_QWORD *)(flag_from_monitor + 24);
        v43 = v120 == 0;
        *(_QWORD *)(v9 + 24) = v46 | 4;
        if ( !v43 )
        {
          LODWORD(v0) = "check_temp";
          HIDWORD(v0) = &g_zc;
          v124 = v205[0];
          LODWORD(v121) = "%s";
          v125 = &v111;
          goto LABEL_96;
        }
LABEL_15:
        if ( (v8 & 8) != 0 )
          *(_QWORD *)(v9 + 24) |= 8uLL;
LABEL_17:
        if ( (v8 & 0x10) != 0 )
        {
          v43 = v120 == 0;
          v12 = *(_QWORD *)(v9 + 24) | 0x10LL;
          *(_QWORD *)(v9 + 24) = v12;
          if ( !v43 )
          {
            HIDWORD(v0) = &g_zc;
            LODWORD(v121) = "%s";
            v125 = &v111;
            goto LABEL_124;
          }
        }
        goto LABEL_20;
      }
      v42 = *(_QWORD *)(flag_from_monitor + 24);
      v43 = v120 == 0;
      if ( !v120 )
        LODWORD(v0) = v8 & 4;
      HIDWORD(v44) = HIDWORD(v42);
      if ( !v120 )
        HIDWORD(v0) = 0;
      LODWORD(v44) = v42 | 2;
      *(_QWORD *)(v9 + 24) = v44;
      if ( !v43 )
      {
        LODWORD(v0) = "check_temp";
        HIDWORD(v0) = &g_zc;
        v124 = v205[0];
        LODWORD(v121) = "%s";
        v125 = &v111;
        goto LABEL_94;
      }
LABEL_81:
      if ( !v0 )
        goto LABEL_83;
      *(_QWORD *)(v9 + 24) |= 4uLL;
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(flag_from_monitor + 24);
    v43 = v120 == 0;
    v11 = v10;
    LODWORD(v10) = v10 | 1;
    *(_QWORD *)(v9 + 24) = v10;
    if ( v43 )
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
LABEL_86:
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
      goto LABEL_81;
    }
    V_LOCK(v11);
    v47 = *(_DWORD *)(*(_DWORD *)v5 + 248);
    v125 = &v111;
    LODWORD(v0) = "check_temp";
    V_INT((int)v190, (char *)v122, v47);
    LODWORD(v121) = "%s";
    V_STR(&v183, (char *)s, "temp lost");
    v118 = "%s";
    v119 = "check_temp";
    HIDWORD(v0) = &g_zc;
    v111 = v183;
    v112 = v184;
    v113 = v185;
    v114 = v186;
    v115 = v187;
    v116 = v188;
    v117 = v189;
    v107 = v191;
    v108 = v192;
    v109 = v193;
    v110 = v194;
    v48 = logfmt_raw((int)v210, 0x1000u);
    V_UNLOCK(v48);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_temp",
      10,
      36,
      100,
      v210);
    *(_QWORD *)&v205[0] |= 1uLL;
    v49 = *(_QWORD *)(v9 + 16);
    v124 = v205[0];
    if ( (v49 & 2) != 0 )
    {
      v42 = *(_QWORD *)(v9 + 24) | 2LL;
      *(_QWORD *)(v9 + 24) = v42;
LABEL_94:
      V_LOCK(v42);
      v50 = *(_DWORD *)v5;
      LODWORD(v124) |= 2u;
      V_INT((int)v178, (char *)v122, *(int *)(v50 + 248));
      V_STR(&v171, (char *)s, "temp too high");
      v51 = HIDWORD(v171);
      v52 = v172;
      v53 = v173;
      v54 = v125;
      v119 = "check_temp";
      v118 = (char *)v121;
      *(_DWORD *)v125 = v171;
      *((_DWORD *)v54 + 1) = v51;
      *((_DWORD *)v54 + 2) = v52;
      *((_DWORD *)v54 + 3) = v53;
      v54 += 2;
      v55 = v175;
      v56 = v176;
      v57 = v177;
      *(_DWORD *)v54 = v174;
      *((_DWORD *)v54 + 1) = v55;
      *((_DWORD *)v54 + 2) = v56;
      *((_DWORD *)v54 + 3) = v57;
      v107 = v179;
      v108 = v180;
      v109 = v181;
      v110 = v182;
      v58 = logfmt_raw((int)v210, 0x1000u);
      V_UNLOCK(v58);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_temp",
        10,
        44,
        100,
        v210);
      v205[0] = v124;
      v8 = *(_QWORD *)(v9 + 16);
      if ( (v8 & 4) != 0 )
      {
LABEL_95:
        v46 = *(_QWORD *)(v9 + 24) | 4LL;
        *(_QWORD *)(v9 + 24) = v46;
LABEL_96:
        V_LOCK(v46);
        v59 = *(_DWORD *)v5;
        LODWORD(v124) |= 4u;
        V_INT((int)v166, (char *)v122, *(int *)(v59 + 248));
        V_STR(&v159, (char *)s, "temp too low");
        v60 = HIDWORD(v159);
        v61 = v160;
        v62 = v161;
        v63 = v125;
        v119 = "check_temp";
        v118 = (char *)v121;
        *(_DWORD *)v125 = v159;
        *((_DWORD *)v63 + 1) = v60;
        *((_DWORD *)v63 + 2) = v61;
        *((_DWORD *)v63 + 3) = v62;
        v63 += 2;
        v64 = v163;
        v65 = v164;
        v66 = v165;
        *(_DWORD *)v63 = v162;
        *((_DWORD *)v63 + 1) = v64;
        *((_DWORD *)v63 + 2) = v65;
        *((_DWORD *)v63 + 3) = v66;
        v107 = v167;
        v108 = v168;
        v109 = v169;
        v110 = v170;
        v67 = logfmt_raw((int)v210, 0x1000u);
        V_UNLOCK(v67);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          189,
          "check_temp",
          10,
          52,
          100,
          v210);
        v205[0] = v124;
        v8 = *(_QWORD *)(v9 + 16);
        if ( (v8 & 8) != 0 )
        {
          v45 = *(_QWORD *)(v9 + 24) | 8LL;
          *(_QWORD *)(v9 + 24) = v45;
          goto LABEL_98;
        }
        goto LABEL_17;
      }
LABEL_83:
      if ( (v8 & 8) != 0 )
      {
        v45 = *(_QWORD *)(v9 + 24);
        v43 = v120 == 0;
        *(_QWORD *)(v9 + 24) = v45 | 8;
        if ( !v43 )
        {
          LODWORD(v0) = "check_temp";
          HIDWORD(v0) = &g_zc;
          LODWORD(v121) = "%s";
          v125 = &v111;
          goto LABEL_125;
        }
        goto LABEL_86;
      }
      goto LABEL_17;
    }
    if ( (v49 & 4) != 0 )
      goto LABEL_95;
    if ( (v49 & 8) != 0 )
    {
      v45 = *(_QWORD *)(v9 + 24) | 8LL;
      *(_QWORD *)(v9 + 24) = v45;
LABEL_125:
      v124 = v205[0];
LABEL_98:
      V_LOCK(v45);
      v68 = *(_DWORD *)v5;
      LODWORD(v124) |= 8u;
      V_INT((int)v154, (char *)v122, *(int *)(v68 + 248));
      V_STR(&v147, (char *)s, "read no temp");
      v69 = HIDWORD(v147);
      v70 = v148;
      v71 = v149;
      v72 = v125;
      v119 = "check_temp";
      v118 = (char *)v121;
      *(_DWORD *)v125 = v147;
      *((_DWORD *)v72 + 1) = v69;
      *((_DWORD *)v72 + 2) = v70;
      *((_DWORD *)v72 + 3) = v71;
      v72 += 2;
      v73 = v151;
      v74 = v152;
      v75 = v153;
      *(_DWORD *)v72 = v150;
      *((_DWORD *)v72 + 1) = v73;
      *((_DWORD *)v72 + 2) = v74;
      *((_DWORD *)v72 + 3) = v75;
      v107 = v155;
      v108 = v156;
      v109 = v157;
      v110 = v158;
      v76 = logfmt_raw((int)v210, 0x1000u);
      V_UNLOCK(v76);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_temp",
        10,
        60,
        100,
        v210);
      v205[0] = v124;
      if ( (*(_DWORD *)(v9 + 16) & 0x10) == 0 )
        goto LABEL_20;
      v12 = *(_QWORD *)(v9 + 24) | 0x10LL;
      *(_QWORD *)(v9 + 24) = v12;
      goto LABEL_100;
    }
    if ( (v49 & 0x10) != 0 )
    {
      v12 = *(_QWORD *)(v9 + 24) | 0x10LL;
      *(_QWORD *)(v9 + 24) = v12;
LABEL_124:
      v124 = v205[0];
LABEL_100:
      V_LOCK(v12);
      V_INT((int)v142, (char *)v122, *(int *)(*(_DWORD *)v5 + 248));
      V_STR(&v135, (char *)s, v126);
      v77 = HIDWORD(v135);
      v78 = v136;
      v79 = v137;
      v119 = "check_temp";
      v80 = v125;
      v118 = (char *)v121;
      *(_DWORD *)v125 = v135;
      *((_DWORD *)v80 + 1) = v77;
      *((_DWORD *)v80 + 2) = v78;
      *((_DWORD *)v80 + 3) = v79;
      v80 += 2;
      v81 = v139;
      v82 = v140;
      v83 = v141;
      *(_DWORD *)v80 = v138;
      *((_DWORD *)v80 + 1) = v81;
      *((_DWORD *)v80 + 2) = v82;
      *((_DWORD *)v80 + 3) = v83;
      LODWORD(v0) = &v107;
      v107 = v143;
      v108 = v144;
      v109 = v145;
      v110 = v146;
      v84 = logfmt_raw((int)v210, 0x1000u);
      V_UNLOCK(v84);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "check_temp",
        10,
        68,
        100,
        v210);
      *(_QWORD *)&v205[0] = *(_QWORD *)&v124 | 0x10LL;
    }
LABEL_20:
    ++v2;
  }
  while ( v2 < v200[0] );
  v3 = v120;
  v13 = LOBYTE(v205[0]) & 4;
  v1 = (char *)v127;
  v121 = *(_QWORD *)&v205[0];
  v14 = LOBYTE(v205[0]) & 2;
  v15 = (LOBYTE(v205[0]) & 4) != 0;
  LODWORD(v124) = v15;
  if ( (LOBYTE(v205[0]) & 2) != 0 )
  {
    v126 = (const char *)1;
    set_miner_6060info_status_high_temp_err();
  }
  else
  {
    v126 = 0;
  }
  if ( v13 )
    set_miner_6060info_status_low_temp_err(1, v15, v14, v13);
LABEL_26:
  LODWORD(v205[0]) = 0;
  v16 = get_all_created_runtime(v205);
  v17 = get_flag_from_monitor(*v16);
  if ( (*(_DWORD *)(v17 + 32) & 4) != 0 && (*(_QWORD *)(v17 + 40) |= 4uLL, v3) )
  {
    V_LOCK(v17);
    V_STR(&v195, "error", "fan error exceed limit");
    HIDWORD(v111) = "check_fan_err";
    v125 = (__int64 *)v3;
    LODWORD(v111) = "%s";
    v107 = v196;
    v108 = v197;
    v109 = v198;
    v110 = v199;
    v98 = logfmt_raw((int)v210, 0x1000u);
    V_UNLOCK(v98);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_fan_err",
      13,
      85,
      100,
      v210);
  }
  else
  {
    v125 = 0;
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
  v210[0] = 0;
  v22 = (char *)get_all_created_runtime(v210);
  if ( v210[0] > 0 )
  {
    v23 = v22 - 4;
    v24 = 0;
    v25 = 0;
    do
    {
      v26 = *((_DWORD *)v23 + 1);
      v23 += 4;
      v27 = get_flag_from_monitor(v26);
      if ( (*(_DWORD *)v27 & 1) != 0 )
      {
        v28 = *(_QWORD *)(v27 + 8);
        if ( v3 )
          v25 = v3;
        LODWORD(v28) = v28 | 1;
        *(_QWORD *)(v27 + 8) = v28;
      }
      ++v24;
    }
    while ( v24 < v210[0] );
    v21 = v25;
  }
  if ( !v1[40] )
  {
    clock_gettime(1, &stru_2F3EA0);
    v1[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v29 = 0;
    v120 = v21;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v29),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v29) + 1904))
           || !pools_active )
      {
        if ( ++v29 >= total_pools )
          goto LABEL_48;
      }
      clock_gettime(1, &stru_2F3EA0);
      set_miner_6060info_network_lost_err(0);
      ++v29;
    }
    while ( v29 < total_pools );
LABEL_48:
    v21 = v120;
  }
  clock_gettime(1, &stru_2F3EA8);
  v30 = vshrd_n_s64(vdup_n_s32((*((_DWORD *)v1 + 14) - *((_DWORD *)v1 + 12)) / 1000000).n64_i64[0], 0x20u);
  v31 = 1000LL * (*((_DWORD *)v1 + 13) - *((_DWORD *)v1 + 11)) + v30;
  v32 = -(HIDWORD(v31) + ((unsigned int)v31 > 0xEA5F));
  if ( v31 <= 59999 )
    v32 = v1[60] & 1;
  s = 1000LL * (*((_DWORD *)v1 + 13) - *((_DWORD *)v1 + 11)) + v30;
  if ( v31 > 59999 )
    v32 = 0;
  v120 = v32;
  if ( v32 )
  {
    v102 = rand();
    v103 = sub_27089C(v102, 120);
    v105 = v104 + 60;
    V_LOCK(v103);
    v106 = logfmt_raw((int)v210, 0x1000u);
    V_UNLOCK(v106);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      189,
      "check_lost_connection_to_pool",
      29,
      150,
      80,
      v210);
    sleep(v105);
    exit(1);
  }
  v33 = (v121 & 0xA) != 0;
  if ( v3 )
  {
    if ( s <= 60000 )
    {
      v96 = v120;
      *((_DWORD *)v1 + 16) = v120;
      v127 = v96;
      LODWORD(v122) = v96;
    }
    else
    {
      v34 = *((_DWORD *)v1 + 16);
      *((_DWORD *)v1 + 16) = v34 + 1;
      if ( !(v34 % 60) )
      {
        V_LOCK(v34 + 1);
        V_STR(v205, "error", "net lost");
        v127 = (int)s >> 31;
        LODWORD(v111) = "lost internet for %d seconds";
        v122 = 274877907LL * (int)s;
        HIDWORD(v111) = (int)s / 1000;
        v107 = v206;
        v108 = v207;
        v109 = v208;
        v110 = v209;
        v101 = logfmt_raw((int)v210, 0x1000u);
        V_UNLOCK(v101);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          189,
          "check_lost_connection_to_pool",
          29,
          158,
          100,
          v210);
        set_miner_6060info_network_lost_err(1);
      }
      if ( s <= 1200000 )
      {
        LODWORD(v122) = v3;
        v127 = 0;
      }
      else
      {
        v35 = (unsigned __int8)v1[60];
        LODWORD(v122) = v35;
        if ( v35 )
        {
          v127 = 0;
        }
        else
        {
          V_LOCK(s);
          V_STR(v200, "error", "net lost");
          v33 = v3;
          v99 = s;
          s = 274877907LL * (int)s;
          LODWORD(v111) = "lost internet %d seconds > 20 minutes, poweroff.";
          HIDWORD(v111) = v99 / 1000;
          v127 = v3;
          v107 = v201;
          v108 = v202;
          v109 = v203;
          v110 = v204;
          v100 = logfmt_raw((int)v210, 0x1000u);
          LODWORD(v122) = v3;
          V_UNLOCK(v100);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
            189,
            "check_lost_connection_to_pool",
            29,
            169,
            120,
            v210);
          v1[60] = 1;
        }
      }
    }
  }
  else
  {
    v127 = 0;
    LODWORD(v122) = 0;
  }
  LODWORD(s) = (v121 >> 3) & 1;
  if ( (v121 & 0x10) != 0 )
  {
    set_miner_6060info_uneffective_temp_err(1);
    v97 = (unsigned __int8)v1[12];
    v120 = v97;
    if ( v97 )
    {
      v33 = v120;
    }
    else
    {
      v33 = 1;
      LODWORD(v121) = 1;
      v128 = 1;
      v120 = 1;
LABEL_114:
      v87 = 0;
      v1[12] = 1;
      v210[0] = 0;
      v88 = (char *)get_all_created_runtime(v210);
      if ( v210[0] > 0 )
      {
        v89 = v120;
        v90 = v88 - 4;
        do
        {
          v91 = *((_DWORD *)v90 + 1);
          v90 += 4;
          ++v87;
          v92 = (*(int (**)(void))(v91 + 20))();
          v93 = dev_ctrl(v92);
          (*(void (__fastcall **)(_DWORD))(v93 + 32))(*(_DWORD *)(*(_DWORD *)v90 + 240));
        }
        while ( v87 < v210[0] );
        v120 = v89;
      }
      v94 = power_off();
      V_LOCK(v94);
      V_BOOL((int)v130, "poweroff", 1);
      v116 = v127;
      LODWORD(v111) = "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d";
      v115 = v128;
      v114 = s;
      v113 = v125;
      v112 = LODWORD(v124);
      HIDWORD(v111) = v126;
      v107 = v131;
      v108 = v132;
      v109 = v133;
      v110 = v134;
      v95 = logfmt_raw((int)v210, 0x1000u);
      V_UNLOCK(v95);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        189,
        "task_check_miner_status",
        23,
        332,
        120,
        v210);
      if ( !(_DWORD)v121 && !v1[12] )
        goto LABEL_130;
    }
    goto LABEL_65;
  }
  v36 = (unsigned __int8)v1[12];
  if ( v1[12] )
    goto LABEL_65;
  v86 = (unsigned __int8)v125;
  if ( (v121 & 0xE) != 0 )
    v86 = (unsigned __int8)v125 | 1;
  v120 = (unsigned __int8)(v127 | v86);
  LODWORD(v121) = (unsigned __int8)(v122 | v21 | v86);
  if ( (unsigned __int8)v127 | v86 )
  {
    v120 = v36;
    v128 = v36;
    goto LABEL_114;
  }
  if ( (_DWORD)v121 )
  {
LABEL_65:
    v1[11] = 1;
    goto LABEL_66;
  }
LABEL_130:
  v1[11] = 0;
LABEL_66:
  if ( v3 )
  {
    if ( !v21 )
      LOBYTE(v21) = v1[12];
    v1[4] = (char)v126;
    v37 = LOBYTE(v124);
    v1[9] = v21;
    v1[5] = v37;
    v1[8] = (char)v125;
    v1[10] = v122;
    v1[6] = s;
    v1[7] = v120;
  }
  v38 = pthread_mutex_unlock(&stru_2F3E84);
  v39 = (unsigned __int8)v1[11];
  byte_2F0A0C ^= 1u;
  if ( v39 )
  {
    v40 = green_led_off(v38);
    if ( byte_2F0A0C )
    {
      red_led_on(v40);
      if ( !v33 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off(v40);
  }
  else
  {
    v85 = red_led_off(v38);
    if ( byte_2F0A0C )
      green_led_on(v85);
    else
      green_led_off(v85);
  }
  if ( v33 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
