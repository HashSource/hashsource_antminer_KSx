int __fastcall sub_7EE90(_DWORD *a1, int a2)
{
  bool v4; // zf
  int v5; // r4
  _DWORD *v6; // r2
  _DWORD *v7; // r0
  char *v8; // r0
  _DWORD *v9; // r0
  double *v10; // r0
  double v11; // d16
  __int64 v12; // r0
  double *v13; // r0
  double v14; // d18
  double v15; // d16
  __int64 v16; // r0
  double *v17; // r0
  int v18; // r6
  int v19; // r5
  _DWORD *v20; // r4
  _DWORD *v21; // r0
  char *v22; // r0
  bool v23; // zf
  _DWORD *v24; // r3
  int v25; // r1
  char *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  char *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  char *v37; // r0
  int v38; // r3
  unsigned int v39; // r7
  char *v40; // r0
  char *v41; // r0
  double *v42; // r7
  _DWORD *v43; // r0
  char *v44; // r0
  char *v45; // r0
  __int64 v46; // r0
  double *v47; // r0
  __int64 v48; // r0
  double *v49; // r0
  __int64 v50; // r0
  double *v51; // r0
  __int64 v52; // r0
  double *v53; // r0
  _DWORD *v54; // r2
  __int64 v56; // [sp+10h] [bp-114Ch]
  _DWORD *v57; // [sp+1Ch] [bp-1140h]
  _DWORD v59[3]; // [sp+34h] [bp-1128h] BYREF
  __int64 v60; // [sp+40h] [bp-111Ch] BYREF
  __int64 v61; // [sp+48h] [bp-1114h]
  double v62; // [sp+50h] [bp-110Ch]
  char s[128]; // [sp+58h] [bp-1104h] BYREF
  char v64[128]; // [sp+D8h] [bp-1084h] BYREF
  char v65[4100]; // [sp+158h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v64, 0, sizeof(v64));
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  memset(v59, 0, sizeof(v59));
  v60 = 0;
  v61 = 0;
  v62 = 0.0;
  if ( v4 )
  {
    V_LOCK();
    logfmt_raw(v65, 0x1000u, 0, "%s: input bad api param", "get_pools_old");
    v5 = -2147483646;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_pools_old",
      13,
      1250,
      100,
      v65);
  }
  else
  {
    v5 = total_pools;
    if ( total_pools )
    {
      sub_7D134(a1, 1, 7, *(_DWORD *)(a2 + 8));
      v57 = json_array();
      if ( total_pools > 0 )
      {
        v56 = 0;
        do
        {
          v18 = v56;
          v19 = *(_DWORD *)(pools + 4 * v56);
          v20 = json_object();
          v21 = json_integer(v56);
          json_object_set_new(v20, "POOL", v21);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(_DWORD *)(v19 + 12));
          v22 = BUFX_strdup(s);
          json_object_set_new(v20, "URL", v22);
          v23 = *(_BYTE *)(v19 + 1904) == 0;
          if ( *(_BYTE *)(v19 + 1904) )
            LOWORD(v24) = -11308;
          else
            LOWORD(v24) = -11300;
          HIWORD(v24) = 37;
          memset(v59, 0, sizeof(v59));
          v25 = v24[1];
          v59[0] = *v24;
          if ( v23 )
            LOWORD(v59[1]) = v25;
          else
            LOBYTE(v59[1]) = v25;
          v26 = BUFX_strdup((char *)v59);
          json_object_set_new(v20, "Status", v26);
          v27 = json_integer(*(int *)(v19 + 4));
          json_object_set_new(v20, "Priority", v27);
          v28 = json_integer(*(int *)(v19 + 1636));
          json_object_set_new(v20, "Quota", v28);
          v29 = BUFX_strdup("N");
          json_object_set_new(v20, "Long Poll", v29);
          v30 = json_integer(*(unsigned int *)(v19 + 1632));
          json_object_set_new(v20, "Getworks", v30);
          v31 = json_integer(*(_QWORD *)(v19 + 1928));
          json_object_set_new(v20, "Accepted", v31);
          v32 = json_integer(*(_QWORD *)(v19 + 1936));
          json_object_set_new(v20, "Rejected", v32);
          v33 = json_integer(*(unsigned int *)(v19 + 1944));
          json_object_set_new(v20, "Discarded", v33);
          v34 = json_integer(*(unsigned int *)(v19 + 1640));
          json_object_set_new(v20, "Stale", v34);
          v35 = json_integer(*(unsigned int *)(v19 + 1948));
          json_object_set_new(v20, "Get Failures", v35);
          v36 = json_integer(*(unsigned int *)(v19 + 1952));
          json_object_set_new(v20, "Remote Failures", v36);
          memset(v64, 0, sizeof(v64));
          snprintf(v64, 0x80u, "%s", *(_DWORD *)(v19 + 16));
          v37 = BUFX_strdup(v64);
          json_object_set_new(v20, "User", v37);
          v38 = *(_DWORD *)(v19 + 1616);
          v60 = 0;
          v61 = 0;
          if ( v38 <= 0 )
            LOWORD(v60) = 48;
          v62 = 0.0;
          if ( v38 > 0 )
          {
            v39 = time(0) - *(_DWORD *)(v19 + 1616);
            snprintf((char *)&v60, 0x18u, "%d:%d:%d", v39 / 0xE10, v39 % 0xE10 / 0x3C, v39 % 0xE10 % 0x3C);
          }
          v40 = BUFX_strdup((char *)&v60);
          json_object_set_new(v20, "Last Share Time", v40);
          sprintf((char *)(v19 + 1976), "%8.4f", *(double *)(v19 + 1808));
          v41 = BUFX_strdup((char *)(v19 + 1976));
          v42 = (double *)(v19 + 1968);
          json_object_set_new(v20, "Diff", v41);
          v43 = json_integer(*(_QWORD *)(v19 + 1992));
          json_object_set_new(v20, "Diff1 Shares", v43);
          v44 = BUFX_strdup("");
          json_object_set_new(v20, "Proxy Type", v44);
          v45 = BUFX_strdup("");
          json_object_set_new(v20, "Proxy", v45);
          LODWORD(v46) = sub_25A644(
                           COERCE_UNSIGNED_INT64(*(double *)(v19 + 1960) * 100.0),
                           HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v19 + 1960) * 100.0)));
          sub_25A788(v46);
          v47 = json_real();
          json_object_set_new(v20, "Difficulty Accepted", v47);
          LODWORD(v48) = sub_25A644(COERCE_UNSIGNED_INT64(*v42 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v42 * 100.0)));
          sub_25A788(v48);
          v49 = json_real();
          json_object_set_new(v20, "Difficulty Rejected", v49);
          LODWORD(v50) = sub_25A644(
                           COERCE_UNSIGNED_INT64(*(double *)(v19 + 1816) * 100.0),
                           HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v19 + 1816) * 100.0)));
          sub_25A788(v50);
          v51 = json_real();
          json_object_set_new(v20, "Difficulty Stale", v51);
          LODWORD(v52) = sub_25A644(
                           COERCE_UNSIGNED_INT64(*(double *)(v19 + 1624) * 100.0),
                           HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v19 + 1624) * 100.0)));
          sub_25A788(v52);
          v53 = json_real();
          json_object_set_new(v20, "Last Share Difficulty", v53);
          if ( *(_BYTE *)(v19 + 28) )
            v6 = json_true();
          else
            v6 = json_false();
          json_object_set_new(v20, "Has Stratum", v6);
          v7 = json_true();
          json_object_set_new(v20, "Stratum Active", v7);
          v8 = BUFX_strdup("");
          json_object_set_new(v20, "Stratum URL", v8);
          v9 = json_false();
          json_object_set_new(v20, "Has GBT", v9);
          v10 = json_real();
          json_object_set_new(v20, "Best Share", v10);
          v11 = *(double *)(v19 + 1968) + *(double *)(v19 + 1960) + *(double *)(v19 + 1816);
          if ( v11 != 0.0 )
          {
            LODWORD(v12) = sub_25A644(
                             COERCE_UNSIGNED_INT64(*v42 / v11 * 100.0),
                             HIDWORD(COERCE_UNSIGNED_INT64(*v42 / v11 * 100.0)));
            sub_25A788(v12);
          }
          v13 = json_real();
          json_object_set_new(v20, "Pool Rejected%", v13);
          v14 = *(double *)(v19 + 1816);
          v15 = *(double *)(v19 + 1960) + *v42 + v14;
          if ( v15 != 0.0 )
          {
            LODWORD(v16) = sub_25A644(
                             COERCE_UNSIGNED_INT64(v14 / v15 * 100.0),
                             HIDWORD(COERCE_UNSIGNED_INT64(v14 / v15 * 100.0)));
            sub_25A788(v16);
          }
          ++v56;
          v17 = json_real();
          json_object_set_new(v20, "Pool Stale%%", v17);
          json_array_append_new(v57, v20);
        }
        while ( total_pools > v18 + 1 );
      }
      json_object_set_new(a1, "POOLS", v57);
      v54 = json_integer(1);
      v5 = 0;
      json_object_set_new(a1, "id", v54);
    }
    else
    {
      sub_7D134(a1, 0, 8, (int)"No pools");
    }
  }
  return v5;
}
