int task_check_miner_status()
{
  char *v0; // r11
  int v1; // r5
  int v2; // r8
  int all_created_runtime; // r0
  int v4; // r10
  __int64 v5; // r6
  bool v6; // zf
  int v7; // r6
  __int64 v8; // r0
  int v9; // t1
  int flag_from_monitor; // r4
  int v11; // r0
  __int64 v12; // r0
  __int64 v13; // r0
  int v14; // r3
  __int64 v15; // r4
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
  int v31; // r1
  unsigned __int8 v32; // r5
  int v33; // r10
  int v34; // r4
  unsigned int v35; // r0
  int v36; // r0
  FILE *v37; // r0
  FILE *v38; // r7
  FILE *v39; // r0
  FILE *v40; // r7
  int v41; // r3
  int v42; // r0
  int v43; // r2
  int v44; // r0
  __int64 v46; // r0
  int v47; // r0
  int v48; // r1
  int v49; // r2
  int v50; // r3
  _DWORD *v51; // r11
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r0
  int v56; // r1
  int v57; // r2
  int v58; // r3
  _DWORD *v59; // r11
  int v60; // r1
  int v61; // r2
  int v62; // r3
  int v63; // r0
  int v64; // r1
  int v65; // r2
  int v66; // r3
  _DWORD *v67; // r11
  int v68; // r1
  int v69; // r2
  int v70; // r3
  int v71; // r0
  int v72; // r1
  int v73; // r2
  int v74; // r3
  _DWORD *v75; // r12
  int v76; // r1
  int v77; // r2
  int v78; // r3
  int v79; // r0
  int v80; // r2
  int v81; // r0
  char *v82; // r3
  int v83; // r0
  int v84; // r0
  int v85; // r3
  int v86; // r0
  int v87; // r0
  int v88; // r0
  int v89; // r0
  int v90; // r1
  unsigned int v91; // r4
  int v92; // r0
  char *v93; // [sp+20h] [bp-1224h] BYREF
  int v94; // [sp+24h] [bp-1220h]
  int v95; // [sp+28h] [bp-121Ch]
  char *v96; // [sp+2Ch] [bp-1218h]
  int v97; // [sp+30h] [bp-1214h]
  int v98; // [sp+34h] [bp-1210h]
  int v99; // [sp+38h] [bp-120Ch]
  int v100; // [sp+3Ch] [bp-1208h]
  char *v101; // [sp+40h] [bp-1204h]
  const char *v102; // [sp+44h] [bp-1200h]
  double v103; // [sp+48h] [bp-11FCh]
  __int64 v104; // [sp+50h] [bp-11F4h]
  int v105; // [sp+58h] [bp-11ECh]
  int v106; // [sp+5Ch] [bp-11E8h]
  char *v107; // [sp+60h] [bp-11E4h]
  char *s; // [sp+64h] [bp-11E0h]
  __int64 v109; // [sp+68h] [bp-11DCh]
  int v110; // [sp+70h] [bp-11D4h]
  char *v111; // [sp+74h] [bp-11D0h]
  int v112; // [sp+7Ch] [bp-11C8h] BYREF
  _BYTE v113[32]; // [sp+80h] [bp-11C4h] BYREF
  _DWORD v114[8]; // [sp+A0h] [bp-11A4h] BYREF
  _BYTE v115[32]; // [sp+C0h] [bp-1184h] BYREF
  _DWORD v116[8]; // [sp+E0h] [bp-1164h] BYREF
  _BYTE v117[32]; // [sp+100h] [bp-1144h] BYREF
  _DWORD v118[8]; // [sp+120h] [bp-1124h] BYREF
  _BYTE v119[32]; // [sp+140h] [bp-1104h] BYREF
  _DWORD v120[8]; // [sp+160h] [bp-10E4h] BYREF
  _BYTE v121[32]; // [sp+180h] [bp-10C4h] BYREF
  _DWORD v122[8]; // [sp+1A0h] [bp-10A4h] BYREF
  _BYTE v123[32]; // [sp+1C0h] [bp-1084h] BYREF
  int v124; // [sp+1E0h] [bp-1064h] BYREF
  _DWORD v125[8]; // [sp+200h] [bp-1044h] BYREF
  double v126[4]; // [sp+220h] [bp-1024h] BYREF
  _DWORD v127[1025]; // [sp+240h] [bp-1004h] BYREF

  v0 = &byte_2EB95C;
  if ( !byte_2EB95C )
  {
    byte_2EB960 = 0;
    byte_2EB961 = 0;
    byte_2EB962 = 0;
    byte_2EB963 = 0;
    byte_2EB964 = 0;
    byte_2EB965 = 0;
    byte_2EB966 = 0;
    byte_2EB967 = 0;
    byte_2EB968 = 0;
    byte_2EB95C = 1;
  }
  pthread_mutex_lock(&stru_2EB970);
  v1 = 0;
  v2 = (unsigned __int8)byte_2EB968 ^ 1;
  v125[0] = 0;
  all_created_runtime = get_all_created_runtime(v125);
  memset(v126, 0, 16);
  if ( v125[0] <= 0 )
  {
    v110 = 0;
    LODWORD(v109) = 0;
    v103 = 0.0;
    goto LABEL_31;
  }
  v107 = "chain";
  v4 = all_created_runtime - 4;
  v110 = (int)"uneffective temp exceed limit";
  v105 = v2;
  s = "error";
  v111 = &byte_2EB95C;
  do
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v4 + 4);
      v4 += 4;
      flag_from_monitor = get_flag_from_monitor(v9);
      v103 = *(double *)(flag_from_monitor + 16);
      v11 = LOBYTE(v103) & 1;
      if ( (LOBYTE(v103) & 1) == 0 )
        break;
      v5 = *(_QWORD *)(flag_from_monitor + 24);
      v6 = v105 == 0;
      v104 = v5;
      LODWORD(v5) = v5 | 1;
      *(_QWORD *)(flag_from_monitor + 24) = v5;
      if ( v6 )
      {
        v7 = LOBYTE(v103) & 4;
        if ( (LOBYTE(v103) & 2) == 0 )
        {
          if ( (LOBYTE(v103) & 4) != 0 )
          {
            *(_QWORD *)(flag_from_monitor + 24) = v104 | 5;
LABEL_10:
            if ( (LOBYTE(v103) & 8) != 0 )
              *(_QWORD *)(flag_from_monitor + 24) |= 8uLL;
LABEL_12:
            if ( (LOBYTE(v103) & 0x10) == 0 )
              goto LABEL_15;
            v6 = v105 == 0;
            v8 = *(_QWORD *)(flag_from_monitor + 24) | 0x10LL;
            *(_QWORD *)(flag_from_monitor + 24) = v8;
            if ( v6 )
              goto LABEL_15;
            LODWORD(v104) = "%s";
            v106 = (int)&v93;
LABEL_108:
            v103 = v126[0];
LABEL_92:
            V_LOCK(v8);
            V_INT((int)v115, v107);
            V_STR((int)v114, s);
            v72 = v114[1];
            v73 = v114[2];
            v74 = v114[3];
            v102 = "check_temp";
            v75 = (_DWORD *)v106;
            v101 = (char *)v104;
            *(_DWORD *)v106 = v114[0];
            v75[1] = v72;
            v75[2] = v73;
            v75[3] = v74;
            v75 += 4;
            v76 = v114[5];
            v77 = v114[6];
            v78 = v114[7];
            *v75 = v114[4];
            v75[1] = v76;
            v75[2] = v77;
            v75[3] = v78;
            v79 = logfmt_raw((int)v127, 0x1000u);
            V_UNLOCK(v79);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
              194,
              "check_temp",
              10,
              68,
              100,
              v127);
            *(_QWORD *)&v126[0] = *(_QWORD *)&v103 | 0x10LL;
            goto LABEL_15;
          }
          if ( (LOBYTE(v103) & 8) == 0 )
            goto LABEL_12;
          *(_QWORD *)(flag_from_monitor + 24) = v104 | 9;
          goto LABEL_24;
        }
        *(_QWORD *)(flag_from_monitor + 24) = v104 | 3;
        if ( v7 )
          goto LABEL_9;
        goto LABEL_21;
      }
      V_LOCK(v11);
      v106 = (int)&v93;
      V_INT((int)v123, v107);
      LODWORD(v104) = "%s";
      V_STR((int)v122, s);
      v101 = "%s";
      v102 = "check_temp";
      v93 = (char *)v122[0];
      v94 = v122[1];
      v95 = v122[2];
      v96 = (char *)v122[3];
      v97 = v122[4];
      v98 = v122[5];
      v99 = v122[6];
      v100 = v122[7];
      v47 = logfmt_raw((int)v127, 0x1000u);
      V_UNLOCK(v47);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "check_temp",
        10,
        36,
        100,
        v127);
      v109 = *(_QWORD *)&v126[0] | 1LL;
      *(_QWORD *)&v126[0] |= 1uLL;
      v103 = *(double *)(flag_from_monitor + 16);
      if ( (LOBYTE(v103) & 2) == 0 )
      {
        if ( (LOBYTE(v103) & 4) != 0 )
          goto LABEL_87;
        if ( (LOBYTE(v103) & 8) == 0 )
        {
          if ( (LOBYTE(v103) & 0x10) == 0 )
            goto LABEL_15;
          v8 = *(_QWORD *)(flag_from_monitor + 24) | 0x10LL;
          *(_QWORD *)(flag_from_monitor + 24) = v8;
          goto LABEL_108;
        }
        v13 = *(_QWORD *)(flag_from_monitor + 24) | 8LL;
        *(_QWORD *)(flag_from_monitor + 24) = v13;
LABEL_109:
        v109 = *(_QWORD *)&v126[0];
        goto LABEL_90;
      }
      v12 = *(_QWORD *)(flag_from_monitor + 24) | 2LL;
      *(_QWORD *)(flag_from_monitor + 24) = v12;
