int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  signed int v4; // r4
  int v6; // r5
  void *v7; // r0
  void (__fastcall *v8)(int, void *); // r3
  int *v9; // r6
  int v10; // r10
  char *v11; // lr
  int v12; // r1
  int v13; // r2
  int v14; // r3
  char *v15; // r11
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int *v19; // r5
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  char *v32; // lr
  int v33; // r1
  int v34; // r2
  int v35; // r3
  char *v36; // r9
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int *v40; // r5
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r3
  int v54; // r2
  int v55; // r8
  int v56; // r2
  int v57; // r2
  int v58; // r2
  int v59; // r0
  int v60; // r1
  int v61; // r12
  int v62; // r3
  _DWORD *v63; // r1
  int v64; // r3
  int result; // r0
  _DWORD *v66; // r2
  int v67; // r3
  int v68; // r3
  int v69; // r3
  int v70; // [sp+20h] [bp-1314h] BYREF
  char v71; // [sp+40h] [bp-12F4h] BYREF
  char v72; // [sp+60h] [bp-12D4h] BYREF
  char *v73; // [sp+80h] [bp-12B4h]
  const char *v74; // [sp+84h] [bp-12B0h]
  int v75; // [sp+88h] [bp-12ACh]
  char *s; // [sp+8Ch] [bp-12A8h]
  const char *v77; // [sp+90h] [bp-12A4h]
  char *v78; // [sp+94h] [bp-12A0h]
  const char *v79; // [sp+98h] [bp-129Ch]
  char *v80; // [sp+9Ch] [bp-1298h]
  int *v81; // [sp+A0h] [bp-1294h]
  int *v82; // [sp+A4h] [bp-1290h]
  char *v83; // [sp+A8h] [bp-128Ch]
  char *v84; // [sp+ACh] [bp-1288h]
  _DWORD *v85; // [sp+B0h] [bp-1284h]
  int v86; // [sp+B4h] [bp-1280h]
  int v87; // [sp+B8h] [bp-127Ch]
  unsigned int v88; // [sp+BCh] [bp-1278h]
  int v89; // [sp+C0h] [bp-1274h]
  int v90; // [sp+C4h] [bp-1270h]
  int v91; // [sp+C8h] [bp-126Ch]
  int v92; // [sp+CCh] [bp-1268h]
  int *v93; // [sp+D0h] [bp-1264h]
  int *v94; // [sp+D4h] [bp-1260h]
  const char *v95; // [sp+D8h] [bp-125Ch]
  int v96; // [sp+DCh] [bp-1258h]
  signed int v97; // [sp+E0h] [bp-1254h]
  void *ptr; // [sp+E4h] [bp-1250h]
  int v99; // [sp+E8h] [bp-124Ch]
  int v100; // [sp+ECh] [bp-1248h]
  _DWORD v101[7]; // [sp+F0h] [bp-1244h] BYREF
  int v102; // [sp+10Ch] [bp-1228h]
  _DWORD v103[7]; // [sp+110h] [bp-1224h] BYREF
  int v104; // [sp+12Ch] [bp-1208h]
  _DWORD v105[7]; // [sp+130h] [bp-1204h] BYREF
  int v106; // [sp+14Ch] [bp-11E8h]
  _DWORD v107[7]; // [sp+150h] [bp-11E4h] BYREF
  int v108; // [sp+16Ch] [bp-11C8h]
  _DWORD v109[7]; // [sp+170h] [bp-11C4h] BYREF
  int v110; // [sp+18Ch] [bp-11A8h]
  _DWORD v111[8]; // [sp+190h] [bp-11A4h] BYREF
  _DWORD v112[8]; // [sp+1B0h] [bp-1184h] BYREF
  _DWORD v113[8]; // [sp+1D0h] [bp-1164h] BYREF
  _DWORD v114[8]; // [sp+1F0h] [bp-1144h] BYREF
  int v115; // [sp+210h] [bp-1124h] BYREF
  int v116; // [sp+214h] [bp-1120h]
  int v117; // [sp+218h] [bp-111Ch]
  int v118; // [sp+21Ch] [bp-1118h]
  int v119; // [sp+220h] [bp-1114h]
  int v120; // [sp+224h] [bp-1110h]
  int v121; // [sp+228h] [bp-110Ch]
  int v122; // [sp+22Ch] [bp-1108h]
  int v123; // [sp+230h] [bp-1104h] BYREF
  int v124; // [sp+234h] [bp-1100h]
  int v125; // [sp+238h] [bp-10FCh]
  int v126; // [sp+23Ch] [bp-10F8h]
  int v127; // [sp+240h] [bp-10F4h]
  int v128; // [sp+244h] [bp-10F0h]
  int v129; // [sp+248h] [bp-10ECh]
  int v130; // [sp+24Ch] [bp-10E8h]
  _DWORD v131[8]; // [sp+250h] [bp-10E4h] BYREF
  _DWORD v132[7]; // [sp+270h] [bp-10C4h] BYREF
  int v133; // [sp+28Ch] [bp-10A8h]
  int v134; // [sp+290h] [bp-10A4h] BYREF
  int v135; // [sp+294h] [bp-10A0h]
  int v136; // [sp+298h] [bp-109Ch]
  int v137; // [sp+29Ch] [bp-1098h]
  int v138; // [sp+2A0h] [bp-1094h]
  int v139; // [sp+2A4h] [bp-1090h]
  int v140; // [sp+2A8h] [bp-108Ch]
  int v141; // [sp+2ACh] [bp-1088h]
  int v142; // [sp+2B0h] [bp-1084h] BYREF
  int v143; // [sp+2B4h] [bp-1080h]
  int v144; // [sp+2B8h] [bp-107Ch]
  int v145; // [sp+2BCh] [bp-1078h]
  int v146; // [sp+2C0h] [bp-1074h]
  int v147; // [sp+2C4h] [bp-1070h]
  int v148; // [sp+2C8h] [bp-106Ch]
  int v149; // [sp+2CCh] [bp-1068h]
  _DWORD v150[8]; // [sp+2D0h] [bp-1064h] BYREF
  _DWORD v151[7]; // [sp+2F0h] [bp-1044h] BYREF
  int v152; // [sp+30Ch] [bp-1028h]
  _DWORD v153[7]; // [sp+310h] [bp-1024h] BYREF
  int v154; // [sp+32Ch] [bp-1008h]
  char v155[4100]; // [sp+330h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 238);
  v96 = a3 + 16;
  if ( !v3 )
    return v96;
  v4 = *(_DWORD *)(a1 + 372);
  v85 = a2;
  v6 = *(_DWORD *)(a1 + 364);
  v100 = a3;
  v97 = v4;
  v7 = calloc(v4, 8u);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 212);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v97 )
    {
      v59 = *(_DWORD *)(a1 + 228);
      v88 = 0;
      v86 = 0;
      v89 = -150;
      goto LABEL_59;
    }
    v86 = 0;
    v87 = 0;
    v88 = 0;
    v90 = -150;
    v89 = -150;
    v91 = 150;
