int __fastcall sub_84CE4(int a1, const char **a2)
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
  __int64 v36; // r0
  double v37; // r0
  int v38; // r0
  int v39; // r0
  __int64 v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  __int64 v44; // r0
  int v45; // r6
  char **v46; // r3
  void *v47; // r2
  _UNKNOWN **v48; // r11
  int v49; // r4
  int v50; // r0
  void *v51; // t1
  char *v53; // r7
  _DWORD *v54; // r6
  int v55; // t1
  int v56; // r3
  int v57; // r0
  char *ptr; // [sp+1Ch] [bp-1020h]
  int v59; // [sp+24h] [bp-1018h] BYREF
  double v60; // [sp+28h] [bp-1014h] BYREF
  double v61; // [sp+30h] [bp-100Ch] BYREF
  _BYTE v62[12]; // [sp+38h] [bp-1004h] BYREF
  float v63; // [sp+44h] [bp-FF8h]
  float v64; // [sp+48h] [bp-FF4h]
  float v65; // [sp+4Ch] [bp-FF0h]
  float v66; // [sp+50h] [bp-FECh]
  double v67; // [sp+58h] [bp-FE4h]
  double v68; // [sp+68h] [bp-FD4h]

  v3 = 0;
  v61 = 0.0;
  v59 = 0;
  v5 = (_DWORD *)frontend_runtime_instance(a1);
  all_created_runtime = get_all_created_runtime(&v59);
  if ( a2 )
  {
    v8 = all_created_runtime;
    sub_7E920(a1, a2, v7);
    v11 = sub_7EA28(a1, v9, v10);
    v12 = json_array(v11);
    v13 = v12;
    v16 = json_object(v12, HIDWORD(v12), v14, v15);
    read_system_status_from_monitor(v62);
    v17 = v67;
    format_hashrate_double(*(_DWORD *)(v5[18] + 16), &v60, &v61);
    if ( v59 <= 0 )
    {
      v5 = 0;
      ptr = 0;
    }
    v18 = v68;
    v19 = v64;
    v20 = v63 * v17;
    g_hash_rate_5s = v20;
    v21 = v65 * v17;
    v22 = v66 * v17;
    if ( v59 > 0 )
    {
      ptr = (char *)malloc(224 * v59);
      v53 = ptr;
      v5 = malloc(4 * v59);
      if ( v59 > 0 )
      {
        v54 = (_DWORD *)(v8 - 4);
        do
        {
          v55 = v54[1];
          ++v54;
          read_status_from_monitor(v53, v55);
          v56 = v59;
          v53 += 224;
          v5[v3++] = *(_DWORD *)(*v54 + 248);
        }
        while ( v56 > v3 );
      }
    }
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v23 = sub_26C90C(LODWORD(v17), HIDWORD(v17));
    v24 = json_integer(v23, HIDWORD(v23));
    json_object_set_new(v16, "elapsed", v24);
    v25 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v25 = (unsigned int)(opt_algo - 6) > 1;
    if ( v25 )
      v26 = sub_26C90C(COERCE_UNSIGNED_INT64(v20 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v20 * 100.0)));
    else
      v26 = sub_26C90C(COERCE_UNSIGNED_INT64(v19 * v17 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v19 * v17 * 100.0)));
    v27 = COERCE_UNSIGNED_INT64(sub_26CA50(v26, HIDWORD(v26)));
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
    v30 = sub_26C90C(COERCE_UNSIGNED_INT64(v22 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v22 * 100.0)));
    v31 = sub_26CA50(v30, HIDWORD(v30));
    v32 = json_real(LODWORD(v31));
    json_object_set_new(v16, "rate_avg", v32);
    v33 = sub_26C90C(COERCE_UNSIGNED_INT64(v21 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v21 * 100.0)));
    v34 = sub_26CA50(v33, HIDWORD(v33));
    v35 = json_real(LODWORD(v34));
    json_object_set_new(v16, "rate_30m", v35);
    v36 = sub_26C90C(COERCE_UNSIGNED_INT64(v60 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v60 * 100.0)));
    v37 = sub_26CA50(v36, HIDWORD(v36));
    v38 = json_real(LODWORD(v37));
    json_object_set_new(v16, "rate_ideal", v38);
    v39 = json_string(&v61);
    json_object_set_new(v16, "rate_unit", v39);
    v40 = *(_QWORD *)&v18;
    if ( opt_algo == 9 )
      v40 = sub_26C7C0(LODWORD(v18), HIDWORD(v18), 1000, 0);
    v41 = json_integer(v40, HIDWORD(v40));
    json_object_set_new(v16, "hw_all", v41);
    v42 = json_integer(LODWORD(dbl_2E7FA0), HIDWORD(dbl_2E7FA0));
    v43 = json_object_set_new(v16, "bestshare", v42);
    v44 = json_array(v43);
    v45 = v44;
    if ( (_DWORD)v44 )
    {
      v46 = &opt_api_description;
      v47 = off_2E567C;
      if ( off_2E567C )
      {
        v48 = &off_2E567C;
        do
        {
          v49 = json_object(v44, HIDWORD(v44), v47, v46);
          v50 = json_string(*v48);
          json_object_set_new(v49, "type", v50);
          ((void (__fastcall *)(int, _UNKNOWN **))v48[1])(v49, v48);
          LODWORD(v44) = json_array_append_new(v45, v49);
          v51 = v48[6];
          v48 += 6;
          v47 = v51;
        }
        while ( v51 );
      }
    }
    json_object_set_new(v16, "status", v45);
    json_array_append_new(v13, v16);
    json_object_set_new(a1, "SUMMARY", v13);
    if ( v59 > 0 )
    {
      free(v5);
      free(ptr);
    }
    return 0;
  }
  else
  {
    V_LOCK(all_created_runtime);
    v57 = logfmt_raw((int)v62, 0x1000u);
    V_UNLOCK(v57);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "get_summary",
      11,
      507,
      100,
      v62);
    return -2147483646;
  }
}