LABEL_86:
      V_LOCK(v12);
      LODWORD(v109) = v109 | 2;
      V_INT((int)v121, v107);
      V_STR((int)v120, s);
      v48 = v120[1];
      v49 = v120[2];
      v50 = v120[3];
      v51 = (_DWORD *)v106;
      v102 = "check_temp";
      v101 = (char *)v104;
      *(_DWORD *)v106 = v120[0];
      v51[1] = v48;
      v51[2] = v49;
      v51[3] = v50;
      v51 += 4;
      v52 = v120[5];
      v53 = v120[6];
      v54 = v120[7];
      *v51 = v120[4];
      v51[1] = v52;
      v51[2] = v53;
      v51[3] = v54;
      v55 = logfmt_raw((int)v127, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "check_temp",
        10,
        44,
        100,
        v127);
      *(_QWORD *)&v126[0] = v109;
      v103 = *(double *)(flag_from_monitor + 16);
      if ( (LOBYTE(v103) & 4) == 0 )
        goto LABEL_21;
LABEL_87:
      v46 = *(_QWORD *)(flag_from_monitor + 24) | 4LL;
      *(_QWORD *)(flag_from_monitor + 24) = v46;
LABEL_88:
      V_LOCK(v46);
      LODWORD(v109) = v109 | 4;
      V_INT((int)v119, v107);
      V_STR((int)v118, s);
      v56 = v118[1];
      v57 = v118[2];
      v58 = v118[3];
      v59 = (_DWORD *)v106;
      v102 = "check_temp";
      v101 = (char *)v104;
      *(_DWORD *)v106 = v118[0];
      v59[1] = v56;
      v59[2] = v57;
      v59[3] = v58;
      v59 += 4;
      v60 = v118[5];
      v61 = v118[6];
      v62 = v118[7];
      *v59 = v118[4];
      v59[1] = v60;
      v59[2] = v61;
      v59[3] = v62;
      v63 = logfmt_raw((int)v127, 0x1000u);
      V_UNLOCK(v63);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "check_temp",
        10,
        52,
        100,
        v127);
      *(_QWORD *)&v126[0] = v109;
      v103 = *(double *)(flag_from_monitor + 16);
      if ( (LOBYTE(v103) & 8) == 0 )
        goto LABEL_12;
      v13 = *(_QWORD *)(flag_from_monitor + 24) | 8LL;
      *(_QWORD *)(flag_from_monitor + 24) = v13;
