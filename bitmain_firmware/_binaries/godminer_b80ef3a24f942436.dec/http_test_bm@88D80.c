int __fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v3; // r5
  char *v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r0
  char *v11; // r0
  char *v12; // r0
  int v13; // r0
  int theory_hashrate; // r0
  int v15; // r0
  int miner_sale_hashrate; // r0
  int v17; // r0
  int v18; // r0
  char *v19; // r0
  char *v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  const char *v24; // lr
  char *v25; // r12
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  __int16 v30; // r2
  char v31; // r3
  int v32; // r0
  FILE *v33; // r0
  FILE *v34; // r5
  int v35; // [sp+14h] [bp-1020h] BYREF
  int v36; // [sp+18h] [bp-101Ch] BYREF
  __int64 ptr; // [sp+1Ch] [bp-1018h] BYREF
  __int16 v38; // [sp+24h] [bp-1010h]
  __int64 v39; // [sp+26h] [bp-100Eh]
  _BYTE v40[4100]; // [sp+30h] [bp-1004h] BYREF

  v3 = (const char *)(a1 + 4);
  v35 = -1;
  v36 = -1;
  v6 = strstr((const char *)(a1 + 4), "/rate");
  v7 = (int)v6;
  if ( v6 )
  {
    V_LOCK(v6);
    v15 = logfmt_raw((int)v40, 0x1000u);
    v7 = 0;
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/http_test.c",
      155,
      "http_test_bm",
      12,
      484,
      20,
      v40);
    freq_scan_status = 1;
    miner_sale_hashrate = get_miner_sale_hashrate();
    sub_885D8(a2, a3, miner_sale_hashrate);
    return v7;
  }
  if ( strstr(v3, "/test") )
  {
    v8 = _isoc99_sscanf(v3, "/test.%d.%d", &v35, &v36);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/http_test.c",
      155,
      "http_test_bm",
      12,
      491,
      20,
      v40);
    if ( v35 != 523 )
    {
      sprintf(a2, "OK get test=%d", v35);
      return 0;
    }
    get_miner_info(a2);
    return v7;
  }
  v11 = strstr(v3, "/ideal_rate");
  v7 = (int)v11;
  if ( !v11 )
  {
    v12 = strstr(v3, "/max_rate");
    if ( v12 )
    {
      V_LOCK(v12);
      v13 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/http_test.c",
        155,
        "http_test_bm",
        12,
        511,
        20,
        v40);
      theory_hashrate = get_theory_hashrate();
      sub_885D8(a2, a3, 102 * theory_hashrate / 100);
    }
    else
    {
      v19 = strstr(v3, "/miner_status");
      if ( v19 )
      {
        V_LOCK(v19);
        v22 = logfmt_raw((int)v40, 0x1000u);
        v7 = 0;
        V_UNLOCK(v22);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/http_test.c",
          155,
          "http_test_bm",
          12,
          517,
          20,
          v40);
      }
      else
      {
        v20 = strstr(v3, "/productName");
        if ( v20 )
        {
          V_LOCK(v20);
          v7 = 0;
          strlen(g_miner_type);
          v21 = logfmt_raw((int)v40, 0x1000u);
          V_UNLOCK(v21);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/http_test.c",
            155,
            "http_test_bm",
            12,
            522,
            20,
            v40);
          strcpy(a2, g_miner_type);
        }
        else
        {
          v7 = strncmp(v3, "/get_sn", 7u);
          if ( v7 )
          {
            v7 = strncmp(v3, "/set_sn", 7u);
            if ( v7 )
            {
              return -1;
            }
            else
            {
              V_LOCK(0);
              v23 = logfmt_raw((int)v40, 0x1000u);
              V_UNLOCK(v23);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-new/http_test.c",
                155,
                "http_test_bm",
                12,
                604,
                80,
                v40);
              v24 = "doesn't support sn set in Release mode";
              v25 = a2;
              do
              {
                v25 += 16;
                v26 = *(_DWORD *)v24;
                v27 = *((_DWORD *)v24 + 1);
                v28 = *((_DWORD *)v24 + 2);
                v29 = *((_DWORD *)v24 + 3);
                v24 += 16;
                *((_DWORD *)v25 - 4) = v26;
                *((_DWORD *)v25 - 3) = v27;
                *((_DWORD *)v25 - 2) = v28;
                *((_DWORD *)v25 - 1) = v29;
              }
              while ( v24 != "e mode" );
              v30 = *((_WORD *)v24 + 2);
              v31 = v24[6];
              *(_DWORD *)v25 = *(_DWORD *)v24;
              *((_WORD *)v25 + 2) = v30;
              v25[6] = v31;
            }
          }
          else
          {
            ptr = 0;
            v38 = 0;
            v39 = 0;
            V_LOCK(0);
            v32 = logfmt_raw((int)v40, 0x1000u);
            V_UNLOCK(v32);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/http_test.c",
              155,
              "http_test_bm",
              12,
              530,
              20,
              v40);
            v33 = (FILE *)fopen64(g_miner_sn_file_path, "r");
            v34 = v33;
            if ( v33 && (fread(&ptr, 0x11u, 1u, v33), fclose(v34), (_BYTE)ptr) )
              snprintf(a2, 0x12u, "%s", (const char *)&ptr);
            else
              strcpy(a2, "no miner sn stored on board");
          }
        }
      }
    }
    return v7;
  }
  V_LOCK(v11);
  v17 = logfmt_raw((int)v40, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/http_test.c",
    155,
    "http_test_bm",
    12,
    505,
    20,
    v40);
  v18 = get_theory_hashrate();
  sub_885D8(a2, a3, v18);
  return 0;
}
