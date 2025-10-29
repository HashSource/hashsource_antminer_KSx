int __fastcall sub_80CCC(int a1, const char **a2)
{
  int v2; // r4
  int all_created_runtime; // r6
  int v5; // r0
  int v6; // r2
  int v7; // r5
  int v8; // r1
  int v9; // r2
  int v10; // r0
  double v11; // d8
  __int64 v12; // r0
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r8
  int v18; // r4
  int v19; // r3
  int v20; // r0
  int v21; // r0
  __int64 v22; // r0
  char *v23; // r2
  float *v24; // r8
  char *v25; // r10
  int v26; // r9
  int v27; // r3
  int v28; // r0
  int v29; // t1
  int v30; // r7
  int v31; // r0
  int v32; // r0
  int v33; // r4
  float *v34; // r11
  float v35; // s15
  __int64 v36; // r0
  int v37; // r0
  _QWORD *v39; // r7
  char *v40; // r0
  _DWORD *v41; // r6
  char *v42; // r8
  int v43; // t1
  __int64 v44; // r6
  bool v45; // cc
  double v46; // d0
  int v47; // r0
  int v48; // [sp+14h] [bp-1048h]
  int v49; // [sp+18h] [bp-1044h]
  int v50; // [sp+2Ch] [bp-1030h]
  _QWORD *v51; // [sp+30h] [bp-102Ch]
  char *ptr; // [sp+38h] [bp-1024h]
  int v54; // [sp+3Ch] [bp-1020h]
  int v55; // [sp+44h] [bp-1018h] BYREF
  char s[8]; // [sp+48h] [bp-1014h] BYREF
  double v57; // [sp+50h] [bp-100Ch] BYREF
  double v58[512]; // [sp+58h] [bp-1004h] BYREF

  v2 = 0;
  *(_QWORD *)s = 0;
  v55 = 0;
  v57 = 0.0;
  all_created_runtime = get_all_created_runtime(&v55);
  v5 = frontend_runtime_instance();
  if ( a2 )
  {
    v7 = v5;
    sub_7EC38(a1, a2, v6);
    v10 = sub_7ED40(a1, v8, v9);
    if ( v55 > 0 )
    {
      v51 = malloc(224 * v55);
      v39 = v51;
      v40 = (char *)malloc(4 * v55);
      ptr = v40;
      if ( v55 > 0 )
      {
        v41 = (_DWORD *)(all_created_runtime - 4);
        v42 = v40 - 4;
        do
        {
          v43 = v41[1];
          ++v41;
          read_status_from_monitor(v39, v43);
          ++v2;
          v39 += 28;
          v45 = v55 <= v2;
          *((_DWORD *)v42 + 1) = *(_DWORD *)(*v41 + 248);
          v42 += 4;
        }
        while ( !v45 );
      }
      v44 = v51[27];
      v45 = HIDWORD(v44) != 0;
      v46 = *((double *)v51 + 7);
      if ( !HIDWORD(v44) )
        v45 = (unsigned int)v44 > 0x18;
      if ( v45 )
        LODWORD(v44) = 24;
      v48 = v44;
      v10 = format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v58, &v57);
      v11 = v46;
    }
    else
    {
      v11 = 1.0;
      ptr = 0;
      v51 = 0;
      v48 = 0;
    }
    v12 = json_array(v10);
    v54 = v12;
    v50 = json_object(v12, HIDWORD(v12), v13, v14);
    if ( !v55 )
    {
      format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v58, &v57);
      v11 = 1.0;
    }
    v15 = json_string(&v57);
    v16 = json_object_set_new(v50, "unit", v15);
    v17 = json_array(v16);
    if ( v48 )
    {
      v18 = 15;
      do
      {
        v19 = v18;
        *(_QWORD *)s = 0;
        v18 += 15;
        snprintf(s, 8u, "%dmin", v19);
        v20 = json_string(s);
        json_array_append_new(v17, v20);
      }
      while ( v18 != 15 * (v48 + 1) );
    }
    v21 = json_object_set_new(v50, "xAxis", v17);
    v22 = json_array(v21);
    v49 = v22;
    if ( v55 > 0 )
    {
      v23 = ptr;
      v24 = (float *)(v51 + 14);
      v25 = ptr - 4;
      v26 = 0;
      v27 = 4 * v48;
      do
      {
        v28 = json_object(v22, HIDWORD(v22), v23, v27);
        v29 = *((_DWORD *)v25 + 1);
        v25 += 4;
        *(_QWORD *)s = 0;
        v30 = v28;
        snprintf(s, 8u, "chain%d", v29);
        v31 = json_string(s);
        v32 = json_object_set_new(v30, "name", v31);
        v33 = json_array(v32);
        if ( v48 )
        {
          v34 = v24;
          do
          {
            v35 = *v34++;
            v58[0] = v35 * v11;
            v36 = sub_26EB6C(LODWORD(v58[0]), HIDWORD(v58[0]));
            v37 = json_integer(v36, HIDWORD(v36));
            json_array_append_new(v33, v37);
          }
          while ( &v24[v48] != v34 );
        }
        ++v26;
        json_object_set_new(v30, "data", v33);
        v24 += 56;
        LODWORD(v22) = json_array_append_new(v49, v30);
        v27 = v55;
      }
      while ( v55 > v26 );
    }
    json_object_set_new(v50, "series", v49);
    json_array_append_new(v54, v50);
    json_object_set_new(a1, "RATE", v54);
    if ( v55 > 0 )
    {
      free(ptr);
      free(v51);
    }
    return 0;
  }
  else
  {
    V_LOCK(v5);
    v47 = logfmt_raw((int)v58, 0x1000u);
    V_UNLOCK(v47);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/api_new.c",
      158,
      "get_rate",
      8,
      969,
      100,
      v58);
    return -2147483646;
  }
}
