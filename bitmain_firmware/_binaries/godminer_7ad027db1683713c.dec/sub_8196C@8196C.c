int __fastcall sub_8196C(_DWORD *a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r5
  _DWORD *v7; // r4
  float v8; // s18
  double v9; // d13
  double v10; // d11
  float v11; // s20
  float v12; // s16
  double v13; // d9
  double v14; // d8
  double v15; // r0
  double v16; // d14
  double v17; // d14
  __int64 v18; // r0
  _DWORD *v19; // r0
  bool v20; // cc
  __int64 v21; // r0
  double *v22; // r0
  double v23; // d16
  __int64 v24; // r0
  double *v25; // r0
  __int64 v26; // r0
  double *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  __int64 v33; // r0
  double *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  __int64 v41; // r0
  double *v42; // r0
  double *v43; // r0
  __int64 v44; // r0
  double *v45; // r0
  __int64 v46; // r0
  double *v47; // r0
  __int64 v48; // r0
  double *v49; // r0
  _DWORD *v50; // r0
  double v51; // d10
  double v52; // r0
  __int64 v53; // r0
  double *v54; // r0
  double *v55; // r0
  double v56; // d16
  double v57; // d17
  bool v58; // cc
  double v59; // d16
  __int64 v60; // r0
  double *v61; // r0
  double v62; // d16
  double *v63; // r0
  _DWORD *v64; // r0
  bool v65; // cc
  char *v66; // r0
  char *v67; // r0
  bool v68; // cc
  char *v69; // r0
  char *v70; // r0
  _DWORD *v71; // r0
  __int64 v73; // r0
  double v74; // r0
  __int64 v75; // r0
  __int64 v76; // r0
  double *v77; // r0
  __int64 v78; // r0
  double *v79; // r0
  __int64 v80; // [sp+10h] [bp-10DCh]
  _DWORD *v82; // [sp+1Ch] [bp-10D0h]
  double v83; // [sp+20h] [bp-10CCh]
  __int64 v84; // [sp+20h] [bp-10CCh]
  int v85; // [sp+2Ch] [bp-10C0h] BYREF
  double v86; // [sp+30h] [bp-10BCh] BYREF
  char v87[12]; // [sp+3Ch] [bp-10B0h] BYREF
  char v88[32]; // [sp+48h] [bp-10A4h] BYREF
  char v89[32]; // [sp+68h] [bp-1084h] BYREF
  char v90[32]; // [sp+88h] [bp-1064h] BYREF
  char v91[32]; // [sp+A8h] [bp-1044h] BYREF
  char v92[32]; // [sp+C8h] [bp-1024h] BYREF
  char v93[12]; // [sp+E8h] [bp-1004h] BYREF
  float v94; // [sp+F4h] [bp-FF8h]
  float v95; // [sp+F8h] [bp-FF4h]
  float v96; // [sp+FCh] [bp-FF0h]
  float v97; // [sp+100h] [bp-FECh]
  double v98; // [sp+108h] [bp-FE4h]
  __int64 v99; // [sp+118h] [bp-FD4h]

  v85 = 0;
  get_all_created_runtime(&v85);
  v4 = frontend_runtime_instance();
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v93, 0x1000u, 0, "%s: input bad api param", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_summary_old",
      15,
      1136,
      100,
      v93);
    return -2147483646;
  }
  else
  {
    v6 = v4;
    sub_7D134(a1, 1, 11, *(_DWORD *)(a2 + 8));
    v82 = json_array();
    v7 = json_object();
    read_system_status_from_monitor((int)v93);
    v8 = v95;
    v9 = v94;
    v10 = v98;
    v11 = v96;
    v12 = v97;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v88);
    v13 = v8;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v89);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v90);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v91);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v92);
    format_hashrate_double(*(const char **)(*(_DWORD *)(v6 + 72) + 16), &v86, v87);
    v80 = v99;
    get_miner_elapsed_time();
    v14 = v12 * v10;
    LODWORD(v15) = sub_25A788(*(__int64 *)&total_accepted);
    v83 = v11 * v10;
    v16 = v15;
    if ( v10 != 0.0 )
      v16 = v15 / v10;
    v17 = v16 * 60.0;
    get_total_nonce_rate();
    get_total_accept_rate();
    LODWORD(v18) = sub_25A644(LODWORD(v10), SHIDWORD(v10));
    v19 = json_integer(v18);
    json_object_set_new(v7, "Elapsed", v19);
    v20 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v20 = (unsigned int)(opt_algo - 6) > 1;
    if ( v20 )
    {
      LODWORD(v76) = sub_25A644(
                       COERCE_UNSIGNED_INT64(v9 * v10 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(v9 * v10 * 100.0)));
      sub_25A788(v76);
      v77 = json_real();
      json_object_set_new(v7, "GHS 5s", v77);
      LODWORD(v78) = sub_25A644(COERCE_UNSIGNED_INT64(v14 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 * 100.0)));
      sub_25A788(v78);
      v79 = json_real();
      json_object_set_new(v7, "GHS av", v79);
      LODWORD(v26) = sub_25A644(COERCE_UNSIGNED_INT64(v83 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v83 * 100.0)));
    }
    else
    {
      LODWORD(v21) = sub_25A644(
                       COERCE_UNSIGNED_INT64(v13 * v10 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(v13 * v10 * 100.0)));
      sub_25A788(v21);
      v22 = json_real();
      json_object_set_new(v7, "GHS 5s", v22);
      v23 = *(float *)&v10;
      LODWORD(v24) = sub_25A644(
                       COERCE_UNSIGNED_INT64(v23 * v14 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(v23 * v14 * 100.0)));
      sub_25A788(v24);
      v25 = json_real();
      json_object_set_new(v7, "GHS av", v25);
      LODWORD(v26) = sub_25A644(
                       COERCE_UNSIGNED_INT64(v23 * v83 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(v23 * v83 * 100.0)));
    }
    sub_25A788(v26);
    v27 = json_real();
    json_object_set_new(v7, "GHS 30m", v27);
    v28 = json_integer((unsigned int)dword_2D23A8);
    json_object_set_new(v7, "Found Blocks", v28);
    v29 = json_integer(*(__int64 *)&total_getworks);
    json_object_set_new(v7, "Getwork", v29);
    v30 = json_integer(*(__int64 *)&total_accepted);
    json_object_set_new(v7, "Accepted", v30);
    v31 = json_integer(*(__int64 *)&total_rejected);
    json_object_set_new(v7, "Rejected", v31);
    v32 = json_integer(v80);
    json_object_set_new(v7, "Hardware Errors", v32);
    LODWORD(v33) = sub_25A644(COERCE_UNSIGNED_INT64(v17 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v17 * 100.0)));
    sub_25A788(v33);
    v34 = json_real();
    json_object_set_new(v7, "Utility", v34);
    v35 = json_integer(*(__int64 *)&total_discarded);
    json_object_set_new(v7, "Discarded", v35);
    v36 = json_integer(*(__int64 *)&total_stale);
    json_object_set_new(v7, "Stale", v36);
    v37 = json_integer((unsigned int)total_go);
    json_object_set_new(v7, "Get Failures", v37);
    v38 = json_integer((unsigned int)local_work);
    json_object_set_new(v7, "Local Work", v38);
    v39 = json_integer((unsigned int)total_ro);
    json_object_set_new(v7, "Remote Failures", v39);
    v40 = json_integer((unsigned int)new_blocks);
    json_object_set_new(v7, "Network Blocks", v40);
    LODWORD(v41) = sub_25A644(
                     COERCE_UNSIGNED_INT64(dbl_2D23B0 * 100.0),
                     HIDWORD(COERCE_UNSIGNED_INT64(dbl_2D23B0 * 100.0)));
    sub_25A788(v41);
    v42 = json_real();
    json_object_set_new(v7, "Total MH", v42);
    v43 = json_real();
    json_object_set_new(v7, "Work Utility", v43);
    LODWORD(v44) = sub_25A644(
                     COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0),
                     HIDWORD(COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0)));
    sub_25A788(v44);
    v45 = json_real();
    json_object_set_new(v7, "Difficulty Accepted", v45);
    LODWORD(v46) = sub_25A644(
                     COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0),
                     HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0)));
    sub_25A788(v46);
    v47 = json_real();
    json_object_set_new(v7, "Difficulty Rejected", v47);
    LODWORD(v48) = sub_25A644(
                     COERCE_UNSIGNED_INT64(total_diff_stale * 100.0),
                     HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale * 100.0)));
    sub_25A788(v48);
    v49 = json_real();
    json_object_set_new(v7, "Difficulty Stale", v49);
    v50 = json_integer(*(__int64 *)&dbl_2D23B8);
    json_object_set_new(v7, "Best Share", v50);
    v84 = v80 + *(_QWORD *)&total_diff1;
    if ( v80 + *(_QWORD *)&total_diff1 )
    {
      v51 = COERCE_DOUBLE(sub_25A6F8(v80));
      v52 = COERCE_DOUBLE(sub_25A6F8(v84));
      LODWORD(v53) = sub_25A644(
                       COERCE_UNSIGNED_INT64(v51 / v52 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(v51 / v52 * 100.0)));
      sub_25A788(v53);
    }
    v54 = json_real();
    json_object_set_new(v7, "Device Hardware%", v54);
    if ( *(_QWORD *)&total_diff1 )
    {
      LODWORD(v74) = sub_25A788(*(__int64 *)&total_diff1);
      LODWORD(v75) = sub_25A644(
                       COERCE_UNSIGNED_INT64(total_diff_rejected / v74 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected / v74 * 100.0)));
      sub_25A788(v75);
    }
    v55 = json_real();
    json_object_set_new(v7, "Device Rejected%", v55);
    v56 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v56 == 0.0 )
      v57 = 0.0;
    else
      v57 = total_diff_rejected / v56;
    v58 = (unsigned int)(opt_algo - 9) > 1;
    if ( (unsigned int)(opt_algo - 9) > 1 )
      v58 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v58 )
    {
      v59 = (float)(1.0 - *(float *)&v10);
      if ( v59 < v57 )
        v57 = v57 - v59;
    }
    LODWORD(v60) = sub_25A644(COERCE_UNSIGNED_INT64(v57 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v57 * 100.0)));
    sub_25A788(v60);
    v61 = json_real();
    json_object_set_new(v7, "Pool Rejected%", v61);
    v62 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v62 != 0.0 )
    {
      LODWORD(v73) = sub_25A644(
                       COERCE_UNSIGNED_INT64(total_diff_stale / v62 * 100.0),
                       HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale / v62 * 100.0)));
      sub_25A788(v73);
    }
    v63 = json_real();
    json_object_set_new(v7, "Pool Stale%", v63);
    v64 = json_integer(last_getwork);
    json_object_set_new(v7, "Last getwork", v64);
    v65 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v65 = (unsigned int)(opt_algo - 6) > 1;
    if ( v65 )
      v66 = v88;
    else
      v66 = v89;
    v67 = BUFX_strdup(v66);
    json_object_set_new(v7, "RT HASHRATE", v67);
    v68 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v68 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v68 )
      format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v91);
    v69 = BUFX_strdup(v91);
    json_object_set_new(v7, "AV HASHRATE", v69);
    v70 = BUFX_strdup(v92);
    json_object_set_new(v7, "THEORY HASHRATE", v70);
    json_array_append_new(v82, v7);
    json_object_set_new(a1, "SUMMARY", v82);
    v71 = json_integer(1);
    json_object_set_new(a1, "id", v71);
    return 0;
  }
}
