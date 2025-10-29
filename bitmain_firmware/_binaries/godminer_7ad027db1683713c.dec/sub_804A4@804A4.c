int __fastcall sub_804A4(_DWORD *a1, const char **a2)
{
  float v2; // s0
  bool v5; // zf
  __int64 v6; // d16
  __int64 v7; // r0
  _DWORD *v8; // r0
  __int64 v9; // r0
  _DWORD *v10; // r0
  __int64 v11; // r0
  _DWORD *v12; // r0
  bool v13; // cc
  unsigned int v14; // r10
  char *v15; // r0
  int v16; // r5
  int v17; // r8
  double *v18; // r9
  _DWORD *v19; // r4
  _DWORD *v20; // r0
  char *v21; // r0
  char *v22; // r0
  bool v23; // zf
  _DWORD *v24; // r3
  int v25; // r1
  char *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  char *v33; // r0
  _DWORD *v34; // r0
  double *v35; // r0
  bool v36; // cc
  double v37; // d17
  __int64 v39; // [sp+10h] [bp-1154h]
  _DWORD *v40; // [sp+18h] [bp-114Ch]
  _DWORD v42[3]; // [sp+2Ch] [bp-1138h] BYREF
  __int64 v43; // [sp+38h] [bp-112Ch] BYREF
  __int64 v44; // [sp+40h] [bp-1124h]
  __int64 v45; // [sp+48h] [bp-111Ch] BYREF
  __int64 v46; // [sp+50h] [bp-1114h]
  double v47; // [sp+58h] [bp-110Ch]
  char s[128]; // [sp+60h] [bp-1104h] BYREF
  char v49[128]; // [sp+E0h] [bp-1084h] BYREF
  char v50[4100]; // [sp+160h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v49, 0, sizeof(v49));
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  memset(v42, 0, sizeof(v42));
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0.0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v50, 0x1000u, 0, "%s: input bad api param", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_pools",
      9,
      612,
      100,
      v50);
    return -2147483646;
  }
  else
  {
    sub_7CEF0(a1, a2);
    sub_7CFF8(a1);
    v40 = json_array();
    get_total_nonce_rate();
    if ( total_pools > 0 )
    {
      v39 = 0;
      do
      {
        v16 = v39;
        v17 = *(_DWORD *)(pools + 4 * v39);
        if ( v17 )
        {
          v18 = (double *)(v17 + 1968);
          v19 = json_object();
          v20 = json_integer(v39);
          json_object_set_new(v19, "index", v20);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v17 + 12));
          v21 = BUFX_strdup(s);
          json_object_set_new(v19, "url", v21);
          memset(v49, 0, sizeof(v49));
          snprintf(v49, 0x80u, "%s", *(const char **)(v17 + 16));
          v22 = BUFX_strdup(v49);
          json_object_set_new(v19, "user", v22);
          v23 = *(_BYTE *)(v17 + 1904) == 0;
          if ( *(_BYTE *)(v17 + 1904) )
            LOWORD(v24) = -10496;
          else
            LOWORD(v24) = -11300;
          HIWORD(v24) = 37;
          memset(v42, 0, sizeof(v42));
          v25 = v24[1];
          v42[0] = *v24;
          if ( v23 )
            LOWORD(v42[1]) = v25;
          else
            LOBYTE(v42[1]) = v25;
          v26 = BUFX_strdup((char *)v42);
          json_object_set_new(v19, "status", v26);
          v27 = json_integer(*(int *)(v17 + 4));
          json_object_set_new(v19, "priority", v27);
          v28 = json_integer(*(unsigned int *)(v17 + 1632));
          json_object_set_new(v19, "getworks", v28);
          v29 = json_integer(*(_QWORD *)(v17 + 1928));
          json_object_set_new(v19, "accepted", v29);
          v30 = json_integer(*(_QWORD *)(v17 + 1936));
          json_object_set_new(v19, "rejected", v30);
          v31 = json_integer(*(unsigned int *)(v17 + 1944));
          json_object_set_new(v19, "discarded", v31);
          v32 = json_integer(*(unsigned int *)(v17 + 1640));
          json_object_set_new(v19, "stale", v32);
          v43 = 0;
          v44 = 0;
          snprintf((char *)&v43, 0x10u, "%s", (const char *)(v17 + 1976));
          v33 = BUFX_strdup((char *)&v43);
          json_object_set_new(v19, "diff", v33);
          v34 = json_integer(*(_QWORD *)(v17 + 1992));
          json_object_set_new(v19, "diff1", v34);
          v35 = json_real();
          json_object_set_new(v19, "diffa", v35);
          v36 = (unsigned int)opt_algo > 0xA;
          if ( opt_algo != 10 )
            v36 = (unsigned int)(opt_algo - 6) > 1;
          if ( v36 )
          {
            LODWORD(v7) = sub_25A644(*(_DWORD *)(v17 + 1968), *(_DWORD *)(v17 + 1972));
          }
          else
          {
            v37 = (double)(int)((*(double *)(v17 + 1968) + *(double *)(v17 + 1960)) * (float)(1.0 - v2));
            if ( *v18 > v37 )
              v6 = vshrd_n_s64(vdup_n_s32((int)(*v18 - v37)).n64_i64[0], 0x20u);
            else
              v6 = 0;
            v7 = v6;
          }
          v8 = json_integer(v7);
          json_object_set_new(v19, "diffr", v8);
          LODWORD(v9) = sub_25A644(*(_DWORD *)(v17 + 1816), *(_DWORD *)(v17 + 1820));
          v10 = json_integer(v9);
          json_object_set_new(v19, "diffs", v10);
          LODWORD(v11) = sub_25A644(*(_DWORD *)(v17 + 1624), *(_DWORD *)(v17 + 1628));
          v12 = json_integer(v11);
          json_object_set_new(v19, "lsdiff", v12);
          v13 = *(_DWORD *)(v17 + 1616) <= 0;
          v45 = 0;
          v46 = 0;
          if ( v13 )
            LOWORD(v45) = 48;
          v47 = 0.0;
          if ( !v13 )
          {
            v14 = time(0) - *(_DWORD *)(v17 + 1616);
            snprintf((char *)&v45, 0x18u, "%d:%d:%d", v14 / 0xE10, v14 % 0xE10 / 0x3C, v14 % 0xE10 % 0x3C);
          }
          v15 = BUFX_strdup((char *)&v45);
          json_object_set_new(v19, "lstime", v15);
          json_array_append_new(v40, v19);
        }
        ++v39;
      }
      while ( total_pools > v16 + 1 );
    }
    json_object_set_new(a1, "POOLS", v40);
    return 0;
  }
}
