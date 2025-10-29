int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  signed int v4; // r4
  int v6; // r5
  void *v7; // r0
  void (__fastcall *v8)(int, void *); // r3
  int *v9; // r6
  const char *v10; // r0
  int v11; // r10
  char *v12; // lr
  int v13; // r1
  int v14; // r2
  int v15; // r3
  char *v16; // r11
  int v17; // r1
  int v18; // r2
  int v19; // r3
  const char **v20; // r5
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  const char *v27; // r1
  const char *v28; // r2
  const char *v29; // r3
  const char *v30; // r1
  const char *v31; // r2
  const char *v32; // r3
  int v33; // r0
  int v34; // r0
  char *v35; // lr
  int v36; // r1
  int v37; // r2
  int v38; // r3
  char *v39; // r9
  int v40; // r1
  int v41; // r2
  int v42; // r3
  const char **v43; // r5
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r3
  const char *v50; // r1
  const char *v51; // r2
  const char *v52; // r3
  const char *v53; // r1
  const char *v54; // r2
  const char *v55; // r3
  int v56; // r0
  int v57; // r8
  int v58; // r0
  int v59; // r3
  int v60; // r2
  int v61; // r8
  int v62; // r2
  int v63; // r2
  int v64; // r2
  _DWORD *v65; // r0
  bool v66; // zf
  int v67; // r1
  int v68; // r2
  int v69; // r0
  int v70; // r1
  int v71; // r12
  int v72; // r3
  int v73; // r2
  _BOOL4 v74; // r12
  int v75; // r3
  char *v76; // r1
  int v77; // r3
  char *v78; // r4
  int v79; // r6
  int v80; // r4
  int v81; // r0
  int result; // r0
  char *v83; // r2
  int v84; // r3
  int v85; // r6
  int v86; // r0
  int v87; // r3
  int v88; // r8
  int v89; // r0
  int v90; // r6
  int v91; // r8
  int v92; // r6
  int v93; // r0
  int v94; // r0
  int v95; // r0
  char *v96; // lr
  int v97; // r8
  int v98; // r0
  const char *v99; // [sp+20h] [bp-1314h] BYREF
  int v100; // [sp+24h] [bp-1310h]
  int v101; // [sp+28h] [bp-130Ch]
  int v102; // [sp+2Ch] [bp-1308h]
  char v103; // [sp+40h] [bp-12F4h] BYREF
  char v104; // [sp+60h] [bp-12D4h] BYREF
  char *v105; // [sp+80h] [bp-12B4h]
  const char *v106; // [sp+84h] [bp-12B0h]
  int v107; // [sp+88h] [bp-12ACh]
  char *s; // [sp+8Ch] [bp-12A8h]
  const char *v109; // [sp+90h] [bp-12A4h]
  unsigned int v110; // [sp+94h] [bp-12A0h]
  _DWORD *v111; // [sp+98h] [bp-129Ch]
  const char **v112; // [sp+9Ch] [bp-1298h]
  char *v113; // [sp+A0h] [bp-1294h]
  char *v114; // [sp+A4h] [bp-1290h]
  char *v115; // [sp+A8h] [bp-128Ch]
  int *v116; // [sp+ACh] [bp-1288h]
  const char *v117; // [sp+B0h] [bp-1284h]
  char *v118; // [sp+B4h] [bp-1280h]
  int v119; // [sp+B8h] [bp-127Ch]
  int v120; // [sp+BCh] [bp-1278h]
  int v121; // [sp+C0h] [bp-1274h]
  int v122; // [sp+C4h] [bp-1270h]
  int v123; // [sp+C8h] [bp-126Ch]
  _DWORD *v124; // [sp+CCh] [bp-1268h]
  int *v125; // [sp+D0h] [bp-1264h]
  const char *v126; // [sp+D4h] [bp-1260h]
  int *v127; // [sp+D8h] [bp-125Ch]
  int v128; // [sp+DCh] [bp-1258h]
  signed int v129; // [sp+E0h] [bp-1254h]
  void *ptr; // [sp+E4h] [bp-1250h]
  int v131; // [sp+E8h] [bp-124Ch]
  int v132; // [sp+ECh] [bp-1248h]
  char v133[32]; // [sp+F0h] [bp-1244h] BYREF
  int v134; // [sp+110h] [bp-1224h] BYREF
  char v135[32]; // [sp+130h] [bp-1204h] BYREF
  int v136; // [sp+150h] [bp-11E4h] BYREF
  char v137[32]; // [sp+170h] [bp-11C4h] BYREF
  _DWORD v138[8]; // [sp+190h] [bp-11A4h] BYREF
  _DWORD v139[8]; // [sp+1B0h] [bp-1184h] BYREF
  _DWORD v140[8]; // [sp+1D0h] [bp-1164h] BYREF
  _DWORD v141[8]; // [sp+1F0h] [bp-1144h] BYREF
  int v142; // [sp+210h] [bp-1124h] BYREF
  int v143; // [sp+214h] [bp-1120h]
  int v144; // [sp+218h] [bp-111Ch]
  int v145; // [sp+21Ch] [bp-1118h]
  int v146; // [sp+220h] [bp-1114h]
  int v147; // [sp+224h] [bp-1110h]
  int v148; // [sp+228h] [bp-110Ch]
  int v149; // [sp+22Ch] [bp-1108h]
  int v150; // [sp+230h] [bp-1104h] BYREF
  int v151; // [sp+234h] [bp-1100h]
  int v152; // [sp+238h] [bp-10FCh]
  int v153; // [sp+23Ch] [bp-10F8h]
  int v154; // [sp+240h] [bp-10F4h]
  int v155; // [sp+244h] [bp-10F0h]
  int v156; // [sp+248h] [bp-10ECh]
  int v157; // [sp+24Ch] [bp-10E8h]
  _DWORD v158[8]; // [sp+250h] [bp-10E4h] BYREF
  char v159[32]; // [sp+270h] [bp-10C4h] BYREF
  int v160; // [sp+290h] [bp-10A4h] BYREF
  int v161; // [sp+294h] [bp-10A0h]
  int v162; // [sp+298h] [bp-109Ch]
  int v163; // [sp+29Ch] [bp-1098h]
  int v164; // [sp+2A0h] [bp-1094h]
  int v165; // [sp+2A4h] [bp-1090h]
  int v166; // [sp+2A8h] [bp-108Ch]
  int v167; // [sp+2ACh] [bp-1088h]
  int v168; // [sp+2B0h] [bp-1084h] BYREF
  int v169; // [sp+2B4h] [bp-1080h]
  int v170; // [sp+2B8h] [bp-107Ch]
  int v171; // [sp+2BCh] [bp-1078h]
  int v172; // [sp+2C0h] [bp-1074h]
  int v173; // [sp+2C4h] [bp-1070h]
  int v174; // [sp+2C8h] [bp-106Ch]
  int v175; // [sp+2CCh] [bp-1068h]
  _DWORD v176[8]; // [sp+2D0h] [bp-1064h] BYREF
  char v177[32]; // [sp+2F0h] [bp-1044h] BYREF
  int v178; // [sp+310h] [bp-1024h] BYREF
  _BYTE v179[4100]; // [sp+330h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 254);
  v128 = a3 + 16;
  if ( !v3 )
    return v128;
  v4 = *(_DWORD *)(a1 + 392);
  v111 = a2;
  v6 = *(_DWORD *)(a1 + 384);
  v132 = a3;
  v129 = v4;
  v7 = calloc(v4, 0xCu);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 228);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v129 )
    {
      v69 = *(_DWORD *)(a1 + 244);
      v110 = 0;
      v119 = 0;
      v121 = -150;
      goto LABEL_70;
    }
    v120 = 0;
    v119 = 0;
    v110 = 0;
    v123 = -150;
    v121 = -150;
    v122 = 150;
