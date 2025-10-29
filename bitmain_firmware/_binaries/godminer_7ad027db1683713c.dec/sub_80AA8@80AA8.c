int __fastcall sub_80AA8(_DWORD *a1, int a2)
{
  signed int v3; // r5
  _DWORD *v4; // r4
  char *v5; // r0
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  int v9; // r7
  float v10; // s20
  float v11; // s18
  float v12; // s16
  unsigned int v13; // s22
  char *all_created_runtime; // r4
  __int64 v15; // d12
  _DWORD *v16; // r4
  _DWORD *v17; // r0
  char *v18; // r0
  double v19; // d10
  double v20; // d8
  float v21; // s0
  float v22; // s24
  double v23; // d11
  __int64 v24; // r0
  _DWORD *v25; // r0
  double v26; // d9
  bool v27; // cc
  double v28; // d8
  __int64 v29; // r0
  double v30; // r0
  double v31; // d16
  double *v32; // r0
  bool v33; // cc
  double v34; // d9
  __int64 v35; // r0
  double *v36; // r0
  __int64 v37; // r0
  double *v38; // r0
  __int64 v39; // r0
  double *v40; // r0
  _DWORD *v41; // r0
  _DWORD *v42; // r0
  int *v43; // r3
  __int64 v44; // r0
  int v45; // r2
  _DWORD *v46; // r0
  _DWORD *v47; // r0
  int v48; // r6
  int v49; // r5
  int v50; // t1
  _DWORD *v51; // r0
  signed int v52; // r0
  char *v53; // r1
  unsigned int v54; // r3
  signed int v55; // lr
  __int64 v56; // d16
  __int64 v57; // d10
  _DWORD *v58; // r0
  char *v59; // r5
  int v60; // r10
  int v61; // r11
  int *v62; // r0
  int v63; // r9
  int v64; // r3
  int v65; // r8
  _DWORD *v66; // r0
  int *v67; // r0
  int v68; // r2
  int v69; // r8
  _DWORD *v70; // r0
  size_t *v71; // r8
  char *v72; // r7
  int v73; // r5
  int v74; // t1
  int v75; // r1
  size_t v76; // t1
  char *v77; // r0
  char *v78; // r7
  char *v79; // r5
  int v80; // r6
  int v81; // t1
  char *v82; // r0
  char *v83; // r7
  char *v84; // r5
  int v85; // r6
  int v86; // t1
  char *v87; // r0
  char *v88; // r8
  char *v89; // r5
  int v90; // r6
  int v91; // t1
  char *v92; // r0
  _DWORD *v93; // r0
  char *v94; // r7
  int v95; // r5
  char *v96; // r9
  char *v97; // r8
  const char **v98; // r6
  int v99; // t1
  _DWORD *v100; // r0
  int v101; // r5
  int v102; // t1
  char *v103; // r0
  __int64 v104; // d10
  char *v105; // r8
  char *v106; // r6
  int v107; // r5
  int v108; // t1
  _DWORD *v109; // r0
  __int64 v110; // r0
  _DWORD *v111; // r0
  char *v112; // r7
  int v113; // r6
  char *v114; // r9
  char *v115; // r8
  char *v116; // r5
  int v117; // t1
  double *v118; // r0
  int v119; // r6
  int v120; // t1
  char *v121; // r0
  char *v122; // r5
  char *v123; // r8
  int v124; // r6
  int v125; // t1
  _DWORD *v126; // r0
  char *v127; // r0
  char *v128; // r0
  _DWORD *v129; // r0
  char *v131; // r8
  char *v132; // r0
  char *v133; // r4
  char *v134; // r6
  int v135; // t1
  __int64 v136; // r0
  double *v137; // r0
  __int64 v138; // r0
  double *v139; // r0
  __int64 v140; // r0
  char *v141; // [sp+10h] [bp-1234h]
  int v142; // [sp+18h] [bp-122Ch]
  int *v143; // [sp+1Ch] [bp-1228h]
  char *ptr; // [sp+2Ch] [bp-1218h]
  int v146; // [sp+34h] [bp-1210h]
  _DWORD *v147; // [sp+38h] [bp-120Ch]
  int v148; // [sp+48h] [bp-11FCh] BYREF
  int v149; // [sp+4Ch] [bp-11F8h] BYREF
  int v150; // [sp+50h] [bp-11F4h] BYREF
  int v151; // [sp+54h] [bp-11F0h] BYREF
  double v152; // [sp+58h] [bp-11ECh] BYREF
  char v153[12]; // [sp+64h] [bp-11E0h] BYREF
  _QWORD v154[2]; // [sp+70h] [bp-11D4h] BYREF
  __int64 v155; // [sp+80h] [bp-11C4h] BYREF
  __int64 v156; // [sp+88h] [bp-11BCh]
  double v157; // [sp+90h] [bp-11B4h]
  double v158; // [sp+98h] [bp-11ACh]
  char v159[32]; // [sp+A0h] [bp-11A4h] BYREF
  char v160[32]; // [sp+C0h] [bp-1184h] BYREF
  char v161[32]; // [sp+E0h] [bp-1164h] BYREF
  char v162[32]; // [sp+100h] [bp-1144h] BYREF
  char v163[4]; // [sp+120h] [bp-1124h] BYREF
  char s[256]; // [sp+140h] [bp-1104h] BYREF
  char v165[4]; // [sp+240h] [bp-1004h] BYREF
  int v166; // [sp+244h] [bp-1000h]
  int v167; // [sp+248h] [bp-FFCh]
  float v168; // [sp+24Ch] [bp-FF8h]
  float v169; // [sp+250h] [bp-FF4h]
  float v170; // [sp+254h] [bp-FF0h]
  float v171; // [sp+258h] [bp-FECh]
  double v172; // [sp+260h] [bp-FE4h]

  v3 = a1 == 0;
  memset(v154, 0, sizeof(v154));
  v157 = 0.0;
  v155 = 0;
  v156 = 0;
  v158 = 0.0;
  memset(s, 0, sizeof(s));
  v148 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v165, 0x1000u, 0, "%s: input bad api param", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_stats_old",
      13,
      1400,
      100,
      v165);
    return -2147483646;
  }
  else
  {
    sub_7D134(a1, 1, 70, *(_DWORD *)(a2 + 8));
    v147 = json_array();
    v4 = json_object();
    v5 = BUFX_strdup("2.12");
    json_object_set_new(v4, "BMMiner", v5);
    v6 = BUFX_strdup(g_miner_version);
    json_object_set_new(v4, "Miner", v6);
    v7 = BUFX_strdup(g_miner_compiletime);
    json_object_set_new(v4, "CompileTime", v7);
    v8 = BUFX_strdup(g_miner_type);
    json_object_set_new(v4, "Type", v8);
    json_array_append_new(v147, v4);
    read_system_status_from_monitor((int)v165);
    v9 = v166;
    v10 = v168;
    v11 = v170;
    v12 = v171;
    v13 = LODWORD(v172);
    all_created_runtime = (char *)get_all_created_runtime(&v148);
    v146 = frontend_runtime_instance();
    if ( v148 > 0 )
    {
      v15 = 0;
      v143 = (int *)malloc(216 * v148);
      v131 = (char *)v143;
      v132 = (char *)malloc(4 * v148);
      ptr = v132;
      if ( v148 > 0 )
      {
        v133 = all_created_runtime - 4;
        v134 = v132 - 4;
        do
        {
          v135 = *((_DWORD *)v133 + 1);
          v133 += 4;
          read_status_from_monitor(v131, v135);
          ++v3;
          v131 += 216;
          v27 = v148 <= v3;
          *((_DWORD *)v134 + 1) = *(_DWORD *)(*(_DWORD *)v133 + 232) + 1;
          v134 += 4;
        }
        while ( !v27 );
        v15 = vshrd_n_s64(vdup_n_s32(v3).n64_i64[0], 0x20u);
      }
    }
    else
    {
      v15 = 0;
      ptr = 0;
      v143 = 0;
    }
    v16 = json_object();
    v17 = json_integer(v15);
    json_object_set_new(v16, "STATS", v17);
    snprintf((char *)v154, 0x10u, "BTM_SOC%d", v3);
    v18 = BUFX_strdup((char *)v154);
    json_object_set_new(v16, "ID", v18);
    v19 = v10;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v146 + 72) + 16), v159);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v146 + 72) + 16), v160);
    v20 = v12;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v146 + 72) + 16), v161);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v146 + 72) + 16), v162);
    format_hashrate_double(*(const char **)(*(_DWORD *)(v146 + 72) + 16), &v152, v153);
    v22 = v169;
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v23 = COERCE_DOUBLE(__PAIR64__(v13, v13));
    v21 = *(float *)&v23;
    LODWORD(v24) = sub_25A644(LODWORD(v23), SHIDWORD(v23));
    v25 = json_integer(v24);
    json_object_set_new(v16, "Elapsed", v25);
    v26 = v11 * v23;
    v27 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v27 = (unsigned int)(opt_algo - 6) > 1;
    v28 = v20 * v23;
    if ( v27 )
    {
      LODWORD(v136) = sub_25A644(
                        COERCE_UNSIGNED_INT64(v19 * v23 * 100.0),
                        HIDWORD(COERCE_UNSIGNED_INT64(v19 * v23 * 100.0)));
      sub_25A788(v136);
      v137 = json_real();
      json_object_set_new(v16, "GHS 5s", v137);
      LODWORD(v138) = sub_25A644(COERCE_UNSIGNED_INT64(v28 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v28 * 100.0)));
      sub_25A788(v138);
      v139 = json_real();
      json_object_set_new(v16, "GHS av", v139);
      LODWORD(v140) = sub_25A644(COERCE_UNSIGNED_INT64(v26 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v26 * 100.0)));
      sub_25A788(v140);
    }
    else
    {
      LODWORD(v29) = sub_25A644(
                       COERCE_UNSIGNED_INT64(v22 * v23 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(v22 * v23 * 100.0)));
      LODWORD(v30) = sub_25A788(v29);
      v31 = v30;
      v32 = json_real();
      json_object_set_new(v16, "GHS 5s", v32);
      v33 = *((float *)&v23 + 1) <= *(float *)&v23;
      if ( *((float *)&v23 + 1) <= *(float *)&v23 )
      {
        v23 = *(float *)&v23;
        v28 = v21 * v28;
      }
      else
      {
        v31 = *((float *)&v23 + 1);
      }
      if ( v33 )
      {
        v34 = v23 * v26;
      }
      else
      {
        v28 = v31 * v28;
        v34 = v31 * v26;
      }
      LODWORD(v35) = sub_25A644(COERCE_UNSIGNED_INT64(v28 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v28 * 100.0)));
      sub_25A788(v35);
      v36 = json_real();
      json_object_set_new(v16, "GHS av", v36);
      LODWORD(v37) = sub_25A644(COERCE_UNSIGNED_INT64(v34 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v34 * 100.0)));
      sub_25A788(v37);
    }
    v38 = json_real();
    json_object_set_new(v16, "rate_30m", v38);
    LODWORD(v39) = sub_25A644(COERCE_UNSIGNED_INT64(v152 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v152 * 100.0)));
    sub_25A788(v39);
    v40 = json_real();
    json_object_set_new(v16, "total_rateideal", v40);
    v41 = json_integer(opt_bitmain_work_mode);
    json_object_set_new(v16, "Mode", v41);
    v42 = json_integer(v148);
    json_object_set_new(v16, "miner_count", v42);
    if ( v148 <= 0 )
    {
      v44 = 0x7FFFFFFF;
    }
    else
    {
      v43 = v143;
      LODWORD(v44) = 0x7FFFFFFF;
      do
      {
        v45 = v43[18];
        v43 += 54;
        if ( (int)v44 >= v45 )
          LODWORD(v44) = v45;
      }
      while ( &v143[54 * v148] != v43 );
      v44 = (int)v44;
    }
    v46 = json_integer(v44);
    json_object_set_new(v16, "frequency", v46);
    v47 = json_integer(v9);
    json_object_set_new(v16, "fan_num", v47);
    if ( v9 > 0 )
    {
      v48 = v167 - 4;
      v49 = 0;
      do
      {
        ++v49;
        v155 = 0;
        v156 = 0;
        v157 = 0.0;
        v158 = 0.0;
        snprintf((char *)&v155, 0x20u, "fan%d", v49);
        v50 = *(_DWORD *)(v48 + 4);
        v48 += 4;
        v51 = json_integer(v50);
        json_object_set_new(v16, (char *)&v155, v51);
      }
      while ( v49 != v9 );
    }
    if ( v148 <= 0 )
    {
      v56 = 0;
      v57 = -100;
    }
    else
    {
      v52 = -100;
      v53 = (char *)v143;
      LOBYTE(v54) = 0;
      do
      {
        v55 = *((_DWORD *)v53 + 4);
        v53 += 216;
        if ( v52 < v55 )
          v52 = v55;
        v54 = (unsigned __int8)(v54 + *(v53 - 192) + *(v53 - 188));
      }
      while ( v53 != (char *)&v143[54 * v148] );
      v56 = vshrd_n_u64(vdup_n_s8(v54).n64_u64[0], 0x38u);
      v57 = vshrd_n_s64(vdup_n_s32(v52).n64_i64[0], 0x20u);
    }
    v58 = json_integer(v56);
    json_object_set_new(v16, "temp_num", v58);
    if ( v148 > 0 )
    {
      v59 = (char *)v143;
      v60 = 0;
      v141 = ptr - 4;
      do
      {
        v61 = *((_DWORD *)v59 + 6);
        v62 = *(int **)v59;
        v149 = 0;
        ++v60;
        v150 = 0;
        v151 = 0;
        v59 += 216;
        *(_DWORD *)v163 = 0;
        find_min_and_max_int(v62, v61, &v149, &v150);
        v63 = *((_DWORD *)v59 - 47);
        find_min_and_max_int(*((int **)v59 - 52), v63, &v151, v163);
        v64 = *(_DWORD *)v163;
        v65 = *((_DWORD *)v141 + 1);
        if ( *(int *)v163 < v150 )
          v64 = v150;
        v141 += 4;
        v142 = v64;
        sprintf((char *)&v155, "temp%d", v65);
        v66 = json_integer(v142);
        json_object_set_new(v16, (char *)&v155, v66);
        v67 = (int *)*((_DWORD *)v59 - 53);
        *(_DWORD *)v163 = 0;
        v151 = 0;
        v150 = 0;
        v149 = 0;
        find_min_and_max_int(v67, v61, &v149, &v150);
        find_min_and_max_int(*((int **)v59 - 51), v63, &v151, v163);
        v68 = v65;
        if ( *(int *)v163 < v150 )
          v69 = v150;
        else
          v69 = *(_DWORD *)v163;
        sprintf((char *)&v155, "temp2_%d", v68);
        v70 = json_integer(v69);
        json_object_set_new(v16, (char *)&v155, v70);
      }
      while ( v148 > v60 );
      v71 = (size_t *)v143;
      if ( v148 > 0 )
      {
        v72 = ptr - 4;
        v73 = 0;
        do
        {
          v155 = 0;
          v156 = 0;
          ++v73;
          v157 = 0.0;
          v158 = 0.0;
          memset(s, 0, sizeof(s));
          v74 = *((_DWORD *)v72 + 1);
          v72 += 4;
          snprintf((char *)&v155, 0x20u, "temp_in_pcb_%d", v74);
          v75 = v71[6];
          v76 = *v71;
          v71 += 54;
          sub_7D5FC(v76, v75, s);
          v77 = BUFX_strdup(s);
          json_object_set_new(v16, (char *)&v155, v77);
        }
        while ( v148 > v73 );
        if ( v148 > 0 )
        {
          v78 = ptr - 4;
          v79 = (char *)v143;
          v80 = 0;
          do
          {
            v155 = 0;
            v156 = 0;
            ++v80;
            v79 += 216;
            v157 = 0.0;
            v158 = 0.0;
            memset(s, 0, sizeof(s));
            v81 = *((_DWORD *)v78 + 1);
            v78 += 4;
            snprintf((char *)&v155, 0x20u, "temp_out_pcb_%d", v81);
            sub_7D5FC(*((_DWORD *)v79 - 52), *((_DWORD *)v79 - 47), s);
            v82 = BUFX_strdup(s);
            json_object_set_new(v16, (char *)&v155, v82);
          }
          while ( v148 > v80 );
          if ( v148 > 0 )
          {
            v83 = ptr - 4;
            v84 = (char *)v143;
            v85 = 0;
            do
            {
              v155 = 0;
              v156 = 0;
              ++v85;
              v84 += 216;
              v157 = 0.0;
              v158 = 0.0;
              memset(s, 0, sizeof(s));
              v86 = *((_DWORD *)v83 + 1);
              v83 += 4;
              snprintf((char *)&v155, 0x20u, "temp_in_chip_%d", v86);
              sub_7D5FC(*((_DWORD *)v84 - 53), *((_DWORD *)v84 - 48), s);
              v87 = BUFX_strdup(s);
              json_object_set_new(v16, (char *)&v155, v87);
            }
            while ( v148 > v85 );
            if ( v148 > 0 )
            {
              v88 = ptr - 4;
              v89 = (char *)v143;
              v90 = 0;
              do
              {
                v155 = 0;
                v156 = 0;
                ++v90;
                v89 += 216;
                v157 = 0.0;
                v158 = 0.0;
                memset(s, 0, sizeof(s));
                v91 = *((_DWORD *)v88 + 1);
                v88 += 4;
                snprintf((char *)&v155, 0x20u, "temp_out_chip_%d", v91);
                sub_7D5FC(*((_DWORD *)v89 - 52), *((_DWORD *)v89 - 47), s);
                v92 = BUFX_strdup(s);
                json_object_set_new(v16, (char *)&v155, v92);
              }
              while ( v148 > v90 );
            }
          }
        }
      }
    }
    v93 = json_integer(v57);
    json_object_set_new(v16, "temp_max", v93);
    if ( v148 <= 0 )
      goto LABEL_83;
    v94 = (char *)v143;
    v95 = 0;
    v96 = ptr - 4;
    v97 = ptr - 4;
    v98 = (const char **)v143;
    do
    {
      v99 = *((_DWORD *)v96 + 1);
      v96 += 4;
      v155 = 0;
      v156 = 0;
      ++v95;
      v94 += 216;
      v157 = 0.0;
      v158 = 0.0;
      snprintf((char *)&v155, 0x20u, "chain_acn%d", v99);
      v100 = json_integer(*((int *)v94 - 38));
      json_object_set_new(v16, (char *)&v155, v100);
    }
    while ( v148 > v95 );
    if ( v148 <= 0 )
      goto LABEL_83;
    v101 = 0;
    do
    {
      v102 = *((_DWORD *)v97 + 1);
      v97 += 4;
      ++v101;
      v98 += 54;
      sprintf(v163, "chain_acs%d", v102);
      v155 = 0;
      v156 = 0;
      v157 = 0.0;
      v158 = 0.0;
      memset(s, 0, sizeof(s));
      snprintf((char *)&v155, 0x20u, "chain_acs%d", v102);
      snprintf(s, 0x100u, "%s", *(v98 - 37));
      v103 = BUFX_strdup(s);
      json_object_set_new(v16, (char *)&v155, v103);
    }
    while ( v148 > v101 );
    if ( v148 <= 0 )
    {
LABEL_83:
      v104 = 0;
    }
    else
    {
      v104 = 0;
      v105 = ptr - 4;
      v106 = (char *)v143;
      v107 = 0;
      do
      {
        v108 = *((_DWORD *)v105 + 1);
        v105 += 4;
        v155 = 0;
        v156 = 0;
        ++v107;
        v106 += 216;
        v157 = 0.0;
        v158 = 0.0;
        snprintf((char *)&v155, 0x20u, "chain_hw%d", v108);
        v104 += *((_QWORD *)v106 - 17);
        v109 = json_integer(*((_QWORD *)v106 - 17));
        json_object_set_new(v16, (char *)&v155, v109);
      }
      while ( v148 > v107 );
    }
    if ( opt_algo == 9 )
      LODWORD(v110) = sub_25A4F8(v104, HIDWORD(v104), 0x3E8u);
    else
      v110 = v104;
    v111 = json_integer(v110);
    json_object_set_new(v16, "no_matching_work", v111);
    if ( v148 > 0 )
    {
      v112 = (char *)v143;
      v113 = 0;
      v114 = ptr - 4;
      v115 = ptr - 4;
      v116 = (char *)v143;
      do
      {
        v117 = *((_DWORD *)v114 + 1);
        v114 += 4;
        v155 = 0;
        v156 = 0;
        ++v113;
        v112 += 216;
        v157 = 0.0;
        v158 = 0.0;
        snprintf((char *)&v155, 0x20u, "chain_rate%d", v117);
        v118 = json_real();
        json_object_set_new(v16, (char *)&v155, v118);
      }
      while ( v148 > v113 );
      if ( v148 > 0 )
      {
        v119 = 0;
        do
        {
          ++v119;
          v116 += 216;
          format_hashrate_string(*(const char **)(*(_DWORD *)(v146 + 72) + 16), v163);
          v120 = *((_DWORD *)v115 + 1);
          v115 += 4;
          snprintf((char *)&v155, 0x20u, "CHAIN AVG HASHRATE%d", v120);
          v121 = BUFX_strdup(v163);
          json_object_set_new(v16, (char *)&v155, v121);
        }
        while ( v148 > v119 );
        if ( v148 > 0 )
        {
          v122 = ptr - 4;
          v123 = (char *)v143;
          v124 = 0;
          do
          {
            v125 = *((_DWORD *)v122 + 1);
            v122 += 4;
            v155 = 0;
            v156 = 0;
            ++v124;
            v123 += 216;
            v157 = 0.0;
            v158 = 0.0;
            snprintf((char *)&v155, 0x20u, "freq%d", v125);
            v126 = json_integer(*((int *)v123 - 36));
            json_object_set_new(v16, (char *)&v155, v126);
          }
          while ( v148 > v124 );
        }
      }
    }
    v127 = BUFX_strdup(g_miner_version);
    json_object_set_new(v16, "miner_version", v127);
    v128 = BUFX_strdup(0);
    json_object_set_new(v16, "miner_id", v128);
    json_array_append_new(v147, v16);
    json_object_set_new(a1, "STATS", v147);
    v129 = json_integer(1);
    json_object_set_new(a1, "id", v129);
    if ( v148 > 0 )
    {
      free(ptr);
      free(v143);
    }
    return 0;
  }
}
