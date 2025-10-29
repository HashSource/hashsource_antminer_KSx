int __fastcall sub_82DE0(int a1, int a2)
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
  char *v55; // r3
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
  char *v66; // r1
  unsigned int v67; // r3
  signed int v68; // lr
  unsigned __int64 v69; // d16
  __int64 v70; // d10
  int v71; // r0
  char *v72; // r5
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
  char *v84; // r8
  char *v85; // r7
  int v86; // r5
  int v87; // t1
  int v88; // r0
  char *v89; // r7
  char *v90; // r5
  int v91; // r6
  int v92; // t1
  int v93; // r0
  char *v94; // r7
  char *v95; // r5
  int v96; // r6
  int v97; // t1
  int v98; // r0
  char *v99; // r8
  char *v100; // r5
  int v101; // r6
  int v102; // t1
  int v103; // r0
  int v104; // r0
  char *v105; // r7
  int v106; // r5
  char *v107; // r9
  char *v108; // r8
  const char **v109; // r6
  int v110; // t1
  int v111; // r0
  int v112; // r5
  int v113; // t1
  int v114; // r0
  __int64 v115; // d10
  char *v116; // r8
  char *v117; // r6
  int v118; // r5
  int v119; // t1
  int v120; // r0
  __int64 v121; // r0
  int v122; // r0
  char *v123; // r7
  int v124; // r6
  char *v125; // r9
  char *v126; // r8
  char *v127; // r5
  int v128; // t1
  int v129; // r0
  int v130; // r0
  int v131; // r6
  int v132; // t1
  int v133; // r0
  char *v134; // r5
  char *v135; // r8
  int v136; // r6
  int v137; // t1
  int v138; // r0
  int v139; // r0
  int v140; // r0
  int v141; // r0
  char *v143; // r8
  _DWORD *v144; // r4
  char *v145; // r6
  int v146; // t1
  __int64 v147; // r0
  int v148; // r0
  int v149; // r0
  __int64 v150; // r0
  int v151; // r0
  int v152; // r0
  __int64 v153; // r0
  int v154; // r0
  char *v155; // [sp+10h] [bp-1234h]
  int v156; // [sp+18h] [bp-122Ch]
  char *v157; // [sp+1Ch] [bp-1228h]
  char *ptr; // [sp+2Ch] [bp-1218h]
  char *v160; // [sp+34h] [bp-1210h]
  int v161; // [sp+38h] [bp-120Ch]
  int v162; // [sp+48h] [bp-11FCh] BYREF
  int v163; // [sp+4Ch] [bp-11F8h] BYREF
  int v164; // [sp+50h] [bp-11F4h] BYREF
  int v165; // [sp+54h] [bp-11F0h] BYREF
  double v166; // [sp+58h] [bp-11ECh] BYREF
  char v167[12]; // [sp+64h] [bp-11E0h] BYREF
  _QWORD v168[2]; // [sp+70h] [bp-11D4h] BYREF
  __int64 v169; // [sp+80h] [bp-11C4h] BYREF
  __int64 v170; // [sp+88h] [bp-11BCh]
  double v171; // [sp+90h] [bp-11B4h]
  double v172; // [sp+98h] [bp-11ACh]
  char v173[32]; // [sp+A0h] [bp-11A4h] BYREF
  char v174[32]; // [sp+C0h] [bp-1184h] BYREF
  char v175[32]; // [sp+E0h] [bp-1164h] BYREF
  char v176[32]; // [sp+100h] [bp-1144h] BYREF
  char v177[4]; // [sp+120h] [bp-1124h] BYREF
  char s[256]; // [sp+140h] [bp-1104h] BYREF
  char v179[4]; // [sp+240h] [bp-1004h] BYREF
  int v180; // [sp+244h] [bp-1000h]
  int v181; // [sp+248h] [bp-FFCh]
  float v182; // [sp+24Ch] [bp-FF8h]
  float v183; // [sp+250h] [bp-FF4h]
  float v184; // [sp+254h] [bp-FF0h]
  float v185; // [sp+258h] [bp-FECh]
  double v186; // [sp+260h] [bp-FE4h]

  v3 = a1 == 0;
  memset(v168, 0, sizeof(v168));
  v171 = 0.0;
  v169 = 0;
  v170 = 0;
  v172 = 0.0;
  v4 = memset(s, 0, sizeof(s));
  v162 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v4);
    v154 = logfmt_raw((int)v179, 0x1000u);
    V_UNLOCK(v154);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "get_stats_old",
      13,
      1431,
      100,
      v179);
    return -2147483646;
  }
  else
  {
    v5 = sub_7EE7C(a1, 1, 70, *(_DWORD *)(a2 + 8));
    v6 = json_array(v5);
    v7 = v6;
    v161 = v6;
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
    read_system_status_from_monitor(v179);
    v15 = v180;
    v16 = v182;
    v17 = v184;
    v18 = v185;
    v19 = LODWORD(v186);
    all_created_runtime = get_all_created_runtime(&v162);
    status_from_monitor = (char *)frontend_runtime_instance();
    v24 = v162;
    v160 = status_from_monitor;
    if ( v162 > 0 )
    {
      v25 = 0;
      v157 = (char *)malloc(224 * v162);
      v143 = v157;
      status_from_monitor = (char *)malloc(4 * v162);
      v24 = v162;
      ptr = status_from_monitor;
      if ( v162 > 0 )
      {
        v144 = (_DWORD *)(all_created_runtime - 4);
        v145 = status_from_monitor - 4;
        do
        {
          v146 = v144[1];
          ++v144;
          status_from_monitor = (char *)read_status_from_monitor(v143, v146);
          v23 = v162;
          ++v3;
          v143 += 224;
          v37 = v162 <= v3;
          v24 = *(_DWORD *)(*v144 + 248) + 1;
          *((_DWORD *)v145 + 1) = v24;
          v145 += 4;
        }
        while ( !v37 );
        v25 = vshrd_n_s64(vdup_n_s32(v3).n64_i64[0], 0x20u);
      }
    }
    else
    {
      v25 = 0;
      ptr = 0;
      v157 = 0;
    }
    v26 = json_object(status_from_monitor, v22, v23, v24);
    v27 = json_integer(v25, HIDWORD(v25));
    json_object_set_new(v26, "STATS", v27);
    snprintf((char *)v168, 0x10u, "BTM_SOC%d", v3);
    v28 = json_string(v168);
    json_object_set_new(v26, "ID", v28);
    v29 = v16;
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v160 + 18) + 16), v173);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v160 + 18) + 16), v174);
    v30 = v18;
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v160 + 18) + 16), v175);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v160 + 18) + 16), v176);
    format_hashrate_double(*(_DWORD *)(*((_DWORD *)v160 + 18) + 16), &v166, v167);
    v32 = v183;
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v33 = COERCE_DOUBLE(__PAIR64__(v19, v19));
    v31 = *(float *)&v33;
    v34 = sub_26EB6C(LODWORD(v33), HIDWORD(v33));
    v35 = json_integer(v34, HIDWORD(v34));
    json_object_set_new(v26, "Elapsed", v35);
    v36 = v17 * v33;
    v37 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v37 = (unsigned int)(opt_algo - 6) > 1;
    v38 = v30 * v33;
    if ( v37 )
    {
      v147 = sub_26EB6C(COERCE_UNSIGNED_INT64(v29 * v33 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * v33 * 100.0)));
      v148 = sub_26ECB0(v147, HIDWORD(v147));
      v149 = json_real(v148);
      json_object_set_new(v26, "GHS 5s", v149);
      v150 = sub_26EB6C(COERCE_UNSIGNED_INT64(v38 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v38 * 100.0)));
      v151 = sub_26ECB0(v150, HIDWORD(v150));
      v152 = json_real(v151);
      json_object_set_new(v26, "GHS av", v152);
      v153 = sub_26EB6C(COERCE_UNSIGNED_INT64(v36 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v36 * 100.0)));
      v48 = sub_26ECB0(v153, HIDWORD(v153));
    }
    else
    {
      v39 = sub_26EB6C(COERCE_UNSIGNED_INT64(v32 * v33 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v32 * v33 * 100.0)));
      v40 = COERCE_DOUBLE(sub_26ECB0(v39, HIDWORD(v39)));
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
      v44 = sub_26EB6C(COERCE_UNSIGNED_INT64(v38 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v38 * 100.0)));
      v45 = sub_26ECB0(v44, HIDWORD(v44));
      v46 = json_real(v45);
      json_object_set_new(v26, "GHS av", v46);
      v47 = sub_26EB6C(COERCE_UNSIGNED_INT64(v43 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v43 * 100.0)));
      v48 = sub_26ECB0(v47, HIDWORD(v47));
    }
    v49 = json_real(v48);
    json_object_set_new(v26, "rate_30m", v49);
    v50 = sub_26EB6C(COERCE_UNSIGNED_INT64(v166 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v166 * 100.0)));
    v51 = sub_26ECB0(v50, HIDWORD(v50));
    v52 = json_real(v51);
    json_object_set_new(v26, "total_rateideal", v52);
    v53 = json_integer(opt_bitmain_work_mode, opt_bitmain_work_mode >> 31);
    json_object_set_new(v26, "Mode", v53);
    v54 = json_integer(v162, v162 >> 31);
    json_object_set_new(v26, "miner_count", v54);
    if ( v162 <= 0 )
    {
      v56 = 0x7FFFFFFF;
      v58 = 0;
    }
    else
    {
      v55 = v157;
      v56 = 0x7FFFFFFF;
      do
      {
        v57 = *((_DWORD *)v55 + 20);
        v55 += 224;
        if ( v56 >= v57 )
          v56 = v57;
      }
      while ( &v157[224 * v162] != v55 );
      v58 = v56 >> 31;
    }
    v59 = json_integer(v56, v58);
    json_object_set_new(v26, "frequency", v59);
    v60 = json_integer(v15, v15 >> 31);
    json_object_set_new(v26, "fan_num", v60);
    if ( v15 > 0 )
    {
      v61 = v181 - 4;
      v62 = 0;
      do
      {
        ++v62;
        v169 = 0;
        v170 = 0;
        v171 = 0.0;
        v172 = 0.0;
        snprintf((char *)&v169, 0x20u, "fan%d", v62);
        v63 = *(_DWORD *)(v61 + 4);
        v61 += 4;
        v64 = json_integer(v63, v63 >> 31);
        json_object_set_new(v26, &v169, v64);
      }
      while ( v62 != v15 );
    }
    if ( v162 <= 0 )
    {
      v69 = 0;
      v70 = -100;
    }
    else
    {
      v65 = -100;
      v66 = v157;
      LOBYTE(v67) = 0;
      do
      {
        v68 = *((_DWORD *)v66 + 5);
        v66 += 224;
        if ( v65 < v68 )
          v65 = v68;
        v67 = (unsigned __int8)(v67 + *(v66 - 196) + *(v66 - 192));
      }
      while ( v66 != &v157[224 * v162] );
      v69 = vshrd_n_u64(vdup_n_s8(v67).n64_u64[0], 0x38u);
      v70 = vshrd_n_s64(vdup_n_s32(v65).n64_i64[0], 0x20u);
    }
    v71 = json_integer(v69, HIDWORD(v69));
    json_object_set_new(v26, "temp_num", v71);
    if ( v162 > 0 )
    {
      v72 = v157;
      v73 = 0;
      v155 = ptr - 4;
      do
      {
        v74 = *((_DWORD *)v72 + 7);
        v75 = *((_DWORD *)v72 + 1);
        v163 = 0;
        ++v73;
        v164 = 0;
        v165 = 0;
        v72 += 224;
        *(_DWORD *)v177 = 0;
        find_min_and_max_int(v75, v74, &v163, &v164);
        v76 = *((_DWORD *)v72 - 48);
        find_min_and_max_int(*((_DWORD *)v72 - 53), v76, &v165, v177);
        v77 = *(_DWORD *)v177;
        v78 = *((_DWORD *)v155 + 1);
        if ( *(int *)v177 < v164 )
          v77 = v164;
        v155 += 4;
        v156 = v77;
        sprintf((char *)&v169, "temp%d", v78);
        v79 = json_integer(v156, v156 >> 31);
        json_object_set_new(v26, &v169, v79);
        v80 = *((_DWORD *)v72 - 54);
        *(_DWORD *)v177 = 0;
        v165 = 0;
        v164 = 0;
        v163 = 0;
        find_min_and_max_int(v80, v74, &v163, &v164);
        find_min_and_max_int(*((_DWORD *)v72 - 52), v76, &v165, v177);
        v81 = v78;
        if ( *(int *)v177 < v164 )
          v82 = v164;
        else
          v82 = *(_DWORD *)v177;
        sprintf((char *)&v169, "temp2_%d", v81);
        v83 = json_integer(v82, v82 >> 31);
        json_object_set_new(v26, &v169, v83);
      }
      while ( v162 > v73 );
      v84 = v157;
      if ( v162 > 0 )
      {
        v85 = ptr - 4;
        v86 = 0;
        do
        {
          v169 = 0;
          v170 = 0;
          ++v86;
          v84 += 224;
          v171 = 0.0;
          v172 = 0.0;
          memset(s, 0, sizeof(s));
          v87 = *((_DWORD *)v85 + 1);
          v85 += 4;
          snprintf((char *)&v169, 0x20u, "temp_in_pcb_%d", v87);
          sub_7F344(*((_DWORD *)v84 - 55), *((_DWORD *)v84 - 49), s);
          v88 = json_string(s);
          json_object_set_new(v26, &v169, v88);
        }
        while ( v162 > v86 );
        if ( v162 > 0 )
        {
          v89 = ptr - 4;
          v90 = v157;
          v91 = 0;
          do
          {
            v169 = 0;
            v170 = 0;
            ++v91;
            v90 += 224;
            v171 = 0.0;
            v172 = 0.0;
            memset(s, 0, sizeof(s));
            v92 = *((_DWORD *)v89 + 1);
            v89 += 4;
            snprintf((char *)&v169, 0x20u, "temp_out_pcb_%d", v92);
            sub_7F344(*((_DWORD *)v90 - 53), *((_DWORD *)v90 - 48), s);
            v93 = json_string(s);
            json_object_set_new(v26, &v169, v93);
          }
          while ( v162 > v91 );
          if ( v162 > 0 )
          {
            v94 = ptr - 4;
            v95 = v157;
            v96 = 0;
            do
            {
              v169 = 0;
              v170 = 0;
              ++v96;
              v95 += 224;
              v171 = 0.0;
              v172 = 0.0;
              memset(s, 0, sizeof(s));
              v97 = *((_DWORD *)v94 + 1);
              v94 += 4;
              snprintf((char *)&v169, 0x20u, "temp_in_chip_%d", v97);
              sub_7F344(*((_DWORD *)v95 - 54), *((_DWORD *)v95 - 49), s);
              v98 = json_string(s);
              json_object_set_new(v26, &v169, v98);
            }
            while ( v162 > v96 );
            if ( v162 > 0 )
            {
              v99 = ptr - 4;
              v100 = v157;
              v101 = 0;
              do
              {
                v169 = 0;
                v170 = 0;
                ++v101;
                v100 += 224;
                v171 = 0.0;
                v172 = 0.0;
                memset(s, 0, sizeof(s));
                v102 = *((_DWORD *)v99 + 1);
                v99 += 4;
                snprintf((char *)&v169, 0x20u, "temp_out_chip_%d", v102);
                sub_7F344(*((_DWORD *)v100 - 53), *((_DWORD *)v100 - 48), s);
                v103 = json_string(s);
                json_object_set_new(v26, &v169, v103);
              }
              while ( v162 > v101 );
            }
          }
        }
      }
    }
    v104 = json_integer(v70, HIDWORD(v70));
    json_object_set_new(v26, "temp_max", v104);
    if ( v162 <= 0 )
      goto LABEL_83;
    v105 = v157;
    v106 = 0;
    v107 = ptr - 4;
    v108 = ptr - 4;
    v109 = (const char **)v157;
    do
    {
      v110 = *((_DWORD *)v107 + 1);
      v107 += 4;
      v169 = 0;
      v170 = 0;
      ++v106;
      v105 += 224;
      v171 = 0.0;
      v172 = 0.0;
      snprintf((char *)&v169, 0x20u, "chain_acn%d", v110);
      v111 = json_integer(*((_DWORD *)v105 - 38), *((int *)v105 - 38) >> 31);
      json_object_set_new(v26, &v169, v111);
    }
    while ( v162 > v106 );
    if ( v162 <= 0 )
      goto LABEL_83;
    v112 = 0;
    do
    {
      v113 = *((_DWORD *)v108 + 1);
      v108 += 4;
      ++v112;
      v109 += 56;
      sprintf(v177, "chain_acs%d", v113);
      v169 = 0;
      v170 = 0;
      v171 = 0.0;
      v172 = 0.0;
      memset(s, 0, sizeof(s));
      snprintf((char *)&v169, 0x20u, "chain_acs%d", v113);
      snprintf(s, 0x100u, "%s", *(v109 - 37));
      v114 = json_string(s);
      json_object_set_new(v26, &v169, v114);
    }
    while ( v162 > v112 );
    if ( v162 <= 0 )
    {
LABEL_83:
      v115 = 0;
    }
    else
    {
      v115 = 0;
      v116 = ptr - 4;
      v117 = v157;
      v118 = 0;
      do
      {
        v119 = *((_DWORD *)v116 + 1);
        v116 += 4;
        v169 = 0;
        v170 = 0;
        ++v118;
        v117 += 224;
        v171 = 0.0;
        v172 = 0.0;
        snprintf((char *)&v169, 0x20u, "chain_hw%d", v119);
        v115 += *((_QWORD *)v117 - 17);
        v120 = json_integer(*((_DWORD *)v117 - 34), *((_DWORD *)v117 - 33));
        json_object_set_new(v26, &v169, v120);
      }
      while ( v162 > v118 );
    }
    if ( opt_algo == 9 )
      v121 = sub_26EA20(v115, HIDWORD(v115), 1000, 0);
    else
      v121 = v115;
    v122 = json_integer(v121, HIDWORD(v121));
    json_object_set_new(v26, "no_matching_work", v122);
    if ( v162 > 0 )
    {
      v123 = v157;
      v124 = 0;
      v125 = ptr - 4;
      v126 = ptr - 4;
      v127 = v157;
      do
      {
        v128 = *((_DWORD *)v125 + 1);
        v125 += 4;
        v169 = 0;
        v170 = 0;
        ++v124;
        v123 += 224;
        v171 = 0.0;
        v172 = 0.0;
        v129 = snprintf((char *)&v169, 0x20u, "chain_rate%d", v128);
        v130 = json_real(v129);
        json_object_set_new(v26, &v169, v130);
      }
      while ( v162 > v124 );
      if ( v162 > 0 )
      {
        v131 = 0;
        do
        {
          ++v131;
          v127 += 224;
          format_hashrate_string(*(_DWORD *)(*((_DWORD *)v160 + 18) + 16), v177);
          v132 = *((_DWORD *)v126 + 1);
          v126 += 4;
          snprintf((char *)&v169, 0x20u, "CHAIN AVG HASHRATE%d", v132);
          v133 = json_string(v177);
          json_object_set_new(v26, &v169, v133);
        }
        while ( v162 > v131 );
        if ( v162 > 0 )
        {
          v134 = ptr - 4;
          v135 = v157;
          v136 = 0;
          do
          {
            v137 = *((_DWORD *)v134 + 1);
            v134 += 4;
            v169 = 0;
            v170 = 0;
            ++v136;
            v135 += 224;
            v171 = 0.0;
            v172 = 0.0;
            snprintf((char *)&v169, 0x20u, "freq%d", v137);
            v138 = json_integer(*((_DWORD *)v135 - 36), *((int *)v135 - 36) >> 31);
            json_object_set_new(v26, &v169, v138);
          }
          while ( v162 > v136 );
        }
      }
    }
    v139 = json_string(g_miner_version);
    json_object_set_new(v26, "miner_version", v139);
    v140 = json_string(0);
    json_object_set_new(v26, "miner_id", v140);
    json_array_append_new(v161, v26);
    json_object_set_new(a1, "STATS", v161);
    v141 = json_integer(1, 0);
    json_object_set_new(a1, "id", v141);
    if ( v162 > 0 )
    {
      free(ptr);
      free(v157);
    }
    return 0;
  }
}
