int __fastcall sub_7EA94(_DWORD *a1, const char **a2)
{
  int v2; // r4
  char *all_created_runtime; // r6
  int v5; // r0
  int v6; // r5
  double v7; // d8
  char *v8; // r0
  _DWORD *v9; // r8
  int v10; // r4
  int v11; // r3
  char *v12; // r0
  float *v13; // r8
  char *v14; // r10
  int v15; // r9
  _DWORD *v16; // r0
  int v17; // t1
  _DWORD *v18; // r7
  char *v19; // r0
  _DWORD *v20; // r4
  float *v21; // r11
  float v22; // s15
  __int64 v23; // r0
  _DWORD *v24; // r0
  char *v26; // r7
  char *v27; // r0
  char *v28; // r6
  char *v29; // r8
  int v30; // t1
  __int64 v31; // r6
  bool v32; // cc
  double v33; // d0
  int v34; // [sp+14h] [bp-1048h]
  _DWORD *v35; // [sp+18h] [bp-1044h]
  _DWORD *v36; // [sp+2Ch] [bp-1030h]
  _QWORD *v37; // [sp+30h] [bp-102Ch]
  char *ptr; // [sp+38h] [bp-1024h]
  _DWORD *v40; // [sp+3Ch] [bp-1020h]
  int v41; // [sp+44h] [bp-1018h] BYREF
  char s[8]; // [sp+48h] [bp-1014h] BYREF
  double v43; // [sp+50h] [bp-100Ch] BYREF
  double v44[512]; // [sp+58h] [bp-1004h] BYREF

  v2 = 0;
  *(_QWORD *)s = 0;
  v41 = 0;
  v43 = 0.0;
  all_created_runtime = (char *)get_all_created_runtime(&v41);
  v5 = frontend_runtime_instance();
  if ( a2 )
  {
    v6 = v5;
    sub_7CEF0(a1, a2);
    sub_7CFF8(a1);
    if ( v41 > 0 )
    {
      v37 = malloc(216 * v41);
      v26 = (char *)v37;
      v27 = (char *)malloc(4 * v41);
      ptr = v27;
      if ( v41 > 0 )
      {
        v28 = all_created_runtime - 4;
        v29 = v27 - 4;
        do
        {
          v30 = *((_DWORD *)v28 + 1);
          v28 += 4;
          read_status_from_monitor(v26, v30);
          ++v2;
          v26 += 216;
          v32 = v41 <= v2;
          *((_DWORD *)v29 + 1) = *(_DWORD *)(*(_DWORD *)v28 + 232);
          v29 += 4;
        }
        while ( !v32 );
      }
      v31 = v37[26];
      v32 = HIDWORD(v31) != 0;
      v33 = *((double *)v37 + 6);
      if ( !HIDWORD(v31) )
        v32 = (unsigned int)v31 > 0x18;
      if ( v32 )
        LODWORD(v31) = 24;
      v34 = v31;
      format_hashrate_double(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v44, (char *)&v43);
      v7 = v33;
    }
    else
    {
      v7 = 1.0;
      ptr = 0;
      v37 = 0;
      v34 = 0;
    }
    v40 = json_array();
    v36 = json_object();
    if ( !v41 )
    {
      format_hashrate_double(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v44, (char *)&v43);
      v7 = 1.0;
    }
    v8 = BUFX_strdup((char *)&v43);
    json_object_set_new(v36, "unit", v8);
    v9 = json_array();
    if ( v34 )
    {
      v10 = 15;
      do
      {
        v11 = v10;
        *(_QWORD *)s = 0;
        v10 += 15;
        snprintf(s, 8u, "%dmin", v11);
        v12 = BUFX_strdup(s);
        json_array_append_new(v9, v12);
      }
      while ( v10 != 15 * (v34 + 1) );
    }
    json_object_set_new(v36, "xAxis", v9);
    v35 = json_array();
    if ( v41 > 0 )
    {
      v13 = (float *)(v37 + 13);
      v14 = ptr - 4;
      v15 = 0;
      do
      {
        v16 = json_object();
        v17 = *((_DWORD *)v14 + 1);
        v14 += 4;
        *(_QWORD *)s = 0;
        v18 = v16;
        snprintf(s, 8u, "chain%d", v17);
        v19 = BUFX_strdup(s);
        json_object_set_new(v18, "name", v19);
        v20 = json_array();
        if ( v34 )
        {
          v21 = v13;
          do
          {
            v22 = *v21++;
            v44[0] = v22 * v7;
            LODWORD(v23) = sub_25A644(LODWORD(v44[0]), SHIDWORD(v44[0]));
            v24 = json_integer(v23);
            json_array_append_new(v20, v24);
          }
          while ( &v13[v34] != v21 );
        }
        ++v15;
        json_object_set_new(v18, "data", v20);
        v13 += 54;
        json_array_append_new(v35, v18);
      }
      while ( v41 > v15 );
    }
    json_object_set_new(v36, "series", v35);
    json_array_append_new(v40, v36);
    json_object_set_new(a1, "RATE", v40);
    if ( v41 > 0 )
    {
      free(ptr);
      free(v37);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "%s: input bad api param", "get_rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_rate",
      8,
      966,
      100,
      v44);
    return -2147483646;
  }
}
