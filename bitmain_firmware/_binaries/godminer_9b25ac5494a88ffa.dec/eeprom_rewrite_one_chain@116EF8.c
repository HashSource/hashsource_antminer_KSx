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
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  const void *v31; // r8
  int v32; // r1
  int v33; // r2
  int v34; // r3
  const void *v35; // r8
  int v36; // r8
  size_t v37; // r8
  int v38; // r3
  int v39; // r2
  bool v40; // zf
  char v41; // r12
  int v42; // r10
  int v43; // r0
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
  int v63; // [sp+14h] [bp-1C20h]
  char v64; // [sp+18h] [bp-1C1Ch]
  __int16 src; // [sp+2Ah] [bp-1C0Ah] BYREF
  __int16 v68; // [sp+2Ch] [bp-1C08h] BYREF
  __int16 v69; // [sp+2Eh] [bp-1C06h] BYREF
  unsigned __int8 s[256]; // [sp+30h] [bp-1C04h] BYREF
  unsigned __int8 v71[256]; // [sp+130h] [bp-1B04h] BYREF
  _WORD v72[128]; // [sp+230h] [bp-1A04h] BYREF
  _BYTE dest[256]; // [sp+330h] [bp-1904h] BYREF
  char v74[2048]; // [sp+430h] [bp-1804h] BYREF
  _BYTE v75[4100]; // [sp+C30h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v71, 0, sizeof(v71));
  memset(v72, 0, sizeof(v72));
  v6 = *(_DWORD *)(a2 + 4 * a1);
  v7 = 3;
  while ( 1 )
  {
    v8 = eeprom_read(a1, 0, (int)s, 256);
    if ( v8 )
    {
      v49 = snprintf(v74, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK(v49);
      v50 = logfmt_raw((int)v75, 0x1000u);
      V_UNLOCK(v50);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_rewrite_one_chain",
        24,
        874,
        100,
        v75);
      return v8;
    }
    if ( !eeprom_decode_fixture_info_0(s, v71) )
      break;
    v9 = snprintf(v74, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK(v9);
    v10 = logfmt_raw((int)v75, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_rewrite_one_chain",
      24,
      888,
      100,
      v75);
    usleep(0x7A120u);
    if ( !--v7 )
      goto LABEL_6;
  }
  if ( !sub_115920(v71, v6) || !sub_114828((int)v71, (unsigned __int8 *)v6) )
  {
LABEL_6:
    v8 = -1;
    *(_BYTE *)(a2 + a1 + 64) = 0;
    v11 = snprintf(v74, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK(v11);
    v12 = logfmt_raw((int)v75, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_rewrite_one_chain",
      24,
      905,
      100,
      v75);
    return v8;
  }
  v63 = a2 + a1;
  *(_BYTE *)(v63 + 64) = 1;
  v14 = snprintf(
          v74,
          0x800u,
          "chain[%d], modify voltage from %d to %d, freq from %d to %d",
          a1,
          *(unsigned __int16 *)(v6 + 39),
          *(unsigned __int16 *)(v6 + 39) + a3,
          *(unsigned __int16 *)(v6 + 41),
          *(unsigned __int16 *)(v6 + 41) + a4);
  V_LOCK(v14);
  v15 = logfmt_raw((int)v75, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
    191,
    "eeprom_rewrite_one_chain",
    24,
    911,
    100,
    v75);
  v16 = *(_BYTE *)(v6 + 2);
  v17 = *(_BYTE *)v6;
  v18 = *(_BYTE *)(v6 + 1);
  *(_WORD *)(v6 + 39) += a3;
  v19 = *(_WORD *)(v6 + 41);
  v71[2] = v16;
  v20 = *(unsigned __int8 *)(v6 + 2);
  *(_WORD *)(v6 + 41) = v19 + a4;
  v71[0] = v17;
  v71[1] = v18;
  if ( init_eeprom_fmt_info(dest, v20) )
  {
    v21 = *(const void **)(v6 + 3);
    if ( !v21 )
    {
      strcpy(v74, "encode serial_number OOM");
      V_LOCK(*(_DWORD *)"mber OOM");
      v53 = logfmt_raw((int)v75, 0x1000u);
      V_UNLOCK(v53);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        693,
        100,
        v75);
      v21 = *(const void **)(v6 + 3);
    }
    memcpy(&v71[dest[3]], v21, dest[37]);
    v22 = *(const void **)(v6 + 7);
    if ( !v22 )
    {
      strcpy(v74, "encode chip_die OOM");
      V_LOCK(*(_DWORD *)"encode chip_die OOM");
      v57 = logfmt_raw((int)v75, 0x1000u);
      V_UNLOCK(v57);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        700,
        100,
        v75);
      v22 = *(const void **)(v6 + 7);
    }
    memcpy(&v71[dest[4]], v22, dest[38]);
    v23 = *(const void **)(v6 + 11);
    if ( !v23 )
    {
      strcpy(v74, "encode chip_marking OOM");
      V_LOCK(*(_DWORD *)"ing OOM");
      v56 = logfmt_raw((int)v75, 0x1000u);
      V_UNLOCK(v56);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        707,
        100,
        v75);
      v23 = *(const void **)(v6 + 11);
    }
    memcpy(&v71[dest[5]], v23, dest[39]);
    v71[dest[6]] = *(_BYTE *)(v6 + 15);
    v24 = *(const void **)(v6 + 16);
    if ( !v24 )
    {
      strcpy(v74, "encode Chip FT Program Version OOM");
      V_LOCK(*(_DWORD *)"rogram Version OOM");
      v55 = logfmt_raw((int)v75, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        717,
        100,
        v75);
      v24 = *(const void **)(v6 + 16);
    }
    if ( (unsigned int)*(unsigned __int8 *)(v6 + 2) - 1 <= 1 )
    {
      memset(v75, 0, 16);
      _isoc99_sscanf(v24, "F%dV%02dB%dC%d", v75, &v75[1], &v75[2], &v75[3]);
      memcpy(&v71[dest[7]], v75, dest[41]);
    }
    else
    {
      memcpy(&v71[dest[7]], v24, dest[41]);
    }
    v71[dest[9]] = *(_BYTE *)(v6 + 24);
    v25 = *(const void **)(v6 + 25);
    if ( !v25 )
    {
      strcpy(v74, "Decode asic_sensor_addr OOM");
      V_LOCK(*(_DWORD *)"or_addr OOM");
      v52 = logfmt_raw((int)v75, 0x1000u);
      V_UNLOCK(v52);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        737,
        100,
        v75);
      v25 = *(const void **)(v6 + 25);
    }
    memcpy(&v71[dest[10]], v25, dest[44]);
    v26 = dest[12];
    v71[dest[11]] = *(_BYTE *)(v6 + 29);
    v27 = dest[13];
    v28 = dest[14];
    v71[v26] = *(_BYTE *)(v6 + 30);
    v29 = dest[15];
    v71[v27] = *(_BYTE *)(v6 + 31);
    v30 = dest[16];
    v71[v28] = *(_BYTE *)(v6 + 32);
    v71[v29] = *(_BYTE *)(v6 + 33);
    v71[v30] = *(_BYTE *)(v6 + 34);
    v31 = *(const void **)(v6 + 35);
    if ( !v31 )
    {
      strcpy(v74, "Decode Chip Technology OOM");
      V_LOCK(*(_DWORD *)"nology OOM");
      v51 = logfmt_raw((int)v75, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        759,
        100,
        v75);
      v31 = *(const void **)(v6 + 35);
    }
    memcpy(&v71[dest[17]], v31, dest[51]);
    src = HIBYTE(*(_WORD *)(v6 + 39)) | (*(_WORD *)(v6 + 39) << 8);
    memcpy(&v71[dest[18]], &src, dest[52]);
    v68 = HIBYTE(*(_WORD *)(v6 + 41)) | (*(_WORD *)(v6 + 41) << 8);
    memcpy(&v71[dest[19]], &v68, dest[53]);
    v69 = (unsigned int)(float)(*(float *)(v6 + 43) * 100.0);
    memcpy(&v71[dest[20]], &v69, dest[54]);
    v32 = dest[22];
    v33 = dest[23];
    v71[dest[21]] = *(_BYTE *)(v6 + 47);
    v34 = dest[24];
    v71[v32] = *(_BYTE *)(v6 + 48);
    v71[v33] = *(_BYTE *)(v6 + 49);
    v71[v34] = *(_BYTE *)(v6 + 50);
    v35 = *(const void **)(v6 + 51);
    if ( !v35 )
    {
      strcpy(v74, "Decode miner_type OOM");
      V_LOCK(*(_DWORD *)"e OOM");
      v54 = logfmt_raw((int)v75, 0x1000u);
      V_UNLOCK(v54);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
        191,
        "eeprom_layout_to_buf",
        20,
        791,
        100,
        v75);
      v35 = *(const void **)(v6 + 51);
    }
    memcpy(&v71[dest[25]], v35, dest[59]);
    v36 = dest[28];
    v71[dest[26]] = *(_BYTE *)(v6 + 55);
    v71[v36] = BM_CRC5(v71, 8 * (*(unsigned __int8 *)(v6 + 1) - 1));
  }
  memset(dest, 0, sizeof(dest));
  v37 = v71[1] - 2;
  v38 = v71[0] & 0xF;
  v39 = v71[0] >> 4;
  if ( (unsigned __int8)(v71[1] - 2) > 0xFDu )
  {
    v8 = -1;
    v60 = snprintf(
            v74,
            0x800u,
            "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
            v71[1],
            v71[1] - 2,
            v71[1]);
    V_LOCK(v60);
    v61 = logfmt_raw((int)v75, 0x1000u);
    V_UNLOCK(v61);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "encode_eeprom_fixture_info",
      26,
      320,
      100,
      v75);
    return v8;
  }
  v40 = v39 == 1;
  if ( v39 == 1 )
    v40 = v38 == 1;
  v41 = !v40;
  if ( v40 )
  {
    v64 = v41;
    memcpy(dest, &v71[2], v71[1] - 2);
    data_enc(dest, v37, 1);
    v72[0] = *(_WORD *)v71;
    v42 = 3;
    memcpy(&v72[1], dest, v37);
    while ( 1 )
    {
      eeprom_write(a1, 0, (char *)v72, *(unsigned __int8 *)(v6 + 1));
      memset(s, 0, sizeof(s));
      v8 = eeprom_read(a1, 0, (int)s, 256);
      if ( v8 )
      {
        v45 = snprintf(v74, 0x800u, "Read configuration fail for chain %d.", a1);
        V_LOCK(v45);
        v46 = logfmt_raw((int)v75, 0x1000u);
        V_UNLOCK(v46);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
          191,
          "eeprom_rewrite_one_chain",
          24,
          929,
          100,
          v75);
      }
      else if ( eeprom_decode_fixture_info_0(s, v71) )
      {
        v47 = snprintf(v74, 0x800u, "Data decode fail for chain %d.", a1);
        V_LOCK(v47);
        v48 = logfmt_raw((int)v75, 0x1000u);
        V_UNLOCK(v48);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
          191,
          "eeprom_rewrite_one_chain",
          24,
          943,
          100,
          v75);
        usleep(0x7A120u);
      }
      else
      {
        if ( sub_115920(v71, v6) && sub_114828((int)v71, (unsigned __int8 *)v6) )
        {
          *(_BYTE *)(v63 + 64) = 1;
          return v8;
        }
        v8 = -1;
        *(_BYTE *)(v63 + 64) = v64;
        v43 = snprintf(v74, 0x800u, "Data load fail for chain %d.", a1);
        V_LOCK(v43);
        v44 = logfmt_raw((int)v75, 0x1000u);
        V_UNLOCK(v44);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
          191,
          "eeprom_rewrite_one_chain",
          24,
          958,
          100,
          v75);
      }
      if ( !--v42 )
        return v8;
    }
  }
  v8 = -1;
  v58 = snprintf(
          v74,
          0x800u,
          "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
          v38,
          v39);
  V_LOCK(v58);
  v59 = logfmt_raw((int)v75, 0x1000u);
  V_UNLOCK(v59);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
    191,
    "encode_eeprom_fixture_info",
    26,
    326,
    100,
    v75);
  return v8;
}
