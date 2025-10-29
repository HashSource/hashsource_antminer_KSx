int __fastcall sub_84194(_DWORD *a1, const char **a2)
{
  int v3; // r7
  char *all_created_runtime; // r8
  int v5; // r0
  int v6; // r6
  int v7; // r3
  double v8; // d0
  int v9; // r6
  __int64 v10; // r4
  float v11; // s25
  float v12; // s22
  double v13; // d9
  double v14; // d8
  _DWORD *v15; // r8
  __int64 v16; // r0
  _DWORD *v17; // r0
  bool v18; // cc
  __int64 v19; // r0
  double *v20; // r0
  __int64 v21; // r0
  double *v22; // r0
  _DWORD *v23; // r7
  char *v24; // r1
  __int64 v25; // r0
  double *v26; // r0
  __int64 v27; // r0
  double *v28; // r0
  char *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r7
  int *v33; // r8
  int *v34; // r6
  int v35; // t1
  _DWORD *v36; // r0
  __int64 v37; // r10
  double *v38; // r0
  char *v39; // r6
  _DWORD *v40; // r8
  __int64 v41; // r0
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  double v44; // d8
  __int64 v45; // r0
  double *v46; // r0
  __int64 v47; // r0
  double *v48; // r0
  _DWORD *v49; // r0
  _DWORD *v50; // r0
  __int64 v51; // r4
  _DWORD *v52; // r7
  int v53; // r10
  _DWORD *v54; // r0
  int v55; // r10
  _DWORD *v56; // r0
  _DWORD *v57; // r7
  int v58; // r10
  int v59; // r11
  int v60; // t1
  _DWORD *v61; // r0
  int *v62; // r11
  int *v63; // r10
  int v64; // t1
  _DWORD *v65; // r0
  _DWORD *v66; // r7
  int v67; // r10
  int v68; // r11
  int v69; // t1
  _DWORD *v70; // r0
  int v71; // r10
  int v72; // t1
  _DWORD *v73; // r0
  __int64 v74; // r0
  _DWORD *v75; // r0
  int v76; // r0
  _DWORD *v77; // r2
  char *eeprom_chip_sn; // r0
  char *v79; // r0
  int v81; // r0
  _DWORD *v82; // r2
  char *v83; // r7
  size_t v84; // r5
  size_t v85; // r2
  bool v86; // cf
  int v87; // r3
  int v88; // t1
  bool v89; // zf
  char *v90; // r0
  double v91; // d9
  double v92; // r0
  __int64 v93; // r0
  char *v94; // r10
  char *v95; // r11
  char *v96; // r8
  int v97; // t1
  int v98; // r3
  __int64 v99; // r0
  double *v100; // r0
  __int64 v101; // r0
  int v102; // r0
  int v103; // [sp+14h] [bp-1080h]
  char *v104; // [sp+18h] [bp-107Ch]
  _DWORD *v105; // [sp+1Ch] [bp-1078h]
  _DWORD *v106; // [sp+2Ch] [bp-1068h]
  char *v108; // [sp+34h] [bp-1060h]
  char *ptr; // [sp+38h] [bp-105Ch]
  _DWORD *v110; // [sp+3Ch] [bp-1058h]
  int v111; // [sp+44h] [bp-1050h] BYREF
  double v112; // [sp+48h] [bp-104Ch] BYREF
  double v113; // [sp+50h] [bp-1044h] BYREF
  _DWORD v114[2]; // [sp+58h] [bp-103Ch] BYREF
  int *v115; // [sp+60h] [bp-1034h]
  float v116; // [sp+64h] [bp-1030h]
  float v117; // [sp+68h] [bp-102Ch]
  float v118; // [sp+6Ch] [bp-1028h]
  float v119; // [sp+70h] [bp-1024h]
  double v120; // [sp+78h] [bp-101Ch]
  __int64 v121; // [sp+88h] [bp-100Ch]
  char v122[4100]; // [sp+90h] [bp-1004h] BYREF

  v3 = a1 == 0;
  v113 = 0.0;
  v111 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v111);
  v5 = frontend_runtime_instance(all_created_runtime);
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v5);
    v102 = logfmt_raw((int)v122, 0x1000u);
    V_UNLOCK(v102);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_stats",
      9,
      756,
      100,
      v122);
    return -2147483646;
  }
  else
  {
    v6 = v5;
    sub_7E7B8((int)a1, a2);
    sub_7E8C0((int)a1);
    v110 = json_array();
    read_system_status_from_monitor(v114);
    v7 = *(_DWORD *)(v6 + 72);
    v8 = v120;
    v9 = v114[1];
    format_hashrate_double(*(_DWORD *)(v7 + 16), &v112, &v113);
    v10 = v121;
    v11 = v116;
    v12 = v117;
    v13 = v118 * v8;
    v14 = v119 * v8;
    if ( v111 > 0 )
    {
      v108 = (char *)malloc(216 * v111);
      v94 = v108;
      v95 = (char *)malloc(4 * v111);
      ptr = v95;
      if ( v111 > 0 )
      {
        v96 = all_created_runtime - 4;
        do
        {
          v97 = *((_DWORD *)v96 + 1);
          v96 += 4;
          read_status_from_monitor(v94, v97);
          v98 = v111;
          v94 += 216;
          *(_DWORD *)&v95[4 * v3++] = *(_DWORD *)(*(_DWORD *)v96 + 248);
        }
        while ( v98 > v3 );
      }
    }
    else
    {
      ptr = 0;
      v108 = 0;
    }
    v15 = json_object();
    v106 = v15;
    get_total_nonce_rate();
    get_total_accept_rate();
    get_miner_elapsed_time();
    v16 = sub_270644(LODWORD(v8), HIDWORD(v8));
    v17 = json_integer(v16);
    json_object_set_new(v15, "elapsed", v17);
    v18 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v18 = (unsigned int)(opt_algo - 6) > 1;
    if ( v18 )
    {
      v99 = sub_270644(COERCE_UNSIGNED_INT64(v11 * v8 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v11 * v8 * 100.0)));
      sub_270788(v99, HIDWORD(v99));
      v100 = json_real();
      v23 = v15;
      json_object_set_new(v15, "rate_5s", v100);
      v101 = sub_270644(COERCE_UNSIGNED_INT64(v14 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 * 100.0)));
      sub_270788(v101, HIDWORD(v101));
      v22 = json_real();
      LOWORD(v24) = 15020;
    }
    else
    {
      v19 = sub_270644(COERCE_UNSIGNED_INT64(v12 * v8 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v12 * v8 * 100.0)));
      sub_270788(v19, HIDWORD(v19));
      v20 = json_real();
      json_object_set_new(v15, "rate_5s", v20);
      v13 = *(float *)&v8 * v13;
      v21 = sub_270644(
              COERCE_UNSIGNED_INT64(*(float *)&v8 * v14 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v8 * v14 * 100.0)));
      sub_270788(v21, HIDWORD(v21));
      v22 = json_real();
      v23 = v15;
      LOWORD(v24) = (unsigned __int16)"rate_avg";
    }
    HIWORD(v24) = (unsigned int)"rate_avg" >> 16;
    json_object_set_new(v23, v24, v22);
    v25 = sub_270644(COERCE_UNSIGNED_INT64(v13 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v13 * 100.0)));
    sub_270788(v25, HIDWORD(v25));
    v26 = json_real();
    json_object_set_new(v23, "rate_30m", v26);
    v27 = sub_270644(COERCE_UNSIGNED_INT64(v112 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v112 * 100.0)));
    sub_270788(v27, HIDWORD(v27));
    v28 = json_real();
    json_object_set_new(v15, "rate_ideal", v28);
    v29 = BUFX_strdup((char *)&v113);
    json_object_set_new(v15, "rate_unit", v29);
    v30 = json_integer(v111);
    json_object_set_new(v15, "chain_num", v30);
    v31 = json_integer(v9);
    json_object_set_new(v15, "fan_num", v31);
    v32 = json_array();
    if ( v9 > 0 )
    {
      v33 = v115;
      v34 = &v115[v9];
      do
      {
        v35 = *v33++;
        v36 = json_integer(v35);
        json_array_append_new(v32, v36);
      }
      while ( v34 != v33 );
    }
    json_object_set_new(v106, "fan", v32);
    v37 = *(_QWORD *)&total_diff1 + v10;
    if ( *(_QWORD *)&total_diff1 + v10 )
    {
      v91 = sub_2706F8(v10, HIDWORD(v10));
      v92 = sub_2706F8(v37, HIDWORD(v37));
      v93 = sub_270644(
              COERCE_UNSIGNED_INT64(v91 / v92 * 100.0 * 10000.0),
              HIDWORD(COERCE_UNSIGNED_INT64(v91 / v92 * 100.0 * 10000.0)));
      sub_270788(v93, HIDWORD(v93));
    }
    v38 = json_real();
    json_object_set_new(v106, "hwp_total", v38);
    v105 = json_array();
    if ( v111 > 0 )
    {
      v39 = v108;
      v104 = ptr - 4;
      v103 = 0;
      while ( 1 )
      {
        v40 = json_object();
        v41 = *((int *)v104 + 1);
        v104 += 4;
        v42 = json_integer(v41);
        json_object_set_new(v40, "index", v42);
        v43 = json_integer(*((int *)v39 + 18));
        json_object_set_new(v40, "freq_avg", v43);
        v44 = *((float *)v39 + 10);
        v112 = v8 * *((double *)v39 + 6);
        v45 = sub_270644(COERCE_UNSIGNED_INT64(v112 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v112 * 100.0)));
        sub_270788(v45, HIDWORD(v45));
        v46 = json_real();
        json_object_set_new(v40, "rate_ideal", v46);
        v47 = sub_270644(COERCE_UNSIGNED_INT64(v44 * v8 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v44 * v8 * 100.0)));
        sub_270788(v47, HIDWORD(v47));
        v48 = json_real();
        json_object_set_new(v40, "rate_real", v48);
        v49 = json_integer(*((int *)v39 + 16));
        json_object_set_new(v40, "asic_num", v49);
        if ( *((_DWORD *)v39 + 17) )
        {
          v83 = v122;
          v84 = 0;
          v85 = stpcpy(v122) - (_DWORD)v122;
          while ( 1 )
          {
            v86 = v84++ >= v85;
            if ( v86 )
              break;
            while ( 1 )
            {
              v88 = (unsigned __int8)*v83++;
              v87 = v88;
              v89 = v88 == 111;
              if ( v88 != 111 )
                v89 = v87 == 32;
              if ( v89 )
                break;
              *(v83 - 1) = 120;
              v85 = strlen(v122);
              v86 = v84++ >= v85;
              if ( v86 )
                goto LABEL_57;
            }
          }
LABEL_57:
          v90 = BUFX_strdup(v122);
          json_object_set_new(v40, "asic", v90);
        }
        v50 = json_array();
        v51 = *((_QWORD *)v39 + 3);
        v52 = v50;
        if ( (int)v51 <= 0 )
          break;
        v53 = 0;
        do
        {
          v54 = json_integer(0);
          ++v53;
          json_array_append_new(v52, v54);
        }
        while ( v53 != (_DWORD)v51 );
        if ( v51 > 0 )
          goto LABEL_22;
        json_object_set_new(v40, "temp_pic", v52);
        v57 = json_array();
