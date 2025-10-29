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
  char *v18; // r0
  char *v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  const char *v23; // lr
  char *v24; // r12
  int v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r3
  __int16 v29; // r2
  char v30; // r3
  int v31; // r0
  FILE *v32; // r0
  FILE *v33; // r5
  int v34; // [sp+14h] [bp-1020h] BYREF
  int v35; // [sp+18h] [bp-101Ch] BYREF
  __int64 ptr; // [sp+1Ch] [bp-1018h] BYREF
  __int16 v37; // [sp+24h] [bp-1010h]
  __int64 v38; // [sp+26h] [bp-100Eh]
  _BYTE v39[4100]; // [sp+30h] [bp-1004h] BYREF

  v3 = (const char *)(a1 + 4);
  v34 = -1;
  v35 = -1;
  v6 = strstr((const char *)(a1 + 4), "/rate");
  v7 = (int)v6;
  if ( v6 )
  {
    V_LOCK(v6);
    v15 = logfmt_raw((int)v39, 0x1000u);
    v7 = 0;
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/http_test.c",
      160,
      "http_test_bm",
      12,
      484,
      20,
      v39);
    freq_scan_status = 1;
LABEL_9:
    miner_sale_hashrate = get_miner_sale_hashrate();
    sub_8A850(a2, a3, miner_sale_hashrate);
    return v7;
  }
  if ( !strstr(v3, "/test") )
  {
    v11 = strstr(v3, "/ideal_rate");
    v7 = (int)v11;
    if ( !v11 )
    {
      v12 = strstr(v3, "/max_rate");
      if ( v12 )
      {
        V_LOCK(v12);
        v13 = logfmt_raw((int)v39, 0x1000u);
        V_UNLOCK(v13);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/http_test.c",
          160,
          "http_test_bm",
          12,
          511,
          20,
          v39);
        theory_hashrate = get_theory_hashrate();
        sub_8A850(a2, a3, 102 * theory_hashrate / 100);
      }
      else
      {
        v18 = strstr(v3, "/miner_status");
        if ( v18 )
        {
          V_LOCK(v18);
          v21 = logfmt_raw((int)v39, 0x1000u);
          v7 = 0;
          V_UNLOCK(v21);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/http_test.c",
            160,
            "http_test_bm",
            12,
            517,
            20,
            v39);
        }
        else
        {
          v19 = strstr(v3, "/productName");
          if ( v19 )
          {
            V_LOCK(v19);
            v7 = 0;
            strlen(g_miner_type);
            v20 = logfmt_raw((int)v39, 0x1000u);
            V_UNLOCK(v20);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/http_test.c",
              160,
              "http_test_bm",
              12,
              522,
              20,
              v39);
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
                v22 = logfmt_raw((int)v39, 0x1000u);
                V_UNLOCK(v22);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/http_test.c",
                  160,
                  "http_test_bm",
                  12,
                  604,
                  80,
                  v39);
                v23 = "doesn't support sn set in Release mode";
                v24 = a2;
                do
                {
                  v24 += 16;
                  v25 = *(_DWORD *)v23;
                  v26 = *((_DWORD *)v23 + 1);
                  v27 = *((_DWORD *)v23 + 2);
                  v28 = *((_DWORD *)v23 + 3);
                  v23 += 16;
                  *((_DWORD *)v24 - 4) = v25;
                  *((_DWORD *)v24 - 3) = v26;
                  *((_DWORD *)v24 - 2) = v27;
                  *((_DWORD *)v24 - 1) = v28;
                }
                while ( v23 != "e mode" );
                v29 = *((_WORD *)v23 + 2);
                v30 = v23[6];
                *(_DWORD *)v24 = *(_DWORD *)v23;
                *((_WORD *)v24 + 2) = v29;
                v24[6] = v30;
              }
            }
            else
            {
              ptr = 0;
              v37 = 0;
              v38 = 0;
              V_LOCK(0);
              v31 = logfmt_raw((int)v39, 0x1000u);
              V_UNLOCK(v31);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/http_test.c",
                160,
                "http_test_bm",
                12,
                530,
                20,
                v39);
              v32 = (FILE *)fopen64(g_miner_sn_file_path, "r");
              v33 = v32;
              if ( v32 && (fread(&ptr, 0x11u, 1u, v32), fclose(v33), (_BYTE)ptr) )
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
    v17 = logfmt_raw((int)v39, 0x1000u);
    v7 = 0;
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/http_test.c",
      160,
      "http_test_bm",
      12,
      505,
      20,
      v39);
    goto LABEL_9;
  }
  v8 = _isoc99_sscanf(v3, "/test.%d.%d", &v34, &v35);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v39, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/http_test.c",
    160,
    "http_test_bm",
    12,
    491,
    20,
    v39);
  if ( v34 != 523 )
  {
    sprintf(a2, "OK get test=%d", v34);
    return 0;
  }
  get_miner_info(a2);
  return v7;
}