LABEL_90:
      V_LOCK(v13);
      *(_QWORD *)&v103 = v109 | 8;
      V_INT((int)v117, v107);
      V_STR((int)v116, s);
      v64 = v116[1];
      v65 = v116[2];
      v66 = v116[3];
      v67 = (_DWORD *)v106;
      v102 = "check_temp";
      v101 = (char *)v104;
      *(_DWORD *)v106 = v116[0];
      v67[1] = v64;
      v67[2] = v65;
      v67[3] = v66;
      v67 += 4;
      v68 = v116[5];
      v69 = v116[6];
      v70 = v116[7];
      *v67 = v116[4];
      v67[1] = v68;
      v67[2] = v69;
      v67[3] = v70;
      v71 = logfmt_raw((int)v127, 0x1000u);
      V_UNLOCK(v71);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "check_temp",
        10,
        60,
        100,
        v127);
      v126[0] = v103;
      if ( (*(_DWORD *)(flag_from_monitor + 16) & 0x10) != 0 )
      {
        v8 = *(_QWORD *)(flag_from_monitor + 24) | 0x10LL;
        *(_QWORD *)(flag_from_monitor + 24) = v8;
        goto LABEL_92;
      }
LABEL_15:
      if ( ++v1 >= v125[0] )
        goto LABEL_26;
    }
    if ( (LOBYTE(v103) & 2) != 0 )
    {
      v12 = *(_QWORD *)(flag_from_monitor + 24);
      v6 = v105 == 0;
      *(_QWORD *)(flag_from_monitor + 24) = v12 | 2;
      if ( !v6 )
      {
        v109 = *(_QWORD *)&v126[0];
        LODWORD(v104) = "%s";
        v106 = (int)&v93;
        goto LABEL_86;
      }
      if ( (LOBYTE(v103) & 4) != 0 )
      {
LABEL_9:
        *(_QWORD *)(flag_from_monitor + 24) |= 4uLL;
        goto LABEL_10;
      }
    }
    else if ( (LOBYTE(v103) & 4) != 0 )
    {
      v46 = *(_QWORD *)(flag_from_monitor + 24);
      v6 = v105 == 0;
      *(_QWORD *)(flag_from_monitor + 24) = v46 | 4;
      if ( v6 )
        goto LABEL_10;
      v109 = *(_QWORD *)&v126[0];
      LODWORD(v104) = "%s";
      v106 = (int)&v93;
      goto LABEL_88;
    }
