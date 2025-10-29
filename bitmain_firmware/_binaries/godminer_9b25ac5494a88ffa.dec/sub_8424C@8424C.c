int __fastcall sub_8424C(int a1, const char **a2)
{
  int v3; // r7
  int all_created_runtime; // r8
  int v5; // r0
  int v6; // r2
  int v7; // r6
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r3
  double v12; // d0
  int v13; // r6
  char *status_from_monitor; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  __int64 v18; // r4
  float v19; // s25
  float v20; // s22
  double v21; // d9
  double v22; // d8
  int v23; // r8
  __int64 v24; // r0
  int v25; // r0
  bool v26; // cc
  __int64 v27; // r0
  int v28; // d16.s[0]
  int v29; // r0
  __int64 v30; // r0
  double v31; // r0
  int v32; // r0
  int v33; // r7
  int v34; // r1
  __int64 v35; // r0
  double v36; // r0
  int v37; // r0
  __int64 v38; // r0
  double v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r7
  int *v46; // r8
  int *v47; // r6
  int v48; // t1
  int v49; // r0
  double v50; // r0
  __int64 v51; // r10
  int v52; // r0
  int v53; // r0
  __int64 v54; // r0
  char *v55; // r6
  const char *v56; // r2
  int v57; // r3
  int v58; // r8
  __int64 v59; // r0
  int v60; // r0
  int v61; // r0
  double v62; // d8
  __int64 v63; // r0
  double v64; // r0
  int v65; // r0
  __int64 v66; // r0
  double v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r0
  __int64 v72; // r4
  int v73; // r7
  int v74; // r10
  int v75; // r0
  int v76; // r10
  int v77; // r0
  int v78; // r0
  int v79; // r7
  int v80; // r10
  int v81; // r11
  int v82; // t1
  int v83; // r0
  int *v84; // r11
  int *v85; // r10
  int v86; // t1
  int v87; // r0
  int v88; // r0
  int v89; // r7
  int v90; // r10
  int v91; // r11
  int v92; // t1
  int v93; // r0
  int v94; // r10
  int v95; // t1
  int v96; // r0
  __int64 v97; // r0
  int v98; // r0
  int v99; // r0
  int v100; // r0
  int v101; // r0
  int v102; // r2
  int eeprom_chip_sn; // r0
  int v104; // r0
  int v106; // r0
  int v107; // r2
  char *v108; // r7
  size_t v109; // r5
  size_t v110; // r2
  bool v111; // cf
  int v112; // r3
  int v113; // t1
  bool v114; // zf
  int v115; // r0
  int v116; // r0
  int v117; // r0
  int v118; // r0
  double v119; // d9
  double v120; // r0
  __int64 v121; // r0
  char *v122; // r10
  _DWORD *v123; // r11
  _DWORD *v124; // r8
  int v125; // t1
  __int64 v126; // r0
  double v127; // r0
  int v128; // r0
  __int64 v129; // r0
  double v130; // r0
  int v131; // r0
  const char *v132; // [sp+14h] [bp-1080h]
  char *v133; // [sp+18h] [bp-107Ch]
  int v134; // [sp+1Ch] [bp-1078h]
  int v135; // [sp+2Ch] [bp-1068h]
  char *v137; // [sp+34h] [bp-1060h]
  char *ptr; // [sp+38h] [bp-105Ch]
  int v139; // [sp+3Ch] [bp-1058h]
  int v140; // [sp+44h] [bp-1050h] BYREF
  double v141; // [sp+48h] [bp-104Ch] BYREF
  double v142; // [sp+50h] [bp-1044h] BYREF
  _DWORD v143[2]; // [sp+58h] [bp-103Ch] BYREF
  int *v144; // [sp+60h] [bp-1034h]
  float v145; // [sp+64h] [bp-1030h]
  float v146; // [sp+68h] [bp-102Ch]
  float v147; // [sp+6Ch] [bp-1028h]
  float v148; // [sp+70h] [bp-1024h]
  double v149; // [sp+78h] [bp-101Ch]
  __int64 v150; // [sp+88h] [bp-100Ch]
  char v151[4100]; // [sp+90h] [bp-1004h] BYREF

  v3 = a1 == 0;
  v142 = 0.0;
  v140 = 0;
  all_created_runtime = get_all_created_runtime(&v140);
  v5 = frontend_runtime_instance(all_created_runtime);
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v5);
    v131 = logfmt_raw((int)v151, 0x1000u);
    V_UNLOCK(v131);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "get_stats",
      9,
      759,
      100,
      v151);
    return -2147483646;
  }
  else
  {
    v7 = v5;
    sub_7E868(a1, a2, v6);
    v10 = sub_7E970(a1, v8, v9);
    v139 = json_array(v10);
    read_system_status_from_monitor(v143);
    v11 = *(_DWORD *)(v7 + 72);
    v12 = v149;
    v13 = v143[1];
    status_from_monitor = (char *)format_hashrate_double(*(_DWORD *)(v11 + 16), &v141, &v142);
    v17 = v140;
    v18 = v150;
    v19 = v145;
    v20 = v146;
    v21 = v147 * v12;
    v22 = v148 * v12;
    if ( v140 > 0 )
    {
      v137 = (char *)malloc(224 * v140);
      v122 = v137;
      status_from_monitor = (char *)malloc(4 * v140);
      v17 = v140;
      v123 = status_from_monitor;
      ptr = status_from_monitor;
      if ( v140 > 0 )
      {
        v124 = (_DWORD *)(all_created_runtime - 4);
        do
        {
          v125 = v124[1];
          ++v124;
          status_from_monitor = (char *)read_status_from_monitor(v122, v125);
          v17 = v140;
          v122 += 224;
          v16 = *(_DWORD *)(*v124 + 244);
          v123[v3++] = v16;
        }
        while ( v17 > v3 );
      }
    }
    else
    {
      ptr = 0;
      v137 = 0;
    }
    v23 = json_object(status_from_monitor, v15, v16, v17);
    v135 = v23;
    get_total_nonce_rate();
    get_total_accept_rate();
    get_miner_elapsed_time();
    v24 = sub_26C52C(LODWORD(v12), HIDWORD(v12));
    v25 = json_integer(v24, HIDWORD(v24));
    json_object_set_new(v23, "elapsed", v25);
    v26 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v26 = (unsigned int)(opt_algo - 6) > 1;
    if ( v26 )
    {
      v126 = sub_26C52C(COERCE_UNSIGNED_INT64(v19 * v12 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v19 * v12 * 100.0)));
      v127 = sub_26C670(v126, HIDWORD(v126));
      v128 = json_real(LODWORD(v127));
      v33 = v23;
      json_object_set_new(v23, "rate_5s", v128);
      v129 = sub_26C52C(COERCE_UNSIGNED_INT64(v22 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v22 * 100.0)));
      v130 = sub_26C670(v129, HIDWORD(v129));
      v32 = json_real(LODWORD(v130));
      LOWORD(v34) = -1640;
    }
    else
    {
      v27 = sub_26C52C(COERCE_UNSIGNED_INT64(v20 * v12 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v20 * v12 * 100.0)));
      v28 = COERCE_UNSIGNED_INT64(sub_26C670(v27, HIDWORD(v27)));
      v29 = json_real(v28);
      json_object_set_new(v23, "rate_5s", v29);
      v21 = *(float *)&v12 * v21;
      v30 = sub_26C52C(
              COERCE_UNSIGNED_INT64(*(float *)&v12 * v22 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v12 * v22 * 100.0)));
      v31 = sub_26C670(v30, HIDWORD(v30));
      v32 = json_real(LODWORD(v31));
      v33 = v23;
      LOWORD(v34) = (unsigned __int16)"rate_avg";
    }
    HIWORD(v34) = (unsigned int)"rate_avg" >> 16;
    json_object_set_new(v33, v34, v32);
    v35 = sub_26C52C(COERCE_UNSIGNED_INT64(v21 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v21 * 100.0)));
    v36 = sub_26C670(v35, HIDWORD(v35));
    v37 = json_real(LODWORD(v36));
    json_object_set_new(v33, "rate_30m", v37);
    v38 = sub_26C52C(COERCE_UNSIGNED_INT64(v141 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v141 * 100.0)));
    v39 = sub_26C670(v38, HIDWORD(v38));
    v40 = json_real(LODWORD(v39));
    json_object_set_new(v23, "rate_ideal", v40);
    v41 = json_string(&v142);
    json_object_set_new(v23, "rate_unit", v41);
    v42 = json_integer(v140, v140 >> 31);
    json_object_set_new(v23, "chain_num", v42);
    v43 = json_integer(v13, v13 >> 31);
    v44 = json_object_set_new(v23, "fan_num", v43);
    v45 = json_array(v44);
    if ( v13 > 0 )
    {
      v46 = v144;
      v47 = &v144[v13];
      do
      {
        v48 = *v46++;
        v49 = json_integer(v48, v48 >> 31);
        json_array_append_new(v45, v49);
      }
      while ( v47 != v46 );
    }
    LODWORD(v50) = json_object_set_new(v135, "fan", v45);
    v51 = *(_QWORD *)&total_diff1 + v18;
    if ( *(_QWORD *)&total_diff1 + v18 )
    {
      v119 = sub_26C5E0(v18, HIDWORD(v18));
      v120 = sub_26C5E0(v51, HIDWORD(v51));
      v121 = sub_26C52C(
               COERCE_UNSIGNED_INT64(v119 / v120 * 100.0 * 10000.0),
               HIDWORD(COERCE_UNSIGNED_INT64(v119 / v120 * 100.0 * 10000.0)));
      v50 = sub_26C670(v121, HIDWORD(v121));
    }
    v52 = json_real(LODWORD(v50));
    v53 = json_object_set_new(v135, "hwp_total", v52);
    v54 = json_array(v53);
    v134 = v54;
    if ( v140 > 0 )
    {
      v55 = v137;
      v56 = "freq_avg";
      v133 = ptr - 4;
      v57 = 0;
      v132 = 0;
      while ( 1 )
      {
        v58 = json_object(v54, HIDWORD(v54), v56, v57);
        v59 = *((int *)v133 + 1);
        v133 += 4;
        v60 = json_integer(v59, HIDWORD(v59));
        json_object_set_new(v58, "index", v60);
        v61 = json_integer(*((_DWORD *)v55 + 20), *((int *)v55 + 20) >> 31);
        json_object_set_new(v58, "freq_avg", v61);
        v62 = *((float *)v55 + 11);
        v141 = v12 * *((double *)v55 + 7);
        v63 = sub_26C52C(COERCE_UNSIGNED_INT64(v141 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v141 * 100.0)));
        v64 = sub_26C670(v63, HIDWORD(v63));
        v65 = json_real(LODWORD(v64));
        json_object_set_new(v58, "rate_ideal", v65);
        v66 = sub_26C52C(COERCE_UNSIGNED_INT64(v62 * v12 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v62 * v12 * 100.0)));
        v67 = sub_26C670(v66, HIDWORD(v66));
        v68 = json_real(LODWORD(v67));
        json_object_set_new(v58, "rate_real", v68);
        v69 = json_integer(*((_DWORD *)v55 + 18), *((int *)v55 + 18) >> 31);
        v70 = json_object_set_new(v58, "asic_num", v69);
        if ( *((_DWORD *)v55 + 19) )
        {
          v108 = v151;
          v109 = 0;
          v110 = stpcpy(v151) - (_DWORD)v151;
          while ( 1 )
          {
            v111 = v109++ >= v110;
            if ( v111 )
              break;
            while ( 1 )
            {
              v113 = (unsigned __int8)*v108++;
              v112 = v113;
              v114 = v113 == 111;
              if ( v113 != 111 )
                v114 = v112 == 32;
              if ( v114 )
                break;
              *(v108 - 1) = 120;
              v110 = strlen(v151);
              v111 = v109++ >= v110;
              if ( v111 )
                goto LABEL_57;
            }
          }
LABEL_57:
          v115 = json_string(v151);
          v70 = json_object_set_new(v58, "asic", v115);
        }
        v71 = json_array(v70);
        v72 = *(_QWORD *)(v55 + 28);
        v73 = v71;
        if ( (int)v72 <= 0 )
          break;
        v74 = 0;
        do
        {
          v75 = json_integer(0, 0);
          ++v74;
          json_array_append_new(v73, v75);
        }
        while ( v74 != (_DWORD)v72 );
        if ( v72 > 0 )
          goto LABEL_22;
        v118 = json_object_set_new(v58, "temp_pic", v73);
        v79 = json_array(v118);
