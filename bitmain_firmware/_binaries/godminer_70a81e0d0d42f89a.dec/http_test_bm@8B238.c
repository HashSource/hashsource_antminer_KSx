int __fastcall http_test_bm(int a1, int a2, size_t a3)
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
  int miner_power; // r0
  int v23; // r0
  FILE *v24; // r0
  FILE *v25; // r5
  int v26; // r0
  const char *v27; // r12
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  __int16 v32; // r2
  char v33; // r3
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
      490,
      20,
      v39);
    freq_scan_status = 1;
LABEL_9:
    miner_sale_hashrate = get_miner_sale_hashrate();
    sub_8AA78((char *)a2, a3, miner_sale_hashrate);
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
          517,
          20,
          v39);
        theory_hashrate = get_theory_hashrate();
        sub_8AA78((char *)a2, a3, 102 * theory_hashrate / 100);
      }
      else
      {
        v18 = strstr(v3, "/miner_status");
        v7 = (int)v18;
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
            523,
            20,
            v39);
        }
        else
        {
          v19 = strstr(v3, "/productName");
          if ( v19 )
          {
            V_LOCK(v19);
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
              528,
              20,
              v39);
            strcpy((char *)a2, g_miner_type);
            if ( opt_algo == 12 )
              strcpy((char *)a2, "Antminer KS5");
          }
          else
          {
            v7 = strncmp(v3, "/get_sn", 7u);
            if ( v7 )
            {
              v7 = strncmp(v3, "/set_sn", 7u);
              if ( v7 )
              {
                v7 = strncmp(v3, "/miner_power", 0xCu);
                if ( v7 )
                {
                  return -1;
                }
                else
                {
                  miner_power = bitmain_get_miner_power();
                  snprintf((char *)a2, a3, "miner power:%d", miner_power);
                }
              }
              else
              {
                V_LOCK(0);
                v26 = logfmt_raw((int)v39, 0x1000u);
                V_UNLOCK(v26);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-kas_2382/http_test.c",
                  160,
                  "http_test_bm",
                  12,
                  614,
                  80,
                  v39);
                v27 = "doesn't support sn set in Release mode";
                do
                {
                  a2 += 16;
                  v28 = *(_DWORD *)v27;
                  v29 = *((_DWORD *)v27 + 1);
                  v30 = *((_DWORD *)v27 + 2);
                  v31 = *((_DWORD *)v27 + 3);
                  v27 += 16;
                  *(_DWORD *)(a2 - 16) = v28;
                  *(_DWORD *)(a2 - 12) = v29;
                  *(_DWORD *)(a2 - 8) = v30;
                  *(_DWORD *)(a2 - 4) = v31;
                }
                while ( v27 != "e mode" );
                v32 = *((_WORD *)v27 + 2);
                v33 = v27[6];
                *(_DWORD *)a2 = *(_DWORD *)v27;
                *(_WORD *)(a2 + 4) = v32;
                *(_BYTE *)(a2 + 6) = v33;
              }
            }
            else
            {
              ptr = 0;
              v37 = 0;
              v38 = 0;
              V_LOCK(0);
              v23 = logfmt_raw((int)v39, 0x1000u);
              V_UNLOCK(v23);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/http_test.c",
                160,
                "http_test_bm",
                12,
                540,
                20,
                v39);
              v24 = (FILE *)fopen64(g_miner_sn_file_path, "r");
              v25 = v24;
              if ( v24 && (fread(&ptr, 0x11u, 1u, v24), fclose(v25), (_BYTE)ptr) )
                snprintf((char *)a2, 0x12u, "%s", (const char *)&ptr);
              else
                strcpy((char *)a2, "no miner sn stored on board");
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
      511,
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
    497,
    20,
    v39);
  if ( v34 != 523 )
  {
    sprintf((char *)a2, "OK get test=%d", v34);
    return 0;
  }
  get_miner_info((char *)a2);
  return v7;
}
