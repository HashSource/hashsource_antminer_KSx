int __fastcall sub_11773C(_BYTE *a1, int a2)
{
  char v4; // r3
  int v5; // r1
  int inited; // r7
  size_t v8; // r9
  void *v9; // r8
  size_t v10; // r9
  void *v11; // r8
  size_t v12; // r9
  void *v13; // r8
  size_t v14; // r9
  void *v15; // r8
  int v16; // r3
  bool v17; // cf
  size_t v18; // r9
  void *v19; // r8
  int v20; // r3
  size_t v21; // r10
  char v22; // r2
  void *v23; // r8
  int v24; // r3
  size_t v25; // r10
  char v26; // r2
  int v27; // r0
  int v28; // r2
  int v29; // r3
  int v30; // r2
  int v31; // r3
  void *v32; // r8
  _BYTE *v33; // r1
  size_t v34; // r2
  size_t v35; // r2
  _BYTE *v36; // r1
  int v37; // r8
  int v38; // lr
  int v39; // r12
  int v40; // r2
  size_t v41; // r9
  size_t v42; // r0
  float v43; // s15
  void *v44; // r8
  int v45; // r3
  int v46; // r1
  size_t v47; // r11
  size_t v48; // r10
  char *v49; // r0
  char *v50; // r8
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  unsigned __int16 dest; // [sp+10h] [bp-185Ch] BYREF
  unsigned __int16 v61; // [sp+12h] [bp-185Ah] BYREF
  unsigned __int8 v62[16]; // [sp+14h] [bp-1858h] BYREF
  _BYTE v63[7]; // [sp+24h] [bp-1848h] BYREF
  unsigned __int8 v64; // [sp+2Bh] [bp-1841h]
  unsigned __int8 v65; // [sp+2Dh] [bp-183Fh]
  unsigned __int8 v66; // [sp+2Eh] [bp-183Eh]
  unsigned __int8 v67; // [sp+2Fh] [bp-183Dh]
  unsigned __int8 v68; // [sp+30h] [bp-183Ch]
  unsigned __int8 v69; // [sp+31h] [bp-183Bh]
  unsigned __int8 v70; // [sp+32h] [bp-183Ah]
  unsigned __int8 v71; // [sp+33h] [bp-1839h]
  unsigned __int8 v72; // [sp+34h] [bp-1838h]
  unsigned __int8 v73; // [sp+35h] [bp-1837h]
  unsigned __int8 v74; // [sp+36h] [bp-1836h]
  unsigned __int8 v75; // [sp+37h] [bp-1835h]
  unsigned __int8 v76; // [sp+38h] [bp-1834h]
  unsigned __int8 v77; // [sp+39h] [bp-1833h]
  unsigned __int8 v78; // [sp+3Ah] [bp-1832h]
  unsigned __int8 v79; // [sp+3Bh] [bp-1831h]
  unsigned __int8 v80; // [sp+3Ch] [bp-1830h]
  unsigned __int8 v81; // [sp+3Dh] [bp-182Fh]
  unsigned __int8 v82; // [sp+3Eh] [bp-182Eh]
  unsigned __int8 v83; // [sp+3Fh] [bp-182Dh]
  unsigned __int8 v84; // [sp+40h] [bp-182Ch]
  unsigned __int8 v85; // [sp+41h] [bp-182Bh]
  unsigned __int8 v86; // [sp+42h] [bp-182Ah]
  unsigned __int8 v87; // [sp+43h] [bp-1829h]
  unsigned __int8 v88; // [sp+45h] [bp-1827h]
  unsigned __int8 v89; // [sp+49h] [bp-1823h]
  unsigned __int8 v90; // [sp+4Ah] [bp-1822h]
  unsigned __int8 v91; // [sp+4Bh] [bp-1821h]
  unsigned __int8 v92; // [sp+4Dh] [bp-181Fh]
  unsigned __int8 v93; // [sp+50h] [bp-181Ch]
  unsigned __int8 v94; // [sp+57h] [bp-1815h]
  unsigned __int8 v95; // [sp+58h] [bp-1814h]
  unsigned __int8 v96; // [sp+59h] [bp-1813h]
  unsigned __int8 v97; // [sp+5Ah] [bp-1812h]
  unsigned __int8 v98; // [sp+5Fh] [bp-180Dh]
  unsigned __int8 v99; // [sp+60h] [bp-180Ch]
  unsigned __int8 v100; // [sp+62h] [bp-180Ah]
  unsigned __int8 v101; // [sp+63h] [bp-1809h]
  unsigned __int8 v102; // [sp+64h] [bp-1808h]
  char v103[2040]; // [sp+68h] [bp-1804h] BYREF
  _BYTE v104[4100]; // [sp+868h] [bp-1004h] BYREF

  v4 = *(_BYTE *)a2 & 0xF | (16 * ((*a1 >> 4) & 0xF));
  *(_BYTE *)a2 = v4;
  *(_BYTE *)a2 = v4 & 0xF0 | *a1 & 0xF;
  *(_BYTE *)(a2 + 1) = a1[1];
  v5 = (unsigned __int8)a1[2];
  *(_BYTE *)(a2 + 2) = v5;
  inited = init_eeprom_fmt_info(v63, v5);
  if ( inited )
  {
    v8 = v99;
    v9 = calloc(v99 + 1, 1u);
    *(_DWORD *)(a2 + 56) = v9;
    if ( !v9 )
    {
      inited = 0;
      strcpy(v103, "Decode strategy OOM");
      V_LOCK(*(_DWORD *)"Decode strategy OOM");
      v57 = logfmt_raw((int)v104, 0x1000u);
      V_UNLOCK(v57);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_buf_to_layout",
        20,
        526,
        100,
        v104);
      v9 = *(void **)(a2 + 56);
      v8 = v99;
    }
    memcpy(v9, &a1[v83], v8);
    v10 = v89;
    v11 = calloc(v89 + 1, 1u);
    *(_DWORD *)(a2 + 3) = v11;
    if ( !v11 )
    {
      inited = 0;
      strcpy(v103, "Decode SN OOM");
      V_LOCK(*(_DWORD *)"Decode SN OOM");
      v56 = logfmt_raw((int)v104, 0x1000u);
      V_UNLOCK(v56);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_buf_to_layout",
        20,
        535,
        100,
        v104);
      v11 = *(void **)(a2 + 3);
      v10 = v89;
    }
    memcpy(v11, &a1[v63[3]], v10);
    v12 = v90;
    v13 = calloc(v90 + 1, 1u);
    *(_DWORD *)(a2 + 7) = v13;
    if ( !v13 )
    {
      inited = 0;
      strcpy(v103, "Decode Chip Die OOM");
      V_LOCK(*(_DWORD *)"Decode Chip Die OOM");
      v55 = logfmt_raw((int)v104, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_buf_to_layout",
        20,
        544,
        100,
        v104);
      v13 = *(void **)(a2 + 7);
      v12 = v90;
    }
    memcpy(v13, &a1[v63[4]], v12);
    v14 = v91;
    v15 = calloc(v91 + 1, 1u);
    *(_DWORD *)(a2 + 11) = v15;
    if ( !v15 )
    {
      inited = 0;
      strcpy(v103, "Decode Chip Marking OOM");
      V_LOCK(*(_DWORD *)"ing OOM");
      v54 = logfmt_raw((int)v104, 0x1000u);
      V_UNLOCK(v54);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_buf_to_layout",
        20,
        553,
        100,
        v104);
      v15 = *(void **)(a2 + 11);
      v14 = v91;
    }
    memcpy(v15, &a1[v63[5]], v14);
    v16 = *(unsigned __int8 *)(a2 + 2) - 1;
    v17 = *(_BYTE *)(a2 + 2) != 1;
    *(_BYTE *)(a2 + 15) = a1[v63[6]];
    if ( v16 != 1 && v17 )
    {
      v18 = v92;
      v19 = calloc(v92 + 1, 1u);
      *(_DWORD *)(a2 + 16) = v19;
      if ( !v19 )
      {
        inited = 0;
        strcpy(v103, "Decode Chip FT Program Version OOM");
        V_LOCK(*(_DWORD *)"rogram Version OOM");
        v58 = logfmt_raw((int)v104, 0x1000u);
        V_UNLOCK(v58);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
          191,
          "eeprom_buf_to_layout",
          20,
          579,
          100,
          v104);
        v19 = *(void **)(a2 + 16);
        v18 = v92;
      }
      memcpy(v19, &a1[v64], v18);
    }
    else
    {
      v47 = v92;
      v48 = v92 + 6;
      memset(v62, 0, sizeof(v62));
      v49 = (char *)calloc(v48, 1u);
      v50 = v49;
      *(_DWORD *)(a2 + 16) = v49;
      if ( !v49 )
      {
        inited = 0;
        strcpy(v103, "Decode Chip FT Program Version OOM");
        V_LOCK(*(_DWORD *)"rogram Version OOM");
        v59 = logfmt_raw((int)v104, 0x1000u);
        V_UNLOCK(v59);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
          191,
          "eeprom_buf_to_layout",
          20,
          568,
          100,
          v104);
        v47 = v92;
        v50 = *(char **)(a2 + 16);
        v48 = v92 + 6;
      }
      memcpy(v62, &a1[v64], v47);
      snprintf(v50, v48, "F%dV%02dB%dC%d", v62[0], v62[1], v62[2], v62[3]);
    }
    v20 = v65;
    v21 = v93;
    v22 = *(_BYTE *)(a2 + 24) & 0x80 | a1[v65] & 0x7F;
    *(_BYTE *)(a2 + 24) = v22;
    *(_BYTE *)(a2 + 24) = v22 & 0x7F | (a1[v20] >> 7 << 7);
    v23 = calloc(v21 + 1, 1u);
    *(_DWORD *)(a2 + 25) = v23;
    if ( !v23 )
    {
      inited = 0;
      strcpy(v103, "Decode Chip FT Program Version OOM");
      V_LOCK(*(_DWORD *)"rogram Version OOM");
      v53 = logfmt_raw((int)v104, 0x1000u);
      V_UNLOCK(v53);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_buf_to_layout",
        20,
        593,
        100,
        v104);
      v23 = *(void **)(a2 + 25);
      v21 = v93;
    }
    memcpy(v23, &a1[v66], v21);
    v24 = v67;
    v25 = v94;
    v26 = *(_BYTE *)(a2 + 29) & 0x80 | a1[v67] & 0x7F;
    *(_BYTE *)(a2 + 29) = v26;
    v27 = v68;
    *(_BYTE *)(a2 + 29) = v26 & 0x7F | (a1[v24] >> 7 << 7);
    v28 = v69;
    v29 = v70;
    *(_BYTE *)(a2 + 30) = a1[v27];
    LOBYTE(v27) = a1[v28];
    v30 = v71;
    *(_BYTE *)(a2 + 31) = v27;
    LOBYTE(v27) = a1[v29];
    v31 = v72;
    *(_BYTE *)(a2 + 32) = v27;
    *(_BYTE *)(a2 + 33) = a1[v30];
    *(_BYTE *)(a2 + 34) = a1[v31];
    v32 = calloc(v25 + 1, 1u);
    *(_DWORD *)(a2 + 35) = v32;
    if ( !v32 )
    {
      inited = 0;
      strcpy(v103, "Decode Chip Technology OOM");
      V_LOCK(*(_DWORD *)"nology OOM");
      v52 = logfmt_raw((int)v104, 0x1000u);
      V_UNLOCK(v52);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_buf_to_layout",
        20,
        617,
        100,
        v104);
      v32 = *(void **)(a2 + 35);
      v25 = v94;
    }
    memcpy(v32, &a1[v73], v25);
    memcpy(&dest, &a1[v74], v95);
    v33 = &a1[v75];
    v34 = v96;
    *(_WORD *)(a2 + 39) = HIBYTE(dest) | (dest << 8);
    memcpy(&v61, v33, v34);
    v35 = v97;
    v36 = &a1[v76];
    *(_WORD *)(a2 + 41) = HIBYTE(v61) | (v61 << 8);
    memcpy(v62, v36, v35);
    v37 = v77;
    v38 = v78;
    v39 = v79;
    v40 = v80;
    v41 = v98;
    v42 = v98 + 1;
    v43 = (double)(unsigned __int16)__rev16(*(unsigned __int16 *)v62) / 100.0;
    *(float *)(a2 + 43) = v43;
    *(_BYTE *)(a2 + 47) = a1[v37];
    *(_BYTE *)(a2 + 48) = a1[v38];
    *(_BYTE *)(a2 + 49) = a1[v39];
    *(_BYTE *)(a2 + 50) = a1[v40];
    v44 = calloc(v42, 1u);
    *(_DWORD *)(a2 + 51) = v44;
    if ( !v44 )
    {
      inited = 0;
      strcpy(v103, "Decode miner_type OOM");
      V_LOCK(*(_DWORD *)"e OOM");
      v51 = logfmt_raw((int)v104, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_buf_to_layout",
        20,
        653,
        100,
        v104);
      v44 = *(void **)(a2 + 51);
      v41 = v98;
    }
    memcpy(v44, &a1[v81], v41);
    v45 = v84;
    v46 = *(unsigned __int8 *)(a2 + 2);
    *(_BYTE *)(a2 + 55) = a1[v82];
    *(_BYTE *)(a2 + 60) = a1[v45];
    if ( v46 == 4 )
    {
      memcpy((void *)(a2 + 61), &a1[v85], v100);
      memcpy((void *)(a2 + 63), &a1[v86], v101);
      memcpy((void *)(a2 + 191), &a1[v87], v102);
      *(_BYTE *)(a2 + 196) = a1[v88];
    }
  }
  return inited;
}