LABEL_25:
        v80 = 0;
        v81 = *((_DWORD *)v55 + 1) - 4;
        do
        {
          v82 = *(_DWORD *)(v81 + 4);
          v81 += 4;
          ++v80;
          v83 = json_integer(v82, v82 >> 31);
          json_array_append_new(v79, v83);
        }
        while ( v80 < (int)v72 );
        if ( v72 > 0 )
          goto LABEL_28;
LABEL_62:
        v117 = json_object_set_new(v58, "temp_pcb", v79);
        v89 = json_array(v117);
        if ( (int)v72 > 0 )
          goto LABEL_31;
LABEL_36:
        json_object_set_new(v58, "temp_chip", v89);
        v97 = *((_QWORD *)v55 + 11);
        if ( opt_algo == 9 )
          v97 = sub_26C3E0(v97, HIDWORD(v97), 1000, 0);
        v98 = json_integer(v97, HIDWORD(v97));
        v99 = json_object_set_new(v58, "hw", v98);
        v100 = is_eeprom_loaded(v99);
        if ( v100 )
        {
          v101 = is_eeprom_loaded(v100);
          if ( v101 )
            v102 = json_true(v101);
          else
            v102 = json_false(0);
          json_object_set_new(v58, "eeprom_loaded", v102);
          if ( api_get_eeprom_chip_sn(v132) )
          {
            eeprom_chip_sn = api_get_eeprom_chip_sn(v132);
            v104 = json_string(eeprom_chip_sn);
            json_object_set_new(v58, "sn", v104);
          }
        }
        else
        {
          v106 = is_eeprom_loaded(0);
          if ( v106 )
            v107 = json_true(v106);
          else
            v107 = json_false(0);
          json_object_set_new(v58, "eeprom_loaded", v107);
        }
        LODWORD(v54) = json_array_append_new(v134, v58);
        v57 = v140;
        v55 += 224;
        v56 = v132 + 1;
        v132 = v56;
        if ( v140 <= (int)v56 )
          goto LABEL_44;
      }
      if ( SHIDWORD(v72) <= 0 )
      {
        v116 = json_object_set_new(v58, "temp_pic", v71);
        v79 = json_array(v116);
        goto LABEL_62;
      }