LABEL_25:
        v58 = 0;
        v59 = *(_DWORD *)v39 - 4;
        do
        {
          v60 = *(_DWORD *)(v59 + 4);
          v59 += 4;
          ++v58;
          v61 = json_integer(v60);
          json_array_append_new(v57, v61);
        }
        while ( v58 < (int)v51 );
        if ( v51 > 0 )
          goto LABEL_28;
LABEL_62:
        json_object_set_new(v40, "temp_pcb", v57);
        v66 = json_array();
        if ( (int)v51 > 0 )
          goto LABEL_31;
LABEL_36:
        json_object_set_new(v40, "temp_chip", v66);
        v74 = *((_QWORD *)v39 + 10);
        if ( opt_algo == 9 )
          v74 = sub_2704F8(v74, HIDWORD(v74), 1000, 0);
        v75 = json_integer(v74);
        json_object_set_new(v40, "hw", v75);
        if ( is_eeprom_loaded() )
        {
          v76 = is_eeprom_loaded();
          if ( v76 )
            v77 = (_DWORD *)json_true(v76);
          else
            v77 = (_DWORD *)json_false(0);
          json_object_set_new(v40, "eeprom_loaded", v77);
          if ( api_get_eeprom_chip_sn(v103) )
          {
            eeprom_chip_sn = (char *)api_get_eeprom_chip_sn(v103);
            v79 = BUFX_strdup(eeprom_chip_sn);
            json_object_set_new(v40, "sn", v79);
          }
        }
        else
        {
          v81 = is_eeprom_loaded();
          if ( v81 )
            v82 = (_DWORD *)json_true(v81);
          else
            v82 = (_DWORD *)json_false(0);
          json_object_set_new(v40, "eeprom_loaded", v82);
        }
        json_array_append_new(v105, v40);
        v39 += 216;
        if ( v111 <= ++v103 )
          goto LABEL_44;
      }
      if ( SHIDWORD(v51) <= 0 )
      {
        json_object_set_new(v40, "temp_pic", v50);
        v57 = json_array();
        goto LABEL_62;
      }
