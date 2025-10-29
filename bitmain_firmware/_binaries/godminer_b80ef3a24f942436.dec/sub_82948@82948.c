int __fastcall sub_82948(_DWORD *a1, int a2)
{
  signed int v3; // r5
  void *v4; // r0
  _DWORD *v5; // r4
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  char *v9; // r0
  int v10; // r7
  float v11; // s20
  float v12; // s18
  float v13; // s16
  unsigned int v14; // s22
  char *all_created_runtime; // r4
  __int64 v16; // d12
  _DWORD *v17; // r4
  _DWORD *v18; // r0
  char *v19; // r0
  double v20; // d10
  double v21; // d8
  float v22; // s0
  float v23; // s24
  double v24; // d11
  __int64 v25; // r0
  _DWORD *v26; // r0
  double v27; // d9
  bool v28; // cc
  double v29; // d8
  __int64 v30; // r0
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
  int *v53; // r1
  unsigned int v54; // r3
  signed int v55; // lr
  __int64 v56; // d16
  __int64 v57; // d10
  _DWORD *v58; // r0
  int *v59; // r5
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
  int *v71; // r8
  char *v72; // r7
  int v73; // r5
  int v74; // t1
  int v75; // r1
  int v76; // t1
  char *v77; // r0
  char *v78; // r7
  int *v79; // r5
  int v80; // r6
  int v81; // t1
  char *v82; // r0
  char *v83; // r7
  int *v84; // r5
  int v85; // r6
  int v86; // t1
  char *v87; // r0
  char *v88; // r8
  int *v89; // r5
  int v90; // r6
  int v91; // t1
  char *v92; // r0
  _DWORD *v93; // r0
  int *v94; // r7
  int v95; // r5
  char *v96; // r9
  char *v97; // r8
  int *v98; // r6
  int v99; // t1
  _DWORD *v100; // r0
  int v101; // r5
  int v102; // t1
  char *v103; // r0
  __int64 v104; // d10
  char *v105; // r8
  int *v106; // r6
  int v107; // r5
  int v108; // t1
  _DWORD *v109; // r0
  __int64 v110; // r0
  _DWORD *v111; // r0
  int *v112; // r7
  int v113; // r6
  char *v114; // r9
  char *v115; // r8
  int *v116; // r5
  int v117; // t1
  double *v118; // r0
  int v119; // r6
  int v120; // t1
  char *v121; // r0
  char *v122; // r5
  int *v123; // r8
  int v124; // r6
  int v125; // t1
  _DWORD *v126; // r0
  char *v127; // r0
  char *v128; // r0
  _DWORD *v129; // r0
  int *v131; // r8
  char *v132; // r0
  char *v133; // r4
  char *v134; // r6
  int v135; // t1
  __int64 v136; // r0
  double *v137; // r0
  __int64 v138; // r0
  double *v139; // r0
  __int64 v140; // r0
  int v141; // r0
  char *v142; // [sp+10h] [bp-1234h]
  int v143; // [sp+18h] [bp-122Ch]
  int *v144; // [sp+1Ch] [bp-1228h]
  char *ptr; // [sp+2Ch] [bp-1218h]
  int v147; // [sp+34h] [bp-1210h]
  _DWORD *v148; // [sp+38h] [bp-120Ch]
  int v149; // [sp+48h] [bp-11FCh] BYREF
  int v150; // [sp+4Ch] [bp-11F8h] BYREF
  int v151; // [sp+50h] [bp-11F4h] BYREF
  int v152; // [sp+54h] [bp-11F0h] BYREF
  double v153; // [sp+58h] [bp-11ECh] BYREF
  char v154[12]; // [sp+64h] [bp-11E0h] BYREF
  _QWORD v155[2]; // [sp+70h] [bp-11D4h] BYREF
  __int64 v156; // [sp+80h] [bp-11C4h] BYREF
  __int64 v157; // [sp+88h] [bp-11BCh]
  double v158; // [sp+90h] [bp-11B4h]
  double v159; // [sp+98h] [bp-11ACh]
  char v160[32]; // [sp+A0h] [bp-11A4h] BYREF
  char v161[32]; // [sp+C0h] [bp-1184h] BYREF
  char v162[32]; // [sp+E0h] [bp-1164h] BYREF
  char v163[32]; // [sp+100h] [bp-1144h] BYREF
  char v164[4]; // [sp+120h] [bp-1124h] BYREF
  char s[256]; // [sp+140h] [bp-1104h] BYREF
  char v166[4]; // [sp+240h] [bp-1004h] BYREF
  int v167; // [sp+244h] [bp-1000h]
  int v168; // [sp+248h] [bp-FFCh]
  float v169; // [sp+24Ch] [bp-FF8h]
  float v170; // [sp+250h] [bp-FF4h]
  float v171; // [sp+254h] [bp-FF0h]
  float v172; // [sp+258h] [bp-FECh]
  double v173; // [sp+260h] [bp-FE4h]

  v3 = a1 == 0;
  memset(v155, 0, sizeof(v155));
  v158 = 0.0;
  v156 = 0;
  v157 = 0;
  v159 = 0.0;
  v4 = memset(s, 0, sizeof(s));
  v149 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v4);
    v141 = logfmt_raw((int)v166, 0x1000u);
    V_UNLOCK(v141);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_stats_old",
      13,
      1431,
      100,
      v166);
    return -2147483646;
  }
  else
  {
    sub_7E9FC((int)a1, 1, 70, *(_DWORD *)(a2 + 8));
    v148 = json_array();
    v5 = json_object();
    v6 = BUFX_strdup("2.12");
    json_object_set_new(v5, "BMMiner", v6);
    v7 = BUFX_strdup(g_miner_version);
    json_object_set_new(v5, "Miner", v7);
    v8 = BUFX_strdup(g_miner_compiletime);
    json_object_set_new(v5, "CompileTime", v8);
    v9 = BUFX_strdup(g_miner_type);
    json_object_set_new(v5, "Type", v9);
    json_array_append_new(v148, v5);
    read_system_status_from_monitor(v166);
    v10 = v167;
    v11 = v169;
    v12 = v171;
    v13 = v172;
    v14 = LODWORD(v173);
    all_created_runtime = (char *)get_all_created_runtime(&v149);
    v147 = frontend_runtime_instance();
    if ( v149 > 0 )
    {
      v16 = 0;
      v144 = (int *)malloc(216 * v149);
      v131 = v144;
      v132 = (char *)malloc(4 * v149);
      ptr = v132;
      if ( v149 > 0 )
      {
        v133 = all_created_runtime - 4;
        v134 = v132 - 4;
        do
        {
          v135 = *((_DWORD *)v133 + 1);
          v133 += 4;
          read_status_from_monitor(v131, v135);
          ++v3;
          v131 += 54;
          v28 = v149 <= v3;
          *((_DWORD *)v134 + 1) = *(_DWORD *)(*(_DWORD *)v133 + 248) + 1;
          v134 += 4;
        }
        while ( !v28 );
        v16 = vshrd_n_s64(vdup_n_s32(v3).n64_i64[0], 0x20u);
      }
    }
    else
    {
      v16 = 0;
      ptr = 0;
      v144 = 0;
    }
    v17 = json_object();
    v18 = json_integer(v16);
    json_object_set_new(v17, "STATS", v18);
    snprintf((char *)v155, 0x10u, "BTM_SOC%d", v3);
    v19 = BUFX_strdup((char *)v155);
    json_object_set_new(v17, "ID", v19);
    v20 = v11;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v147 + 72) + 16), v160);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v147 + 72) + 16), v161);
    v21 = v13;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v147 + 72) + 16), v162);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v147 + 72) + 16), v163);
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v147 + 72) + 16), &v153, v154);
    v23 = v170;
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v24 = COERCE_DOUBLE(__PAIR64__(v14, v14));
    v22 = *(float *)&v24;
    v25 = sub_270644(LODWORD(v24), HIDWORD(v24));
    v26 = json_integer(v25);
    json_object_set_new(v17, "Elapsed", v26);
    v27 = v12 * v24;
    v28 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v28 = (unsigned int)(opt_algo - 6) > 1;
    v29 = v21 * v24;
    if ( v28 )
    {
      v136 = sub_270644(COERCE_UNSIGNED_INT64(v20 * v24 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v20 * v24 * 100.0)));
      sub_270788(v136, HIDWORD(v136));
      v137 = json_real();
      json_object_set_new(v17, "GHS 5s", v137);
      v138 = sub_270644(COERCE_UNSIGNED_INT64(v29 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * 100.0)));
      sub_270788(v138, HIDWORD(v138));
      v139 = json_real();
      json_object_set_new(v17, "GHS av", v139);
      v140 = sub_270644(COERCE_UNSIGNED_INT64(v27 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v27 * 100.0)));
      sub_270788(v140, HIDWORD(v140));
    }
    else
    {
      v30 = sub_270644(COERCE_UNSIGNED_INT64(v23 * v24 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v23 * v24 * 100.0)));
      v31 = COERCE_DOUBLE(sub_270788(v30, HIDWORD(v30)));
      v32 = json_real();
      json_object_set_new(v17, "GHS 5s", v32);
      v33 = *((float *)&v24 + 1) <= *(float *)&v24;
      if ( *((float *)&v24 + 1) <= *(float *)&v24 )
      {
        v24 = *(float *)&v24;
        v29 = v22 * v29;
      }
      else
      {
        v31 = *((float *)&v24 + 1);
      }
      if ( v33 )
      {
        v34 = v24 * v27;
      }
      else
      {
        v29 = v31 * v29;
        v34 = v31 * v27;
      }
      v35 = sub_270644(COERCE_UNSIGNED_INT64(v29 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * 100.0)));
      sub_270788(v35, HIDWORD(v35));
      v36 = json_real();
      json_object_set_new(v17, "GHS av", v36);
      v37 = sub_270644(COERCE_UNSIGNED_INT64(v34 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v34 * 100.0)));
      sub_270788(v37, HIDWORD(v37));
    }
    v38 = json_real();
    json_object_set_new(v17, "rate_30m", v38);
    v39 = sub_270644(COERCE_UNSIGNED_INT64(v153 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v153 * 100.0)));
    sub_270788(v39, HIDWORD(v39));
    v40 = json_real();
    json_object_set_new(v17, "total_rateideal", v40);
    v41 = json_integer(opt_bitmain_work_mode);
    json_object_set_new(v17, "Mode", v41);
    v42 = json_integer(v149);
    json_object_set_new(v17, "miner_count", v42);
    if ( v149 <= 0 )
    {
      v44 = 0x7FFFFFFF;
    }
    else
    {
      v43 = v144;
      LODWORD(v44) = 0x7FFFFFFF;
      do
      {
        v45 = v43[18];
        v43 += 54;
        if ( (int)v44 >= v45 )
          LODWORD(v44) = v45;
      }
      while ( &v144[54 * v149] != v43 );
      v44 = (int)v44;
    }
    v46 = json_integer(v44);
    json_object_set_new(v17, "frequency", v46);
    v47 = json_integer(v10);
    json_object_set_new(v17, "fan_num", v47);
    if ( v10 > 0 )
    {
      v48 = v168 - 4;
      v49 = 0;
      do
      {
        ++v49;
        v156 = 0;
        v157 = 0;
        v158 = 0.0;
        v159 = 0.0;
        snprintf((char *)&v156, 0x20u, "fan%d", v49);
        v50 = *(_DWORD *)(v48 + 4);
        v48 += 4;
        v51 = json_integer(v50);
        json_object_set_new(v17, (char *)&v156, v51);
      }
      while ( v49 != v10 );
    }
    if ( v149 <= 0 )
    {
      v56 = 0;
      v57 = -100;
    }
    else
    {
      v52 = -100;
      v53 = v144;
      LOBYTE(v54) = 0;
      do
      {
        v55 = v53[4];
        v53 += 54;
        if ( v52 < v55 )
          v52 = v55;
        v54 = (unsigned __int8)(v54 + *((_BYTE *)v53 - 192) + *((_BYTE *)v53 - 188));
      }
      while ( v53 != &v144[54 * v149] );
      v56 = vshrd_n_u64(vdup_n_s8(v54).n64_u64[0], 0x38u);
      v57 = vshrd_n_s64(vdup_n_s32(v52).n64_i64[0], 0x20u);
    }
    v58 = json_integer(v56);
    json_object_set_new(v17, "temp_num", v58);
    if ( v149 > 0 )
    {
      v59 = v144;
      v60 = 0;
      v142 = ptr - 4;
      do
      {
        v61 = v59[6];
        v62 = (int *)*v59;
        v150 = 0;
        ++v60;
        v151 = 0;
        v152 = 0;
        v59 += 54;
        *(_DWORD *)v164 = 0;
        find_min_and_max_int(v62, v61, &v150, &v151);
        v63 = *(v59 - 47);
        find_min_and_max_int((int *)*(v59 - 52), v63, &v152, v164);
        v64 = *(_DWORD *)v164;
        v65 = *((_DWORD *)v142 + 1);
        if ( *(int *)v164 < v151 )
          v64 = v151;
        v142 += 4;
        v143 = v64;
        sprintf((char *)&v156, "temp%d", v65);
        v66 = json_integer(v143);
        json_object_set_new(v17, (char *)&v156, v66);
        v67 = (int *)*(v59 - 53);
        *(_DWORD *)v164 = 0;
        v152 = 0;
        v151 = 0;
        v150 = 0;
        find_min_and_max_int(v67, v61, &v150, &v151);
        find_min_and_max_int((int *)*(v59 - 51), v63, &v152, v164);
        v68 = v65;
        if ( *(int *)v164 < v151 )
          v69 = v151;
        else
          v69 = *(_DWORD *)v164;
        sprintf((char *)&v156, "temp2_%d", v68);
        v70 = json_integer(v69);
        json_object_set_new(v17, (char *)&v156, v70);
      }
      while ( v149 > v60 );
      v71 = v144;
      if ( v149 > 0 )
      {
        v72 = ptr - 4;
        v73 = 0;
        do
        {
          v156 = 0;
          v157 = 0;
          ++v73;
          v158 = 0.0;
          v159 = 0.0;
          memset(s, 0, sizeof(s));
          v74 = *((_DWORD *)v72 + 1);
          v72 += 4;
          snprintf((char *)&v156, 0x20u, "temp_in_pcb_%d", v74);
          v75 = v71[6];
          v76 = *v71;
          v71 += 54;
          sub_7EEC4(v76, v75, s);
          v77 = BUFX_strdup(s);
          json_object_set_new(v17, (char *)&v156, v77);
        }
        while ( v149 > v73 );
        if ( v149 > 0 )
        {
          v78 = ptr - 4;
          v79 = v144;
          v80 = 0;
          do
          {
            v156 = 0;
            v157 = 0;
            ++v80;
            v79 += 54;
            v158 = 0.0;
            v159 = 0.0;
            memset(s, 0, sizeof(s));
            v81 = *((_DWORD *)v78 + 1);
            v78 += 4;
            snprintf((char *)&v156, 0x20u, "temp_out_pcb_%d", v81);
            sub_7EEC4(*(v79 - 52), *(v79 - 47), s);
            v82 = BUFX_strdup(s);
            json_object_set_new(v17, (char *)&v156, v82);
          }
          while ( v149 > v80 );
          if ( v149 > 0 )
          {
            v83 = ptr - 4;
            v84 = v144;
            v85 = 0;
            do
            {
              v156 = 0;
              v157 = 0;
              ++v85;
              v84 += 54;
              v158 = 0.0;
              v159 = 0.0;
              memset(s, 0, sizeof(s));
              v86 = *((_DWORD *)v83 + 1);
              v83 += 4;
              snprintf((char *)&v156, 0x20u, "temp_in_chip_%d", v86);
              sub_7EEC4(*(v84 - 53), *(v84 - 48), s);
              v87 = BUFX_strdup(s);
              json_object_set_new(v17, (char *)&v156, v87);
            }
            while ( v149 > v85 );
            if ( v149 > 0 )
            {
              v88 = ptr - 4;
              v89 = v144;
              v90 = 0;
              do
              {
                v156 = 0;
                v157 = 0;
                ++v90;
                v89 += 54;
                v158 = 0.0;
                v159 = 0.0;
                memset(s, 0, sizeof(s));
                v91 = *((_DWORD *)v88 + 1);
                v88 += 4;
                snprintf((char *)&v156, 0x20u, "temp_out_chip_%d", v91);
                sub_7EEC4(*(v89 - 52), *(v89 - 47), s);
                v92 = BUFX_strdup(s);
                json_object_set_new(v17, (char *)&v156, v92);
              }
              while ( v149 > v90 );
            }
          }
        }
      }
    }
    v93 = json_integer(v57);
    json_object_set_new(v17, "temp_max", v93);
    if ( v149 <= 0 )
      goto LABEL_83;
    v94 = v144;
    v95 = 0;
    v96 = ptr - 4;
    v97 = ptr - 4;
    v98 = v144;
    do
    {
      v99 = *((_DWORD *)v96 + 1);
      v96 += 4;
      v156 = 0;
      v157 = 0;
      ++v95;
      v94 += 54;
      v158 = 0.0;
      v159 = 0.0;
      snprintf((char *)&v156, 0x20u, "chain_acn%d", v99);
      v100 = json_integer(*(v94 - 38));
      json_object_set_new(v17, (char *)&v156, v100);
    }
    while ( v149 > v95 );
    if ( v149 <= 0 )
      goto LABEL_83;
    v101 = 0;
    do
    {
      v102 = *((_DWORD *)v97 + 1);
      v97 += 4;
      ++v101;
      v98 += 54;
      sprintf(v164, "chain_acs%d", v102);
      v156 = 0;
      v157 = 0;
      v158 = 0.0;
      v159 = 0.0;
      memset(s, 0, sizeof(s));
      snprintf((char *)&v156, 0x20u, "chain_acs%d", v102);
      snprintf(s, 0x100u, "%s", (const char *)*(v98 - 37));
      v103 = BUFX_strdup(s);
      json_object_set_new(v17, (char *)&v156, v103);
    }
    while ( v149 > v101 );
    if ( v149 <= 0 )
    {
LABEL_83:
      v104 = 0;
    }
    else
    {
      v104 = 0;
      v105 = ptr - 4;
      v106 = v144;
      v107 = 0;
      do
      {
        v108 = *((_DWORD *)v105 + 1);
        v105 += 4;
        v156 = 0;
        v157 = 0;
        ++v107;
        v106 += 54;
        v158 = 0.0;
        v159 = 0.0;
        snprintf((char *)&v156, 0x20u, "chain_hw%d", v108);
        v104 += *((_QWORD *)v106 - 17);
        v109 = json_integer(*((_QWORD *)v106 - 17));
        json_object_set_new(v17, (char *)&v156, v109);
      }
      while ( v149 > v107 );
    }
    if ( opt_algo == 9 )
      v110 = sub_2704F8(v104, HIDWORD(v104), 1000, 0);
    else
      v110 = v104;
    v111 = json_integer(v110);
    json_object_set_new(v17, "no_matching_work", v111);
    if ( v149 > 0 )
    {
      v112 = v144;
      v113 = 0;
      v114 = ptr - 4;
      v115 = ptr - 4;
      v116 = v144;
      do
      {
        v117 = *((_DWORD *)v114 + 1);
        v114 += 4;
        v156 = 0;
        v157 = 0;
        ++v113;
        v112 += 54;
        v158 = 0.0;
        v159 = 0.0;
        snprintf((char *)&v156, 0x20u, "chain_rate%d", v117);
        v118 = json_real();
        json_object_set_new(v17, (char *)&v156, v118);
      }
      while ( v149 > v113 );
      if ( v149 > 0 )
      {
        v119 = 0;
        do
        {
          ++v119;
          v116 += 54;
          format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v147 + 72) + 16), v164);
          v120 = *((_DWORD *)v115 + 1);
          v115 += 4;
          snprintf((char *)&v156, 0x20u, "CHAIN AVG HASHRATE%d", v120);
          v121 = BUFX_strdup(v164);
          json_object_set_new(v17, (char *)&v156, v121);
        }
        while ( v149 > v119 );
        if ( v149 > 0 )
        {
          v122 = ptr - 4;
          v123 = v144;
          v124 = 0;
          do
          {
            v125 = *((_DWORD *)v122 + 1);
            v122 += 4;
            v156 = 0;
            v157 = 0;
            ++v124;
            v123 += 54;
            v158 = 0.0;
            v159 = 0.0;
            snprintf((char *)&v156, 0x20u, "freq%d", v125);
            v126 = json_integer(*(v123 - 36));
            json_object_set_new(v17, (char *)&v156, v126);
          }
          while ( v149 > v124 );
        }
      }
    }
    v127 = BUFX_strdup(g_miner_version);
    json_object_set_new(v17, "miner_version", v127);
    v128 = BUFX_strdup(0);
    json_object_set_new(v17, "miner_id", v128);
    json_array_append_new(v148, v17);
    json_object_set_new(a1, "STATS", v148);
    v129 = json_integer(1);
    json_object_set_new(a1, "id", v129);
    if ( v149 > 0 )
    {
      free(ptr);
      free(v144);
    }
    return 0;
  }
}
