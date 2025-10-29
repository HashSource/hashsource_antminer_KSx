int __fastcall sub_822F4(_DWORD *a1, const char **a2)
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
  int v50; // r1
  _DWORD *v51; // r0
  __int64 v52; // r4
  _DWORD *v53; // r7
  int v54; // r10
  _DWORD *v55; // r0
  int v56; // r10
  _DWORD *v57; // r0
  _DWORD *v58; // r7
  int v59; // r10
  int v60; // r11
  int v61; // t1
  _DWORD *v62; // r0
  int *v63; // r11
  int *v64; // r10
  int v65; // t1
  _DWORD *v66; // r0
  _DWORD *v67; // r7
  int v68; // r10
  int v69; // r11
  int v70; // t1
  _DWORD *v71; // r0
  int v72; // r10
  int v73; // t1
  _DWORD *v74; // r0
  __int64 v75; // r0
  _DWORD *v76; // r0
  _DWORD *v77; // r2
  char *eeprom_chip_sn; // r0
  char *v79; // r0
  _DWORD *v81; // r2
  char *v82; // r7
  size_t v83; // r5
  size_t v84; // r2
  bool v85; // cf
  int v86; // r3
  int v87; // t1
  bool v88; // zf
  char *v89; // r0
  double v90; // d9
  double v91; // r0
  __int64 v92; // r0
  char *v93; // r10
  char *v94; // r11
  char *v95; // r8
  int v96; // t1
  int v97; // r3
  __int64 v98; // r0
  double *v99; // r0
  __int64 v100; // r0
  int v101; // [sp+14h] [bp-1080h]
  char *v102; // [sp+18h] [bp-107Ch]
  _DWORD *v103; // [sp+1Ch] [bp-1078h]
  _DWORD *v104; // [sp+2Ch] [bp-1068h]
  char *v106; // [sp+34h] [bp-1060h]
  char *ptr; // [sp+38h] [bp-105Ch]
  _DWORD *v108; // [sp+3Ch] [bp-1058h]
  int v109; // [sp+44h] [bp-1050h] BYREF
  double v110; // [sp+48h] [bp-104Ch] BYREF
  double v111; // [sp+50h] [bp-1044h] BYREF
  _DWORD v112[2]; // [sp+58h] [bp-103Ch] BYREF
  int *v113; // [sp+60h] [bp-1034h]
  float v114; // [sp+64h] [bp-1030h]
  float v115; // [sp+68h] [bp-102Ch]
  float v116; // [sp+6Ch] [bp-1028h]
  float v117; // [sp+70h] [bp-1024h]
  double v118; // [sp+78h] [bp-101Ch]
  __int64 v119; // [sp+88h] [bp-100Ch]
  char v120[4100]; // [sp+90h] [bp-1004h] BYREF

  v3 = a1 == 0;
  v111 = 0.0;
  v109 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v109);
  v5 = frontend_runtime_instance();
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v120, 0x1000u, 0, "%s: input bad api param", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_stats",
      9,
      753,
      100,
      v120);
    return -2147483646;
  }
  else
  {
    v6 = v5;
    sub_7CEF0(a1, a2);
    sub_7CFF8(a1);
    v108 = json_array();
    read_system_status_from_monitor((int)v112);
    v7 = *(_DWORD *)(v6 + 72);
    v8 = v118;
    v9 = v112[1];
    format_hashrate_double(*(const char **)(v7 + 16), &v110, (char *)&v111);
    v10 = v119;
    v11 = v114;
    v12 = v115;
    v13 = v116 * v8;
    v14 = v117 * v8;
    if ( v109 > 0 )
    {
      v106 = (char *)malloc(216 * v109);
      v93 = v106;
      v94 = (char *)malloc(4 * v109);
      ptr = v94;
      if ( v109 > 0 )
      {
        v95 = all_created_runtime - 4;
        do
        {
          v96 = *((_DWORD *)v95 + 1);
          v95 += 4;
          read_status_from_monitor(v93, v96);
          v97 = v109;
          v93 += 216;
          *(_DWORD *)&v94[4 * v3++] = *(_DWORD *)(*(_DWORD *)v95 + 232);
        }
        while ( v97 > v3 );
      }
    }
    else
    {
      ptr = 0;
      v106 = 0;
    }
    v15 = json_object();
    v104 = v15;
    get_total_nonce_rate();
    get_total_accept_rate();
    get_miner_elapsed_time();
    LODWORD(v16) = sub_25A644(LODWORD(v8), SHIDWORD(v8));
    v17 = json_integer(v16);
    json_object_set_new(v15, "elapsed", v17);
    v18 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v18 = (unsigned int)(opt_algo - 6) > 1;
    if ( v18 )
    {
      LODWORD(v98) = sub_25A644(
                       COERCE_UNSIGNED_INT64(v11 * v8 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(v11 * v8 * 100.0)));
      sub_25A788(v98);
      v99 = json_real();
      v23 = v15;
      json_object_set_new(v15, "rate_5s", v99);
      LODWORD(v100) = sub_25A644(COERCE_UNSIGNED_INT64(v14 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 * 100.0)));
      sub_25A788(v100);
      v22 = json_real();
      LOWORD(v24) = -9780;
    }
    else
    {
      LODWORD(v19) = sub_25A644(
                       COERCE_UNSIGNED_INT64(v12 * v8 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(v12 * v8 * 100.0)));
      sub_25A788(v19);
      v20 = json_real();
      json_object_set_new(v15, "rate_5s", v20);
      v13 = *(float *)&v8 * v13;
      LODWORD(v21) = sub_25A644(
                       COERCE_UNSIGNED_INT64(*(float *)&v8 * v14 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v8 * v14 * 100.0)));
      sub_25A788(v21);
      v22 = json_real();
      v23 = v15;
      LOWORD(v24) = (unsigned __int16)"rate_avg";
    }
    HIWORD(v24) = (unsigned int)"rate_avg" >> 16;
    json_object_set_new(v23, v24, v22);
    LODWORD(v25) = sub_25A644(COERCE_UNSIGNED_INT64(v13 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v13 * 100.0)));
    sub_25A788(v25);
    v26 = json_real();
    json_object_set_new(v23, "rate_30m", v26);
    LODWORD(v27) = sub_25A644(COERCE_UNSIGNED_INT64(v110 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v110 * 100.0)));
    sub_25A788(v27);
    v28 = json_real();
    json_object_set_new(v15, "rate_ideal", v28);
    v29 = BUFX_strdup((char *)&v111);
    json_object_set_new(v15, "rate_unit", v29);
    v30 = json_integer(v109);
    json_object_set_new(v15, "chain_num", v30);
    v31 = json_integer(v9);
    json_object_set_new(v15, "fan_num", v31);
    v32 = json_array();
    if ( v9 > 0 )
    {
      v33 = v113;
      v34 = &v113[v9];
      do
      {
        v35 = *v33++;
        v36 = json_integer(v35);
        json_array_append_new(v32, v36);
      }
      while ( v34 != v33 );
    }
    json_object_set_new(v104, "fan", v32);
    v37 = *(_QWORD *)&total_diff1 + v10;
    if ( *(_QWORD *)&total_diff1 + v10 )
    {
      v90 = COERCE_DOUBLE(sub_25A6F8(v10));
      v91 = COERCE_DOUBLE(sub_25A6F8(v37));
      LODWORD(v92) = sub_25A644(
                       COERCE_UNSIGNED_INT64(v90 / v91 * 100.0 * 10000.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(v90 / v91 * 100.0 * 10000.0)));
      sub_25A788(v92);
    }
    v38 = json_real();
    json_object_set_new(v104, "hwp_total", v38);
    v103 = json_array();
    if ( v109 > 0 )
    {
      v39 = v106;
      v102 = ptr - 4;
      v101 = 0;
      while ( 1 )
      {
        v40 = json_object();
        v41 = *((int *)v102 + 1);
        v102 += 4;
        v42 = json_integer(v41);
        json_object_set_new(v40, "index", v42);
        v43 = json_integer(*((int *)v39 + 18));
        json_object_set_new(v40, "freq_avg", v43);
        v44 = *((float *)v39 + 10);
        v110 = v8 * *((double *)v39 + 6);
        LODWORD(v45) = sub_25A644(COERCE_UNSIGNED_INT64(v110 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v110 * 100.0)));
        sub_25A788(v45);
        v46 = json_real();
        json_object_set_new(v40, "rate_ideal", v46);
        LODWORD(v47) = sub_25A644(
                         COERCE_UNSIGNED_INT64(v44 * v8 * 100.0),
                         HIDWORD(COERCE_UNSIGNED_INT64(v44 * v8 * 100.0)));
        sub_25A788(v47);
        v48 = json_real();
        json_object_set_new(v40, "rate_real", v48);
        v49 = json_integer(*((int *)v39 + 16));
        json_object_set_new(v40, "asic_num", v49);
        v50 = *((_DWORD *)v39 + 17);
        if ( v50 )
        {
          v82 = v120;
          v83 = 0;
          v84 = stpcpy(v120, v50) - (_DWORD)v120;
          while ( 1 )
          {
            v85 = v83++ >= v84;
            if ( v85 )
              break;
            while ( 1 )
            {
              v87 = (unsigned __int8)*v82++;
              v86 = v87;
              v88 = v87 == 111;
              if ( v87 != 111 )
                v88 = v86 == 32;
              if ( v88 )
                break;
              *(v82 - 1) = 120;
              v84 = strlen(v120);
              v85 = v83++ >= v84;
              if ( v85 )
                goto LABEL_57;
            }
          }
LABEL_57:
          v89 = BUFX_strdup(v120);
          json_object_set_new(v40, "asic", v89);
        }
        v51 = json_array();
        v52 = *((_QWORD *)v39 + 3);
        v53 = v51;
        if ( (int)v52 <= 0 )
          break;
        v54 = 0;
        do
        {
          v55 = json_integer(0);
          ++v54;
          json_array_append_new(v53, v55);
        }
        while ( v54 != (_DWORD)v52 );
        if ( v52 > 0 )
          goto LABEL_22;
        json_object_set_new(v40, "temp_pic", v53);
        v58 = json_array();
LABEL_25:
        v59 = 0;
        v60 = *(_DWORD *)v39 - 4;
        do
        {
          v61 = *(_DWORD *)(v60 + 4);
          v60 += 4;
          ++v59;
          v62 = json_integer(v61);
          json_array_append_new(v58, v62);
        }
        while ( v59 < (int)v52 );
        if ( v52 > 0 )
          goto LABEL_28;
LABEL_62:
        json_object_set_new(v40, "temp_pcb", v58);
        v67 = json_array();
        if ( (int)v52 > 0 )
          goto LABEL_31;
LABEL_36:
        json_object_set_new(v40, "temp_chip", v67);
        v75 = *((_QWORD *)v39 + 10);
        if ( opt_algo == 9 )
          LODWORD(v75) = sub_25A4F8(v75, HIDWORD(v75), 0x3E8u);
        v76 = json_integer(v75);
        json_object_set_new(v40, "hw", v76);
        if ( is_eeprom_loaded() )
        {
          if ( is_eeprom_loaded() )
            v77 = json_true();
          else
            v77 = json_false();
          json_object_set_new(v40, "eeprom_loaded", v77);
          if ( api_get_eeprom_chip_sn(v101) )
          {
            eeprom_chip_sn = (char *)api_get_eeprom_chip_sn(v101);
            v79 = BUFX_strdup(eeprom_chip_sn);
            json_object_set_new(v40, "sn", v79);
          }
        }
        else
        {
          if ( is_eeprom_loaded() )
            v81 = json_true();
          else
            v81 = json_false();
          json_object_set_new(v40, "eeprom_loaded", v81);
        }
        json_array_append_new(v103, v40);
        v39 += 216;
        if ( v109 <= ++v101 )
          goto LABEL_44;
      }
      if ( SHIDWORD(v52) <= 0 )
      {
        json_object_set_new(v40, "temp_pic", v51);
        v58 = json_array();
        goto LABEL_62;
      }
