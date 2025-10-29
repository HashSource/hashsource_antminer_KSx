int __fastcall sub_81088(int a1, int a2)
{
  signed int v3; // r5
  void *v4; // r0
  int v5; // r0
  __int64 v6; // r0
  int v7; // r6
  int v8; // r2
  int v9; // r3
  int v10; // r4
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r7
  float v16; // s20
  float v17; // s18
  float v18; // s16
  unsigned int v19; // s22
  int all_created_runtime; // r4
  char *status_from_monitor; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  __int64 v25; // d12
  int v26; // r4
  int v27; // r0
  int v28; // r0
  double v29; // d10
  double v30; // d8
  float v31; // s0
  float v32; // s24
  double v33; // d11
  __int64 v34; // r0
  int v35; // r0
  double v36; // d9
  bool v37; // cc
  double v38; // d8
  __int64 v39; // r0
  double v40; // d16
  int v41; // r0
  bool v42; // cc
  double v43; // d9
  __int64 v44; // r0
  int v45; // r0
  int v46; // r0
  __int64 v47; // r0
  int v48; // r0
  int v49; // r0
  __int64 v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  _DWORD *v55; // r3
  int v56; // r0
  int v57; // r2
  int v58; // r1
  int v59; // r0
  int v60; // r0
  int v61; // r6
  int v62; // r5
  int v63; // t1
  int v64; // r0
  signed int v65; // r0
  _DWORD *v66; // r1
  unsigned int v67; // r3
  signed int v68; // lr
  unsigned __int64 v69; // d16
  __int64 v70; // d10
  int v71; // r0
  int *v72; // r5
  int v73; // r10
  int v74; // r11
  int v75; // r0
  int v76; // r9
  int v77; // r3
  int v78; // r8
  int v79; // r0
  int v80; // r0
  int v81; // r2
  int v82; // r8
  int v83; // r0
  int *v84; // r8
  char *v85; // r7
  int v86; // r5
  int v87; // t1
  int v88; // r1
  int v89; // t1
  int v90; // r0
  char *v91; // r7
  _DWORD *v92; // r5
  int v93; // r6
  int v94; // t1
  int v95; // r0
  char *v96; // r7
  _DWORD *v97; // r5
  int v98; // r6
  int v99; // t1
  int v100; // r0
  char *v101; // r8
  _DWORD *v102; // r5
  int v103; // r6
  int v104; // t1
  int v105; // r0
  int v106; // r0
  _DWORD *v107; // r7
  int v108; // r5
  char *v109; // r9
  char *v110; // r8
  _DWORD *v111; // r6
  int v112; // t1
  int v113; // r0
  int v114; // r5
  int v115; // t1
  int v116; // r0
  __int64 v117; // d10
  char *v118; // r8
  _DWORD *v119; // r6
  int v120; // r5
  int v121; // t1
  int v122; // r0
  __int64 v123; // r0
  int v124; // r0
  _DWORD *v125; // r7
  int v126; // r6
  char *v127; // r9
  char *v128; // r8
  _DWORD *v129; // r5
  int v130; // t1
  int v131; // r0
  int v132; // r0
  int v133; // r6
  int v134; // t1
  int v135; // r0
  char *v136; // r5
  _DWORD *v137; // r8
  int v138; // r6
  int v139; // t1
  int v140; // r0
  int v141; // r0
  int v142; // r0
  int v143; // r0
  _DWORD *v145; // r8
  _DWORD *v146; // r4
  char *v147; // r6
  int v148; // t1
  __int64 v149; // r0
  int v150; // r0
  int v151; // r0
  __int64 v152; // r0
  int v153; // r0
  int v154; // r0
  __int64 v155; // r0
  int v156; // r0
  char *v157; // [sp+10h] [bp-1234h]
  int v158; // [sp+18h] [bp-122Ch]
  _DWORD *v159; // [sp+1Ch] [bp-1228h]
  char *ptr; // [sp+2Ch] [bp-1218h]
  char *v162; // [sp+34h] [bp-1210h]
  int v163; // [sp+38h] [bp-120Ch]
  int v164; // [sp+48h] [bp-11FCh] BYREF
  int v165; // [sp+4Ch] [bp-11F8h] BYREF
  int v166; // [sp+50h] [bp-11F4h] BYREF
  int v167; // [sp+54h] [bp-11F0h] BYREF
  double v168; // [sp+58h] [bp-11ECh] BYREF
  char v169[12]; // [sp+64h] [bp-11E0h] BYREF
  _QWORD v170[2]; // [sp+70h] [bp-11D4h] BYREF
  __int64 v171; // [sp+80h] [bp-11C4h] BYREF
  __int64 v172; // [sp+88h] [bp-11BCh]
  double v173; // [sp+90h] [bp-11B4h]
  double v174; // [sp+98h] [bp-11ACh]
  char v175[32]; // [sp+A0h] [bp-11A4h] BYREF
  char v176[32]; // [sp+C0h] [bp-1184h] BYREF
  char v177[32]; // [sp+E0h] [bp-1164h] BYREF
  char v178[32]; // [sp+100h] [bp-1144h] BYREF
  char v179[4]; // [sp+120h] [bp-1124h] BYREF
  char s[256]; // [sp+140h] [bp-1104h] BYREF
  char v181[4]; // [sp+240h] [bp-1004h] BYREF
  int v182; // [sp+244h] [bp-1000h]
  int v183; // [sp+248h] [bp-FFCh]
  float v184; // [sp+24Ch] [bp-FF8h]
  float v185; // [sp+250h] [bp-FF4h]
  float v186; // [sp+254h] [bp-FF0h]
  float v187; // [sp+258h] [bp-FECh]
  double v188; // [sp+260h] [bp-FE4h]

  v3 = a1 == 0;
  memset(v170, 0, sizeof(v170));
  v173 = 0.0;
  v171 = 0;
  v172 = 0;
  v174 = 0.0;
  v4 = memset(s, 0, sizeof(s));
  v164 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v4);
    v156 = logfmt_raw((int)v181, 0x1000u);
    V_UNLOCK(v156);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_stats_old",
      13,
      1401,
      100,
      v181);
    return -2147483646;
  }
  else
  {
    v5 = sub_7D23C(a1, 1, 70, *(_DWORD *)(a2 + 8));
    v6 = json_array(v5);
    v7 = v6;
    v163 = v6;
    v10 = json_object(v6, HIDWORD(v6), v8, v9);
    v11 = json_string("2.12");
    json_object_set_new(v10, "BMMiner", v11);
    v12 = json_string(g_miner_version);
    json_object_set_new(v10, "Miner", v12);
    v13 = json_string(g_miner_compiletime);
    json_object_set_new(v10, "CompileTime", v13);
    v14 = json_string(g_miner_type);
    json_object_set_new(v10, "Type", v14);
    json_array_append_new(v7, v10);
    read_system_status_from_monitor(v181);
    v15 = v182;
    v16 = v184;
    v17 = v186;
    v18 = v187;
    v19 = LODWORD(v188);
    all_created_runtime = get_all_created_runtime(&v164);
    status_from_monitor = (char *)frontend_runtime_instance();
    v24 = v164;
    v162 = status_from_monitor;
    if ( v164 > 0 )
    {
      v25 = 0;
      v159 = malloc(216 * v164);
      v145 = v159;
      status_from_monitor = (char *)malloc(4 * v164);
      v24 = v164;
      ptr = status_from_monitor;
      if ( v164 > 0 )
      {
        v146 = (_DWORD *)(all_created_runtime - 4);
        v147 = status_from_monitor - 4;
        do
        {
          v148 = v146[1];
          ++v146;
          status_from_monitor = (char *)read_status_from_monitor(v145, v148);
          v23 = v164;
          ++v3;
          v145 += 54;
          v37 = v164 <= v3;
          v24 = *(_DWORD *)(*v146 + 232) + 1;
          *((_DWORD *)v147 + 1) = v24;
          v147 += 4;
        }
        while ( !v37 );
        v25 = vshrd_n_s64(vdup_n_s32(v3).n64_i64[0], 0x20u);
      }
    }
    else
    {
      v25 = 0;
      ptr = 0;
      v159 = 0;
    }
    v26 = json_object(status_from_monitor, v22, v23, v24);
    v27 = json_integer(v25, HIDWORD(v25));
    json_object_set_new(v26, "STATS", v27);
    snprintf((char *)v170, 0x10u, "BTM_SOC%d", v3);
    v28 = json_string(v170);
    json_object_set_new(v26, "ID", v28);
    v29 = v16;
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v175);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v176);
    v30 = v18;
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v177);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v178);
    format_hashrate_double(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), &v168, v169);
    v32 = v185;
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v33 = COERCE_DOUBLE(__PAIR64__(v19, v19));
    v31 = *(float *)&v33;
    v34 = sub_25B7B4(LODWORD(v33), HIDWORD(v33));
    v35 = json_integer(v34, HIDWORD(v34));
    json_object_set_new(v26, "Elapsed", v35);
    v36 = v17 * v33;
    v37 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v37 = (unsigned int)(opt_algo - 6) > 1;
    v38 = v30 * v33;
    if ( v37 )
    {
      v149 = sub_25B7B4(COERCE_UNSIGNED_INT64(v29 * v33 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * v33 * 100.0)));
      v150 = sub_25B8F8(v149, HIDWORD(v149));
      v151 = json_real(v150);
      json_object_set_new(v26, "GHS 5s", v151);
      v152 = sub_25B7B4(COERCE_UNSIGNED_INT64(v38 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v38 * 100.0)));
      v153 = sub_25B8F8(v152, HIDWORD(v152));
      v154 = json_real(v153);
      json_object_set_new(v26, "GHS av", v154);
      v155 = sub_25B7B4(COERCE_UNSIGNED_INT64(v36 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v36 * 100.0)));
      v48 = sub_25B8F8(v155, HIDWORD(v155));
    }
    else
    {
      v39 = sub_25B7B4(COERCE_UNSIGNED_INT64(v32 * v33 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v32 * v33 * 100.0)));
      v40 = COERCE_DOUBLE(sub_25B8F8(v39, HIDWORD(v39)));
      v41 = json_real(LODWORD(v40));
      json_object_set_new(v26, "GHS 5s", v41);
      v42 = *((float *)&v33 + 1) <= *(float *)&v33;
      if ( *((float *)&v33 + 1) <= *(float *)&v33 )
      {
        v33 = *(float *)&v33;
        v38 = v31 * v38;
      }
      else
      {
        v40 = *((float *)&v33 + 1);
      }
      if ( v42 )
      {
        v43 = v33 * v36;
      }
      else
      {
        v38 = v40 * v38;
        v43 = v40 * v36;
      }
      v44 = sub_25B7B4(COERCE_UNSIGNED_INT64(v38 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v38 * 100.0)));
      v45 = sub_25B8F8(v44, HIDWORD(v44));
      v46 = json_real(v45);
      json_object_set_new(v26, "GHS av", v46);
      v47 = sub_25B7B4(COERCE_UNSIGNED_INT64(v43 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v43 * 100.0)));
      v48 = sub_25B8F8(v47, HIDWORD(v47));
    }
    v49 = json_real(v48);
    json_object_set_new(v26, "rate_30m", v49);
    v50 = sub_25B7B4(COERCE_UNSIGNED_INT64(v168 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v168 * 100.0)));
    v51 = sub_25B8F8(v50, HIDWORD(v50));
    v52 = json_real(v51);
    json_object_set_new(v26, "total_rateideal", v52);
    v53 = json_integer(opt_bitmain_work_mode, opt_bitmain_work_mode >> 31);
    json_object_set_new(v26, "Mode", v53);
    v54 = json_integer(v164, v164 >> 31);
    json_object_set_new(v26, "miner_count", v54);
    if ( v164 <= 0 )
    {
      v56 = 0x7FFFFFFF;
      v58 = 0;
    }
    else
    {
      v55 = v159;
      v56 = 0x7FFFFFFF;
      do
      {
        v57 = v55[18];
        v55 += 54;
        if ( v56 >= v57 )
          v56 = v57;
      }
      while ( &v159[54 * v164] != v55 );
      v58 = v56 >> 31;
    }
    v59 = json_integer(v56, v58);
    json_object_set_new(v26, "frequency", v59);
    v60 = json_integer(v15, v15 >> 31);
    json_object_set_new(v26, "fan_num", v60);
    if ( v15 > 0 )
    {
      v61 = v183 - 4;
      v62 = 0;
      do
      {
        ++v62;
        v171 = 0;
        v172 = 0;
        v173 = 0.0;
        v174 = 0.0;
        snprintf((char *)&v171, 0x20u, "fan%d", v62);
        v63 = *(_DWORD *)(v61 + 4);
        v61 += 4;
        v64 = json_integer(v63, v63 >> 31);
        json_object_set_new(v26, &v171, v64);
      }
      while ( v62 != v15 );
    }
    if ( v164 <= 0 )
    {
      v69 = 0;
      v70 = -100;
    }
    else
    {
      v65 = -100;
      v66 = v159;
      LOBYTE(v67) = 0;
      do
      {
        v68 = v66[4];
        v66 += 54;
        if ( v65 < v68 )
          v65 = v68;
        v67 = (unsigned __int8)(v67 + *((_BYTE *)v66 - 192) + *((_BYTE *)v66 - 188));
      }
      while ( v66 != &v159[54 * v164] );
      v69 = vshrd_n_u64(vdup_n_s8(v67).n64_u64[0], 0x38u);
      v70 = vshrd_n_s64(vdup_n_s32(v65).n64_i64[0], 0x20u);
    }
    v71 = json_integer(v69, HIDWORD(v69));
    json_object_set_new(v26, "temp_num", v71);
    if ( v164 > 0 )
    {
      v72 = v159;
      v73 = 0;
      v157 = ptr - 4;
      do
      {
        v74 = v72[6];
        v75 = *v72;
        v165 = 0;
        ++v73;
        v166 = 0;
        v167 = 0;
        v72 += 54;
        *(_DWORD *)v179 = 0;
        find_min_and_max_int(v75, v74, &v165, &v166);
        v76 = *(v72 - 47);
        find_min_and_max_int(*(v72 - 52), v76, &v167, v179);
        v77 = *(_DWORD *)v179;
        v78 = *((_DWORD *)v157 + 1);
        if ( *(int *)v179 < v166 )
          v77 = v166;
        v157 += 4;
        v158 = v77;
        sprintf((char *)&v171, "temp%d", v78);
        v79 = json_integer(v158, v158 >> 31);
        json_object_set_new(v26, &v171, v79);
        v80 = *(v72 - 53);
        *(_DWORD *)v179 = 0;
        v167 = 0;
        v166 = 0;
        v165 = 0;
        find_min_and_max_int(v80, v74, &v165, &v166);
        find_min_and_max_int(*(v72 - 51), v76, &v167, v179);
        v81 = v78;
        if ( *(int *)v179 < v166 )
          v82 = v166;
        else
          v82 = *(_DWORD *)v179;
        sprintf((char *)&v171, "temp2_%d", v81);
        v83 = json_integer(v82, v82 >> 31);
        json_object_set_new(v26, &v171, v83);
      }
      while ( v164 > v73 );
      v84 = v159;
      if ( v164 > 0 )
      {
        v85 = ptr - 4;
        v86 = 0;
        do
        {
          v171 = 0;
          v172 = 0;
          ++v86;
          v173 = 0.0;
          v174 = 0.0;
          memset(s, 0, sizeof(s));
          v87 = *((_DWORD *)v85 + 1);
          v85 += 4;
          snprintf((char *)&v171, 0x20u, "temp_in_pcb_%d", v87);
          v88 = v84[6];
          v89 = *v84;
          v84 += 54;
          sub_7D704(v89, v88, s);
          v90 = json_string(s);
          json_object_set_new(v26, &v171, v90);
        }
        while ( v164 > v86 );
        if ( v164 > 0 )
        {
          v91 = ptr - 4;
          v92 = v159;
          v93 = 0;
          do
          {
            v171 = 0;
            v172 = 0;
            ++v93;
            v92 += 54;
            v173 = 0.0;
            v174 = 0.0;
            memset(s, 0, sizeof(s));
            v94 = *((_DWORD *)v91 + 1);
            v91 += 4;
            snprintf((char *)&v171, 0x20u, "temp_out_pcb_%d", v94);
            sub_7D704(*(v92 - 52), *(v92 - 47), s);
            v95 = json_string(s);
            json_object_set_new(v26, &v171, v95);
          }
          while ( v164 > v93 );
          if ( v164 > 0 )
          {
            v96 = ptr - 4;
            v97 = v159;
            v98 = 0;
            do
            {
              v171 = 0;
              v172 = 0;
              ++v98;
              v97 += 54;
              v173 = 0.0;
              v174 = 0.0;
              memset(s, 0, sizeof(s));
              v99 = *((_DWORD *)v96 + 1);
              v96 += 4;
              snprintf((char *)&v171, 0x20u, "temp_in_chip_%d", v99);
              sub_7D704(*(v97 - 53), *(v97 - 48), s);
              v100 = json_string(s);
              json_object_set_new(v26, &v171, v100);
            }
            while ( v164 > v98 );
            if ( v164 > 0 )
            {
              v101 = ptr - 4;
              v102 = v159;
              v103 = 0;
              do
              {
                v171 = 0;
                v172 = 0;
                ++v103;
                v102 += 54;
                v173 = 0.0;
                v174 = 0.0;
                memset(s, 0, sizeof(s));
                v104 = *((_DWORD *)v101 + 1);
                v101 += 4;
                snprintf((char *)&v171, 0x20u, "temp_out_chip_%d", v104);
                sub_7D704(*(v102 - 52), *(v102 - 47), s);
                v105 = json_string(s);
                json_object_set_new(v26, &v171, v105);
              }
              while ( v164 > v103 );
            }
          }
        }
      }
    }
    v106 = json_integer(v70, HIDWORD(v70));
    json_object_set_new(v26, "temp_max", v106);
    if ( v164 <= 0 )
      goto LABEL_83;
    v107 = v159;
    v108 = 0;
    v109 = ptr - 4;
    v110 = ptr - 4;
    v111 = v159;
    do
    {
      v112 = *((_DWORD *)v109 + 1);
      v109 += 4;
      v171 = 0;
      v172 = 0;
      ++v108;
      v107 += 54;
      v173 = 0.0;
      v174 = 0.0;
      snprintf((char *)&v171, 0x20u, "chain_acn%d", v112);
      v113 = json_integer(*(v107 - 38), (int)*(v107 - 38) >> 31);
      json_object_set_new(v26, &v171, v113);
    }
    while ( v164 > v108 );
    if ( v164 <= 0 )
      goto LABEL_83;
    v114 = 0;
    do
    {
      v115 = *((_DWORD *)v110 + 1);
      v110 += 4;
      ++v114;
      v111 += 54;
      sprintf(v179, "chain_acs%d", v115);
      v171 = 0;
      v172 = 0;
      v173 = 0.0;
      v174 = 0.0;
      memset(s, 0, sizeof(s));
      snprintf((char *)&v171, 0x20u, "chain_acs%d", v115);
      snprintf(s, 0x100u, "%s", (const char *)*(v111 - 37));
      v116 = json_string(s);
      json_object_set_new(v26, &v171, v116);
    }
    while ( v164 > v114 );
    if ( v164 <= 0 )
    {
LABEL_83:
      v117 = 0;
    }
    else
    {
      v117 = 0;
      v118 = ptr - 4;
      v119 = v159;
      v120 = 0;
      do
      {
        v121 = *((_DWORD *)v118 + 1);
        v118 += 4;
        v171 = 0;
        v172 = 0;
        ++v120;
        v119 += 54;
        v173 = 0.0;
        v174 = 0.0;
        snprintf((char *)&v171, 0x20u, "chain_hw%d", v121);
        v117 += *((_QWORD *)v119 - 17);
        v122 = json_integer(*(v119 - 34), *(v119 - 33));
        json_object_set_new(v26, &v171, v122);
      }
      while ( v164 > v120 );
    }
    if ( opt_algo == 9 )
      v123 = sub_25B668(v117, HIDWORD(v117), 1000, 0);
    else
      v123 = v117;
    v124 = json_integer(v123, HIDWORD(v123));
    json_object_set_new(v26, "no_matching_work", v124);
    if ( v164 > 0 )
    {
      v125 = v159;
      v126 = 0;
      v127 = ptr - 4;
      v128 = ptr - 4;
      v129 = v159;
      do
      {
        v130 = *((_DWORD *)v127 + 1);
        v127 += 4;
        v171 = 0;
        v172 = 0;
        ++v126;
        v125 += 54;
        v173 = 0.0;
        v174 = 0.0;
        v131 = snprintf((char *)&v171, 0x20u, "chain_rate%d", v130);
        v132 = json_real(v131);
        json_object_set_new(v26, &v171, v132);
      }
      while ( v164 > v126 );
      if ( v164 > 0 )
      {
        v133 = 0;
        do
        {
          ++v133;
          v129 += 54;
          format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v179);
          v134 = *((_DWORD *)v128 + 1);
          v128 += 4;
          snprintf((char *)&v171, 0x20u, "CHAIN AVG HASHRATE%d", v134);
          v135 = json_string(v179);
          json_object_set_new(v26, &v171, v135);
        }
        while ( v164 > v133 );
        if ( v164 > 0 )
        {
          v136 = ptr - 4;
          v137 = v159;
          v138 = 0;
          do
          {
            v139 = *((_DWORD *)v136 + 1);
            v136 += 4;
            v171 = 0;
            v172 = 0;
            ++v138;
            v137 += 54;
            v173 = 0.0;
            v174 = 0.0;
            snprintf((char *)&v171, 0x20u, "freq%d", v139);
            v140 = json_integer(*(v137 - 36), (int)*(v137 - 36) >> 31);
            json_object_set_new(v26, &v171, v140);
          }
          while ( v164 > v138 );
        }
      }
    }
    v141 = json_string(g_miner_version);
    json_object_set_new(v26, "miner_version", v141);
    v142 = json_string(0);
    json_object_set_new(v26, "miner_id", v142);
    json_array_append_new(v163, v26);
    json_object_set_new(a1, "STATS", v163);
    v143 = json_integer(1, 0);
    json_object_set_new(a1, "id", v143);
    if ( v164 > 0 )
    {
      free(ptr);
      free(v159);
    }
    return 0;
  }
}
