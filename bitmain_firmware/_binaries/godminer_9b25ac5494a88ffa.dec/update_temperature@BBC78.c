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
  char *v73; // r1
  int v74; // r3
  char *v75; // r4
  int v76; // r6
  int v77; // r4
  int v78; // r0
  int result; // r0
  char *v80; // r2
  int v81; // r3
  int v82; // r6
  int v83; // r0
  int v84; // r3
  int v85; // r6
  int v86; // r8
  int v87; // r6
  int v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r3
  int v92; // r8
  int v93; // r0
  char *v94; // lr
  int v95; // r8
  int v96; // r0
  const char *v97; // [sp+20h] [bp-1314h] BYREF
  int v98; // [sp+24h] [bp-1310h]
  int v99; // [sp+28h] [bp-130Ch]
  int v100; // [sp+2Ch] [bp-1308h]
  char v101; // [sp+40h] [bp-12F4h] BYREF
  char v102; // [sp+60h] [bp-12D4h] BYREF
  char *v103; // [sp+80h] [bp-12B4h]
  const char *v104; // [sp+84h] [bp-12B0h]
  int v105; // [sp+88h] [bp-12ACh]
  char *s; // [sp+8Ch] [bp-12A8h]
  const char *v107; // [sp+90h] [bp-12A4h]
  unsigned int v108; // [sp+94h] [bp-12A0h]
  _DWORD *v109; // [sp+98h] [bp-129Ch]
  const char **v110; // [sp+9Ch] [bp-1298h]
  int *v111; // [sp+A0h] [bp-1294h]
  char *v112; // [sp+A4h] [bp-1290h]
  char *v113; // [sp+A8h] [bp-128Ch]
  char *v114; // [sp+ACh] [bp-1288h]
  const char *v115; // [sp+B0h] [bp-1284h]
  char *v116; // [sp+B4h] [bp-1280h]
  int v117; // [sp+B8h] [bp-127Ch]
  int v118; // [sp+BCh] [bp-1278h]
  int v119; // [sp+C0h] [bp-1274h]
  int v120; // [sp+C4h] [bp-1270h]
  int v121; // [sp+C8h] [bp-126Ch]
  _DWORD *v122; // [sp+CCh] [bp-1268h]
  int *v123; // [sp+D0h] [bp-1264h]
  const char *v124; // [sp+D4h] [bp-1260h]
  int *v125; // [sp+D8h] [bp-125Ch]
  int v126; // [sp+DCh] [bp-1258h]
  signed int v127; // [sp+E0h] [bp-1254h]
  void *ptr; // [sp+E4h] [bp-1250h]
  int v129; // [sp+E8h] [bp-124Ch]
  int v130; // [sp+ECh] [bp-1248h]
  char v131[32]; // [sp+F0h] [bp-1244h] BYREF
  int v132; // [sp+110h] [bp-1224h] BYREF
  char v133[32]; // [sp+130h] [bp-1204h] BYREF
  int v134; // [sp+150h] [bp-11E4h] BYREF
  char v135[32]; // [sp+170h] [bp-11C4h] BYREF
  _DWORD v136[8]; // [sp+190h] [bp-11A4h] BYREF
  _DWORD v137[8]; // [sp+1B0h] [bp-1184h] BYREF
  _DWORD v138[8]; // [sp+1D0h] [bp-1164h] BYREF
  _DWORD v139[8]; // [sp+1F0h] [bp-1144h] BYREF
  int v140; // [sp+210h] [bp-1124h] BYREF
  int v141; // [sp+214h] [bp-1120h]
  int v142; // [sp+218h] [bp-111Ch]
  int v143; // [sp+21Ch] [bp-1118h]
  int v144; // [sp+220h] [bp-1114h]
  int v145; // [sp+224h] [bp-1110h]
  int v146; // [sp+228h] [bp-110Ch]
  int v147; // [sp+22Ch] [bp-1108h]
  int v148; // [sp+230h] [bp-1104h] BYREF
  int v149; // [sp+234h] [bp-1100h]
  int v150; // [sp+238h] [bp-10FCh]
  int v151; // [sp+23Ch] [bp-10F8h]
  int v152; // [sp+240h] [bp-10F4h]
  int v153; // [sp+244h] [bp-10F0h]
  int v154; // [sp+248h] [bp-10ECh]
  int v155; // [sp+24Ch] [bp-10E8h]
  _DWORD v156[8]; // [sp+250h] [bp-10E4h] BYREF
  char v157[32]; // [sp+270h] [bp-10C4h] BYREF
  int v158; // [sp+290h] [bp-10A4h] BYREF
  int v159; // [sp+294h] [bp-10A0h]
  int v160; // [sp+298h] [bp-109Ch]
  int v161; // [sp+29Ch] [bp-1098h]
  int v162; // [sp+2A0h] [bp-1094h]
  int v163; // [sp+2A4h] [bp-1090h]
  int v164; // [sp+2A8h] [bp-108Ch]
  int v165; // [sp+2ACh] [bp-1088h]
  int v166; // [sp+2B0h] [bp-1084h] BYREF
  int v167; // [sp+2B4h] [bp-1080h]
  int v168; // [sp+2B8h] [bp-107Ch]
  int v169; // [sp+2BCh] [bp-1078h]
  int v170; // [sp+2C0h] [bp-1074h]
  int v171; // [sp+2C4h] [bp-1070h]
  int v172; // [sp+2C8h] [bp-106Ch]
  int v173; // [sp+2CCh] [bp-1068h]
  _DWORD v174[8]; // [sp+2D0h] [bp-1064h] BYREF
  char v175[32]; // [sp+2F0h] [bp-1044h] BYREF
  int v176; // [sp+310h] [bp-1024h] BYREF
  _BYTE v177[4100]; // [sp+330h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 250);
  v126 = a3 + 16;
  if ( !v3 )
    return v126;
  v4 = *(_DWORD *)(a1 + 388);
  v109 = a2;
  v6 = *(_DWORD *)(a1 + 380);
  v130 = a3;
  v127 = v4;
  v7 = calloc(v4, 0xCu);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 224);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v127 )
    {
      v69 = *(_DWORD *)(a1 + 240);
      v108 = 0;
      v117 = 0;
      v119 = -150;
      goto LABEL_66;
    }
    v117 = 0;
    v118 = 0;
    v108 = 0;
    v120 = -150;
    v119 = -150;
    v121 = 150;
