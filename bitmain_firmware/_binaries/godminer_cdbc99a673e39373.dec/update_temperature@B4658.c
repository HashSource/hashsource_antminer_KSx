int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  signed int v4; // r4
  int v6; // r5
  void *v7; // r0
  void (__fastcall *v8)(int, void *); // r3
  int *v9; // r6
  char *v10; // r0
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
  int v75; // r0
  int v76; // r0
  int result; // r0
  char *v78; // r2
  int v79; // r3
  int v80; // r6
  int v81; // r0
  int v82; // r3
  int v83; // r6
  int v84; // r8
  int v85; // r6
  int v86; // r0
  int v87; // r0
  int v88; // r0
  int v89; // r3
  int v90; // r8
  int v91; // r0
  char *v92; // lr
  int v93; // r8
  int v94; // r0
  const char *v95; // [sp+20h] [bp-1314h] BYREF
  int v96; // [sp+24h] [bp-1310h]
  int v97; // [sp+28h] [bp-130Ch]
  int v98; // [sp+2Ch] [bp-1308h]
  char v99; // [sp+40h] [bp-12F4h] BYREF
  char v100; // [sp+60h] [bp-12D4h] BYREF
  char *v101; // [sp+80h] [bp-12B4h]
  const char *v102; // [sp+84h] [bp-12B0h]
  int v103; // [sp+88h] [bp-12ACh]
  char *s; // [sp+8Ch] [bp-12A8h]
  const char *v105; // [sp+90h] [bp-12A4h]
  char *v106; // [sp+94h] [bp-12A0h]
  const char *v107; // [sp+98h] [bp-129Ch]
  char *v108; // [sp+9Ch] [bp-1298h]
  int *v109; // [sp+A0h] [bp-1294h]
  const char **v110; // [sp+A4h] [bp-1290h]
  char *v111; // [sp+A8h] [bp-128Ch]
  char *v112; // [sp+ACh] [bp-1288h]
  _DWORD *v113; // [sp+B0h] [bp-1284h]
  int v114; // [sp+B4h] [bp-1280h]
  int v115; // [sp+B8h] [bp-127Ch]
  unsigned int v116; // [sp+BCh] [bp-1278h]
  int v117; // [sp+C0h] [bp-1274h]
  int v118; // [sp+C4h] [bp-1270h]
  int v119; // [sp+C8h] [bp-126Ch]
  int v120; // [sp+CCh] [bp-1268h]
  int *v121; // [sp+D0h] [bp-1264h]
  int *v122; // [sp+D4h] [bp-1260h]
  const char *v123; // [sp+D8h] [bp-125Ch]
  int v124; // [sp+DCh] [bp-1258h]
  signed int v125; // [sp+E0h] [bp-1254h]
  void *ptr; // [sp+E4h] [bp-1250h]
  int v127; // [sp+E8h] [bp-124Ch]
  int v128; // [sp+ECh] [bp-1248h]
  char v129[32]; // [sp+F0h] [bp-1244h] BYREF
  int v130; // [sp+110h] [bp-1224h] BYREF
  char v131[32]; // [sp+130h] [bp-1204h] BYREF
  int v132; // [sp+150h] [bp-11E4h] BYREF
  char v133[32]; // [sp+170h] [bp-11C4h] BYREF
  _DWORD v134[8]; // [sp+190h] [bp-11A4h] BYREF
  _DWORD v135[8]; // [sp+1B0h] [bp-1184h] BYREF
  _DWORD v136[8]; // [sp+1D0h] [bp-1164h] BYREF
  _DWORD v137[8]; // [sp+1F0h] [bp-1144h] BYREF
  int v138; // [sp+210h] [bp-1124h] BYREF
  int v139; // [sp+214h] [bp-1120h]
  int v140; // [sp+218h] [bp-111Ch]
  int v141; // [sp+21Ch] [bp-1118h]
  int v142; // [sp+220h] [bp-1114h]
  int v143; // [sp+224h] [bp-1110h]
  int v144; // [sp+228h] [bp-110Ch]
  int v145; // [sp+22Ch] [bp-1108h]
  int v146; // [sp+230h] [bp-1104h] BYREF
  int v147; // [sp+234h] [bp-1100h]
  int v148; // [sp+238h] [bp-10FCh]
  int v149; // [sp+23Ch] [bp-10F8h]
  int v150; // [sp+240h] [bp-10F4h]
  int v151; // [sp+244h] [bp-10F0h]
  int v152; // [sp+248h] [bp-10ECh]
  int v153; // [sp+24Ch] [bp-10E8h]
  _DWORD v154[8]; // [sp+250h] [bp-10E4h] BYREF
  char v155[32]; // [sp+270h] [bp-10C4h] BYREF
  int v156; // [sp+290h] [bp-10A4h] BYREF
  int v157; // [sp+294h] [bp-10A0h]
  int v158; // [sp+298h] [bp-109Ch]
  int v159; // [sp+29Ch] [bp-1098h]
  int v160; // [sp+2A0h] [bp-1094h]
  int v161; // [sp+2A4h] [bp-1090h]
  int v162; // [sp+2A8h] [bp-108Ch]
  int v163; // [sp+2ACh] [bp-1088h]
  int v164; // [sp+2B0h] [bp-1084h] BYREF
  int v165; // [sp+2B4h] [bp-1080h]
  int v166; // [sp+2B8h] [bp-107Ch]
  int v167; // [sp+2BCh] [bp-1078h]
  int v168; // [sp+2C0h] [bp-1074h]
  int v169; // [sp+2C4h] [bp-1070h]
  int v170; // [sp+2C8h] [bp-106Ch]
  int v171; // [sp+2CCh] [bp-1068h]
  _DWORD v172[8]; // [sp+2D0h] [bp-1064h] BYREF
  char v173[32]; // [sp+2F0h] [bp-1044h] BYREF
  int v174; // [sp+310h] [bp-1024h] BYREF
  _BYTE v175[4100]; // [sp+330h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 238);
  v124 = a3 + 16;
  if ( !v3 )
    return v124;
  v4 = *(_DWORD *)(a1 + 372);
  v113 = a2;
  v6 = *(_DWORD *)(a1 + 364);
  v128 = a3;
  v125 = v4;
  v7 = calloc(v4, 8u);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 212);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v125 )
    {
      v66 = *(_DWORD *)(a1 + 228);
      v116 = 0;
      v114 = 0;
      v117 = -150;
      goto LABEL_59;
    }
    v114 = 0;
    v115 = 0;
    v116 = 0;
    v118 = -150;
    v117 = -150;
    v119 = 150;