LABEL_64:
    *(_QWORD *)(v100 + 16) |= 1uLL;
    goto LABEL_33;
  }
  v81 = &g_zc;
  v94 = &g_temp_zc;
  v77 = "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  v9 = (int *)ptr;
  v79 = "check_temperature";
  v95 = "check_temperature, local:%d, remote:%d";
  v88 = 0;
  v86 = 0;
  v87 = 0;
  v80 = "%s";
  v10 = v6;
  v99 = 0;
  v92 = 0;
  s = "chain";
  v89 = -150;
  v93 = (int *)((char *)ptr + 8 * v97);
  v84 = "sensor";
  v90 = -150;
  v78 = &v72;
  v91 = 150;
  v83 = &v71;
  v82 = &v70;
  do
  {
    V_LOCK();
    V_INT((int)v153, s, *(int *)(a1 + 232));
    logfmt_raw(
      v155,
      0x1000u,
      0,
      v154,
      v153[0],
      v153[1],
      v153[2],
      v153[3],
      v153[4],
      v153[5],
      v153[6],
      v154,
      v95,
      *v9,
      v9[1]);
    V_UNLOCK();
    zlog(*v81, v77, 209, "check_temperature", 17, 36, 20, v155);
    v53 = *v9;
    if ( *v9 == -64 )
    {
      v55 = 0;
      ++v88;
    }
    else
    {
      v54 = v90;
      v55 = 1;
      ++v87;
      if ( v90 < v53 )
        v54 = v53;
      v90 = v54;
      v56 = v91;
      if ( v91 >= v53 )
        v56 = v53;
      v91 = v56;
    }
    v57 = v9[1];
    if ( v57 == -64 )
    {
      ++v88;
      v75 = 0;
    }
    else
    {
      ++v86;
      if ( v89 >= v57 )
        v57 = v89;
      v89 = v57;
      v75 = 1;
    }
    if ( v85 )
    {
      v58 = *(_DWORD *)(v10 + 12);
      if ( v58 )
      {
        if ( v58 == 1 )
        {
          if ( v55 )
            *(_DWORD *)(v85[2] + 4 * v99) = v53;
          if ( v75 )
            *(_DWORD *)(v85[3] + 4 * v99) = v9[1];
          ++v99;
        }
      }
      else
      {
        if ( v55 )
          *(_DWORD *)(*v85 + 4 * v92) = v53;
        if ( v75 )
          *(_DWORD *)(v85[1] + 4 * v92) = v9[1];
        ++v92;
      }
    }
    V_LOCK();
    V_INT((int)v151, s, *(int *)(a1 + 232));
    V_INT((int)v150, v84, *(int *)(v10 + 20));
    if ( v55 )
    {
      V_INT((int)&v142, "pcbtemp", *v9);
      if ( v75 )
        goto LABEL_5;
    }
    else
    {
      V_INT((int)v114, "pcbtemp", -256);
      v142 = v114[0];
      v143 = v114[1];
      v144 = v114[2];
      v145 = v114[3];
      v146 = v114[4];
      v147 = v114[5];
      v148 = v114[6];
      v149 = v114[7];
      if ( v75 )
      {
LABEL_5:
        V_INT((int)&v134, "chiptemp", v9[1]);
        goto LABEL_6;
      }
    }
    V_INT((int)v113, "chiptemp", -256);
    v134 = v113[0];
    v135 = v113[1];
    v136 = v113[2];
    v137 = v113[3];
    v138 = v113[4];
    v139 = v113[5];
    v140 = v113[6];
    v141 = v113[7];
LABEL_6:
    v11 = v78;
    v74 = v79;
    v12 = v135;
    v13 = v136;
    v14 = v137;
    v15 = v83;
    v73 = v80;
    *(_DWORD *)v78 = v134;
    *((_DWORD *)v11 + 1) = v12;
    *((_DWORD *)v11 + 2) = v13;
    *((_DWORD *)v11 + 3) = v14;
    v11 += 16;
    v16 = v139;
    v17 = v140;
    v18 = v141;
    v19 = v82;
    *(_DWORD *)v11 = v138;
    *((_DWORD *)v11 + 1) = v16;
    *((_DWORD *)v11 + 2) = v17;
    *((_DWORD *)v11 + 3) = v18;
    v20 = v143;
    v21 = v144;
    v22 = v145;
    *(_DWORD *)v15 = v142;
    *((_DWORD *)v15 + 1) = v20;
    *((_DWORD *)v15 + 2) = v21;
    *((_DWORD *)v15 + 3) = v22;
    v15 += 16;
    v23 = v147;
    v24 = v148;
    v25 = v149;
    *(_DWORD *)v15 = v146;
    *((_DWORD *)v15 + 1) = v23;
    *((_DWORD *)v15 + 2) = v24;
    *((_DWORD *)v15 + 3) = v25;
    v26 = v150[1];
    v27 = v150[2];
    v28 = v150[3];
    *v19 = v150[0];
    v19[1] = v26;
    v19[2] = v27;
    v19[3] = v28;
    v19 += 4;
    v29 = v150[5];
    v30 = v150[6];
    v31 = v150[7];
    *v19 = v150[4];
    v19[1] = v29;
    v19[2] = v30;
    v19[3] = v31;
    logfmt_raw(v155, 0x1000u, 0, v152, v151[0], v151[1], v151[2], v151[3], v151[4], v151[5], v151[6], v152);
    V_UNLOCK();
    zlog(*v81, v77, 209, "check_temperature", 17, 92, 20, v155);
    V_LOCK();
    V_INT((int)v132, s, *(int *)(a1 + 232));
    V_INT((int)v131, v84, *(int *)(v10 + 20));
    if ( v55 )
    {
      V_INT((int)&v123, "pcbtemp", *v9);
    }
    else
    {
      V_INT((int)v112, "pcbtemp", -256);
      v123 = v112[0];
      v124 = v112[1];
      v125 = v112[2];
      v126 = v112[3];
      v127 = v112[4];
      v128 = v112[5];
      v129 = v112[6];
      v130 = v112[7];
    }
    if ( v75 )
    {
      V_INT((int)&v115, "chiptemp", v9[1]);
    }
    else
    {
      V_INT((int)v111, "chiptemp", -256);
      v115 = v111[0];
      v116 = v111[1];
      v117 = v111[2];
      v118 = v111[3];
      v119 = v111[4];
      v120 = v111[5];
      v121 = v111[6];
      v122 = v111[7];
    }
    v32 = v78;
    v9 += 2;
    v74 = v79;
    v10 += 24;
    v33 = v116;
    v34 = v117;
    v35 = v118;
    v36 = v83;
    v73 = v80;
    *(_DWORD *)v78 = v115;
    *((_DWORD *)v32 + 1) = v33;
    *((_DWORD *)v32 + 2) = v34;
    *((_DWORD *)v32 + 3) = v35;
    v32 += 16;
    v37 = v120;
    v38 = v121;
    v39 = v122;
    v40 = v82;
    *(_DWORD *)v32 = v119;
    *((_DWORD *)v32 + 1) = v37;
    *((_DWORD *)v32 + 2) = v38;
    *((_DWORD *)v32 + 3) = v39;
    v41 = v124;
    v42 = v125;
    v43 = v126;
    *(_DWORD *)v36 = v123;
    *((_DWORD *)v36 + 1) = v41;
    *((_DWORD *)v36 + 2) = v42;
    *((_DWORD *)v36 + 3) = v43;
    v36 += 16;
    v44 = v128;
    v45 = v129;
    v46 = v130;
    *(_DWORD *)v36 = v127;
    *((_DWORD *)v36 + 1) = v44;
    *((_DWORD *)v36 + 2) = v45;
    *((_DWORD *)v36 + 3) = v46;
    v47 = v131[1];
    v48 = v131[2];
    v49 = v131[3];
    *v40 = v131[0];
    v40[1] = v47;
    v40[2] = v48;
    v40[3] = v49;
    v40 += 4;
    v50 = v131[5];
    v51 = v131[6];
    v52 = v131[7];
    *v40 = v131[4];
    v40[1] = v50;
    v40[2] = v51;
    v40[3] = v52;
    logfmt_raw(v155, 0x1000u, 0, v133, v132[0], v132[1], v132[2], v132[3], v132[4], v132[5], v132[6], v133);
    V_UNLOCK();
    zlog(*v94, v77, 209, "check_temperature", 17, 94, 40, v155);
  }
  while ( v9 != v93 );
  free(ptr);
  if ( v87 != v97 || v87 != v86 )
    goto LABEL_64;
