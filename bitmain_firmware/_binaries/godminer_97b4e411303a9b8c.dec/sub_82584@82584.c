int __fastcall sub_82584(int a1, const char **a2)
{
  float v2; // s0
  void *v5; // r0
  bool v6; // zf
  int v7; // r1
  int v8; // r2
  int v9; // r0
  __int64 v10; // r0
  int v11; // r2
  __int64 v12; // d16
  __int64 v13; // r0
  int v14; // r0
  __int64 v15; // r0
  int v16; // r0
  __int64 v17; // r0
  int v18; // r0
  bool v19; // cc
  unsigned int v20; // r10
  int v21; // r0
  int v22; // r5
  int v23; // r8
  double *v24; // r9
  int v25; // r4
  int v26; // r0
  int v27; // r0
  int v28; // r0
  bool v29; // zf
  _DWORD *v30; // r3
  int v31; // r1
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  bool v43; // cc
  double v44; // d17
  int v46; // r0
  __int64 v47; // [sp+10h] [bp-1154h]
  int v48; // [sp+18h] [bp-114Ch]
  _DWORD v50[3]; // [sp+2Ch] [bp-1138h] BYREF
  __int64 v51; // [sp+38h] [bp-112Ch] BYREF
  __int64 v52; // [sp+40h] [bp-1124h]
  __int64 v53; // [sp+48h] [bp-111Ch] BYREF
  __int64 v54; // [sp+50h] [bp-1114h]
  double v55; // [sp+58h] [bp-110Ch]
  char s[128]; // [sp+60h] [bp-1104h] BYREF
  char v57[128]; // [sp+E0h] [bp-1084h] BYREF
  _BYTE v58[4100]; // [sp+160h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v5 = memset(v57, 0, sizeof(v57));
  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  memset(v50, 0, sizeof(v50));
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0.0;
  if ( v6 )
  {
    V_LOCK(v5);
    v46 = logfmt_raw((int)v58, 0x1000u);
    V_UNLOCK(v46);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "get_pools",
      9,
      615,
      100,
      v58);
    return -2147483646;
  }
  else
  {
    sub_7E9E0(a1, a2, (int)&v51);
    v9 = sub_7EAE8(a1, v7, v8);
    v48 = json_array(v9);
    LODWORD(v10) = get_total_nonce_rate();
    if ( total_pools > 0 )
    {
      v47 = 0;
      do
      {
        v22 = v47;
        v23 = *(_DWORD *)(pools + 4 * v47);
        if ( v23 )
        {
          v24 = (double *)(v23 + 1968);
          v25 = json_object(v10, HIDWORD(v10), v11, pools);
          v26 = json_integer(v47, HIDWORD(v47));
          json_object_set_new(v25, "index", v26);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v23 + 12));
          v27 = json_string(s);
          json_object_set_new(v25, "url", v27);
          memset(v57, 0, sizeof(v57));
          snprintf(v57, 0x80u, "%s", *(const char **)(v23 + 16));
          v28 = json_string(v57);
          json_object_set_new(v25, "user", v28);
          v29 = *(_BYTE *)(v23 + 1904) == 0;
          if ( *(_BYTE *)(v23 + 1904) )
            LOWORD(v30) = 1468;
          else
            LOWORD(v30) = 648;
          HIWORD(v30) = 39;
          memset(v50, 0, sizeof(v50));
          v31 = v30[1];
          v50[0] = *v30;
          if ( v29 )
            LOWORD(v50[1]) = v31;
          else
            LOBYTE(v50[1]) = v31;
          v32 = json_string(v50);
          json_object_set_new(v25, "status", v32);
          v33 = json_integer(*(_DWORD *)(v23 + 4), *(int *)(v23 + 4) >> 31);
          json_object_set_new(v25, "priority", v33);
          v34 = json_integer(*(_DWORD *)(v23 + 1632), 0);
          json_object_set_new(v25, "getworks", v34);
          v35 = json_integer(*(_DWORD *)(v23 + 1928), *(_DWORD *)(v23 + 1932));
          json_object_set_new(v25, "accepted", v35);
          v36 = json_integer(*(_DWORD *)(v23 + 1936), *(_DWORD *)(v23 + 1940));
          json_object_set_new(v25, "rejected", v36);
          v37 = json_integer(*(_DWORD *)(v23 + 1944), 0);
          json_object_set_new(v25, "discarded", v37);
          v38 = json_integer(*(_DWORD *)(v23 + 1640), 0);
          json_object_set_new(v25, "stale", v38);
          v51 = 0;
          v52 = 0;
          snprintf((char *)&v51, 0x10u, "%s", (const char *)(v23 + 1976));
          v39 = json_string(&v51);
          json_object_set_new(v25, "diff", v39);
          v40 = json_integer(*(_DWORD *)(v23 + 1992), *(_DWORD *)(v23 + 1996));
          v41 = json_object_set_new(v25, "diff1", v40);
          v42 = json_real(v41);
          json_object_set_new(v25, "diffa", v42);
          v43 = (unsigned int)opt_algo > 0xA;
          if ( opt_algo != 10 )
            v43 = (unsigned int)(opt_algo - 6) > 1;
          if ( v43 )
          {
            v13 = sub_26D41C(*(_DWORD *)(v23 + 1968), *(_DWORD *)(v23 + 1972));
          }
          else
          {
            v44 = (double)(int)((*(double *)(v23 + 1968) + *(double *)(v23 + 1960)) * (float)(1.0 - v2));
            if ( *v24 > v44 )
              v12 = vshrd_n_s64(vdup_n_s32((int)(*v24 - v44)).n64_i64[0], 0x20u);
            else
              v12 = 0;
            v13 = v12;
          }
          v14 = json_integer(v13, HIDWORD(v13));
          json_object_set_new(v25, "diffr", v14);
          v15 = sub_26D41C(*(_DWORD *)(v23 + 1816), *(_DWORD *)(v23 + 1820));
          v16 = json_integer(v15, HIDWORD(v15));
          json_object_set_new(v25, "diffs", v16);
          v17 = sub_26D41C(*(_DWORD *)(v23 + 1624), *(_DWORD *)(v23 + 1628));
          v18 = json_integer(v17, HIDWORD(v17));
          json_object_set_new(v25, "lsdiff", v18);
          v19 = *(_DWORD *)(v23 + 1616) <= 0;
          v53 = 0;
          v54 = 0;
          if ( v19 )
            strcpy((char *)&v53, "0");
          v55 = 0.0;
          if ( !v19 )
          {
            v20 = time(0) - *(_DWORD *)(v23 + 1616);
            snprintf((char *)&v53, 0x18u, "%d:%d:%d", v20 / 0xE10, v20 % 0xE10 / 0x3C, v20 % 0xE10 % 0x3C);
          }
          v21 = json_string(&v53);
          json_object_set_new(v25, "lstime", v21);
          json_array_append_new(v48, v25);
        }
        v10 = ++v47;
      }
      while ( total_pools > v22 + 1 );
    }
    json_object_set_new(a1, "POOLS", v48);
    return 0;
  }
}