LABEL_71:
    *(_QWORD *)(v130 + 16) |= 1uLL;
    goto LABEL_40;
  }
  v9 = (int *)ptr;
  v115 = "check_temperature";
  v111 = &g_zc;
  v124 = "check_temperature, local:%d, remote:%d";
  v125 = &g_temp_zc;
  v123 = (int *)((char *)ptr + 12 * v127);
  v114 = "%s";
  v108 = 0;
  v10 = "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  s = "chain";
  v117 = 0;
  v118 = 0;
  v116 = "sensor";
  v129 = 0;
  v113 = &v102;
  v11 = v6;
  v122 = 0;
  v112 = &v101;
  v119 = -150;
  v107 = "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  v110 = &v97;
  v120 = -150;
  v121 = 150;
  do
  {
    V_LOCK(v10);
    V_INT((int)&v176, s);
    v57 = *v9;
    v99 = v9[1];
    v97 = v124;
    v98 = v57;
    v58 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v58);
    zlog(*v111, v107, 214, "check_temperature", 17, 35, 20, v177);
    v59 = *v9;
    if ( *v9 == -64 )
    {
      v61 = 0;
      ++v108;
    }
    else
    {
      v60 = v120;
      v61 = 1;
      ++v118;
      if ( v120 < v59 )
        v60 = v59;
      v120 = v60;
      v62 = v121;
      if ( v121 >= v59 )
        v62 = v59;
      v121 = v62;
    }
    v63 = v9[1];
    if ( v63 == -64 )
    {
      ++v108;
      v105 = 0;
    }
    else
    {
      ++v117;
      if ( v119 >= v63 )
        v63 = v119;
      v119 = v63;
      v105 = 1;
    }
    v64 = v9[2];
    v65 = v109;
    v66 = v64 == -64;
    if ( v64 == -64 )
    {
      v64 = v108;
      v67 = 0;
    }
    else
    {
      v67 = 1;
    }
    if ( v66 )
      v108 = v64 + 1;
    if ( v109 )
    {
      v68 = *(_DWORD *)(v11 + 12);
      if ( v68 )
      {
        if ( v68 == 1 )
        {
          if ( v61 )
            *(_DWORD *)(v109[3] + 4 * v129) = v59;
          if ( v105 )
            *(_DWORD *)(v109[4] + 4 * v129) = v9[1];
          ++v129;
        }
      }
      else
      {
        if ( v61 )
        {
          v65 = v122;
          *(_DWORD *)(v109[1] + 4 * (_DWORD)v122) = v59;
        }
        if ( v105 )
        {
          v65 = v122;
          *(_DWORD *)(v109[2] + 4 * (_DWORD)v122) = v9[1];
        }
        if ( v67 )
          *(_DWORD *)(*v109 + 4 * (_DWORD)v122) = v9[2];
        v122 = (_DWORD *)((char *)v122 + 1);
      }
    }
    V_LOCK(v65);
    V_INT((int)v175, s);
    V_INT((int)v174, v116);
    if ( v61 )
    {
      V_INT((int)&v166, "pcbtemp");
      if ( v105 )
        goto LABEL_5;
    }
    else
    {
      V_INT((int)v139, "pcbtemp");
      v166 = v139[0];
      v167 = v139[1];
      v168 = v139[2];
      v169 = v139[3];
      v170 = v139[4];
      v171 = v139[5];
      v172 = v139[6];
      v173 = v139[7];
      if ( v105 )
      {
LABEL_5:
        V_INT((int)&v158, "chiptemp");
        goto LABEL_6;
      }
    }
    V_INT((int)v138, "chiptemp");
    v158 = v138[0];
    v159 = v138[1];
    v160 = v138[2];
    v161 = v138[3];
    v162 = v138[4];
    v163 = v138[5];
    v164 = v138[6];
    v165 = v138[7];
