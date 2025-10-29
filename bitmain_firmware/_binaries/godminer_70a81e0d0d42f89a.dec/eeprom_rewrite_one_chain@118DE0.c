int __fastcall eeprom_rewrite_one_chain(unsigned int a1, int a2, int a3, int a4)
{
  int v6; // r5
  int v7; // r11
  int v8; // r8
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v14; // r0
  int v15; // r0
  unsigned __int8 v16; // r1
  unsigned __int8 v17; // r3
  unsigned __int8 v18; // r12
  __int16 v19; // r2
  int v20; // r1
  const void *v21; // r10
  const void *v22; // r8
  const void *v23; // r8
  const void *v24; // r8
  const void *v25; // r8
  const void *v26; // r8
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  const void *v32; // r8
  int v33; // r1
  int v34; // r2
  int v35; // r3
  const void *v36; // r8
  int v37; // r8
  size_t v38; // r8
  int v39; // r3
  int v40; // r2
  bool v41; // zf
  char v42; // r12
  int v43; // r10
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v65; // [sp+14h] [bp-1C20h]
  char v66; // [sp+18h] [bp-1C1Ch]
  __int16 src; // [sp+2Ah] [bp-1C0Ah] BYREF
  __int16 v70; // [sp+2Ch] [bp-1C08h] BYREF
  __int16 v71; // [sp+2Eh] [bp-1C06h] BYREF
  unsigned __int8 s[256]; // [sp+30h] [bp-1C04h] BYREF
  unsigned __int8 v73[256]; // [sp+130h] [bp-1B04h] BYREF
  _WORD v74[128]; // [sp+230h] [bp-1A04h] BYREF
  _BYTE dest[256]; // [sp+330h] [bp-1904h] BYREF
  char v76[2048]; // [sp+430h] [bp-1804h] BYREF
  _BYTE v77[4100]; // [sp+C30h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v73, 0, sizeof(v73));
  memset(v74, 0, sizeof(v74));
  v6 = *(_DWORD *)(a2 + 4 * a1);
  v7 = 3;
  while ( 1 )
  {
    v8 = eeprom_read(a1, 0, (int)s, 256);
    if ( v8 )
    {
      v50 = snprintf(v76, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK(v50);
      v51 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_rewrite_one_chain",
        24,
        893,
        100,
        v77);
      return v8;
    }
    if ( !eeprom_decode_fixture_info_0(s, v73) )
      break;
    v9 = snprintf(v76, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK(v9);
    v10 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_rewrite_one_chain",
      24,
      907,
      100,
      v77);
    usleep(0x7A120u);
    if ( !--v7 )
      goto LABEL_6;
  }
  if ( !sub_11773C(v73, v6) || !sub_116638((int)v73, (unsigned __int8 *)v6) )
  {
LABEL_6:
    v8 = -1;
    *(_BYTE *)(a2 + a1 + 64) = 0;
    v11 = snprintf(v76, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK(v11);
    v12 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_rewrite_one_chain",
      24,
      924,
      100,
      v77);
    return v8;
  }
  v65 = a2 + a1;
  *(_BYTE *)(v65 + 64) = 1;
  v14 = snprintf(
          v76,
          0x800u,
          "chain[%d], modify voltage from %d to %d, freq from %d to %d",
          a1,
          *(unsigned __int16 *)(v6 + 39),
          *(unsigned __int16 *)(v6 + 39) + a3,
          *(unsigned __int16 *)(v6 + 41),
          *(unsigned __int16 *)(v6 + 41) + a4);
  V_LOCK(v14);
  v15 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
    191,
    "eeprom_rewrite_one_chain",
    24,
    930,
    100,
    v77);
  v16 = *(_BYTE *)(v6 + 2);
  v17 = *(_BYTE *)v6;
  v18 = *(_BYTE *)(v6 + 1);
  *(_WORD *)(v6 + 39) += a3;
  v19 = *(_WORD *)(v6 + 41);
  v73[2] = v16;
  v20 = *(unsigned __int8 *)(v6 + 2);
  *(_WORD *)(v6 + 41) = v19 + a4;
  v73[0] = v17;
  v73[1] = v18;
  if ( init_eeprom_fmt_info(dest, v20) )
  {
    v21 = *(const void **)(v6 + 56);
    if ( !v21 )
    {
      strcpy(v76, "encode strategy OOM");
      V_LOCK(*(_DWORD *)"encode strategy OOM");
      v55 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        704,
        100,
        v77);
      v21 = *(const void **)(v6 + 56);
    }
    memcpy(&v73[dest[27]], v21, dest[60]);
    v22 = *(const void **)(v6 + 3);
    if ( !v22 )
    {
      strcpy(v76, "encode serial_number OOM");
      V_LOCK(*(_DWORD *)"mber OOM");
      v59 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v59);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        712,
        100,
        v77);
      v22 = *(const void **)(v6 + 3);
    }
    memcpy(&v73[dest[3]], v22, dest[37]);
    v23 = *(const void **)(v6 + 7);
    if ( !v23 )
    {
      strcpy(v76, "encode chip_die OOM");
      V_LOCK(*(_DWORD *)"encode chip_die OOM");
      v58 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v58);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        719,
        100,
        v77);
      v23 = *(const void **)(v6 + 7);
    }
    memcpy(&v73[dest[4]], v23, dest[38]);
    v24 = *(const void **)(v6 + 11);
    if ( !v24 )
    {
      strcpy(v76, "encode chip_marking OOM");
      V_LOCK(*(_DWORD *)"ing OOM");
      v57 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v57);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        726,
        100,
        v77);
      v24 = *(const void **)(v6 + 11);
    }
    memcpy(&v73[dest[5]], v24, dest[39]);
    v73[dest[6]] = *(_BYTE *)(v6 + 15);
    v25 = *(const void **)(v6 + 16);
    if ( !v25 )
    {
      strcpy(v76, "encode Chip FT Program Version OOM");
      V_LOCK(*(_DWORD *)"rogram Version OOM");
      v56 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v56);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        736,
        100,
        v77);
      v25 = *(const void **)(v6 + 16);
    }
    if ( (unsigned int)*(unsigned __int8 *)(v6 + 2) - 1 <= 1 )
    {
      memset(v77, 0, 16);
      _isoc99_sscanf(v25, "F%dV%02dB%dC%d", v77, &v77[1], &v77[2], &v77[3]);
      memcpy(&v73[dest[7]], v77, dest[41]);
    }
    else
    {
      memcpy(&v73[dest[7]], v25, dest[41]);
    }
    v73[dest[9]] = *(_BYTE *)(v6 + 24);
    v26 = *(const void **)(v6 + 25);
    if ( !v26 )
    {
      strcpy(v76, "Decode asic_sensor_addr OOM");
      V_LOCK(*(_DWORD *)"or_addr OOM");
      v54 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v54);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        756,
        100,
        v77);
      v26 = *(const void **)(v6 + 25);
    }
    memcpy(&v73[dest[10]], v26, dest[44]);
    v27 = dest[12];
    v73[dest[11]] = *(_BYTE *)(v6 + 29);
    v28 = dest[13];
    v29 = dest[14];
    v73[v27] = *(_BYTE *)(v6 + 30);
    v30 = dest[15];
    v73[v28] = *(_BYTE *)(v6 + 31);
    v31 = dest[16];
    v73[v29] = *(_BYTE *)(v6 + 32);
    v73[v30] = *(_BYTE *)(v6 + 33);
    v73[v31] = *(_BYTE *)(v6 + 34);
    v32 = *(const void **)(v6 + 35);
    if ( !v32 )
    {
      strcpy(v76, "Decode Chip Technology OOM");
      V_LOCK(*(_DWORD *)"nology OOM");
      v53 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v53);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        778,
        100,
        v77);
      v32 = *(const void **)(v6 + 35);
    }
    memcpy(&v73[dest[17]], v32, dest[51]);
    src = HIBYTE(*(_WORD *)(v6 + 39)) | (*(_WORD *)(v6 + 39) << 8);
    memcpy(&v73[dest[18]], &src, dest[52]);
    v70 = HIBYTE(*(_WORD *)(v6 + 41)) | (*(_WORD *)(v6 + 41) << 8);
    memcpy(&v73[dest[19]], &v70, dest[53]);
    v71 = (unsigned int)(float)(*(float *)(v6 + 43) * 100.0);
    memcpy(&v73[dest[20]], &v71, dest[54]);
    v33 = dest[22];
    v34 = dest[23];
    v73[dest[21]] = *(_BYTE *)(v6 + 47);
    v35 = dest[24];
    v73[v33] = *(_BYTE *)(v6 + 48);
    v73[v34] = *(_BYTE *)(v6 + 49);
    v73[v35] = *(_BYTE *)(v6 + 50);
    v36 = *(const void **)(v6 + 51);
    if ( !v36 )
    {
      strcpy(v76, "Decode miner_type OOM");
      V_LOCK(*(_DWORD *)"e OOM");
      v52 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v52);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        810,
        100,
        v77);
      v36 = *(const void **)(v6 + 51);
    }
    memcpy(&v73[dest[25]], v36, dest[59]);
    v37 = dest[28];
    v73[dest[26]] = *(_BYTE *)(v6 + 55);
    v73[v37] = BM_CRC5(v73, 8 * (*(unsigned __int8 *)(v6 + 1) - 1));
  }
  memset(dest, 0, sizeof(dest));
  v38 = v73[1] - 2;
  v39 = v73[0] & 0xF;
  v40 = v73[0] >> 4;
  if ( (unsigned __int8)(v73[1] - 2) > 0xFDu )
  {
    v8 = -1;
    v62 = snprintf(
            v76,
            0x800u,
            "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
            v73[1],
            v73[1] - 2,
            v73[1]);
    V_LOCK(v62);
    v63 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v63);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "encode_eeprom_fixture_info",
      26,
      320,
      100,
      v77);
    return v8;
  }
  v41 = v40 == 1;
  if ( v40 == 1 )
    v41 = v39 == 1;
  v42 = !v41;
  if ( v41 )
  {
    v66 = v42;
    memcpy(dest, &v73[2], v73[1] - 2);
    data_enc(dest, v38, 1);
    v74[0] = *(_WORD *)v73;
    v43 = 3;
    memcpy(&v74[1], dest, v38);
    while ( 1 )
    {
      eeprom_write(a1, 0, (char *)v74, *(unsigned __int8 *)(v6 + 1));
      memset(s, 0, sizeof(s));
      v8 = eeprom_read(a1, 0, (int)s, 256);
      if ( v8 )
      {
        v46 = snprintf(v76, 0x800u, "Read configuration fail for chain %d.", a1);
        V_LOCK(v46);
        v47 = logfmt_raw((int)v77, 0x1000u);
        V_UNLOCK(v47);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
          191,
          "eeprom_rewrite_one_chain",
          24,
          948,
          100,
          v77);
      }
      else if ( eeprom_decode_fixture_info_0(s, v73) )
      {
        v48 = snprintf(v76, 0x800u, "Data decode fail for chain %d.", a1);
        V_LOCK(v48);
        v49 = logfmt_raw((int)v77, 0x1000u);
        V_UNLOCK(v49);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
          191,
          "eeprom_rewrite_one_chain",
          24,
          962,
          100,
          v77);
        usleep(0x7A120u);
      }
      else
      {
        if ( sub_11773C(v73, v6) && sub_116638((int)v73, (unsigned __int8 *)v6) )
        {
          *(_BYTE *)(v65 + 64) = 1;
          return v8;
        }
        v8 = -1;
        *(_BYTE *)(v65 + 64) = v66;
        v44 = snprintf(v76, 0x800u, "Data load fail for chain %d.", a1);
        V_LOCK(v44);
        v45 = logfmt_raw((int)v77, 0x1000u);
        V_UNLOCK(v45);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
          191,
          "eeprom_rewrite_one_chain",
          24,
          977,
          100,
          v77);
      }
      if ( !--v43 )
        return v8;
    }
  }
  v8 = -1;
  v60 = snprintf(
          v76,
          0x800u,
          "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
          v39,
          v40);
  V_LOCK(v60);
  v61 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v61);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
    191,
    "encode_eeprom_fixture_info",
    26,
    326,
    100,
    v77);
  return v8;
}