LABEL_33:
  v59 = *(_DWORD *)(a1 + 228);
  if ( v87 )
  {
    v60 = v59;
    v61 = v90;
    v85[5] = v91;
    dword_2E0178[v59] = v61;
    dword_2E0178[v59 + 16] = 0;
    goto LABEL_35;
  }
LABEL_59:
  v60 = v59;
  v66 = &dword_2E0178[v59];
  v67 = v66[16] + 1;
  v66[16] = v67;
  if ( v67 > 2 )
  {
    V_LOCK();
    V_INT((int)v101, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v155,
      0x1000u,
      0,
      v102,
      v101[0],
      v101[1],
      v101[2],
      v101[3],
      v101[4],
      v101[5],
      v101[6],
      v102,
      "read no sensor pcb temp exceed limit! (%d)",
      dword_2E0178[*(_DWORD *)(a1 + 228) + 16]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      209,
      "update_temperature",
      18,
      335,
      120,
      v155);
    v59 = *(_DWORD *)(a1 + 228);
    v60 = v59;
    *(_QWORD *)(v100 + 16) |= 8uLL;
  }
LABEL_35:
  if ( v86 )
  {
    v85[4] = v89;
    dword_2E0178[v60 + 32] = 0;
  }
  else
  {
    v69 = dword_2E0178[v60 + 32] + 1;
    dword_2E0178[v60 + 32] = v69;
    if ( v69 > 2 )
    {
      V_LOCK();
      V_INT((int)v103, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v155,
        0x1000u,
        v86,
        v104,
        v103[0],
        v103[1],
        v103[2],
        v103[3],
        v103[4],
        v103[5],
        v103[6],
        v104,
        "read no sensor chip temp exceed limit! (%d)",
        dword_2E0178[*(_DWORD *)(a1 + 228) + 32]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        352,
        120,
        v155);
      v59 = *(_DWORD *)(a1 + 228);
      v60 = v59;
      *(_QWORD *)(v100 + 16) |= 8uLL;
    }
  }
  if ( *(_DWORD *)(a1 + 388) >= v88 )
  {
    dword_2E0178[v60 + 48] = 0;
  }
  else
  {
    v62 = dword_2E0178[v60 + 48] + 1;
    dword_2E0178[v60 + 48] = v62;
    if ( v62 > 2 )
    {
      V_LOCK();
      V_INT((int)v105, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v155,
        0x1000u,
        0,
        v106,
        v105[0],
        v105[1],
        v105[2],
        v105[3],
        v105[4],
        v105[5],
        v105[6],
        v106,
        "uneffective temp exceed limit (%d), uneffective_value_count = %d!",
        dword_2E0178[*(_DWORD *)(a1 + 228) + 48],
        v88);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        363,
        120,
        v155);
      v59 = *(_DWORD *)(a1 + 228);
      v60 = v59;
      *(_QWORD *)(v100 + 16) |= 0x10uLL;
    }
  }
  if ( v85[4] > *(_DWORD *)(a1 + 376) || dword_2E0178[v59] > *(_DWORD *)(a1 + 380) )
  {
    v68 = dword_2E0178[v60 + 64] + 1;
    dword_2E0178[v60 + 64] = v68;
    if ( v68 > 2 )
    {
      V_LOCK();
      V_INT((int)v107, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v155,
        0x1000u,
        0,
        v108,
        v107[0],
        v107[1],
        v107[2],
        v107[3],
        v107[4],
        v107[5],
        v107[6],
        v108,
        "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!",
        dword_2E0178[*(_DWORD *)(a1 + 228) + 64],
        v85[4],
        dword_2E0178[*(_DWORD *)(a1 + 228)]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        378,
        120,
        v155);
      V_LOCK();
      logfmt_raw(v155, 0x1000u, 0, "Sweep error string = %s.", "P:1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        379,
        100,
        v155);
      v60 = *(_DWORD *)(a1 + 228);
      *(_QWORD *)(v100 + 16) |= 2uLL;
    }
  }
  else
  {
    dword_2E0178[v60 + 64] = 0;
  }
  if ( v85[5] <= *(_DWORD *)(a1 + 384) )
  {
    v63 = &dword_2E0178[v60];
    v64 = v63[80] + 1;
    v63[80] = v64;
    if ( v64 > 2 )
    {
      V_LOCK();
      V_INT((int)v109, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v155,
        0x1000u,
        0,
        v110,
        v109[0],
        v109[1],
        v109[2],
        v109[3],
        v109[4],
        v109[5],
        v109[6],
        v110,
        "low temp exceed limit (%d), min_pcb_temp = %d!",
        dword_2E0178[*(_DWORD *)(a1 + 228) + 80],
        v85[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        394,
        120,
        v155);
      V_LOCK();
      logfmt_raw(v155, 0x1000u, 0, "Sweep error string = %s.", "P:2");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        209,
        "update_temperature",
        18,
        395,
        100,
        v155);
      *(_QWORD *)(v100 + 16) |= 4uLL;
    }
    return v96;
  }
  result = v96;
  dword_2E0178[v60 + 80] = 0;
  return result;
}