LABEL_22:
      v55 = 0;
      do
      {
        v56 = json_integer(0);
        ++v55;
        json_array_append_new(v52, v56);
      }
      while ( v55 < SHIDWORD(v51) );
      json_object_set_new(v40, "temp_pic", v52);
      v57 = json_array();
      if ( (int)v51 <= 0 )
      {
LABEL_28:
        v62 = (int *)*((_DWORD *)v39 + 2);
        v63 = &v62[HIDWORD(v51)];
        do
        {
          v64 = *v62++;
          v65 = json_integer(v64);
          json_array_append_new(v57, v65);
        }
        while ( v63 != v62 );
        json_object_set_new(v40, "temp_pcb", v57);
        v66 = json_array();
        if ( (int)v51 > 0 )
        {
LABEL_31:
          v67 = 0;
          v68 = *((_DWORD *)v39 + 1) - 4;
          do
          {
            v69 = *(_DWORD *)(v68 + 4);
            v68 += 4;
            ++v67;
            v70 = json_integer(v69);
            json_array_append_new(v66, v70);
          }
          while ( v67 < (int)v51 );
          if ( v51 <= 0 )
            goto LABEL_36;
        }
        LODWORD(v51) = 0;
        v71 = *((_DWORD *)v39 + 3) - 4;
        do
        {
          v72 = *(_DWORD *)(v71 + 4);
          v71 += 4;
          LODWORD(v51) = v51 + 1;
          v73 = json_integer(v72);
          json_array_append_new(v66, v73);
        }
        while ( (int)v51 < SHIDWORD(v51) );
        goto LABEL_36;
      }
      goto LABEL_25;
    }
LABEL_44:
    json_object_set_new(v106, "chain", v105);
    json_array_append_new(v110, v106);
    json_object_set_new(a1, "STATS", v110);
    if ( v111 > 0 )
    {
      free(ptr);
      free(v108);
    }
    return 0;
  }
}