LABEL_6:
    v12 = v113;
    v104 = v115;
    v13 = v159;
    v14 = v160;
    v15 = v161;
    v16 = v112;
    v103 = v114;
    *(_DWORD *)v113 = v158;
    *((_DWORD *)v12 + 1) = v13;
    *((_DWORD *)v12 + 2) = v14;
    *((_DWORD *)v12 + 3) = v15;
    v12 += 16;
    v17 = v163;
    v18 = v164;
    v19 = v165;
    v20 = v110;
    *(_DWORD *)v12 = v162;
    *((_DWORD *)v12 + 1) = v17;
    *((_DWORD *)v12 + 2) = v18;
    *((_DWORD *)v12 + 3) = v19;
    v21 = v167;
    v22 = v168;
    v23 = v169;
    *(_DWORD *)v16 = v166;
    *((_DWORD *)v16 + 1) = v21;
    *((_DWORD *)v16 + 2) = v22;
    *((_DWORD *)v16 + 3) = v23;
    v16 += 16;
    v24 = v171;
    v25 = v172;
    v26 = v173;
    *(_DWORD *)v16 = v170;
    *((_DWORD *)v16 + 1) = v24;
    *((_DWORD *)v16 + 2) = v25;
    *((_DWORD *)v16 + 3) = v26;
    v27 = (const char *)v174[1];
    v28 = (const char *)v174[2];
    v29 = (const char *)v174[3];
    *v20 = (const char *)v174[0];
    v20[1] = v27;
    v20[2] = v28;
    v20[3] = v29;
    v20 += 4;
    v30 = (const char *)v174[5];
    v31 = (const char *)v174[6];
    v32 = (const char *)v174[7];
    *v20 = (const char *)v174[4];
    v20[1] = v30;
    v20[2] = v31;
    v20[3] = v32;
    v33 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(*v111, v107, 214, "check_temperature", 17, 103, 20, v177);
    V_LOCK(v34);
    V_INT((int)v157, s);
    V_INT((int)v156, v116);
    if ( v61 )
    {
      V_INT((int)&v148, "pcbtemp");
    }
    else
    {
      V_INT((int)v137, "pcbtemp");
      v148 = v137[0];
      v149 = v137[1];
      v150 = v137[2];
      v151 = v137[3];
      v152 = v137[4];
      v153 = v137[5];
      v154 = v137[6];
      v155 = v137[7];
    }
    if ( v105 )
    {
      V_INT((int)&v140, "chiptemp");
    }
    else
    {
      V_INT((int)v136, "chiptemp");
      v140 = v136[0];
      v141 = v136[1];
      v142 = v136[2];
      v143 = v136[3];
      v144 = v136[4];
      v145 = v136[5];
      v146 = v136[6];
      v147 = v136[7];
    }
    v35 = v113;
    v9 += 3;
    v104 = v115;
    v11 += 24;
    v36 = v141;
    v37 = v142;
    v38 = v143;
    v39 = v112;
    v103 = v114;
    *(_DWORD *)v113 = v140;
    *((_DWORD *)v35 + 1) = v36;
    *((_DWORD *)v35 + 2) = v37;
    *((_DWORD *)v35 + 3) = v38;
    v35 += 16;
    v40 = v145;
    v41 = v146;
    v42 = v147;
    v43 = v110;
    *(_DWORD *)v35 = v144;
    *((_DWORD *)v35 + 1) = v40;
    *((_DWORD *)v35 + 2) = v41;
    *((_DWORD *)v35 + 3) = v42;
    v44 = v149;
    v45 = v150;
    v46 = v151;
    *(_DWORD *)v39 = v148;
    *((_DWORD *)v39 + 1) = v44;
    *((_DWORD *)v39 + 2) = v45;
    *((_DWORD *)v39 + 3) = v46;
    v39 += 16;
    v47 = v153;
    v48 = v154;
    v49 = v155;
    *(_DWORD *)v39 = v152;
    *((_DWORD *)v39 + 1) = v47;
    *((_DWORD *)v39 + 2) = v48;
    *((_DWORD *)v39 + 3) = v49;
    v50 = (const char *)v156[1];
    v51 = (const char *)v156[2];
    v52 = (const char *)v156[3];
    *v43 = (const char *)v156[0];
    v43[1] = v50;
    v43[2] = v51;
    v43[3] = v52;
    v43 += 4;
    v53 = (const char *)v156[5];
    v54 = (const char *)v156[6];
    v55 = (const char *)v156[7];
    *v43 = (const char *)v156[4];
    v43[1] = v53;
    v43[2] = v54;
    v43[3] = v55;
    v56 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v56);
    v10 = (const char *)zlog(*v125, v107, 214, "check_temperature", 17, 105, 40, v177);
  }
  while ( v9 != v123 );
  free(ptr);
  if ( v118 != v127 || v118 != v117 )
    goto LABEL_71;
