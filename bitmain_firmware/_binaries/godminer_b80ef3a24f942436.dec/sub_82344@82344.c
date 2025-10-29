int __fastcall sub_82344(_DWORD *a1, const char **a2)
{
  float v2; // s0
  void *v5; // r0
  bool v6; // zf
  __int64 v7; // d16
  __int64 v8; // r0
  _DWORD *v9; // r0
  __int64 v10; // r0
  _DWORD *v11; // r0
  __int64 v12; // r0
  _DWORD *v13; // r0
  bool v14; // cc
  unsigned int v15; // r10
  char *v16; // r0
  int v17; // r5
  int v18; // r8
  double *v19; // r9
  _DWORD *v20; // r4
  _DWORD *v21; // r0
  char *v22; // r0
  char *v23; // r0
  bool v24; // zf
  _DWORD *v25; // r3
  int v26; // r1
  char *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  char *v34; // r0
  _DWORD *v35; // r0
  double *v36; // r0
  bool v37; // cc
  double v38; // d17
  int v40; // r0
  __int64 v41; // [sp+10h] [bp-1154h]
  _DWORD *v42; // [sp+18h] [bp-114Ch]
  _DWORD v44[3]; // [sp+2Ch] [bp-1138h] BYREF
  __int64 v45; // [sp+38h] [bp-112Ch] BYREF
  __int64 v46; // [sp+40h] [bp-1124h]
  __int64 v47; // [sp+48h] [bp-111Ch] BYREF
  __int64 v48; // [sp+50h] [bp-1114h]
  double v49; // [sp+58h] [bp-110Ch]
  char s[128]; // [sp+60h] [bp-1104h] BYREF
  char v51[128]; // [sp+E0h] [bp-1084h] BYREF
  _BYTE v52[4100]; // [sp+160h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v5 = memset(v51, 0, sizeof(v51));
  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  memset(v44, 0, sizeof(v44));
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0.0;
  if ( v6 )
  {
    V_LOCK(v5);
    v40 = logfmt_raw((int)v52, 0x1000u);
    V_UNLOCK(v40);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_pools",
      9,
      615,
      100,
      v52);
    return -2147483646;
  }
  else
  {
    sub_7E7B8((int)a1, a2);
    sub_7E8C0((int)a1);
    v42 = json_array();
    get_total_nonce_rate();
    if ( total_pools > 0 )
    {
      v41 = 0;
      do
      {
        v17 = v41;
        v18 = *(_DWORD *)(pools + 4 * v41);
        if ( v18 )
        {
          v19 = (double *)(v18 + 1968);
          v20 = json_object();
          v21 = json_integer(v41);
          json_object_set_new(v20, "index", v21);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v18 + 12));
          v22 = BUFX_strdup(s);
          json_object_set_new(v20, "url", v22);
          memset(v51, 0, sizeof(v51));
          snprintf(v51, 0x80u, "%s", *(const char **)(v18 + 16));
          v23 = BUFX_strdup(v51);
          json_object_set_new(v20, "user", v23);
          v24 = *(_BYTE *)(v18 + 1904) == 0;
          if ( *(_BYTE *)(v18 + 1904) )
            LOWORD(v25) = 14304;
          else
            LOWORD(v25) = 13484;
          HIWORD(v25) = 39;
          memset(v44, 0, sizeof(v44));
          v26 = v25[1];
          v44[0] = *v25;
          if ( v24 )
            LOWORD(v44[1]) = v26;
          else
            LOBYTE(v44[1]) = v26;
          v27 = BUFX_strdup((char *)v44);
          json_object_set_new(v20, "status", v27);
          v28 = json_integer(*(int *)(v18 + 4));
          json_object_set_new(v20, "priority", v28);
          v29 = json_integer(*(unsigned int *)(v18 + 1632));
          json_object_set_new(v20, "getworks", v29);
          v30 = json_integer(*(_QWORD *)(v18 + 1928));
          json_object_set_new(v20, "accepted", v30);
          v31 = json_integer(*(_QWORD *)(v18 + 1936));
          json_object_set_new(v20, "rejected", v31);
          v32 = json_integer(*(unsigned int *)(v18 + 1944));
          json_object_set_new(v20, "discarded", v32);
          v33 = json_integer(*(unsigned int *)(v18 + 1640));
          json_object_set_new(v20, "stale", v33);
          v45 = 0;
          v46 = 0;
          snprintf((char *)&v45, 0x10u, "%s", (const char *)(v18 + 1976));
          v34 = BUFX_strdup((char *)&v45);
          json_object_set_new(v20, "diff", v34);
          v35 = json_integer(*(_QWORD *)(v18 + 1992));
          json_object_set_new(v20, "diff1", v35);
          v36 = json_real();
          json_object_set_new(v20, "diffa", v36);
          v37 = (unsigned int)opt_algo > 0xA;
          if ( opt_algo != 10 )
            v37 = (unsigned int)(opt_algo - 6) > 1;
          if ( v37 )
          {
            v8 = sub_270644(*(_DWORD *)(v18 + 1968), *(_DWORD *)(v18 + 1972));
          }
          else
          {
            v38 = (double)(int)((*(double *)(v18 + 1968) + *(double *)(v18 + 1960)) * (float)(1.0 - v2));
            if ( *v19 > v38 )
              v7 = vshrd_n_s64(vdup_n_s32((int)(*v19 - v38)).n64_i64[0], 0x20u);
            else
              v7 = 0;
            v8 = v7;
          }
          v9 = json_integer(v8);
          json_object_set_new(v20, "diffr", v9);
          v10 = sub_270644(*(_DWORD *)(v18 + 1816), *(_DWORD *)(v18 + 1820));
          v11 = json_integer(v10);
          json_object_set_new(v20, "diffs", v11);
          v12 = sub_270644(*(_DWORD *)(v18 + 1624), *(_DWORD *)(v18 + 1628));
          v13 = json_integer(v12);
          json_object_set_new(v20, "lsdiff", v13);
          v14 = *(_DWORD *)(v18 + 1616) <= 0;
          v47 = 0;
          v48 = 0;
          if ( v14 )
            strcpy((char *)&v47, "0");
          v49 = 0.0;
          if ( !v14 )
          {
            v15 = time(0) - *(_DWORD *)(v18 + 1616);
            snprintf((char *)&v47, 0x18u, "%d:%d:%d", v15 / 0xE10, v15 % 0xE10 / 0x3C, v15 % 0xE10 % 0x3C);
          }
          v16 = BUFX_strdup((char *)&v47);
          json_object_set_new(v20, "lstime", v16);
          json_array_append_new(v42, v20);
        }
        ++v41;
      }
      while ( total_pools > v17 + 1 );
    }
    json_object_set_new(a1, "POOLS", v42);
    return 0;
  }
}