LABEL_64:
    *(_QWORD *)(v128 + 16) |= 1uLL;
    goto LABEL_33;
  }
  v109 = &g_zc;
  v122 = &g_temp_zc;
  v105 = "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bu"
         "ild/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  v9 = (int *)ptr;
  v107 = "check_temperature";
  v123 = "check_temperature, local:%d, remote:%d";
  v10 = (char *)ptr + 8 * v125;
  v116 = 0;
  v114 = 0;
  v115 = 0;
  v108 = "%s";
  v11 = v6;
  v127 = 0;
  v120 = 0;
  s = "chain";
  v117 = -150;
  v121 = (int *)v10;
  v112 = "sensor";
  v118 = -150;
  v106 = &v100;
  v119 = 150;
  v111 = &v99;
  v110 = &v95;
  do
  {
    V_LOCK(v10);
    V_INT((int)&v174, s);
    v57 = *v9;
    v97 = v9[1];
    v95 = v123;
    v96 = v57;
    v58 = logfmt_raw((int)v175, 0x1000u);
    V_UNLOCK(v58);
    v59 = zlog(*v109, v105, 209, "check_temperature", 17, 36, 20, v175);
    v60 = *v9;
    if ( *v9 == -64 )
    {
      v62 = 0;
      ++v116;
    }
    else
    {
      v61 = v118;
      v62 = 1;
      ++v115;
      if ( v118 < v60 )
        v61 = v60;
      v118 = v61;
      v63 = v119;
      if ( v119 >= v60 )
        v63 = v60;
      v119 = v63;
    }
    v64 = v9[1];
    if ( v64 == -64 )
    {
      ++v116;
      v103 = 0;
    }
    else
    {
      ++v114;
      if ( v117 >= v64 )
        v64 = v117;
      v59 = 1;
      v117 = v64;
      v103 = 1;
    }
    if ( v113 )
    {
      v65 = *(_DWORD *)(v11 + 12);
      if ( v65 )
      {
        if ( v65 == 1 )
        {
          if ( v62 )
            *(_DWORD *)(v113[2] + 4 * v127) = v60;
          if ( v103 )
            *(_DWORD *)(v113[3] + 4 * v127) = v9[1];
          ++v127;
        }
      }
      else
      {
        if ( v62 )
          *(_DWORD *)(*v113 + 4 * v120) = v60;
        if ( v103 )
          *(_DWORD *)(v113[1] + 4 * v120) = v9[1];
        ++v120;
      }
    }
    V_LOCK(v59);
    V_INT((int)v173, s);
    V_INT((int)v172, v112);
    if ( v62 )
    {
      V_INT((int)&v164, "pcbtemp");
      if ( v103 )
        goto LABEL_5;
    }
    else
    {
      V_INT((int)v137, "pcbtemp");
      v164 = v137[0];
      v165 = v137[1];
      v166 = v137[2];
      v167 = v137[3];
      v168 = v137[4];
      v169 = v137[5];
      v170 = v137[6];
      v171 = v137[7];
      if ( v103 )
      {
LABEL_5:
        V_INT((int)&v156, "chiptemp");
        goto LABEL_6;
      }
    }
    V_INT((int)v136, "chiptemp");
    v156 = v136[0];
    v157 = v136[1];
    v158 = v136[2];
    v159 = v136[3];
    v160 = v136[4];
    v161 = v136[5];
    v162 = v136[6];
    v163 = v136[7];
LABEL_6:
    v12 = v106;
    v102 = v107;
    v13 = v157;
    v14 = v158;
    v15 = v159;
    v16 = v111;
    v101 = v108;
    *(_DWORD *)v106 = v156;
    *((_DWORD *)v12 + 1) = v13;
    *((_DWORD *)v12 + 2) = v14;
    *((_DWORD *)v12 + 3) = v15;
    v12 += 16;
    v17 = v161;
    v18 = v162;
    v19 = v163;
    v20 = v110;
    *(_DWORD *)v12 = v160;
    *((_DWORD *)v12 + 1) = v17;
    *((_DWORD *)v12 + 2) = v18;
    *((_DWORD *)v12 + 3) = v19;
    v21 = v165;
    v22 = v166;
    v23 = v167;
    *(_DWORD *)v16 = v164;
    *((_DWORD *)v16 + 1) = v21;
    *((_DWORD *)v16 + 2) = v22;
    *((_DWORD *)v16 + 3) = v23;
    v16 += 16;
    v24 = v169;
    v25 = v170;
    v26 = v171;
    *(_DWORD *)v16 = v168;
    *((_DWORD *)v16 + 1) = v24;
    *((_DWORD *)v16 + 2) = v25;
    *((_DWORD *)v16 + 3) = v26;
    v27 = (const char *)v172[1];
    v28 = (const char *)v172[2];
    v29 = (const char *)v172[3];
    *v20 = (const char *)v172[0];
    v20[1] = v27;
    v20[2] = v28;
    v20[3] = v29;
    v20 += 4;
    v30 = (const char *)v172[5];
    v31 = (const char *)v172[6];
    v32 = (const char *)v172[7];
    *v20 = (const char *)v172[4];
    v20[1] = v30;
    v20[2] = v31;
    v20[3] = v32;
    v33 = logfmt_raw((int)v175, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(*v109, v105, 209, "check_temperature", 17, 92, 20, v175);
    V_LOCK(v34);
    V_INT((int)v155, s);
    V_INT((int)v154, v112);
    if ( v62 )
    {
      V_INT((int)&v146, "pcbtemp");
    }
    else
    {
      V_INT((int)v135, "pcbtemp");
      v146 = v135[0];
      v147 = v135[1];
      v148 = v135[2];
      v149 = v135[3];
      v150 = v135[4];
      v151 = v135[5];
      v152 = v135[6];
      v153 = v135[7];
    }
    if ( v103 )
    {
      V_INT((int)&v138, "chiptemp");
    }
    else
    {
      V_INT((int)v134, "chiptemp");
      v138 = v134[0];
      v139 = v134[1];
      v140 = v134[2];
      v141 = v134[3];
      v142 = v134[4];
      v143 = v134[5];
      v144 = v134[6];
      v145 = v134[7];
    }
    v35 = v106;
    v9 += 2;
    v102 = v107;
    v11 += 24;
    v36 = v139;
    v37 = v140;
    v38 = v141;
    v39 = v111;
    v101 = v108;
    *(_DWORD *)v106 = v138;
    *((_DWORD *)v35 + 1) = v36;
    *((_DWORD *)v35 + 2) = v37;
    *((_DWORD *)v35 + 3) = v38;
    v35 += 16;
    v40 = v143;
    v41 = v144;
    v42 = v145;
    v43 = v110;
    *(_DWORD *)v35 = v142;
    *((_DWORD *)v35 + 1) = v40;
    *((_DWORD *)v35 + 2) = v41;
    *((_DWORD *)v35 + 3) = v42;
    v44 = v147;
    v45 = v148;
    v46 = v149;
    *(_DWORD *)v39 = v146;
    *((_DWORD *)v39 + 1) = v44;
    *((_DWORD *)v39 + 2) = v45;
    *((_DWORD *)v39 + 3) = v46;
    v39 += 16;
    v47 = v151;
    v48 = v152;
    v49 = v153;
    *(_DWORD *)v39 = v150;
    *((_DWORD *)v39 + 1) = v47;
    *((_DWORD *)v39 + 2) = v48;
    *((_DWORD *)v39 + 3) = v49;
    v50 = (const char *)v154[1];
    v51 = (const char *)v154[2];
    v52 = (const char *)v154[3];
    *v43 = (const char *)v154[0];
    v43[1] = v50;
    v43[2] = v51;
    v43[3] = v52;
    v43 += 4;
    v53 = (const char *)v154[5];
    v54 = (const char *)v154[6];
    v55 = (const char *)v154[7];
    *v43 = (const char *)v154[4];
    v43[1] = v53;
    v43[2] = v54;
    v43[3] = v55;
    v56 = logfmt_raw((int)v175, 0x1000u);
    V_UNLOCK(v56);
    v10 = (char *)zlog(*v122, v105, 209, "check_temperature", 17, 94, 40, v175);
  }
  while ( v9 != v121 );
  free(ptr);
  if ( v115 != v125 || v115 != v114 )
    goto LABEL_64;
LABEL_33:
  v66 = *(_DWORD *)(a1 + 228);
  if ( v115 )
  {
    v67 = v66;
    v68 = v118;
    v113[5] = v119;
    dword_2E1670[v66] = v68;
    dword_2E1670[v66 + 16] = 0;
    goto LABEL_35;
  }
LABEL_59:
  v67 = v66;
  v78 = (char *)&dword_2E1670[v66];
  v79 = *((_DWORD *)v78 + 16) + 1;
  *((_DWORD *)v78 + 16) = v79;
  if ( v79 > 2 )
  {
    V_LOCK(v66);
    V_INT((int)v129, "chain");
    v80 = *(_DWORD *)(a1 + 228);
    v95 = "read no sensor pcb temp exceed limit! (%d)";
    v96 = dword_2E1670[v80 + 16];
    v81 = logfmt_raw((int)v175, 0x1000u);
    V_UNLOCK(v81);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      209,
      "update_temperature",
      18,
      335,
      120,
      v175);
    v66 = *(_DWORD *)(a1 + 228);
    v67 = v66;
    *(_QWORD *)(v128 + 16) |= 8uLL;
  }