LABEL_22:
      v56 = 0;
      do
      {
        v57 = json_integer(0);
        ++v56;
        json_array_append_new(v53, v57);
      }
      while ( v56 < SHIDWORD(v52) );
      json_object_set_new(v40, "temp_pic", v53);
      v58 = json_array();
      if ( (int)v52 <= 0 )
      {
LABEL_28:
        v63 = (int *)*((_DWORD *)v39 + 2);
        v64 = &v63[HIDWORD(v52)];
        do
        {
          v65 = *v63++;
          v66 = json_integer(v65);
          json_array_append_new(v58, v66);
        }
        while ( v64 != v63 );
        json_object_set_new(v40, "temp_pcb", v58);
        v67 = json_array();
        if ( (int)v52 > 0 )
        {
LABEL_31:
          v68 = 0;
          v69 = *((_DWORD *)v39 + 1) - 4;
          do
          {
            v70 = *(_DWORD *)(v69 + 4);
            v69 += 4;
            ++v68;
            v71 = json_integer(v70);
            json_array_append_new(v67, v71);
          }
          while ( v68 < (int)v52 );
          if ( v52 <= 0 )
            goto LABEL_36;
        }
        LODWORD(v52) = 0;
        v72 = *((_DWORD *)v39 + 3) - 4;
        do
        {
          v73 = *(_DWORD *)(v72 + 4);
          v72 += 4;
          LODWORD(v52) = v52 + 1;
          v74 = json_integer(v73);
          json_array_append_new(v67, v74);
        }
        while ( (int)v52 < SHIDWORD(v52) );
        goto LABEL_36;
      }
      goto LABEL_25;
    }
LABEL_44:
    json_object_set_new(v104, "chain", v103);
    json_array_append_new(v108, v104);
    json_object_set_new(a1, "STATS", v108);
    if ( v109 > 0 )
    {
      free(ptr);
      free(v106);
    }
    return 0;
  }
}