LABEL_77:
    *(_QWORD *)(v132 + 16) |= 1uLL;
    goto LABEL_40;
  }
  v9 = (int *)ptr;
  v117 = "check_temperature";
  v116 = &g_zc;
  v126 = "check_temperature, local:%d, remote:%d";
  v127 = &g_temp_zc;
  v125 = (int *)((char *)ptr + 12 * v129);
  v114 = "%s";
  v110 = 0;
  v10 = "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  s = "chain";
  v119 = 0;
  v120 = 0;
  v118 = "sensor";
  v131 = 0;
  v115 = &v104;
  v11 = v6;
  v123 = -150;
  v124 = 0;
  v113 = &v103;
  v121 = -150;
  v109 = "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  v112 = &v99;
  v122 = 150;
  do
  {
    V_LOCK(v10);
    V_INT((int)&v178, s);
    v57 = *v9;
    v101 = v9[1];
    v99 = v126;
    v100 = v57;
    v58 = logfmt_raw((int)v179, 0x1000u);
    V_UNLOCK(v58);
    zlog(*v116, v109, 214, "check_temperature", 17, 35, 20, v179);
    v59 = *v9;
    if ( *v9 == -64 )
    {
      v61 = 0;
      ++v110;
    }
    else
    {
      v60 = v123;
      v61 = 1;
      ++v120;
      if ( v123 < v59 )
        v60 = v59;
      v123 = v60;
      v62 = v122;
      if ( v122 >= v59 )
        v62 = v59;
      v122 = v62;
    }
    v63 = v9[1];
    if ( v63 == -64 )
    {
      ++v110;
      v107 = 0;
    }
    else
    {
      ++v119;
      if ( v121 >= v63 )
        v63 = v121;
      v121 = v63;
      v107 = 1;
    }
    v64 = v9[2];
    v65 = v111;
    v66 = v64 == -64;
    if ( v64 == -64 )
    {
      v64 = v110;
      v67 = 0;
    }
    else
    {
      v67 = 1;
    }
    if ( v66 )
      v110 = v64 + 1;
    if ( v111 )
    {
      v68 = *(_DWORD *)(v11 + 12);
      if ( v68 )
      {
        if ( v68 == 1 )
        {
          if ( v61 )
            *(_DWORD *)(v111[3] + 4 * v131) = v59;
          if ( v107 )
            *(_DWORD *)(v111[4] + 4 * v131) = v9[1];
          ++v131;
        }
      }
      else
      {
        if ( v61 )
        {
          v65 = v124;
          *(_DWORD *)(v111[1] + 4 * (_DWORD)v124) = v59;
        }
        if ( v107 )
        {
          v65 = v124;
          *(_DWORD *)(v111[2] + 4 * (_DWORD)v124) = v9[1];
        }
        if ( v67 )
          *(_DWORD *)(*v111 + 4 * (_DWORD)v124) = v9[2];
        v124 = (_DWORD *)((char *)v124 + 1);
      }
    }
    V_LOCK(v65);
    V_INT((int)v177, s);
    V_INT((int)v176, v118);
    if ( v61 )
    {
      V_INT((int)&v168, "pcbtemp");
      if ( v107 )
        goto LABEL_5;
    }
    else
    {
      V_INT((int)v141, "pcbtemp");
      v168 = v141[0];
      v169 = v141[1];
      v170 = v141[2];
      v171 = v141[3];
      v172 = v141[4];
      v173 = v141[5];
      v174 = v141[6];
      v175 = v141[7];
      if ( v107 )
      {
LABEL_5:
        V_INT((int)&v160, "chiptemp");
        goto LABEL_6;
      }
    }
    V_INT((int)v140, "chiptemp");
    v160 = v140[0];
    v161 = v140[1];
    v162 = v140[2];
    v163 = v140[3];
    v164 = v140[4];
    v165 = v140[5];
    v166 = v140[6];
    v167 = v140[7];
LABEL_6:
    v12 = v115;
    v106 = v117;
    v13 = v161;
    v14 = v162;
    v15 = v163;
    v16 = v113;
    v105 = v114;
    *(_DWORD *)v115 = v160;
    *((_DWORD *)v12 + 1) = v13;
    *((_DWORD *)v12 + 2) = v14;
    *((_DWORD *)v12 + 3) = v15;
    v12 += 16;
    v17 = v165;
    v18 = v166;
    v19 = v167;
    v20 = v112;
    *(_DWORD *)v12 = v164;
    *((_DWORD *)v12 + 1) = v17;
    *((_DWORD *)v12 + 2) = v18;
    *((_DWORD *)v12 + 3) = v19;
    v21 = v169;
    v22 = v170;
    v23 = v171;
    *(_DWORD *)v16 = v168;
    *((_DWORD *)v16 + 1) = v21;
    *((_DWORD *)v16 + 2) = v22;
    *((_DWORD *)v16 + 3) = v23;
    v16 += 16;
    v24 = v173;
    v25 = v174;
    v26 = v175;
    *(_DWORD *)v16 = v172;
    *((_DWORD *)v16 + 1) = v24;
    *((_DWORD *)v16 + 2) = v25;
    *((_DWORD *)v16 + 3) = v26;
    v27 = (const char *)v176[1];
    v28 = (const char *)v176[2];
    v29 = (const char *)v176[3];
    *v20 = (const char *)v176[0];
    v20[1] = v27;
    v20[2] = v28;
    v20[3] = v29;
    v20 += 4;
    v30 = (const char *)v176[5];
    v31 = (const char *)v176[6];
    v32 = (const char *)v176[7];
    *v20 = (const char *)v176[4];
    v20[1] = v30;
    v20[2] = v31;
    v20[3] = v32;
    v33 = logfmt_raw((int)v179, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(*v116, v109, 214, "check_temperature", 17, 103, 20, v179);
    V_LOCK(v34);
    V_INT((int)v159, s);
    V_INT((int)v158, v118);
    if ( v61 )
    {
      V_INT((int)&v150, "pcbtemp");
    }
    else
    {
      V_INT((int)v139, "pcbtemp");
      v150 = v139[0];
      v151 = v139[1];
      v152 = v139[2];
      v153 = v139[3];
      v154 = v139[4];
      v155 = v139[5];
      v156 = v139[6];
      v157 = v139[7];
    }
    if ( v107 )
    {
      V_INT((int)&v142, "chiptemp");
    }
    else
    {
      V_INT((int)v138, "chiptemp");
      v142 = v138[0];
      v143 = v138[1];
      v144 = v138[2];
      v145 = v138[3];
      v146 = v138[4];
      v147 = v138[5];
      v148 = v138[6];
      v149 = v138[7];
    }
    v35 = v115;
    v9 += 3;
    v106 = v117;
    v11 += 24;
    v36 = v143;
    v37 = v144;
    v38 = v145;
    v39 = v113;
    v105 = v114;
    *(_DWORD *)v115 = v142;
    *((_DWORD *)v35 + 1) = v36;
    *((_DWORD *)v35 + 2) = v37;
    *((_DWORD *)v35 + 3) = v38;
    v35 += 16;
    v40 = v147;
    v41 = v148;
    v42 = v149;
    v43 = v112;
    *(_DWORD *)v35 = v146;
    *((_DWORD *)v35 + 1) = v40;
    *((_DWORD *)v35 + 2) = v41;
    *((_DWORD *)v35 + 3) = v42;
    v44 = v151;
    v45 = v152;
    v46 = v153;
    *(_DWORD *)v39 = v150;
    *((_DWORD *)v39 + 1) = v44;
    *((_DWORD *)v39 + 2) = v45;
    *((_DWORD *)v39 + 3) = v46;
    v39 += 16;
    v47 = v155;
    v48 = v156;
    v49 = v157;
    *(_DWORD *)v39 = v154;
    *((_DWORD *)v39 + 1) = v47;
    *((_DWORD *)v39 + 2) = v48;
    *((_DWORD *)v39 + 3) = v49;
    v50 = (const char *)v158[1];
    v51 = (const char *)v158[2];
    v52 = (const char *)v158[3];
    *v43 = (const char *)v158[0];
    v43[1] = v50;
    v43[2] = v51;
    v43[3] = v52;
    v43 += 4;
    v53 = (const char *)v158[5];
    v54 = (const char *)v158[6];
    v55 = (const char *)v158[7];
    *v43 = (const char *)v158[4];
    v43[1] = v53;
    v43[2] = v54;
    v43[3] = v55;
    v56 = logfmt_raw((int)v179, 0x1000u);
    V_UNLOCK(v56);
    v10 = (const char *)zlog(*v127, v109, 214, "check_temperature", 17, 105, 40, v179);
  }
  while ( v9 != v125 );
  free(ptr);
  if ( v129 != v120 || v119 != v120 )
    goto LABEL_77;
LABEL_40:
  v69 = *(_DWORD *)(a1 + 244);
  if ( v120 )
  {
    v70 = v69;
    v71 = v123;
    v111[6] = v122;
    dword_2FB6C0[v69] = v71;
    dword_2FB6C0[v69 + 16] = 0;
    goto LABEL_42;
  }
LABEL_70:
  v70 = v69;
  v83 = (char *)&dword_2FB6C0[v69];
  v84 = *((_DWORD *)v83 + 16) + 1;
  *((_DWORD *)v83 + 16) = v84;
  if ( v84 > 2 )
  {
    V_LOCK(v69);
    V_INT((int)v133, "chain");
    v85 = *(_DWORD *)(a1 + 244);
    v99 = "read no sensor pcb temp exceed limit! (%d)";
    v100 = dword_2FB6C0[v85 + 16];
    v86 = logfmt_raw((int)v179, 0x1000u);
    V_UNLOCK(v86);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      214,
      "update_temperature",
      18,
      346,
      120,
      v179);
    v69 = *(_DWORD *)(a1 + 244);
    v70 = v69;
    *(_QWORD *)(v132 + 16) |= 8uLL;
  }
