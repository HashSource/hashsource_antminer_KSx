int record_nvdata_droalog()
{
  FILE *v0; // r6
  char *i; // r7
  char *v2; // r4
  size_t v3; // r0
  const char *v4; // r5
  char *v5; // r8
  size_t v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  FILE *v10; // r11
  int v11; // r0
  int v12; // r0
  char *v13; // r3
  int chain_domain_num; // r6
  int chain_asic_num; // r9
  int domain_asic_num; // r0
  const char *v17; // r10
  const char *v18; // r1
  char *v19; // r6
  char *v20; // r9
  char *v21; // lr
  char *v22; // r6
  char *v23; // r12
  int miner_status; // r0
  int v25; // r0
  char *v26; // r2
  int v27; // r7
  int v28; // r8
  int v29; // r0
  char *v30; // r2
  char *v31; // r12
  char *v32; // r9
  char *v33; // r4
  int v35; // r0
  char *v36; // r3
  int v37; // r10
  int v38; // r11
  int v39; // r0
  const char *v40; // r8
  const char *v41; // r12
  char *v42; // lr
  const char *v43; // r2
  char *v44; // r11
  const char *v45; // r1
  char *v46; // lr
  const char *v47; // lr
  int v48; // r0
  int v49; // r0
  char *v50; // r10
  int v51; // r6
  int v52; // r7
  int v53; // r0
  char *v54; // r10
  char *v55; // lr
  char *v56; // r7
  int v57; // r0
  int v58; // r5
  int v59; // r0
  char *v60; // [sp+0h] [bp-1244h]
  int v61; // [sp+Ch] [bp-1238h]
  int v62; // [sp+Ch] [bp-1238h]
  int v63; // [sp+10h] [bp-1234h]
  int v64; // [sp+10h] [bp-1234h]
  char *v65; // [sp+1Ch] [bp-1228h]
  const char *v66; // [sp+24h] [bp-1220h]
  FILE *stream; // [sp+30h] [bp-1214h]
  FILE *streama; // [sp+30h] [bp-1214h]
  FILE *streamb; // [sp+30h] [bp-1214h]
  int v70; // [sp+34h] [bp-1210h]
  const char *v71; // [sp+34h] [bp-1210h]
  int v72; // [sp+34h] [bp-1210h]
  char *v73; // [sp+3Ch] [bp-1208h]
  int v74; // [sp+3Ch] [bp-1208h]
  char s[512]; // [sp+40h] [bp-1204h] BYREF
  char v76[4100]; // [sp+240h] [bp-1004h] BYREF

  droa_log_init();
  v0 = (FILE *)fopen64("/nvdata/mbin.data", "r+");
  if ( v0 )
  {
    memset(s, 0, sizeof(s));
    fgets(s, 511, v0);
    for ( i = strtok(s, (const char *)&word_272594); i; i = strtok(0, (const char *)&word_272594) )
    {
      v2 = (char *)&unk_2E7711;
      do
      {
        while ( 1 )
        {
          v4 = *(const char **)(v2 - 21);
          if ( !strstr(i, v4) )
            goto LABEL_5;
          v5 = strstr(*(const char **)(v2 - 17), "str");
          v6 = strlen(v4);
          if ( !v5 )
            break;
          v3 = strlen(i);
          strncpy(v2, &i[v6], v3 - v6);
LABEL_5:
          v2 += 88;
          if ( (char *)&dword_2E7B30 + 1 == v2 )
            goto LABEL_9;
        }
        v2 += 88;
        *(v2 - 89) = strtol(&i[v6], 0, 10);
      }
      while ( (char *)&dword_2E7B30 + 1 != v2 );
LABEL_9:
      ;
    }
    if ( compare_nvdata_bin() )
    {
      v7 = fclose(v0);
      V_LOCK(v7);
      v8 = logfmt_raw((int)v76, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "record_nvdata_droalog",
        21,
        1870,
        40,
        v76);
      v9 = fopen64("/nvdata/mbin.data", "w");
      v10 = (FILE *)v9;
      if ( v9 )
      {
        V_LOCK(v9);
        v11 = logfmt_raw((int)v76, 0x1000u);
        V_UNLOCK(v11);
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rel"
                "ease/build/godminer-origin_godminer-kas_2382/god-miner.c",
                160,
                "record_nvdata_droalog",
                21,
                1876,
                40,
                v76);
        if ( g_miner_sn )
          v13 = &g_miner_sn;
        else
          v13 = "None";
        v70 = g_chain_number;
        stream = (FILE *)v13;
        chain_domain_num = platform_get_chain_domain_num(v12);
        chain_asic_num = platform_get_chain_asic_num();
        domain_asic_num = platform_get_domain_asic_num();
        v17 = g_bsn;
        if ( g_bsn[0] )
          v18 = g_bsn;
        else
          v18 = "None";
        v61 = chain_domain_num;
        v19 = &byte_2EA430;
        v63 = chain_asic_num;
        if ( !byte_2EA430 )
          v19 = "None";
        v65 = v19;
        v20 = &byte_2EA470;
        v21 = &byte_2EA470;
        if ( !byte_2EA470 )
          v21 = "None";
        v22 = &byte_2EA4B0;
        if ( !byte_2EA4B0 )
          v22 = "None";
        if ( pwr_sn )
          v23 = &pwr_sn;
        else
          v23 = "None";
        snprintf(
          v76,
          0x1000u,
          "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
          g_miner_compiletime,
          g_miner_type,
          stream,
          v70,
          v61,
          v63,
          domain_asic_num,
          v18,
          v65,
          v21,
          v22,
          v23);
        log_droa(v76, 0);
        miner_status = get_miner_status();
        snprintf(v76, 0x1000u, "InitStat:%d", miner_status);
        v25 = log_droa(v76, 0);
        streama = (FILE *)g_chain_number;
        if ( g_miner_sn )
          v26 = &g_miner_sn;
        else
          v26 = "None";
        v73 = v26;
        v27 = platform_get_chain_domain_num(v25);
        v28 = platform_get_chain_asic_num();
        v29 = platform_get_domain_asic_num();
        if ( !g_bsn[0] )
          v17 = "None";
        v30 = &byte_2EA430;
        if ( !byte_2EA430 )
          v30 = "None";
        if ( !byte_2EA470 )
          v20 = "None";
        v31 = v20;
        v32 = &byte_2EA4B0;
        if ( !byte_2EA4B0 )
          v32 = "None";
        if ( pwr_sn )
          v33 = &pwr_sn;
        else
          v33 = "None";
        fprintf(
          v10,
          "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
          g_miner_compiletime,
          g_miner_type,
          v73,
          streama,
          v27,
          v28,
          v29,
          v17,
          v30,
          v31,
          v32,
          v33);
        fflush(v10);
        return fclose(v10);
      }
      else
      {
        V_LOCK(0);
        v57 = logfmt_raw((int)v76, 0x1000u);
        V_UNLOCK(v57);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/god-miner.c",
                 160,
                 "record_nvdata_droalog",
                 21,
                 1894,
                 40,
                 v76);
      }
    }
    else
    {
      v35 = get_miner_status();
      snprintf(v76, 0x1000u, "InitStat:%d", v35);
      return log_droa(v76, 0);
    }
  }
  else
  {
    streamb = (FILE *)fopen64("/nvdata/mbin.data", "w+");
    if ( streamb )
    {
      if ( g_miner_sn )
        v36 = &g_miner_sn;
      else
        v36 = "None";
      v74 = g_chain_number;
      v71 = v36;
      v37 = ((int (*)(void))platform_get_chain_domain_num)();
      v38 = platform_get_chain_asic_num();
      v39 = platform_get_domain_asic_num();
      v40 = g_bsn;
      if ( g_bsn[0] )
        v41 = g_bsn;
      else
        v41 = "None";
      v42 = &byte_2EA430;
      if ( !byte_2EA430 )
        v42 = "None";
      v64 = v38;
      v43 = v42;
      v44 = &byte_2EA470;
      v45 = &byte_2EA470;
      if ( !byte_2EA470 )
        v45 = "None";
      if ( byte_2EA4B0 )
        v46 = &byte_2EA4B0;
      else
        v46 = "None";
      v66 = v46;
      v47 = &pwr_sn;
      if ( !pwr_sn )
        v47 = "None";
      snprintf(
        v76,
        0x1000u,
        "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
        g_miner_compiletime,
        g_miner_type,
        v71,
        v74,
        v37,
        v64,
        v39,
        v41,
        v43,
        v45,
        v66,
        v47);
      log_droa(v76, 0);
      v48 = get_miner_status();
      snprintf(v76, 0x1000u, "InitStat:%d", v48);
      v49 = log_droa(v76, 0);
      v72 = g_chain_number;
      if ( g_miner_sn )
        v50 = &g_miner_sn;
      else
        v50 = "None";
      v51 = platform_get_chain_domain_num(v49);
      v52 = platform_get_chain_asic_num();
      v53 = platform_get_domain_asic_num();
      v60 = v50;
      if ( !g_bsn[0] )
        v40 = "None";
      v54 = &byte_2EA430;
      if ( !byte_2EA430 )
        v54 = "None";
      v62 = v52;
      if ( !byte_2EA470 )
        v44 = "None";
      if ( byte_2EA4B0 )
        v55 = &byte_2EA4B0;
      else
        v55 = "None";
      v56 = &pwr_sn;
      if ( !pwr_sn )
        v56 = "None";
      fprintf(
        streamb,
        "MCT:%s,TYPE:%s,SN:%s,ChN:%d,ChDN:%d,ChAN:%d,DoAN:%d,ChSN0:%s,ChSN1:%s,ChSN2:%s,ChSN3:%s,PWR:%s",
        g_miner_compiletime,
        g_miner_type,
        v60,
        v72,
        v51,
        v62,
        v53,
        v40,
        v54,
        v44,
        v55,
        v56);
      fflush(streamb);
      return fclose(streamb);
    }
    else
    {
      V_LOCK(0);
      v58 = *_errno_location();
      strerror(v58);
      v59 = logfmt_raw((int)v76, 0x1000u);
      V_UNLOCK(v59);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/god-miner.c",
               160,
               "record_nvdata_droalog",
               21,
               1815,
               40,
               v76);
    }
  }
}