LABEL_35:
  if ( v114 )
  {
    v113[4] = v117;
    dword_2E1670[v67 + 32] = 0;
  }
  else
  {
    v89 = dword_2E1670[v67 + 32] + 1;
    dword_2E1670[v67 + 32] = v89;
    if ( v89 > 2 )
    {
      V_LOCK(v66);
      V_INT((int)&v130, "chain");
      v90 = dword_2E1670[*(_DWORD *)(a1 + 228) + 32];
      v95 = "read no sensor chip temp exceed limit! (%d)";
      v96 = v90;
      v91 = logfmt_raw((int)v175, 0x1000u);
      V_UNLOCK(v91);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        352,
        120,
        v175);
      v66 = *(_DWORD *)(a1 + 228);
      v67 = v66;
      *(_QWORD *)(v128 + 16) |= 8uLL;
    }
  }
  if ( *(_DWORD *)(a1 + 388) >= v116 )
  {
    dword_2E1670[v67 + 48] = 0;
  }
  else
  {
    v69 = dword_2E1670[v67 + 48] + 1;
    dword_2E1670[v67 + 48] = v69;
    if ( v69 > 2 )
    {
      V_LOCK(v66);
      V_INT((int)v131, "chain");
      v92 = (char *)&dword_2E1670[*(_DWORD *)(a1 + 228)];
      v97 = v116;
      v93 = *((_DWORD *)v92 + 48);
      v95 = "uneffective temp exceed limit (%d), uneffective_value_count = %d!";
      v96 = v93;
      v94 = logfmt_raw((int)v175, 0x1000u);
      V_UNLOCK(v94);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        363,
        120,
        v175);
      v66 = *(_DWORD *)(a1 + 228);
      v67 = v66;
      *(_QWORD *)(v128 + 16) |= 0x10uLL;
    }
  }
  if ( v113[4] > *(_DWORD *)(a1 + 376) || dword_2E1670[v66] > *(_DWORD *)(a1 + 380) )
  {
    v82 = dword_2E1670[v67 + 64] + 1;
    dword_2E1670[v67 + 64] = v82;
    if ( v82 > 2 )
    {
      V_LOCK(v66);
      V_INT((int)&v132, "chain");
      v83 = *(_DWORD *)(a1 + 228);
      v84 = dword_2E1670[v83];
      v85 = dword_2E1670[v83 + 64];
      v97 = v113[4];
      v98 = v84;
      v96 = v85;
      v95 = "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!";
      v86 = logfmt_raw((int)v175, 0x1000u);
      V_UNLOCK(v86);
      v87 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              209,
              "update_temperature",
              18,
              378,
              120,
              v175);
      V_LOCK(v87);
      v88 = logfmt_raw((int)v175, 0x1000u);
      V_UNLOCK(v88);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        379,
        100,
        v175);
      v66 = *(_DWORD *)(a1 + 228);
      v67 = v66;
      *(_QWORD *)(v128 + 16) |= 2uLL;
    }
  }
  else
  {
    dword_2E1670[v67 + 64] = 0;
  }
  if ( v113[5] <= *(_DWORD *)(a1 + 384) )
  {
    v70 = (char *)&dword_2E1670[v67];
    v71 = *((_DWORD *)v70 + 80) + 1;
    *((_DWORD *)v70 + 80) = v71;
    if ( v71 > 2 )
    {
      V_LOCK(v66);
      V_INT((int)v133, "chain");
      v72 = (char *)&dword_2E1670[*(_DWORD *)(a1 + 228)];
      v97 = v113[5];
      v73 = *((_DWORD *)v72 + 80);
      v95 = "low temp exceed limit (%d), min_pcb_temp = %d!";
      v96 = v73;
      v74 = logfmt_raw((int)v175, 0x1000u);
      V_UNLOCK(v74);
      v75 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              209,
              "update_temperature",
              18,
              394,
              120,
              v175);
      V_LOCK(v75);
      v76 = logfmt_raw((int)v175, 0x1000u);
      V_UNLOCK(v76);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        395,
        100,
        v175);
      *(_QWORD *)(v128 + 16) |= 4uLL;
    }
    return v124;
  }
  result = v124;
  dword_2E1670[v67 + 80] = 0;
  return result;
}
