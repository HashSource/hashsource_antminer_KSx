int __fastcall sub_80C30(_DWORD *a1, int a2)
{
  void *v4; // r0
  bool v5; // zf
  int v6; // r4
  _DWORD *v7; // r2
  int v8; // r0
  _DWORD *v9; // r0
  char *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  double *v13; // r0
  double v14; // d16
  __int64 v15; // r0
  double *v16; // r0
  double v17; // d18
  double v18; // d16
  __int64 v19; // r0
  double *v20; // r0
  int v21; // r6
  int v22; // r5
  _DWORD *v23; // r4
  _DWORD *v24; // r0
  char *v25; // r0
  bool v26; // zf
  _DWORD *v27; // r3
  int v28; // r1
  char *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  char *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  char *v40; // r0
  int v41; // r3
  unsigned int v42; // r7
  char *v43; // r0
  char *v44; // r0
  double *v45; // r7
  _DWORD *v46; // r0
  char *v47; // r0
  char *v48; // r0
  __int64 v49; // r0
  double *v50; // r0
  __int64 v51; // r0
  double *v52; // r0
  __int64 v53; // r0
  double *v54; // r0
  __int64 v55; // r0
  double *v56; // r0
  int v57; // r0
  _DWORD *v58; // r2
  int v60; // r0
  __int64 v61; // [sp+10h] [bp-114Ch]
  _DWORD *v62; // [sp+1Ch] [bp-1140h]
  _DWORD v64[3]; // [sp+34h] [bp-1128h] BYREF
  __int64 v65; // [sp+40h] [bp-111Ch] BYREF
  __int64 v66; // [sp+48h] [bp-1114h]
  double v67; // [sp+50h] [bp-110Ch]
  char s[128]; // [sp+58h] [bp-1104h] BYREF
  char v69[128]; // [sp+D8h] [bp-1084h] BYREF
  _BYTE v70[4100]; // [sp+158h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = memset(v69, 0, sizeof(v69));
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  memset(v64, 0, sizeof(v64));
  v65 = 0;
  v66 = 0;
  v67 = 0.0;
  if ( v5 )
  {
    V_LOCK(v4);
    v60 = logfmt_raw((int)v70, 0x1000u);
    v6 = -2147483646;
    V_UNLOCK(v60);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_pools_old",
      13,
      1281,
      100,
      v70);
  }
  else
  {
    v6 = total_pools;
    if ( total_pools )
    {
      sub_7E9FC((int)a1, 1, 7, *(_DWORD *)(a2 + 8));
      v62 = json_array();
      if ( total_pools > 0 )
      {
        v61 = 0;
        do
        {
          v21 = v61;
          v22 = *(_DWORD *)(pools + 4 * v61);
          v23 = json_object();
          v24 = json_integer(v61);
          json_object_set_new(v23, "POOL", v24);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(_DWORD *)(v22 + 12));
          v25 = BUFX_strdup(s);
          json_object_set_new(v23, "URL", v25);
          v26 = *(_BYTE *)(v22 + 1904) == 0;
          if ( *(_BYTE *)(v22 + 1904) )
            LOWORD(v27) = 13476;
          else
            LOWORD(v27) = 13484;
          HIWORD(v27) = 39;
          memset(v64, 0, sizeof(v64));
          v28 = v27[1];
          v64[0] = *v27;
          if ( v26 )
            LOWORD(v64[1]) = v28;
          else
            LOBYTE(v64[1]) = v28;
          v29 = BUFX_strdup((char *)v64);
          json_object_set_new(v23, "Status", v29);
          v30 = json_integer(*(int *)(v22 + 4));
          json_object_set_new(v23, "Priority", v30);
          v31 = json_integer(*(int *)(v22 + 1636));
          json_object_set_new(v23, "Quota", v31);
          v32 = BUFX_strdup("N");
          json_object_set_new(v23, "Long Poll", v32);
          v33 = json_integer(*(unsigned int *)(v22 + 1632));
          json_object_set_new(v23, "Getworks", v33);
          v34 = json_integer(*(_QWORD *)(v22 + 1928));
          json_object_set_new(v23, "Accepted", v34);
          v35 = json_integer(*(_QWORD *)(v22 + 1936));
          json_object_set_new(v23, "Rejected", v35);
          v36 = json_integer(*(unsigned int *)(v22 + 1944));
          json_object_set_new(v23, "Discarded", v36);
          v37 = json_integer(*(unsigned int *)(v22 + 1640));
          json_object_set_new(v23, "Stale", v37);
          v38 = json_integer(*(unsigned int *)(v22 + 1948));
          json_object_set_new(v23, "Get Failures", v38);
          v39 = json_integer(*(unsigned int *)(v22 + 1952));
          json_object_set_new(v23, "Remote Failures", v39);
          memset(v69, 0, sizeof(v69));
          snprintf(v69, 0x80u, "%s", *(_DWORD *)(v22 + 16));
          v40 = BUFX_strdup(v69);
          json_object_set_new(v23, "User", v40);
          v41 = *(_DWORD *)(v22 + 1616);
          v65 = 0;
          v66 = 0;
          if ( v41 <= 0 )
            strcpy((char *)&v65, "0");
          v67 = 0.0;
          if ( v41 > 0 )
          {
            v42 = time(0) - *(_DWORD *)(v22 + 1616);
            snprintf((char *)&v65, 0x18u, "%d:%d:%d", v42 / 0xE10, v42 % 0xE10 / 0x3C, v42 % 0xE10 % 0x3C);
          }
          v43 = BUFX_strdup((char *)&v65);
          json_object_set_new(v23, "Last Share Time", v43);
          sprintf((char *)(v22 + 1976), "%8.4f", *(double *)(v22 + 1808));
          v44 = BUFX_strdup((char *)(v22 + 1976));
          v45 = (double *)(v22 + 1968);
          json_object_set_new(v23, "Diff", v44);
          v46 = json_integer(*(_QWORD *)(v22 + 1992));
          json_object_set_new(v23, "Diff1 Shares", v46);
          v47 = BUFX_strdup("");
          json_object_set_new(v23, "Proxy Type", v47);
          v48 = BUFX_strdup("");
          json_object_set_new(v23, "Proxy", v48);
          v49 = sub_270644(
                  COERCE_UNSIGNED_INT64(*(double *)(v22 + 1960) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v22 + 1960) * 100.0)));
          sub_270788(v49, HIDWORD(v49));
          v50 = json_real();
          json_object_set_new(v23, "Difficulty Accepted", v50);
          v51 = sub_270644(COERCE_UNSIGNED_INT64(*v45 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v45 * 100.0)));
          sub_270788(v51, HIDWORD(v51));
          v52 = json_real();
          json_object_set_new(v23, "Difficulty Rejected", v52);
          v53 = sub_270644(
                  COERCE_UNSIGNED_INT64(*(double *)(v22 + 1816) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v22 + 1816) * 100.0)));
          sub_270788(v53, HIDWORD(v53));
          v54 = json_real();
          json_object_set_new(v23, "Difficulty Stale", v54);
          v55 = sub_270644(
                  COERCE_UNSIGNED_INT64(*(double *)(v22 + 1624) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v22 + 1624) * 100.0)));
          sub_270788(v55, HIDWORD(v55));
          v56 = json_real();
          v57 = json_object_set_new(v23, "Last Share Difficulty", v56);
          if ( *(_BYTE *)(v22 + 28) )
            v7 = (_DWORD *)((int (*)(void))json_true)();
          else
            v7 = (_DWORD *)json_false(v57);
          v8 = json_object_set_new(v23, "Has Stratum", v7);
          v9 = (_DWORD *)json_true(v8);
          json_object_set_new(v23, "Stratum Active", v9);
          v10 = BUFX_strdup("");
          v11 = json_object_set_new(v23, "Stratum URL", v10);
          v12 = (_DWORD *)json_false(v11);
          json_object_set_new(v23, "Has GBT", v12);
          v13 = json_real();
          json_object_set_new(v23, "Best Share", v13);
          v14 = *(double *)(v22 + 1968) + *(double *)(v22 + 1960) + *(double *)(v22 + 1816);
          if ( v14 != 0.0 )
          {
            v15 = sub_270644(
                    COERCE_UNSIGNED_INT64(*v45 / v14 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(*v45 / v14 * 100.0)));
            sub_270788(v15, HIDWORD(v15));
          }
          v16 = json_real();
          json_object_set_new(v23, "Pool Rejected%", v16);
          v17 = *(double *)(v22 + 1816);
          v18 = *(double *)(v22 + 1960) + *v45 + v17;
          if ( v18 != 0.0 )
          {
            v19 = sub_270644(
                    COERCE_UNSIGNED_INT64(v17 / v18 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(v17 / v18 * 100.0)));
            sub_270788(v19, HIDWORD(v19));
          }
          ++v61;
          v20 = json_real();
          json_object_set_new(v23, "Pool Stale%%", v20);
          json_array_append_new(v62, v23);
        }
        while ( total_pools > v21 + 1 );
      }
      json_object_set_new(a1, "POOLS", v62);
      v58 = json_integer(1);
      v6 = 0;
      json_object_set_new(a1, "id", v58);
    }
    else
    {
      sub_7E9FC((int)a1, 0, 8, (int)"No pools");
    }
  }
  return v6;
}