LABEL_21:
    if ( (LOBYTE(v103) & 8) == 0 )
      goto LABEL_12;
    v13 = *(_QWORD *)(flag_from_monitor + 24);
    v6 = v105 == 0;
    *(_QWORD *)(flag_from_monitor + 24) = v13 | 8;
    if ( !v6 )
    {
      LODWORD(v104) = "%s";
      v106 = (int)&v93;
      goto LABEL_109;
    }
LABEL_24:
    if ( (LOBYTE(v103) & 0x10) == 0 )
      goto LABEL_15;
    ++v1;
    v14 = v125[0];
    *(_QWORD *)(flag_from_monitor + 24) |= 0x10uLL;
  }
  while ( v1 < v14 );
LABEL_26:
  v2 = v105;
  v15 = LOBYTE(v126[0]) & 4;
  v0 = v111;
  v103 = v126[0];
  LODWORD(v109) = (LOBYTE(v126[0]) & 4) != 0;
  if ( (LOBYTE(v126[0]) & 2) != 0 )
  {
    v110 = 1;
    set_miner_6060info_status_high_temp_err();
  }
  else
  {
    v110 = 0;
  }
  if ( v15 )
    set_miner_6060info_status_low_temp_err(1);
LABEL_31:
  LODWORD(v126[0]) = 0;
  v16 = (_DWORD *)get_all_created_runtime(v126);
  v17 = get_flag_from_monitor(*v16);
  if ( (*(_DWORD *)(v17 + 32) & 4) != 0 && (*(_QWORD *)(v17 + 40) |= 4uLL, v2) )
  {
    V_LOCK(v17);
    V_STR((int)&v124, "error");
    v94 = (int)"check_fan_err";
    v107 = (char *)v2;
    v93 = "%s";
    v86 = logfmt_raw((int)v127, 0x1000u);
    V_UNLOCK(v86);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
      194,
      "check_fan_err",
      13,
      85,
      100,
      v127);
  }
  else
  {
    v107 = 0;
  }
  v112 = 0;
  v18 = (int *)get_all_created_runtime(&v112);
  if ( v112 > 0 )
  {
    v19 = &v18[v112];
    do
    {
      v20 = *v18++;
      v2 = (unsigned __int8)(v2 & *(_BYTE *)(v20 + 254));
    }
    while ( v19 != v18 );
  }
  v21 = 0;
  v127[0] = 0;
  v22 = get_all_created_runtime(v127);
  if ( v127[0] > 0 )
  {
    v23 = v22 - 4;
    v24 = 0;
    do
    {
      v25 = *(_DWORD *)(v23 + 4);
      v23 += 4;
      ++v24;
      v26 = (_BYTE *)get_flag_from_monitor(v25);
      if ( ((unsigned __int8)v2 & *v26 & 1) != 0 )
        v21 = (unsigned __int8)v2 & *v26 & 1;
    }
    while ( v24 < v127[0] );
  }
  v27 = (unsigned __int8)v0[44];
  LODWORD(v104) = v21;
  if ( !v27 )
  {
    clock_gettime(1, &stru_2EB98C);
    v0[44] = 1;
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
          goto LABEL_50;
      }
      clock_gettime(1, &stru_2EB98C);
      set_miner_6060info_network_lost_err(0);
      ++v28;
    }
    while ( v28 < total_pools );
  }
