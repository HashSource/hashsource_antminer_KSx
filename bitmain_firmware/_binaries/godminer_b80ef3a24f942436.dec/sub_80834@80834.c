int __fastcall sub_80834(_DWORD *a1, const char **a2)
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
  _QWORD *v26; // r7
  char *v27; // r0
  char *v28; // r6
  char *v29; // r8
  int v30; // t1
  __int64 v31; // r6
  bool v32; // cc
  double v33; // d0
  int v34; // r0
  int v35; // [sp+14h] [bp-1048h]
  _DWORD *v36; // [sp+18h] [bp-1044h]
  _DWORD *v37; // [sp+2Ch] [bp-1030h]
  _QWORD *v38; // [sp+30h] [bp-102Ch]
  char *ptr; // [sp+38h] [bp-1024h]
  _DWORD *v41; // [sp+3Ch] [bp-1020h]
  int v42; // [sp+44h] [bp-1018h] BYREF
  char s[8]; // [sp+48h] [bp-1014h] BYREF
  double v44; // [sp+50h] [bp-100Ch] BYREF
  double v45[512]; // [sp+58h] [bp-1004h] BYREF

  v2 = 0;
  *(_QWORD *)s = 0;
  v42 = 0;
  v44 = 0.0;
  all_created_runtime = (char *)get_all_created_runtime(&v42);
  v5 = frontend_runtime_instance();
  if ( a2 )
  {
    v6 = v5;
    sub_7E7B8((int)a1, a2);
    sub_7E8C0((int)a1);
    if ( v42 > 0 )
    {
      v38 = malloc(216 * v42);
      v26 = v38;
      v27 = (char *)malloc(4 * v42);
      ptr = v27;
      if ( v42 > 0 )
      {
        v28 = all_created_runtime - 4;
        v29 = v27 - 4;
        do
        {
          v30 = *((_DWORD *)v28 + 1);
          v28 += 4;
          read_status_from_monitor(v26, v30);
          ++v2;
          v26 += 27;
          v32 = v42 <= v2;
          *((_DWORD *)v29 + 1) = *(_DWORD *)(*(_DWORD *)v28 + 248);
          v29 += 4;
        }
        while ( !v32 );
      }
      v31 = v38[26];
      v32 = HIDWORD(v31) != 0;
      v33 = *((double *)v38 + 6);
      if ( !HIDWORD(v31) )
        v32 = (unsigned int)v31 > 0x18;
      if ( v32 )
        LODWORD(v31) = 24;
      v35 = v31;
      format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v45, &v44);
      v7 = v33;
    }
    else
    {
      v7 = 1.0;
      ptr = 0;
      v38 = 0;
      v35 = 0;
    }
    v41 = json_array();
    v37 = json_object();
    if ( !v42 )
    {
      format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), v45, &v44);
      v7 = 1.0;
    }
    v8 = BUFX_strdup((char *)&v44);
    json_object_set_new(v37, "unit", v8);
    v9 = json_array();
    if ( v35 )
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
      while ( v10 != 15 * (v35 + 1) );
    }
    json_object_set_new(v37, "xAxis", v9);
    v36 = json_array();
    if ( v42 > 0 )
    {
      v13 = (float *)(v38 + 13);
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
        if ( v35 )
        {
          v21 = v13;
          do
          {
            v22 = *v21++;
            v45[0] = v22 * v7;
            v23 = sub_270644(LODWORD(v45[0]), HIDWORD(v45[0]));
            v24 = json_integer(v23);
            json_array_append_new(v20, v24);
          }
          while ( &v13[v35] != v21 );
        }
        ++v15;
        json_object_set_new(v18, "data", v20);
        v13 += 54;
        json_array_append_new(v36, v18);
      }
      while ( v42 > v15 );
    }
    json_object_set_new(v37, "series", v36);
    json_array_append_new(v41, v37);
    json_object_set_new(a1, "RATE", v41);
    if ( v42 > 0 )
    {
      free(ptr);
      free(v38);
    }
    return 0;
  }
  else
  {
    V_LOCK(v5);
    v34 = logfmt_raw((int)v45, 0x1000u);
    V_UNLOCK(v34);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/api_new.c",
      153,
      "get_rate",
      8,
      969,
      100,
      v45);
    return -2147483646;
  }
}