LABEL_22:
      v76 = 0;
      do
      {
        v77 = json_integer(0, 0);
        ++v76;
        json_array_append_new(v73, v77);
      }
      while ( v76 < SHIDWORD(v72) );
      v78 = json_object_set_new(v58, "temp_pic", v73);
      v79 = json_array(v78);
      if ( (int)v72 <= 0 )
      {
LABEL_28:
        v84 = (int *)*((_DWORD *)v55 + 3);
        v85 = &v84[HIDWORD(v72)];
        do
        {
          v86 = *v84++;
          v87 = json_integer(v86, v86 >> 31);
          json_array_append_new(v79, v87);
        }
        while ( v85 != v84 );
        v88 = json_object_set_new(v58, "temp_pcb", v79);
        v89 = json_array(v88);
        if ( (int)v72 > 0 )
        {
LABEL_31:
          v90 = 0;
          v91 = *((_DWORD *)v55 + 2) - 4;
          do
          {
            v92 = *(_DWORD *)(v91 + 4);
            v91 += 4;
            ++v90;
            v93 = json_integer(v92, v92 >> 31);
            json_array_append_new(v89, v93);
          }
          while ( v90 < (int)v72 );
          if ( v72 <= 0 )
            goto LABEL_36;
        }
        LODWORD(v72) = 0;
        v94 = *((_DWORD *)v55 + 4) - 4;
        do
        {
          v95 = *(_DWORD *)(v94 + 4);
          v94 += 4;
          LODWORD(v72) = v72 + 1;
          v96 = json_integer(v95, v95 >> 31);
          json_array_append_new(v89, v96);
        }
        while ( (int)v72 < SHIDWORD(v72) );
        goto LABEL_36;
      }
      goto LABEL_25;
    }
LABEL_44:
    json_object_set_new(v135, "chain", v134);
    json_array_append_new(v139, v135);
    json_object_set_new(a1, "STATS", v139);
    if ( v140 > 0 )
    {
      free(ptr);
      free(v137);
    }
    return 0;
  }
}