LABEL_50:
  clock_gettime(1, &stru_2EB994);
  v29 = 1000LL * (*((_DWORD *)v0 + 14) - *((_DWORD *)v0 + 12)) + (*((_DWORD *)v0 + 15) - *((_DWORD *)v0 + 13)) / 1000000;
  if ( v29 > 59999 )
    v30 = 0;
  else
    v30 = v0[64] & 1;
  v105 = v30;
  if ( v30 )
  {
    v88 = rand();
    v89 = sub_26EDC4(v88, 120);
    v91 = v90 + 60;
    V_LOCK(v89);
    v92 = logfmt_raw((int)v127, 0x1000u);
    V_UNLOCK(v92);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
      194,
      "check_lost_connection_to_pool",
      29,
      137,
      80,
      v127);
    sleep(v91);
    exit(1);
  }
  v106 = (LOBYTE(v103) & 0xA) != 0;
  if ( !v2 )
    goto LABEL_107;
  if ( v29 <= 60000 )
  {
    HIDWORD(v29) = v105;
    *((_DWORD *)v0 + 17) = v105;
    s = (char *)HIDWORD(v29);
    goto LABEL_57;
  }
  v80 = *((_DWORD *)v0 + 17);
  v81 = v80 + 1;
  *((_DWORD *)v0 + 17) = v80 + 1;
  if ( !(v80 % 60) )
  {
    V_LOCK(v81);
    V_STR((int)v126, "error");
    v93 = "lost internet for %d seconds";
    v94 = (int)v29 / 1000;
    v87 = logfmt_raw((int)v127, 0x1000u);
    V_UNLOCK(v87);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
      194,
      "check_lost_connection_to_pool",
      29,
      145,
      100,
      v127);
    v81 = set_miner_6060info_network_lost_err(1);
  }
  if ( v29 > 1200000 )
  {
    v82 = (char *)(unsigned __int8)v0[64];
    s = v82;
    if ( v82 )
    {
      HIDWORD(v29) = 0;
    }
    else
    {
      V_LOCK(v81);
      V_STR((int)v125, "error");
      v93 = "lost internet %d seconds > 20 minutes, poweroff.";
      HIDWORD(v29) = v2;
      v94 = (int)v29 / 1000;
      v106 = v2;
      v83 = logfmt_raw((int)v127, 0x1000u);
      s = (char *)v2;
      V_UNLOCK(v83);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "check_lost_connection_to_pool",
        29,
        156,
        120,
        v127);
      v0[64] = 1;
      system("reboot");
    }
  }
  else
  {
LABEL_107:
    HIDWORD(v29) = 0;
    s = (char *)v2;
  }
