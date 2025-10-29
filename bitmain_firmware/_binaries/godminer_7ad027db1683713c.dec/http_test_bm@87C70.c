char *__fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v3; // r5
  char *v6; // r4
  int theory_hashrate; // r0
  int miner_sale_hashrate; // r0
  int v10; // r0
  size_t v11; // r0
  const char *v12; // lr
  char *v13; // r12
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  __int16 v18; // r2
  char v19; // r3
  FILE *v20; // r0
  FILE *v21; // r5
  int v22; // [sp+14h] [bp-1020h] BYREF
  int v23; // [sp+18h] [bp-101Ch] BYREF
  __int64 ptr; // [sp+1Ch] [bp-1018h] BYREF
  __int16 v25; // [sp+24h] [bp-1010h]
  __int64 v26; // [sp+26h] [bp-100Eh]
  char v27[4100]; // [sp+30h] [bp-1004h] BYREF

  v3 = (const char *)(a1 + 4);
  v22 = -1;
  v23 = -1;
  v6 = strstr((const char *)(a1 + 4), "/rate");
  if ( v6 )
  {
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "cmd : get rate");
    v6 = 0;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/http_test.c",
      155,
      "http_test_bm",
      12,
      477,
      20,
      v27);
    freq_scan_status = 1;
    miner_sale_hashrate = get_miner_sale_hashrate();
    sub_87510(a2, a3, miner_sale_hashrate);
    return v6;
  }
  if ( strstr(v3, "/test") )
  {
    _isoc99_sscanf(v3, "/test.%d.%d", &v22, &v23);
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "cmd : get test = %d", v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/http_test.c",
      155,
      "http_test_bm",
      12,
      484,
      20,
      v27);
    if ( v22 != 523 )
    {
      sprintf(a2, "OK get test=%d", v22);
      return 0;
    }
    get_miner_info(a2);
    return v6;
  }
  v6 = strstr(v3, "/ideal_rate");
  if ( !v6 )
  {
    if ( strstr(v3, "/max_rate") )
    {
      V_LOCK();
      logfmt_raw(v27, 0x1000u, 0, "cmd : get max rate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/http_test.c",
        155,
        "http_test_bm",
        12,
        504,
        20,
        v27);
      theory_hashrate = get_theory_hashrate();
      sub_87510(a2, a3, 102 * theory_hashrate / 100);
    }
    else if ( strstr(v3, "/miner_status") )
    {
      V_LOCK();
      logfmt_raw(v27, 0x1000u, 0, "cmd : get miner status");
      v6 = 0;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/http_test.c",
        155,
        "http_test_bm",
        12,
        510,
        20,
        v27);
    }
    else if ( strstr(v3, "/productName") )
    {
      V_LOCK();
      v6 = 0;
      v11 = strlen(g_miner_type);
      logfmt_raw(v27, 0x1000u, 0, "cmd : get miner type[%d] %s", v11, g_miner_type);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/http_test.c",
        155,
        "http_test_bm",
        12,
        515,
        20,
        v27);
      strcpy(a2, g_miner_type);
    }
    else
    {
      v6 = (char *)strncmp(v3, "/get_sn", 7u);
      if ( v6 )
      {
        v6 = (char *)strncmp(v3, "/set_sn", 7u);
        if ( v6 )
        {
          return (char *)-1;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v27, 0x1000u, 0, "cmd : set miner sn, doesn't spport");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/http_test.c",
            155,
            "http_test_bm",
            12,
            597,
            80,
            v27);
          v12 = "doesn't support sn set in Release mode";
          v13 = a2;
          do
          {
            v13 += 16;
            v14 = *(_DWORD *)v12;
            v15 = *((_DWORD *)v12 + 1);
            v16 = *((_DWORD *)v12 + 2);
            v17 = *((_DWORD *)v12 + 3);
            v12 += 16;
            *((_DWORD *)v13 - 4) = v14;
            *((_DWORD *)v13 - 3) = v15;
            *((_DWORD *)v13 - 2) = v16;
            *((_DWORD *)v13 - 1) = v17;
          }
          while ( v12 != "e mode" );
          v18 = *((_WORD *)v12 + 2);
          v19 = v12[6];
          *(_DWORD *)v13 = *(_DWORD *)v12;
          *((_WORD *)v13 + 2) = v18;
          v13[6] = v19;
        }
      }
      else
      {
        ptr = 0;
        v25 = 0;
        v26 = 0;
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, "cmd : get miner sn");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/http_test.c",
          155,
          "http_test_bm",
          12,
          523,
          20,
          v27);
        v20 = (FILE *)fopen64(g_miner_sn_file_path, "r");
        v21 = v20;
        if ( v20 && (fread(&ptr, 0x11u, 1u, v20), fclose(v21), (_BYTE)ptr) )
          snprintf(a2, 0x12u, "%s", (const char *)&ptr);
        else
          strcpy(a2, "no miner sn stored on board");
      }
    }
    return v6;
  }
  V_LOCK();
  logfmt_raw(v27, 0x1000u, 0, "cmd : get ideal rate");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/http_test.c",
    155,
    "http_test_bm",
    12,
    498,
    20,
    v27);
  v10 = get_theory_hashrate();
  sub_87510(a2, a3, v10);
  return 0;
}
