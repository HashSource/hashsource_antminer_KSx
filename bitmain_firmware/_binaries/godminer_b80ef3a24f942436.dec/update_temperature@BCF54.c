int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  signed int v4; // r4
  int v6; // r5
  void *v7; // r0
  void (__fastcall *v8)(int, void *); // r3
  int *v9; // r6
  int *v10; // r0
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
  int v59; // r0
  int v60; // r3
  int v61; // r2
  int v62; // r8
  int v63; // r2
  int v64; // r2
  int v65; // r2
  int v66; // r0
  int v67; // r1
  int v68; // r12
  int v69; // r3
  char *v70; // r1
  int v71; // r3
  char *v72; // r4
  int v73; // r6
  int v74; // r0
  int result; // r0
  char *v76; // r2
  int v77; // r3
  int v78; // r6
  int v79; // r0
  int v80; // r3
  int v81; // r6
  int v82; // r8
  int v83; // r6
  int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r3
  int v88; // r8
  int v89; // r0
  char *v90; // lr
  int v91; // r8
  int v92; // r0
  const char *v93; // [sp+20h] [bp-1314h] BYREF
  int v94; // [sp+24h] [bp-1310h]
  int v95; // [sp+28h] [bp-130Ch]
  int v96; // [sp+2Ch] [bp-1308h]
  char v97; // [sp+40h] [bp-12F4h] BYREF
  char v98; // [sp+60h] [bp-12D4h] BYREF
  char *v99; // [sp+80h] [bp-12B4h]
  const char *v100; // [sp+84h] [bp-12B0h]
  int v101; // [sp+88h] [bp-12ACh]
  char *s; // [sp+8Ch] [bp-12A8h]
  const char *v103; // [sp+90h] [bp-12A4h]
  char *v104; // [sp+94h] [bp-12A0h]
  char *v105; // [sp+98h] [bp-129Ch]
  int *v106; // [sp+9Ch] [bp-1298h]
  const char *v107; // [sp+A0h] [bp-1294h]
  char *v108; // [sp+A4h] [bp-1290h]
  const char **v109; // [sp+A8h] [bp-128Ch]
  char *v110; // [sp+ACh] [bp-1288h]
  _DWORD *v111; // [sp+B0h] [bp-1284h]
  int v112; // [sp+B4h] [bp-1280h]
  int v113; // [sp+B8h] [bp-127Ch]
  unsigned int v114; // [sp+BCh] [bp-1278h]
  int v115; // [sp+C0h] [bp-1274h]
  int v116; // [sp+C4h] [bp-1270h]
  int v117; // [sp+C8h] [bp-126Ch]
  int v118; // [sp+CCh] [bp-1268h]
  int *v119; // [sp+D0h] [bp-1264h]
  int *v120; // [sp+D4h] [bp-1260h]
  const char *v121; // [sp+D8h] [bp-125Ch]
  int v122; // [sp+DCh] [bp-1258h]
  signed int v123; // [sp+E0h] [bp-1254h]
  void *ptr; // [sp+E4h] [bp-1250h]
  int v125; // [sp+E8h] [bp-124Ch]
  int v126; // [sp+ECh] [bp-1248h]
  char v127[32]; // [sp+F0h] [bp-1244h] BYREF
  int v128; // [sp+110h] [bp-1224h] BYREF
  char v129[32]; // [sp+130h] [bp-1204h] BYREF
  int v130; // [sp+150h] [bp-11E4h] BYREF
  char v131[32]; // [sp+170h] [bp-11C4h] BYREF
  _DWORD v132[8]; // [sp+190h] [bp-11A4h] BYREF
  _DWORD v133[8]; // [sp+1B0h] [bp-1184h] BYREF
  _DWORD v134[8]; // [sp+1D0h] [bp-1164h] BYREF
  _DWORD v135[8]; // [sp+1F0h] [bp-1144h] BYREF
  int v136; // [sp+210h] [bp-1124h] BYREF
  int v137; // [sp+214h] [bp-1120h]
  int v138; // [sp+218h] [bp-111Ch]
  int v139; // [sp+21Ch] [bp-1118h]
  int v140; // [sp+220h] [bp-1114h]
  int v141; // [sp+224h] [bp-1110h]
  int v142; // [sp+228h] [bp-110Ch]
  int v143; // [sp+22Ch] [bp-1108h]
  int v144; // [sp+230h] [bp-1104h] BYREF
  int v145; // [sp+234h] [bp-1100h]
  int v146; // [sp+238h] [bp-10FCh]
  int v147; // [sp+23Ch] [bp-10F8h]
  int v148; // [sp+240h] [bp-10F4h]
  int v149; // [sp+244h] [bp-10F0h]
  int v150; // [sp+248h] [bp-10ECh]
  int v151; // [sp+24Ch] [bp-10E8h]
  _DWORD v152[8]; // [sp+250h] [bp-10E4h] BYREF
  char v153[32]; // [sp+270h] [bp-10C4h] BYREF
  int v154; // [sp+290h] [bp-10A4h] BYREF
  int v155; // [sp+294h] [bp-10A0h]
  int v156; // [sp+298h] [bp-109Ch]
  int v157; // [sp+29Ch] [bp-1098h]
  int v158; // [sp+2A0h] [bp-1094h]
  int v159; // [sp+2A4h] [bp-1090h]
  int v160; // [sp+2A8h] [bp-108Ch]
  int v161; // [sp+2ACh] [bp-1088h]
  int v162; // [sp+2B0h] [bp-1084h] BYREF
  int v163; // [sp+2B4h] [bp-1080h]
  int v164; // [sp+2B8h] [bp-107Ch]
  int v165; // [sp+2BCh] [bp-1078h]
  int v166; // [sp+2C0h] [bp-1074h]
  int v167; // [sp+2C4h] [bp-1070h]
  int v168; // [sp+2C8h] [bp-106Ch]
  int v169; // [sp+2CCh] [bp-1068h]
  _DWORD v170[8]; // [sp+2D0h] [bp-1064h] BYREF
  char v171[32]; // [sp+2F0h] [bp-1044h] BYREF
  int v172; // [sp+310h] [bp-1024h] BYREF
  _BYTE v173[4100]; // [sp+330h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 254);
  v122 = a3 + 16;
  if ( !v3 )
    return v122;
  v4 = *(_DWORD *)(a1 + 396);
  v111 = a2;
  v6 = *(_DWORD *)(a1 + 388);
  v126 = a3;
  v123 = v4;
  v7 = calloc(v4, 8u);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 212);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v123 )
    {
      v66 = *(_DWORD *)(a1 + 240);
      v114 = 0;
      v112 = 0;
      v115 = -150;
      goto LABEL_59;
    }
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v116 = -150;
    v115 = -150;
    v117 = 150;