LABEL_42:
  if ( v119 )
  {
    v111[5] = v121;
    dword_2FB6C0[v70 + 32] = 0;
  }
  else
  {
    v87 = dword_2FB6C0[v70 + 32] + 1;
    dword_2FB6C0[v70 + 32] = v87;
    if ( v87 > 2 )
    {
      V_LOCK(v69);
      V_INT((int)&v134, "chain");
      v88 = dword_2FB6C0[*(_DWORD *)(a1 + 244) + 32];
      v99 = "read no sensor chip temp exceed limit! (%d)";
      v100 = v88;
      v89 = logfmt_raw((int)v179, 0x1000u);
      V_UNLOCK(v89);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        214,
        "update_temperature",
        18,
        363,
        120,
        v179);
      v69 = *(_DWORD *)(a1 + 244);
      v70 = v69;
      *(_QWORD *)(v132 + 16) |= 8uLL;
    }
  }
  if ( *(_DWORD *)(a1 + 408) >= v110 )
  {
    dword_2FB6C0[v70 + 48] = 0;
  }
  else
  {
    v72 = dword_2FB6C0[v70 + 48] + 1;
    dword_2FB6C0[v70 + 48] = v72;
    if ( v72 > 2 )
    {
      V_LOCK(v69);
      V_INT((int)v135, "chain");
      v96 = (char *)&dword_2FB6C0[*(_DWORD *)(a1 + 244)];
      v101 = v110;
      v97 = *((_DWORD *)v96 + 48);
      v99 = "uneffective temp exceed limit (%d), uneffective_value_count = %d!";
      v100 = v97;
      v98 = logfmt_raw((int)v179, 0x1000u);
      V_UNLOCK(v98);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        214,
        "update_temperature",
        18,
        374,
        120,
        v179);
      (*(void (__fastcall **)(int, _DWORD))(a1 + 208))(a1, 0);
      v69 = *(_DWORD *)(a1 + 244);
      v70 = v69;
      *(_QWORD *)(v132 + 16) |= 0x10uLL;
    }
  }
  v73 = v111[5];
  v74 = v73 > *(_DWORD *)(a1 + 396);
  if ( v73 > 109 )
    v74 = 0;
  if ( v74 || (v69 = dword_2FB6C0[v69], v69 > *(_DWORD *)(a1 + 400)) )
  {
    v75 = dword_2FB6C0[v70 + 64] + 1;
    dword_2FB6C0[v70 + 64] = v75;
    if ( v75 > 2 )
    {
      V_LOCK(v69);
      V_INT((int)&v136, "chain");
      v90 = *(_DWORD *)(a1 + 244);
      v91 = dword_2FB6C0[v90];
      v92 = dword_2FB6C0[v90 + 64];
      v101 = v111[5];
      v102 = v91;
      v100 = v92;
      v99 = "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!";
      v93 = logfmt_raw((int)v179, 0x1000u);
      V_UNLOCK(v93);
      v94 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              214,
              "update_temperature",
              18,
              390,
              120,
              v179);
      V_LOCK(v94);
      v95 = logfmt_raw((int)v179, 0x1000u);
      V_UNLOCK(v95);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        214,
        "update_temperature",
        18,
        391,
        100,
        v179);
      (*(void (__fastcall **)(int, _DWORD))(a1 + 208))(a1, 0);
      v69 = *(_DWORD *)(a1 + 244);
      v70 = v69;
      *(_QWORD *)(v132 + 16) |= 2uLL;
    }
  }
  else
  {
    dword_2FB6C0[v70 + 64] = 0;
  }
  if ( v111[6] <= *(_DWORD *)(a1 + 404) )
  {
    v76 = (char *)&dword_2FB6C0[v70];
    v77 = *((_DWORD *)v76 + 80) + 1;
    *((_DWORD *)v76 + 80) = v77;
    if ( v77 > 2 )
    {
      V_LOCK(v69);
      V_INT((int)v137, "chain");
      v78 = (char *)&dword_2FB6C0[*(_DWORD *)(a1 + 244)];
      v79 = v111[6];
      v99 = "low temp exceed limit (%d), min_pcb_temp = %d!";
      v80 = *((_DWORD *)v78 + 80);
      v101 = v79;
      v100 = v80;
      v81 = logfmt_raw((int)v179, 0x1000u);
      V_UNLOCK(v81);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        214,
        "update_temperature",
        18,
        407,
        120,
        v179);
      (*(void (__fastcall **)(int, _DWORD))(a1 + 208))(a1, 0);
      *(_QWORD *)(v132 + 16) |= 4uLL;
    }
    return v128;
  }
  result = v128;
  dword_2FB6C0[v70 + 80] = 0;
  return result;
}
