int __fastcall sub_84B6C(_DWORD *a1, const char **a2)
{
  int v3; // r4
  _DWORD *v5; // r8
  char *all_created_runtime; // r0
  char *v7; // r6
  _DWORD *v8; // r10
  _DWORD *v9; // r5
  double v10; // d0
  double v11; // d11
  float v12; // s27
  float v13; // s26
  double v14; // d9
  double v15; // d8
  __int64 v16; // r0
  _DWORD *v17; // r0
  bool v18; // cc
  double v19; // d16
  __int64 v20; // r0
  double *v21; // r0
  bool v22; // cc
  __int64 v23; // r0
  double *v24; // r0
  __int64 v25; // r0
  double *v26; // r0
  __int64 v27; // r0
  double *v28; // r0
  char *v29; // r0
  __int64 v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r6
  char **v34; // r11
  _DWORD *v35; // r4
  char *v36; // r0
  char *v37; // t1
  char *v39; // r7
  char *v40; // r6
  int v41; // t1
  int v42; // r3
  int v43; // r0
  char *ptr; // [sp+1Ch] [bp-1020h]
  int v45; // [sp+24h] [bp-1018h] BYREF
  double v46; // [sp+28h] [bp-1014h] BYREF
  double v47; // [sp+30h] [bp-100Ch] BYREF
  _BYTE v48[12]; // [sp+38h] [bp-1004h] BYREF
  float v49; // [sp+44h] [bp-FF8h]
  float v50; // [sp+48h] [bp-FF4h]
  float v51; // [sp+4Ch] [bp-FF0h]
  float v52; // [sp+50h] [bp-FECh]
  double v53; // [sp+58h] [bp-FE4h]
  double v54; // [sp+68h] [bp-FD4h]

  v3 = 0;
  v47 = 0.0;
  v45 = 0;
  v5 = (_DWORD *)frontend_runtime_instance(a1);
  all_created_runtime = (char *)get_all_created_runtime(&v45);
  if ( a2 )
  {
    v7 = all_created_runtime;
    sub_7E7B8((int)a1, a2);
    sub_7E8C0((int)a1);
    v8 = json_array();
    v9 = json_object();
    read_system_status_from_monitor(v48);
    v10 = v53;
    format_hashrate_double(*(_DWORD *)(v5[18] + 16), &v46, &v47);
    if ( v45 <= 0 )
    {
      v5 = 0;
      ptr = 0;
    }
    v11 = v54;
    v12 = v49;
    v13 = v50;
    v14 = v51 * v10;
    v15 = v52 * v10;
    if ( v45 > 0 )
    {
      ptr = (char *)malloc(216 * v45);
      v39 = ptr;
      v5 = malloc(4 * v45);
      if ( v45 > 0 )
      {
        v40 = v7 - 4;
        do
        {
          v41 = *((_DWORD *)v40 + 1);
          v40 += 4;
          read_status_from_monitor(v39, v41);
          v42 = v45;
          v39 += 216;
          v5[v3++] = *(_DWORD *)(*(_DWORD *)v40 + 248);
        }
        while ( v42 > v3 );
      }
    }
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v16 = sub_270644(LODWORD(v10), HIDWORD(v10));
    v17 = json_integer(v16);
    json_object_set_new(v9, "elapsed", v17);
    v18 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v18 = (unsigned int)(opt_algo - 6) > 1;
    if ( v18 )
      v19 = v12;
    else
      v19 = v13;
    v20 = sub_270644(COERCE_UNSIGNED_INT64(v19 * v10 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v19 * v10 * 100.0)));
    sub_270788(v20, HIDWORD(v20));
    v21 = json_real();
    json_object_set_new(v9, "rate_5s", v21);
    v22 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v22 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v22 )
    {
      v15 = *(float *)&v10 * v15;
      v14 = *(float *)&v10 * v14;
    }
    v23 = sub_270644(COERCE_UNSIGNED_INT64(v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v15 * 100.0)));
    sub_270788(v23, HIDWORD(v23));
    v24 = json_real();
    json_object_set_new(v9, "rate_avg", v24);
    v25 = sub_270644(COERCE_UNSIGNED_INT64(v14 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 * 100.0)));
    sub_270788(v25, HIDWORD(v25));
    v26 = json_real();
    json_object_set_new(v9, "rate_30m", v26);
    v27 = sub_270644(COERCE_UNSIGNED_INT64(v46 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v46 * 100.0)));
    sub_270788(v27, HIDWORD(v27));
    v28 = json_real();
    json_object_set_new(v9, "rate_ideal", v28);
    v29 = BUFX_strdup((char *)&v47);
    json_object_set_new(v9, "rate_unit", v29);
    v30 = *(_QWORD *)&v11;
    if ( opt_algo == 9 )
      v30 = sub_2704F8(LODWORD(v11), HIDWORD(v11), 1000, 0);
    v31 = json_integer(v30);
    json_object_set_new(v9, "hw_all", v31);
    v32 = json_integer(*(__int64 *)&dbl_2F2B90);
    json_object_set_new(v9, "bestshare", v32);
    v33 = json_array();
    if ( v33 && off_2F065C )
    {
      v34 = (char **)&off_2F065C;
      do
      {
        v35 = json_object();
        v36 = BUFX_strdup(*v34);
        json_object_set_new(v35, "type", v36);
        ((void (__fastcall *)(_DWORD *, char **))v34[1])(v35, v34);
        json_array_append_new(v33, v35);
        v37 = v34[6];
        v34 += 6;
      }
      while ( v37 );
    }
    json_object_set_new(v9, "status", v33);
    json_array_append_new(v8, v9);
    json_object_set_new(a1, "SUMMARY", v8);
    if ( v45 > 0 )
    {
      free(v5);
      free(ptr);
    }
    return 0;
  }
  else
  {
    V_LOCK(all_created_runtime);
    v43 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v43);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_summary",
      11,
      507,
      100,
      v48);
    return -2147483646;
  }
}
