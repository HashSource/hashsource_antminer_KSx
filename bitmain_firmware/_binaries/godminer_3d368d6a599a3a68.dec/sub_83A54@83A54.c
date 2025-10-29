int __fastcall sub_83A54(int a1, int a2)
{
  int all_created_runtime; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r5
  int v8; // r0
  __int64 v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r4
  float v13; // s18
  double v14; // d13
  double v15; // d11
  float v16; // s20
  float v17; // s16
  double v18; // d9
  double v19; // d8
  double v20; // r0
  double v21; // d14
  double v22; // d14
  __int64 v23; // r0
  int v24; // r0
  bool v25; // cc
  __int64 v26; // r0
  int v27; // r0
  int v28; // r0
  double v29; // d16
  __int64 v30; // r0
  int v31; // r0
  int v32; // r0
  __int64 v33; // r0
  double v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  __int64 v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  __int64 v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  __int64 v55; // r0
  int v56; // r0
  int v57; // r0
  __int64 v58; // r0
  int v59; // r0
  int v60; // r0
  __int64 v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  __int64 v65; // r0
  double v66; // d10
  double v67; // r0
  __int64 v68; // r0
  int v69; // r0
  double v70; // r0
  int v71; // r0
  double v72; // d16
  double v73; // d17
  bool v74; // cc
  double v75; // d16
  __int64 v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  double v80; // d16
  int v81; // r0
  int v82; // r0
  bool v83; // cc
  _BYTE *v84; // r0
  int v85; // r0
  bool v86; // cc
  int v87; // r0
  int v88; // r0
  int v89; // r0
  __int64 v91; // r0
  double v92; // r0
  __int64 v93; // r0
  __int64 v94; // r0
  double v95; // r0
  int v96; // r0
  __int64 v97; // r0
  double v98; // r0
  int v99; // r0
  __int64 v100; // r0
  int v101; // r0
  __int64 v102; // [sp+10h] [bp-10DCh]
  int v104; // [sp+1Ch] [bp-10D0h]
  double v105; // [sp+20h] [bp-10CCh]
  __int64 v106; // [sp+20h] [bp-10CCh]
  int v107; // [sp+2Ch] [bp-10C0h] BYREF
  _BYTE v108[12]; // [sp+30h] [bp-10BCh] BYREF
  _BYTE v109[12]; // [sp+3Ch] [bp-10B0h] BYREF
  _BYTE v110[32]; // [sp+48h] [bp-10A4h] BYREF
  _BYTE v111[32]; // [sp+68h] [bp-1084h] BYREF
  _BYTE v112[32]; // [sp+88h] [bp-1064h] BYREF
  _BYTE v113[32]; // [sp+A8h] [bp-1044h] BYREF
  _BYTE v114[32]; // [sp+C8h] [bp-1024h] BYREF
  _BYTE v115[12]; // [sp+E8h] [bp-1004h] BYREF
  float v116; // [sp+F4h] [bp-FF8h]
  float v117; // [sp+F8h] [bp-FF4h]
  float v118; // [sp+FCh] [bp-FF0h]
  float v119; // [sp+100h] [bp-FECh]
  double v120; // [sp+108h] [bp-FE4h]
  __int64 v121; // [sp+118h] [bp-FD4h]

  v107 = 0;
  all_created_runtime = get_all_created_runtime(&v107);
  v5 = frontend_runtime_instance(all_created_runtime);
  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  if ( v6 )
  {
    V_LOCK(v5);
    v101 = logfmt_raw((int)v115, 0x1000u);
    V_UNLOCK(v101);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "get_summary_old",
      15,
      1167,
      100,
      v115);
    return -2147483646;
  }
  else
  {
    v7 = v5;
    v8 = sub_7EC24(a1, 1, 11, *(_DWORD *)(a2 + 8));
    v9 = json_array(v8);
    v104 = v9;
    v12 = json_object(v9, HIDWORD(v9), v10, v11);
    read_system_status_from_monitor(v115);
    v13 = v117;
    v14 = v116;
    v15 = v120;
    v16 = v118;
    v17 = v119;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v110);
    v18 = v13;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v111);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v112);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v113);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v114);
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v108, v109);
    v102 = v121;
    get_miner_elapsed_time();
    v19 = v17 * v15;
    v20 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(LODWORD(total_accepted), HIDWORD(total_accepted)));
    v105 = v16 * v15;
    v21 = v20;
    if ( v15 != 0.0 )
      v21 = v20 / v15;
    v22 = v21 * 60.0;
    get_total_nonce_rate();
    get_total_accept_rate();
    v23 = sub_26D1BC(LODWORD(v15), HIDWORD(v15));
    v24 = json_integer(v23, HIDWORD(v23));
    json_object_set_new(v12, "Elapsed", v24);
    v25 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v25 = (unsigned int)(opt_algo - 6) > 1;
    if ( v25 )
    {
      v94 = sub_26D1BC(COERCE_UNSIGNED_INT64(v14 * v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 * v15 * 100.0)));
      v95 = sub_26D300(v94, HIDWORD(v94));
      v96 = json_real(LODWORD(v95));
      json_object_set_new(v12, "GHS 5s", v96);
      v97 = sub_26D1BC(COERCE_UNSIGNED_INT64(v19 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v19 * 100.0)));
      v98 = sub_26D300(v97, HIDWORD(v97));
      v99 = json_real(LODWORD(v98));
      json_object_set_new(v12, "GHS av", v99);
      v100 = sub_26D1BC(COERCE_UNSIGNED_INT64(v105 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v105 * 100.0)));
      v34 = sub_26D300(v100, HIDWORD(v100));
    }
    else
    {
      v26 = sub_26D1BC(COERCE_UNSIGNED_INT64(v18 * v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v18 * v15 * 100.0)));
      v27 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v26, HIDWORD(v26));
      v28 = json_real(v27);
      json_object_set_new(v12, "GHS 5s", v28);
      v29 = *(float *)&v15;
      v30 = sub_26D1BC(COERCE_UNSIGNED_INT64(v29 * v19 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * v19 * 100.0)));
      v31 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v30, HIDWORD(v30));
      v32 = json_real(v31);
      json_object_set_new(v12, "GHS av", v32);
      v33 = sub_26D1BC(COERCE_UNSIGNED_INT64(v29 * v105 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * v105 * 100.0)));
      LODWORD(v34) = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v33, HIDWORD(v33));
    }
    v35 = json_real(LODWORD(v34));
    json_object_set_new(v12, "GHS 30m", v35);
    v36 = json_integer(dword_2E7F98, 0);
    json_object_set_new(v12, "Found Blocks", v36);
    v37 = json_integer(LODWORD(total_getworks), HIDWORD(total_getworks));
    json_object_set_new(v12, "Getwork", v37);
    v38 = json_integer(LODWORD(total_accepted), HIDWORD(total_accepted));
    json_object_set_new(v12, "Accepted", v38);
    v39 = json_integer(LODWORD(total_rejected), HIDWORD(total_rejected));
    json_object_set_new(v12, "Rejected", v39);
    v40 = json_integer(v102, HIDWORD(v102));
    json_object_set_new(v12, "Hardware Errors", v40);
    v41 = sub_26D1BC(COERCE_UNSIGNED_INT64(v22 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v22 * 100.0)));
    v42 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v41, HIDWORD(v41));
    v43 = json_real(v42);
    json_object_set_new(v12, "Utility", v43);
    v44 = json_integer(LODWORD(total_discarded), HIDWORD(total_discarded));
    json_object_set_new(v12, "Discarded", v44);
    v45 = json_integer(LODWORD(total_stale), HIDWORD(total_stale));
    json_object_set_new(v12, "Stale", v45);
    v46 = json_integer(total_go, 0);
    json_object_set_new(v12, "Get Failures", v46);
    v47 = json_integer(local_work, 0);
    json_object_set_new(v12, "Local Work", v47);
    v48 = json_integer(total_ro, 0);
    json_object_set_new(v12, "Remote Failures", v48);
    v49 = json_integer(new_blocks, 0);
    json_object_set_new(v12, "Network Blocks", v49);
    v50 = sub_26D1BC(COERCE_UNSIGNED_INT64(dbl_2E7FA0 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_2E7FA0 * 100.0)));
    v51 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v50, HIDWORD(v50));
    v52 = json_real(v51);
    v53 = json_object_set_new(v12, "Total MH", v52);
    v54 = json_real(v53);
    json_object_set_new(v12, "Work Utility", v54);
    v55 = sub_26D1BC(
            COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0)));
    v56 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v55, HIDWORD(v55));
    v57 = json_real(v56);
    json_object_set_new(v12, "Difficulty Accepted", v57);
    v58 = sub_26D1BC(
            COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0)));
    v59 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v58, HIDWORD(v58));
    v60 = json_real(v59);
    json_object_set_new(v12, "Difficulty Rejected", v60);
    v61 = sub_26D1BC(
            COERCE_UNSIGNED_INT64(total_diff_stale * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale * 100.0)));
    v62 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v61, HIDWORD(v61));
    v63 = json_real(v62);
    json_object_set_new(v12, "Difficulty Stale", v63);
    v64 = json_integer(LODWORD(dbl_2E7FA8), HIDWORD(dbl_2E7FA8));
    json_object_set_new(v12, "Best Share", v64);
    v65 = v102;
    v106 = v102 + *(_QWORD *)&total_diff1;
    if ( v102 + *(_QWORD *)&total_diff1 )
    {
      v66 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D270)(v102, HIDWORD(v102)));
      v67 = sub_26D270(v106, HIDWORD(v106));
      v68 = sub_26D1BC(COERCE_UNSIGNED_INT64(v66 / v67 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v66 / v67 * 100.0)));
      LODWORD(v65) = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v68, HIDWORD(v68));
    }
    v69 = json_real(v65);
    json_object_set_new(v12, "Device Hardware%", v69);
    LODWORD(v70) = LODWORD(total_diff1);
    if ( *(_QWORD *)&total_diff1 )
    {
      v92 = sub_26D300(LODWORD(total_diff1), HIDWORD(total_diff1));
      v93 = sub_26D1BC(
              COERCE_UNSIGNED_INT64(total_diff_rejected / v92 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected / v92 * 100.0)));
      v70 = sub_26D300(v93, HIDWORD(v93));
    }
    v71 = json_real(LODWORD(v70));
    json_object_set_new(v12, "Device Rejected%", v71);
    v72 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v72 == 0.0 )
      v73 = 0.0;
    else
      v73 = total_diff_rejected / v72;
    v74 = (unsigned int)(opt_algo - 9) > 1;
    if ( (unsigned int)(opt_algo - 9) > 1 )
      v74 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v74 )
    {
      v75 = (float)(1.0 - *(float *)&v15);
      if ( v75 < v73 )
        v73 = v73 - v75;
    }
    v76 = sub_26D1BC(COERCE_UNSIGNED_INT64(v73 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v73 * 100.0)));
    v77 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v76, HIDWORD(v76));
    v78 = json_real(v77);
    v79 = json_object_set_new(v12, "Pool Rejected%", v78);
    v80 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v80 != 0.0 )
    {
      v91 = sub_26D1BC(
              COERCE_UNSIGNED_INT64(total_diff_stale / v80 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale / v80 * 100.0)));
      v79 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_26D300)(v91, HIDWORD(v91));
    }
    v81 = json_real(v79);
    json_object_set_new(v12, "Pool Stale%", v81);
    v82 = json_integer(last_getwork, last_getwork >> 31);
    json_object_set_new(v12, "Last getwork", v82);
    v83 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v83 = (unsigned int)(opt_algo - 6) > 1;
    if ( v83 )
      v84 = v110;
    else
      v84 = v111;
    v85 = json_string(v84);
    json_object_set_new(v12, "RT HASHRATE", v85);
    v86 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v86 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v86 )
      format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v113);
    v87 = json_string(v113);
    json_object_set_new(v12, "AV HASHRATE", v87);
    v88 = json_string(v114);
    json_object_set_new(v12, "THEORY HASHRATE", v88);
    json_array_append_new(v104, v12);
    json_object_set_new(a1, "SUMMARY", v104);
    v89 = json_integer(1, 0);
    json_object_set_new(a1, "id", v89);
    return 0;
  }
}