LABEL_40:
  v69 = *(_DWORD *)(a1 + 240);
  if ( v118 )
  {
    v70 = v69;
    v71 = v120;
    v109[6] = v121;
    dword_2F96A0[v69] = v71;
    dword_2F96A0[v69 + 16] = 0;
    goto LABEL_42;
  }
LABEL_66:
  v70 = v69;
  v80 = (char *)&dword_2F96A0[v69];
  v81 = *((_DWORD *)v80 + 16) + 1;
  *((_DWORD *)v80 + 16) = v81;
  if ( v81 > 2 )
  {
    V_LOCK(v69);
    V_INT((int)v131, "chain");
    v82 = *(_DWORD *)(a1 + 240);
    v97 = "read no sensor pcb temp exceed limit! (%d)";
    v98 = dword_2F96A0[v82 + 16];
    v83 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v83);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      214,
      "update_temperature",
      18,
      346,
      120,
      v177);
    v69 = *(_DWORD *)(a1 + 240);
    v70 = v69;
    *(_QWORD *)(v130 + 16) |= 8uLL;
  }
LABEL_42:
  if ( v117 )
  {
    v109[5] = v119;
    dword_2F96A0[v70 + 32] = 0;
  }
  else
  {
    v91 = dword_2F96A0[v70 + 32] + 1;
    dword_2F96A0[v70 + 32] = v91;
    if ( v91 > 2 )
    {
      V_LOCK(v69);
      V_INT((int)&v132, "chain");
      v92 = dword_2F96A0[*(_DWORD *)(a1 + 240) + 32];
      v97 = "read no sensor chip temp exceed limit! (%d)";
      v98 = v92;
      v93 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v93);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        214,
        "update_temperature",
        18,
        363,
        120,
        v177);
      v69 = *(_DWORD *)(a1 + 240);
      v70 = v69;
      *(_QWORD *)(v130 + 16) |= 8uLL;
    }
  }
  if ( *(_DWORD *)(a1 + 404) >= v108 )
  {
    dword_2F96A0[v70 + 48] = 0;
  }
  else
  {
    v72 = dword_2F96A0[v70 + 48] + 1;
    dword_2F96A0[v70 + 48] = v72;
    if ( v72 > 2 )
    {
      V_LOCK(v69);
      V_INT((int)v133, "chain");
      v94 = (char *)&dword_2F96A0[*(_DWORD *)(a1 + 240)];
      v99 = v108;
      v95 = *((_DWORD *)v94 + 48);
      v97 = "uneffective temp exceed limit (%d), uneffective_value_count = %d!";
      v98 = v95;
      v96 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v96);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        214,
        "update_temperature",
        18,
        374,
        120,
        v177);
      (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
      v69 = *(_DWORD *)(a1 + 240);
      v70 = v69;
      *(_QWORD *)(v130 + 16) |= 0x10uLL;
    }
  }
  if ( v109[5] > *(_DWORD *)(a1 + 392) || dword_2F96A0[v69] > *(_DWORD *)(a1 + 396) )
  {
    v84 = dword_2F96A0[v70 + 64] + 1;
    dword_2F96A0[v70 + 64] = v84;
    if ( v84 > 2 )
    {
      V_LOCK(v69);
      V_INT((int)&v134, "chain");
      v85 = *(_DWORD *)(a1 + 240);
      v86 = dword_2F96A0[v85];
      v87 = dword_2F96A0[v85 + 64];
      v99 = v109[5];
      v100 = v86;
      v98 = v87;
      v97 = "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!";
      v88 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v88);
      v89 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              214,
              "update_temperature",
              18,
              390,
              120,
              v177);
      V_LOCK(v89);
      v90 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v90);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        214,
        "update_temperature",
        18,
        391,
        100,
        v177);
      (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
      v69 = *(_DWORD *)(a1 + 240);
      v70 = v69;
      *(_QWORD *)(v130 + 16) |= 2uLL;
    }
  }
  else
  {
    dword_2F96A0[v70 + 64] = 0;
  }
  if ( v109[6] <= *(_DWORD *)(a1 + 400) )
  {
    v73 = (char *)&dword_2F96A0[v70];
    v74 = *((_DWORD *)v73 + 80) + 1;
    *((_DWORD *)v73 + 80) = v74;
    if ( v74 > 2 )
    {
      V_LOCK(v69);
      V_INT((int)v135, "chain");
      v75 = (char *)&dword_2F96A0[*(_DWORD *)(a1 + 240)];
      v76 = v109[6];
      v97 = "low temp exceed limit (%d), min_pcb_temp = %d!";
      v77 = *((_DWORD *)v75 + 80);
      v99 = v76;
      v98 = v77;
      v78 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v78);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        214,
        "update_temperature",
        18,
        407,
        120,
        v177);
      (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
      *(_QWORD *)(v130 + 16) |= 4uLL;
    }
    return v126;
  }
  result = v126;
  dword_2F96A0[v70 + 80] = 0;
  return result;
}