LABEL_64:
    *(_QWORD *)(v126 + 16) |= 1uLL;
    goto LABEL_33;
  }
  v106 = &g_zc;
  v120 = &g_temp_zc;
  v103 = "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  v9 = (int *)ptr;
  v107 = "check_temperature";
  v121 = "check_temperature, local:%d, remote:%d";
  v10 = (int *)((char *)ptr + 8 * v123);
  v114 = 0;
  v112 = 0;
  v113 = 0;
  v108 = "%s";
  v11 = v6;
  v125 = 0;
  v118 = 0;
  s = "chain";
  v115 = -150;
  v119 = v10;
  v110 = "sensor";
  v116 = -150;
  v105 = &v98;
  v117 = 150;
  v104 = &v97;
  v109 = &v93;
  do
  {
    V_LOCK(v10);
    V_INT((int)&v172, s, *(int *)(a1 + 248));
    v57 = *v9;
    v95 = v9[1];
    v93 = v121;
    v94 = v57;
    v58 = logfmt_raw((int)v173, 0x1000u);
    V_UNLOCK(v58);
    v59 = zlog(*v106, v103, 209, "check_temperature", 17, 36, 20, v173);
    v60 = *v9;
    if ( *v9 == -64 )
    {
      v62 = 0;
      ++v114;
    }
    else
    {
      v61 = v116;
      v62 = 1;
      ++v113;
      if ( v116 < v60 )
        v61 = v60;
      v116 = v61;
      v63 = v117;
      if ( v117 >= v60 )
        v63 = v60;
      v117 = v63;
    }
    v64 = v9[1];
    if ( v64 == -64 )
    {
      ++v114;
      v101 = 0;
    }
    else
    {
      ++v112;
      if ( v115 >= v64 )
        v64 = v115;
      v59 = 1;
      v115 = v64;
      v101 = 1;
    }
    if ( v111 )
    {
      v65 = *(_DWORD *)(v11 + 12);
      if ( v65 )
      {
        if ( v65 == 1 )
        {
          if ( v62 )
            *(_DWORD *)(v111[2] + 4 * v125) = v60;
          if ( v101 )
            *(_DWORD *)(v111[3] + 4 * v125) = v9[1];
          ++v125;
        }
      }
      else
      {
        if ( v62 )
          *(_DWORD *)(*v111 + 4 * v118) = v60;
        if ( v101 )
          *(_DWORD *)(v111[1] + 4 * v118) = v9[1];
        ++v118;
      }
    }
    V_LOCK(v59);
    V_INT((int)v171, s, *(int *)(a1 + 248));
    V_INT((int)v170, v110, *(int *)(v11 + 20));
    if ( v62 )
    {
      V_INT((int)&v162, "pcbtemp", *v9);
      if ( v101 )
        goto LABEL_5;
    }
    else
    {
      V_INT((int)v135, "pcbtemp", -256);
      v162 = v135[0];
      v163 = v135[1];
      v164 = v135[2];
      v165 = v135[3];
      v166 = v135[4];
      v167 = v135[5];
      v168 = v135[6];
      v169 = v135[7];
      if ( v101 )
      {
LABEL_5:
        V_INT((int)&v154, "chiptemp", v9[1]);
        goto LABEL_6;
      }
    }
    V_INT((int)v134, "chiptemp", -256);
    v154 = v134[0];
    v155 = v134[1];
    v156 = v134[2];
    v157 = v134[3];
    v158 = v134[4];
    v159 = v134[5];
    v160 = v134[6];
    v161 = v134[7];
LABEL_6:
    v12 = v105;
    v100 = v107;
    v13 = v155;
    v14 = v156;
    v15 = v157;
    v16 = v104;
    v99 = v108;
    *(_DWORD *)v105 = v154;
    *((_DWORD *)v12 + 1) = v13;
    *((_DWORD *)v12 + 2) = v14;
    *((_DWORD *)v12 + 3) = v15;
    v12 += 16;
    v17 = v159;
    v18 = v160;
    v19 = v161;
    v20 = v109;
    *(_DWORD *)v12 = v158;
    *((_DWORD *)v12 + 1) = v17;
    *((_DWORD *)v12 + 2) = v18;
    *((_DWORD *)v12 + 3) = v19;
    v21 = v163;
    v22 = v164;
    v23 = v165;
    *(_DWORD *)v16 = v162;
    *((_DWORD *)v16 + 1) = v21;
    *((_DWORD *)v16 + 2) = v22;
    *((_DWORD *)v16 + 3) = v23;
    v16 += 16;
    v24 = v167;
    v25 = v168;
    v26 = v169;
    *(_DWORD *)v16 = v166;
    *((_DWORD *)v16 + 1) = v24;
    *((_DWORD *)v16 + 2) = v25;
    *((_DWORD *)v16 + 3) = v26;
    v27 = (const char *)v170[1];
    v28 = (const char *)v170[2];
    v29 = (const char *)v170[3];
    *v20 = (const char *)v170[0];
    v20[1] = v27;
    v20[2] = v28;
    v20[3] = v29;
    v20 += 4;
    v30 = (const char *)v170[5];
    v31 = (const char *)v170[6];
    v32 = (const char *)v170[7];
    *v20 = (const char *)v170[4];
    v20[1] = v30;
    v20[2] = v31;
    v20[3] = v32;
    v33 = logfmt_raw((int)v173, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(*v106, v103, 209, "check_temperature", 17, 92, 20, v173);
    V_LOCK(v34);
    V_INT((int)v153, s, *(int *)(a1 + 248));
    V_INT((int)v152, v110, *(int *)(v11 + 20));
    if ( v62 )
    {
      V_INT((int)&v144, "pcbtemp", *v9);
    }
    else
    {
      V_INT((int)v133, "pcbtemp", -256);
      v144 = v133[0];
      v145 = v133[1];
      v146 = v133[2];
      v147 = v133[3];
      v148 = v133[4];
      v149 = v133[5];
      v150 = v133[6];
      v151 = v133[7];
    }
    if ( v101 )
    {
      V_INT((int)&v136, "chiptemp", v9[1]);
    }
    else
    {
      V_INT((int)v132, "chiptemp", -256);
      v136 = v132[0];
      v137 = v132[1];
      v138 = v132[2];
      v139 = v132[3];
      v140 = v132[4];
      v141 = v132[5];
      v142 = v132[6];
      v143 = v132[7];
    }
    v35 = v105;
    v9 += 2;
    v100 = v107;
    v11 += 24;
    v36 = v137;
    v37 = v138;
    v38 = v139;
    v39 = v104;
    v99 = v108;
    *(_DWORD *)v105 = v136;
    *((_DWORD *)v35 + 1) = v36;
    *((_DWORD *)v35 + 2) = v37;
    *((_DWORD *)v35 + 3) = v38;
    v35 += 16;
    v40 = v141;
    v41 = v142;
    v42 = v143;
    v43 = v109;
    *(_DWORD *)v35 = v140;
    *((_DWORD *)v35 + 1) = v40;
    *((_DWORD *)v35 + 2) = v41;
    *((_DWORD *)v35 + 3) = v42;
    v44 = v145;
    v45 = v146;
    v46 = v147;
    *(_DWORD *)v39 = v144;
    *((_DWORD *)v39 + 1) = v44;
    *((_DWORD *)v39 + 2) = v45;
    *((_DWORD *)v39 + 3) = v46;
    v39 += 16;
    v47 = v149;
    v48 = v150;
    v49 = v151;
    *(_DWORD *)v39 = v148;
    *((_DWORD *)v39 + 1) = v47;
    *((_DWORD *)v39 + 2) = v48;
    *((_DWORD *)v39 + 3) = v49;
    v50 = (const char *)v152[1];
    v51 = (const char *)v152[2];
    v52 = (const char *)v152[3];
    *v43 = (const char *)v152[0];
    v43[1] = v50;
    v43[2] = v51;
    v43[3] = v52;
    v43 += 4;
    v53 = (const char *)v152[5];
    v54 = (const char *)v152[6];
    v55 = (const char *)v152[7];
    *v43 = (const char *)v152[4];
    v43[1] = v53;
    v43[2] = v54;
    v43[3] = v55;
    v56 = logfmt_raw((int)v173, 0x1000u);
    V_UNLOCK(v56);
    v10 = (int *)zlog(*v120, v103, 209, "check_temperature", 17, 94, 40, v173);
  }
  while ( v119 != v9 );
  free(ptr);
  if ( v113 != v123 || v113 != v112 )
    goto LABEL_64;
LABEL_33:
  v66 = *(_DWORD *)(a1 + 240);
  if ( v113 )
  {
    v67 = v66;
    v68 = v116;
    v111[5] = v117;
    dword_300E58[v66] = v68;
    dword_300E58[v66 + 16] = 0;
    goto LABEL_35;
  }
LABEL_59:
  v67 = v66;
  v76 = (char *)&dword_300E58[v66];
  v77 = *((_DWORD *)v76 + 16) + 1;
  *((_DWORD *)v76 + 16) = v77;
  if ( v77 > 2 )
  {
    V_LOCK(v66);
    V_INT((int)v127, "chain", *(int *)(a1 + 248));
    v78 = *(_DWORD *)(a1 + 240);
    v93 = "read no sensor pcb temp exceed limit! (%d)";
    v94 = dword_300E58[v78 + 16];
    v79 = logfmt_raw((int)v173, 0x1000u);
    V_UNLOCK(v79);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      209,
      "update_temperature",
      18,
      335,
      120,
      v173);
    v66 = *(_DWORD *)(a1 + 240);
    v67 = v66;
    *(_QWORD *)(v126 + 16) |= 8uLL;
  }
