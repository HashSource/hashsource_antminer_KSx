int __fastcall sub_84C24(int a1, const char **a2)
{
  int v3; // r4
  _DWORD *v5; // r8
  int all_created_runtime; // r0
  int v7; // r2
  int v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r0
  __int64 v12; // r0
  int v13; // r10
  int v14; // r2
  int v15; // r3
  int v16; // r5
  double v17; // d0
  double v18; // d11
  float v19; // s28
  double v20; // d9
  double v21; // d10
  double v22; // d8
  __int64 v23; // r0
  int v24; // r0
  bool v25; // cc
  __int64 v26; // r0
  int v27; // d16.s[0]
  int v28; // r0
  bool v29; // cc
  __int64 v30; // r0
  double v31; // r0
  int v32; // r0
  __int64 v33; // r0
  double v34; // r0
  int v35; // r0
  double v36; // d16
  __int64 v37; // r0
  double v38; // r0
  int v39; // r0
  int v40; // r0
  __int64 v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  __int64 v45; // r0
  int v46; // r6
  char **v47; // r3
  void *v48; // r2
  _UNKNOWN **v49; // r11
  int v50; // r4
  int v51; // r0
  void *v52; // t1
  char *v54; // r7
  _DWORD *v55; // r6
  int v56; // t1
  int v57; // r3
  int v58; // r0
  char *ptr; // [sp+1Ch] [bp-1020h]
  int v60; // [sp+24h] [bp-1018h] BYREF
  double v61; // [sp+28h] [bp-1014h] BYREF
  double v62; // [sp+30h] [bp-100Ch] BYREF
  _BYTE v63[12]; // [sp+38h] [bp-1004h] BYREF
  float v64; // [sp+44h] [bp-FF8h]
  float v65; // [sp+48h] [bp-FF4h]
  float v66; // [sp+4Ch] [bp-FF0h]
  float v67; // [sp+50h] [bp-FECh]
  double v68; // [sp+58h] [bp-FE4h]
  double v69; // [sp+68h] [bp-FD4h]

  v3 = 0;
  v62 = 0.0;
  v60 = 0;
  v5 = (_DWORD *)frontend_runtime_instance(a1);
  all_created_runtime = get_all_created_runtime(&v60);
  if ( a2 )
  {
    v8 = all_created_runtime;
    sub_7E868(a1, a2, v7);
    v11 = sub_7E970(a1, v9, v10);
    v12 = json_array(v11);
    v13 = v12;
    v16 = json_object(v12, HIDWORD(v12), v14, v15);
    read_system_status_from_monitor(v63);
    v17 = v68;
    format_hashrate_double(*(_DWORD *)(v5[18] + 16), &v61, &v62);
    if ( v60 <= 0 )
    {
      v5 = 0;
      ptr = 0;
    }
    v18 = v69;
    v19 = v65;
    v20 = v64 * v17;
    g_hash_rate_5s = v20;
    v21 = v66 * v17;
    v22 = v67 * v17;
    if ( v60 > 0 )
    {
      ptr = (char *)malloc(224 * v60);
      v54 = ptr;
      v5 = malloc(4 * v60);
      if ( v60 > 0 )
      {
        v55 = (_DWORD *)(v8 - 4);
        do
        {
          v56 = v55[1];
          ++v55;
          read_status_from_monitor(v54, v56);
          v57 = v60;
          v54 += 224;
          v5[v3++] = *(_DWORD *)(*v55 + 244);
        }
        while ( v57 > v3 );
      }
    }
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v23 = sub_26C52C(LODWORD(v17), HIDWORD(v17));
    v24 = json_integer(v23, HIDWORD(v23));
    json_object_set_new(v16, "elapsed", v24);
    v25 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v25 = (unsigned int)(opt_algo - 6) > 1;
    if ( v25 )
      v26 = sub_26C52C(COERCE_UNSIGNED_INT64(v20 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v20 * 100.0)));
    else
      v26 = sub_26C52C(COERCE_UNSIGNED_INT64(v19 * v17 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v19 * v17 * 100.0)));
    v27 = COERCE_UNSIGNED_INT64(sub_26C670(v26, HIDWORD(v26)));
    v28 = json_real(v27);
    json_object_set_new(v16, "rate_5s", v28);
    v29 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v29 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v29 )
    {
      v22 = *(float *)&v17 * v22;
      v21 = *(float *)&v17 * v21;
    }
    v30 = sub_26C52C(COERCE_UNSIGNED_INT64(v22 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v22 * 100.0)));
    v31 = sub_26C670(v30, HIDWORD(v30));
    v32 = json_real(LODWORD(v31));
    json_object_set_new(v16, "rate_avg", v32);
    v33 = sub_26C52C(COERCE_UNSIGNED_INT64(v21 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v21 * 100.0)));
    v34 = sub_26C670(v33, HIDWORD(v33));
    v35 = json_real(LODWORD(v34));
    json_object_set_new(v16, "rate_30m", v35);
    v36 = v61;
    if ( opt_algo == 12 )
    {
      v36 = (double)(1000 * ((int)v61 / 1000));
      v61 = v36;
    }
    v37 = sub_26C52C(COERCE_UNSIGNED_INT64(v36 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v36 * 100.0)));
    v38 = sub_26C670(v37, HIDWORD(v37));
    v39 = json_real(LODWORD(v38));
    json_object_set_new(v16, "rate_ideal", v39);
    v40 = json_string(&v62);
    json_object_set_new(v16, "rate_unit", v40);
    v41 = *(_QWORD *)&v18;
    if ( opt_algo == 9 )
      v41 = sub_26C3E0(LODWORD(v18), HIDWORD(v18), 1000, 0);
    v42 = json_integer(v41, HIDWORD(v41));
    json_object_set_new(v16, "hw_all", v42);
    v43 = json_integer(LODWORD(dbl_2E6F98), HIDWORD(dbl_2E6F98));
    v44 = json_object_set_new(v16, "bestshare", v43);
    v45 = json_array(v44);
    v46 = v45;
    if ( (_DWORD)v45 )
    {
      v47 = &opt_api_description;
      v48 = off_2E4670;
      if ( off_2E4670 )
      {
        v49 = &off_2E4670;
        do
        {
          v50 = json_object(v45, HIDWORD(v45), v48, v47);
          v51 = json_string(*v49);
          json_object_set_new(v50, "type", v51);
          ((void (__fastcall *)(int, _UNKNOWN **))v49[1])(v50, v49);
          LODWORD(v45) = json_array_append_new(v46, v50);
          v52 = v49[6];
          v49 += 6;
          v48 = v52;
        }
        while ( v52 );
      }
    }
    json_object_set_new(v16, "status", v46);
    json_array_append_new(v13, v16);
    json_object_set_new(a1, "SUMMARY", v13);
    if ( v60 > 0 )
    {
      free(v5);
      free(ptr);
    }
    return 0;
  }
  else
  {
    V_LOCK(all_created_runtime);
    v58 = logfmt_raw((int)v63, 0x1000u);
    V_UNLOCK(v58);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "get_summary",
      11,
      507,
      100,
      v63);
    return -2147483646;
  }
}
