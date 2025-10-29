int __fastcall sub_8380C(_DWORD *a1, int a2)
{
  void *all_created_runtime; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r5
  _DWORD *v8; // r4
  float v9; // s18
  double v10; // d13
  double v11; // d11
  float v12; // s20
  float v13; // s16
  double v14; // d9
  double v15; // d8
  double v16; // r0
  double v17; // d14
  double v18; // d14
  __int64 v19; // r0
  _DWORD *v20; // r0
  bool v21; // cc
  __int64 v22; // r0
  double *v23; // r0
  double v24; // d16
  __int64 v25; // r0
  double *v26; // r0
  __int64 v27; // r0
  double *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  __int64 v34; // r0
  double *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  __int64 v42; // r0
  double *v43; // r0
  double *v44; // r0
  __int64 v45; // r0
  double *v46; // r0
  __int64 v47; // r0
  double *v48; // r0
  __int64 v49; // r0
  double *v50; // r0
  _DWORD *v51; // r0
  double v52; // d10
  double v53; // r0
  __int64 v54; // r0
  double *v55; // r0
  double *v56; // r0
  double v57; // d16
  double v58; // d17
  bool v59; // cc
  double v60; // d16
  __int64 v61; // r0
  double *v62; // r0
  double v63; // d16
  double *v64; // r0
  _DWORD *v65; // r0
  bool v66; // cc
  char *v67; // r0
  char *v68; // r0
  bool v69; // cc
  char *v70; // r0
  char *v71; // r0
  _DWORD *v72; // r0
  __int64 v74; // r0
  double v75; // r0
  __int64 v76; // r0
  __int64 v77; // r0
  double *v78; // r0
  __int64 v79; // r0
  double *v80; // r0
  __int64 v81; // r0
  int v82; // r0
  __int64 v83; // [sp+10h] [bp-10DCh]
  _DWORD *v85; // [sp+1Ch] [bp-10D0h]
  double v86; // [sp+20h] [bp-10CCh]
  __int64 v87; // [sp+20h] [bp-10CCh]
  int v88; // [sp+2Ch] [bp-10C0h] BYREF
  _BYTE v89[12]; // [sp+30h] [bp-10BCh] BYREF
  _BYTE v90[12]; // [sp+3Ch] [bp-10B0h] BYREF
  _BYTE v91[32]; // [sp+48h] [bp-10A4h] BYREF
  _BYTE v92[32]; // [sp+68h] [bp-1084h] BYREF
  _BYTE v93[32]; // [sp+88h] [bp-1064h] BYREF
  char v94[32]; // [sp+A8h] [bp-1044h] BYREF
  char v95[32]; // [sp+C8h] [bp-1024h] BYREF
  _BYTE v96[12]; // [sp+E8h] [bp-1004h] BYREF
  float v97; // [sp+F4h] [bp-FF8h]
  float v98; // [sp+F8h] [bp-FF4h]
  float v99; // [sp+FCh] [bp-FF0h]
  float v100; // [sp+100h] [bp-FECh]
  double v101; // [sp+108h] [bp-FE4h]
  __int64 v102; // [sp+118h] [bp-FD4h]

  v88 = 0;
  all_created_runtime = get_all_created_runtime(&v88);
  v5 = frontend_runtime_instance(all_created_runtime);
  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  if ( v6 )
  {
    V_LOCK(v5);
    v82 = logfmt_raw((int)v96, 0x1000u);
    V_UNLOCK(v82);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_summary_old",
      15,
      1167,
      100,
      v96);
    return -2147483646;
  }
  else
  {
    v7 = v5;
    sub_7E9FC((int)a1, 1, 11, *(_DWORD *)(a2 + 8));
    v85 = json_array();
    v8 = json_object();
    read_system_status_from_monitor(v96);
    v9 = v98;
    v10 = v97;
    v11 = v101;
    v12 = v99;
    v13 = v100;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v91);
    v14 = v9;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v92);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v93);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v94);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v95);
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v89, v90);
    v83 = v102;
    get_miner_elapsed_time();
    v15 = v13 * v11;
    v16 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_270788)(LODWORD(total_accepted), HIDWORD(total_accepted)));
    v86 = v12 * v11;
    v17 = v16;
    if ( v11 != 0.0 )
      v17 = v16 / v11;
    v18 = v17 * 60.0;
    get_total_nonce_rate();
    get_total_accept_rate();
    v19 = sub_270644(LODWORD(v11), HIDWORD(v11));
    v20 = json_integer(v19);
    json_object_set_new(v8, "Elapsed", v20);
    v21 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v21 = (unsigned int)(opt_algo - 6) > 1;
    if ( v21 )
    {
      v77 = sub_270644(COERCE_UNSIGNED_INT64(v10 * v11 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v10 * v11 * 100.0)));
      sub_270788(v77, HIDWORD(v77));
      v78 = json_real();
      json_object_set_new(v8, "GHS 5s", v78);
      v79 = sub_270644(COERCE_UNSIGNED_INT64(v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v15 * 100.0)));
      sub_270788(v79, HIDWORD(v79));
      v80 = json_real();
      json_object_set_new(v8, "GHS av", v80);
      v81 = sub_270644(COERCE_UNSIGNED_INT64(v86 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v86 * 100.0)));
      sub_270788(v81, HIDWORD(v81));
    }
    else
    {
      v22 = sub_270644(COERCE_UNSIGNED_INT64(v14 * v11 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 * v11 * 100.0)));
      sub_270788(v22, HIDWORD(v22));
      v23 = json_real();
      json_object_set_new(v8, "GHS 5s", v23);
      v24 = *(float *)&v11;
      v25 = sub_270644(COERCE_UNSIGNED_INT64(v24 * v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v24 * v15 * 100.0)));
      sub_270788(v25, HIDWORD(v25));
      v26 = json_real();
      json_object_set_new(v8, "GHS av", v26);
      v27 = sub_270644(COERCE_UNSIGNED_INT64(v24 * v86 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v24 * v86 * 100.0)));
      sub_270788(v27, HIDWORD(v27));
    }
    v28 = json_real();
    json_object_set_new(v8, "GHS 30m", v28);
    v29 = json_integer((unsigned int)dword_2F2B80);
    json_object_set_new(v8, "Found Blocks", v29);
    v30 = json_integer(*(__int64 *)&total_getworks);
    json_object_set_new(v8, "Getwork", v30);
    v31 = json_integer(*(__int64 *)&total_accepted);
    json_object_set_new(v8, "Accepted", v31);
    v32 = json_integer(*(__int64 *)&total_rejected);
    json_object_set_new(v8, "Rejected", v32);
    v33 = json_integer(v83);
    json_object_set_new(v8, "Hardware Errors", v33);
    v34 = sub_270644(COERCE_UNSIGNED_INT64(v18 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v18 * 100.0)));
    sub_270788(v34, HIDWORD(v34));
    v35 = json_real();
    json_object_set_new(v8, "Utility", v35);
    v36 = json_integer(*(__int64 *)&total_discarded);
    json_object_set_new(v8, "Discarded", v36);
    v37 = json_integer(*(__int64 *)&total_stale);
    json_object_set_new(v8, "Stale", v37);
    v38 = json_integer((unsigned int)total_go);
    json_object_set_new(v8, "Get Failures", v38);
    v39 = json_integer((unsigned int)local_work);
    json_object_set_new(v8, "Local Work", v39);
    v40 = json_integer((unsigned int)total_ro);
    json_object_set_new(v8, "Remote Failures", v40);
    v41 = json_integer((unsigned int)new_blocks);
    json_object_set_new(v8, "Network Blocks", v41);
    v42 = sub_270644(COERCE_UNSIGNED_INT64(dbl_2F2B88 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_2F2B88 * 100.0)));
    sub_270788(v42, HIDWORD(v42));
    v43 = json_real();
    json_object_set_new(v8, "Total MH", v43);
    v44 = json_real();
    json_object_set_new(v8, "Work Utility", v44);
    v45 = sub_270644(
            COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0)));
    sub_270788(v45, HIDWORD(v45));
    v46 = json_real();
    json_object_set_new(v8, "Difficulty Accepted", v46);
    v47 = sub_270644(
            COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0)));
    sub_270788(v47, HIDWORD(v47));
    v48 = json_real();
    json_object_set_new(v8, "Difficulty Rejected", v48);
    v49 = sub_270644(
            COERCE_UNSIGNED_INT64(total_diff_stale * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale * 100.0)));
    sub_270788(v49, HIDWORD(v49));
    v50 = json_real();
    json_object_set_new(v8, "Difficulty Stale", v50);
    v51 = json_integer(*(__int64 *)&dbl_2F2B90);
    json_object_set_new(v8, "Best Share", v51);
    v87 = v83 + *(_QWORD *)&total_diff1;
    if ( v83 + *(_QWORD *)&total_diff1 )
    {
      v52 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_2706F8)(v83, HIDWORD(v83)));
      v53 = sub_2706F8(v87, HIDWORD(v87));
      v54 = sub_270644(COERCE_UNSIGNED_INT64(v52 / v53 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v52 / v53 * 100.0)));
      sub_270788(v54, HIDWORD(v54));
    }
    v55 = json_real();
    json_object_set_new(v8, "Device Hardware%", v55);
    if ( *(_QWORD *)&total_diff1 )
    {
      v75 = sub_270788(LODWORD(total_diff1), HIDWORD(total_diff1));
      v76 = sub_270644(
              COERCE_UNSIGNED_INT64(total_diff_rejected / v75 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected / v75 * 100.0)));
      sub_270788(v76, HIDWORD(v76));
    }
    v56 = json_real();
    json_object_set_new(v8, "Device Rejected%", v56);
    v57 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v57 == 0.0 )
      v58 = 0.0;
    else
      v58 = total_diff_rejected / v57;
    v59 = (unsigned int)(opt_algo - 9) > 1;
    if ( (unsigned int)(opt_algo - 9) > 1 )
      v59 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v59 )
    {
      v60 = (float)(1.0 - *(float *)&v11);
      if ( v60 < v58 )
        v58 = v58 - v60;
    }
    v61 = sub_270644(COERCE_UNSIGNED_INT64(v58 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v58 * 100.0)));
    sub_270788(v61, HIDWORD(v61));
    v62 = json_real();
    json_object_set_new(v8, "Pool Rejected%", v62);
    v63 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v63 != 0.0 )
    {
      v74 = sub_270644(
              COERCE_UNSIGNED_INT64(total_diff_stale / v63 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale / v63 * 100.0)));
      ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_270788)(v74, HIDWORD(v74));
    }
    v64 = json_real();
    json_object_set_new(v8, "Pool Stale%", v64);
    v65 = json_integer(last_getwork);
    json_object_set_new(v8, "Last getwork", v65);
    v66 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v66 = (unsigned int)(opt_algo - 6) > 1;
    if ( v66 )
      v67 = v91;
    else
      v67 = v92;
    v68 = BUFX_strdup(v67);
    json_object_set_new(v8, "RT HASHRATE", v68);
    v69 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v69 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v69 )
      format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v94);
    v70 = BUFX_strdup(v94);
    json_object_set_new(v8, "AV HASHRATE", v70);
    v71 = BUFX_strdup(v95);
    json_object_set_new(v8, "THEORY HASHRATE", v71);
    json_array_append_new(v85, v8);
    json_object_set_new(a1, "SUMMARY", v85);
    v72 = json_integer(1);
    json_object_set_new(a1, "id", v72);
    return 0;
  }
}