LABEL_35:
  if ( v112 )
  {
    v111[4] = v115;
    dword_300E58[v67 + 32] = 0;
  }
  else
  {
    v87 = dword_300E58[v67 + 32] + 1;
    dword_300E58[v67 + 32] = v87;
    if ( v87 > 2 )
    {
      V_LOCK(v66);
      V_INT((int)&v128, "chain", *(int *)(a1 + 248));
      v88 = dword_300E58[*(_DWORD *)(a1 + 240) + 32];
      v93 = "read no sensor chip temp exceed limit! (%d)";
      v94 = v88;
      v89 = logfmt_raw((int)v173, 0x1000u);
      V_UNLOCK(v89);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        352,
        120,
        v173);
      v66 = *(_DWORD *)(a1 + 240);
      v67 = v66;
      *(_QWORD *)(v126 + 16) |= 8uLL;
    }
  }
  if ( *(_DWORD *)(a1 + 412) >= v114 )
  {
    dword_300E58[v67 + 48] = 0;
  }
  else
  {
    v69 = dword_300E58[v67 + 48] + 1;
    dword_300E58[v67 + 48] = v69;
    if ( v69 > 2 )
    {
      V_LOCK(v66);
      V_INT((int)v129, "chain", *(int *)(a1 + 248));
      v90 = (char *)&dword_300E58[*(_DWORD *)(a1 + 240)];
      v95 = v114;
      v91 = *((_DWORD *)v90 + 48);
      v93 = "uneffective temp exceed limit (%d), uneffective_value_count = %d!";
      v94 = v91;
      v92 = logfmt_raw((int)v173, 0x1000u);
      V_UNLOCK(v92);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        363,
        120,
        v173);
      v66 = *(_DWORD *)(a1 + 240);
      v67 = v66;
      *(_QWORD *)(v126 + 16) |= 0x10uLL;
    }
  }
  if ( v111[4] > *(_DWORD *)(a1 + 400) || dword_300E58[v66] > *(_DWORD *)(a1 + 404) )
  {
    v80 = dword_300E58[v67 + 64] + 1;
    dword_300E58[v67 + 64] = v80;
    if ( v80 > 2 )
    {
      V_LOCK(v66);
      V_INT((int)&v130, "chain", *(int *)(a1 + 248));
      v81 = *(_DWORD *)(a1 + 240);
      v82 = dword_300E58[v81];
      v83 = dword_300E58[v81 + 64];
      v95 = v111[4];
      v96 = v82;
      v94 = v83;
      v93 = "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!";
      v84 = logfmt_raw((int)v173, 0x1000u);
      V_UNLOCK(v84);
      v85 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              209,
              "update_temperature",
              18,
              378,
              120,
              v173);
      V_LOCK(v85);
      v86 = logfmt_raw((int)v173, 0x1000u);
      V_UNLOCK(v86);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        379,
        100,
        v173);
      v66 = *(_DWORD *)(a1 + 240);
      v67 = v66;
      *(_QWORD *)(v126 + 16) |= 2uLL;
    }
  }
  else
  {
    dword_300E58[v67 + 64] = 0;
  }
  if ( v111[5] <= *(_DWORD *)(a1 + 408) )
  {
    v70 = (char *)&dword_300E58[v67];
    v71 = *((_DWORD *)v70 + 80) + 1;
    *((_DWORD *)v70 + 80) = v71;
    if ( v71 > 2 )
    {
      V_LOCK(v66);
      V_INT((int)v131, "chain", *(int *)(a1 + 248));
      v72 = (char *)&dword_300E58[*(_DWORD *)(a1 + 240)];
      v95 = v111[5];
      v73 = *((_DWORD *)v72 + 80);
      v93 = "low temp exceed limit (%d), min_pcb_temp = %d!";
      v94 = v73;
      v74 = logfmt_raw((int)v173, 0x1000u);
      V_UNLOCK(v74);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        394,
        120,
        v173);
      *(_QWORD *)(v126 + 16) |= 4uLL;
    }
    return v122;
  }
  result = v122;
  dword_300E58[v67 + 80] = 0;
  return result;
}