LABEL_57:
  LODWORD(v29) = (*(__int64 *)&v103 >> 3) & 1;
  if ( (LOBYTE(v103) & 0x10) != 0 )
  {
    set_miner_6060info_uneffective_temp_err(1);
    v85 = (unsigned __int8)v0[12];
    v105 = v85;
    if ( v85 )
    {
      v106 = v105;
    }
    else
    {
      v106 = 1;
      v33 = 1;
      v34 = 1;
      v105 = 1;
LABEL_63:
      v0[12] = 1;
      v35 = all_dev_poweroff();
      V_LOCK(v35);
      V_BOOL((int)v113, "poweroff");
      v98 = v34;
      v99 = HIDWORD(v29);
      v97 = v29;
      v96 = v107;
      v93 = "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d";
      v95 = v109;
      v94 = v110;
      v36 = logfmt_raw((int)v127, 0x1000u);
      V_UNLOCK(v36);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/check_miner_status.c",
        194,
        "task_check_miner_status",
        23,
        320,
        120,
        v127);
      v37 = (FILE *)fopen64("/tmp/miner_hash.log", "r");
      v38 = v37;
      if ( v37 )
      {
        tail(v37, 12, (void (__fastcall *)(char *))applog_printer);
        fclose(v38);
      }
      v39 = (FILE *)fopen64("/tmp/miner_temp.log", "r");
      v40 = v39;
      if ( v39 )
      {
        tail(v39, 12, (void (__fastcall *)(char *))applog_printer);
        fclose(v40);
      }
      if ( !v33 && !v0[12] )
        goto LABEL_116;
    }
    goto LABEL_69;
  }
  v31 = (unsigned __int8)v0[12];
  if ( v0[12] )
    goto LABEL_69;
  v32 = (unsigned __int8)v107;
  if ( (LOBYTE(v103) & 0xE) != 0 )
    v32 = (unsigned __int8)v107 | 1;
  v105 = (unsigned __int8)(BYTE4(v29) | v32);
  v33 = (unsigned __int8)((unsigned __int8)s | v104 | v32);
  if ( BYTE4(v29) | v32 )
  {
    v34 = v31;
    v105 = v31;
    goto LABEL_63;
  }
  if ( (unsigned __int8)s | (unsigned __int8)(v104 | v32) )
  {
LABEL_69:
    v0[11] = 1;
    goto LABEL_70;
  }
LABEL_116:
  v0[11] = 0;
LABEL_70:
  if ( v2 )
  {
    v41 = v104;
    v0[6] = v29;
    v0[4] = v110;
    v0[5] = v109;
    v0[8] = (char)v107;
    if ( !v41 )
      LODWORD(v104) = (unsigned __int8)v0[12];
    v0[9] = v104;
    v0[10] = (char)s;
    v0[7] = v105;
  }
  v42 = pthread_mutex_unlock(&stru_2EB970);
  v43 = (unsigned __int8)v0[11];
  byte_2E7E4C ^= 1u;
  if ( v43 )
  {
    v44 = green_led_off(v42);
    if ( byte_2E7E4C )
      red_led_on(v44);
    else
      red_led_off(v44);
LABEL_77:
    if ( v106 )
      return fan_pwm_set_max();
    return set_pwm_by_temp();
  }
  else
  {
    v84 = red_led_off(v42);
    if ( byte_2E7E4C )
    {
      green_led_on(v84);
      goto LABEL_77;
    }
    green_led_off(v84);
    if ( !v106 )
      return set_pwm_by_temp();
    return fan_pwm_set_max();
  }
}
