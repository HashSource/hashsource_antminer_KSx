int __fastcall sub_80E70(int a1, int a2)
{
  void *v4; // r0
  bool v5; // zf
  int v6; // r4
  int v7; // r0
  __int64 v8; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  double v19; // d16
  __int64 v20; // r0
  int v21; // r0
  int v22; // r0
  double v23; // d18
  double v24; // d16
  __int64 v25; // r0
  int v26; // r0
  int v27; // r6
  int v28; // r5
  int v29; // r4
  int v30; // r0
  int v31; // r0
  bool v32; // zf
  _DWORD *v33; // r3
  int v34; // r1
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r3
  unsigned int v48; // r7
  int v49; // r0
  int v50; // r0
  double *v51; // r7
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
  __int64 v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r2
  int v70; // r0
  __int64 v71; // [sp+10h] [bp-114Ch]
  int v72; // [sp+1Ch] [bp-1140h]
  _DWORD v74[3]; // [sp+34h] [bp-1128h] BYREF
  __int64 v75; // [sp+40h] [bp-111Ch] BYREF
  __int64 v76; // [sp+48h] [bp-1114h]
  double v77; // [sp+50h] [bp-110Ch]
  char s[128]; // [sp+58h] [bp-1104h] BYREF
  char v79[128]; // [sp+D8h] [bp-1084h] BYREF
  _BYTE v80[4100]; // [sp+158h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = memset(v79, 0, sizeof(v79));
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  memset(v74, 0, sizeof(v74));
  v75 = 0;
  v76 = 0;
  v77 = 0.0;
  if ( v5 )
  {
    V_LOCK(v4);
    v70 = logfmt_raw((int)v80, 0x1000u);
    v6 = -2147483646;
    V_UNLOCK(v70);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "get_pools_old",
      13,
      1281,
      100,
      v80);
  }
  else
  {
    v6 = total_pools;
    if ( total_pools )
    {
      v7 = sub_7EC24(a1, 1, 7, *(_DWORD *)(a2 + 8));
      v8 = json_array(v7);
      v72 = v8;
      if ( total_pools > 0 )
      {
        v9 = -2004318071;
        v71 = 0;
        do
        {
          v27 = v71;
          v28 = *(_DWORD *)(pools + 4 * v71);
          v29 = json_object(v8, HIDWORD(v8), v9, pools);
          v30 = json_integer(v71, HIDWORD(v71));
          json_object_set_new(v29, "POOL", v30);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(_DWORD *)(v28 + 12));
          v31 = json_string(s);
          json_object_set_new(v29, "URL", v31);
          v32 = *(_BYTE *)(v28 + 1904) == 0;
          if ( *(_BYTE *)(v28 + 1904) )
            LOWORD(v33) = 640;
          else
            LOWORD(v33) = 648;
          HIWORD(v33) = 39;
          memset(v74, 0, sizeof(v74));
          v34 = v33[1];
          v74[0] = *v33;
          if ( v32 )
            LOWORD(v74[1]) = v34;
          else
            LOBYTE(v74[1]) = v34;
          v35 = json_string(v74);
          json_object_set_new(v29, "Status", v35);
          v36 = json_integer(*(_DWORD *)(v28 + 4), *(int *)(v28 + 4) >> 31);
          json_object_set_new(v29, "Priority", v36);
          v37 = json_integer(*(_DWORD *)(v28 + 1636), *(int *)(v28 + 1636) >> 31);
          json_object_set_new(v29, "Quota", v37);
          v38 = json_string("N");
          json_object_set_new(v29, "Long Poll", v38);
          v39 = json_integer(*(_DWORD *)(v28 + 1632), 0);
          json_object_set_new(v29, "Getworks", v39);
          v40 = json_integer(*(_DWORD *)(v28 + 1928), *(_DWORD *)(v28 + 1932));
          json_object_set_new(v29, "Accepted", v40);
          v41 = json_integer(*(_DWORD *)(v28 + 1936), *(_DWORD *)(v28 + 1940));
          json_object_set_new(v29, "Rejected", v41);
          v42 = json_integer(*(_DWORD *)(v28 + 1944), 0);
          json_object_set_new(v29, "Discarded", v42);
          v43 = json_integer(*(_DWORD *)(v28 + 1640), 0);
          json_object_set_new(v29, "Stale", v43);
          v44 = json_integer(*(_DWORD *)(v28 + 1948), 0);
          json_object_set_new(v29, "Get Failures", v44);
          v45 = json_integer(*(_DWORD *)(v28 + 1952), 0);
          json_object_set_new(v29, "Remote Failures", v45);
          memset(v79, 0, sizeof(v79));
          snprintf(v79, 0x80u, "%s", *(_DWORD *)(v28 + 16));
          v46 = json_string(v79);
          json_object_set_new(v29, "User", v46);
          v47 = *(_DWORD *)(v28 + 1616);
          v75 = 0;
          v76 = 0;
          if ( v47 <= 0 )
            strcpy((char *)&v75, "0");
          v77 = 0.0;
          if ( v47 > 0 )
          {
            v48 = time(0) - *(_DWORD *)(v28 + 1616);
            snprintf((char *)&v75, 0x18u, "%d:%d:%d", v48 / 0xE10, v48 % 0xE10 / 0x3C, v48 % 0xE10 % 0x3C);
          }
          v49 = json_string(&v75);
          json_object_set_new(v29, "Last Share Time", v49);
          sprintf((char *)(v28 + 1976), "%8.4f", *(double *)(v28 + 1808));
          v50 = json_string(v28 + 1976);
          v51 = (double *)(v28 + 1968);
          json_object_set_new(v29, "Diff", v50);
          v52 = json_integer(*(_DWORD *)(v28 + 1992), *(_DWORD *)(v28 + 1996));
          json_object_set_new(v29, "Diff1 Shares", v52);
          v53 = json_string("");
          json_object_set_new(v29, "Proxy Type", v53);
          v54 = json_string("");
          json_object_set_new(v29, "Proxy", v54);
          v55 = sub_26D41C(
                  COERCE_UNSIGNED_INT64(*(double *)(v28 + 1960) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v28 + 1960) * 100.0)));
          v56 = sub_26D560(v55, HIDWORD(v55));
          v57 = json_real(v56);
          json_object_set_new(v29, "Difficulty Accepted", v57);
          v58 = sub_26D41C(COERCE_UNSIGNED_INT64(*v51 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v51 * 100.0)));
          v59 = sub_26D560(v58, HIDWORD(v58));
          v60 = json_real(v59);
          json_object_set_new(v29, "Difficulty Rejected", v60);
          v61 = sub_26D41C(
                  COERCE_UNSIGNED_INT64(*(double *)(v28 + 1816) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v28 + 1816) * 100.0)));
          v62 = sub_26D560(v61, HIDWORD(v61));
          v63 = json_real(v62);
          json_object_set_new(v29, "Difficulty Stale", v63);
          v64 = sub_26D41C(
                  COERCE_UNSIGNED_INT64(*(double *)(v28 + 1624) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v28 + 1624) * 100.0)));
          v65 = sub_26D560(v64, HIDWORD(v64));
          v66 = json_real(v65);
          v67 = json_object_set_new(v29, "Last Share Difficulty", v66);
          if ( *(_BYTE *)(v28 + 28) )
            v10 = ((int (*)(void))json_true)();
          else
            v10 = json_false(v67);
          v11 = json_object_set_new(v29, "Has Stratum", v10);
          v12 = json_true(v11);
          json_object_set_new(v29, "Stratum Active", v12);
          v13 = json_string("");
          v14 = json_object_set_new(v29, "Stratum URL", v13);
          v15 = json_false(v14);
          v16 = json_object_set_new(v29, "Has GBT", v15);
          v17 = json_real(v16);
          v18 = json_object_set_new(v29, "Best Share", v17);
          v19 = *(double *)(v28 + 1968) + *(double *)(v28 + 1960) + *(double *)(v28 + 1816);
          if ( v19 != 0.0 )
          {
            v20 = sub_26D41C(
                    COERCE_UNSIGNED_INT64(*v51 / v19 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(*v51 / v19 * 100.0)));
            v18 = sub_26D560(v20, HIDWORD(v20));
          }
          v21 = json_real(v18);
          v22 = json_object_set_new(v29, "Pool Rejected%", v21);
          v23 = *(double *)(v28 + 1816);
          v24 = *(double *)(v28 + 1960) + *v51 + v23;
          if ( v24 != 0.0 )
          {
            v25 = sub_26D41C(
                    COERCE_UNSIGNED_INT64(v23 / v24 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(v23 / v24 * 100.0)));
            v22 = sub_26D560(v25, HIDWORD(v25));
          }
          ++v71;
          v26 = json_real(v22);
          json_object_set_new(v29, "Pool Stale%%", v26);
          LODWORD(v8) = json_array_append_new(v72, v29);
        }
        while ( total_pools > v27 + 1 );
      }
      json_object_set_new(a1, "POOLS", v72);
      v68 = json_integer(1, 0);
      v6 = 0;
      json_object_set_new(a1, "id", v68);
    }
    else
    {
      sub_7EC24(a1, 0, 8, (int)"No pools");
    }
  }
  return v6;
}
