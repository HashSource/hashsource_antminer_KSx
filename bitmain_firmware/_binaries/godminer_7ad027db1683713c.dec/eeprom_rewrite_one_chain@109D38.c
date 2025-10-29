int __fastcall eeprom_rewrite_one_chain(unsigned int a1, int a2, int a3, int a4)
{
  int v6; // r5
  int v7; // r11
  int v8; // r8
  unsigned __int8 v10; // r1
  unsigned __int8 v11; // r3
  unsigned __int8 v12; // r12
  __int16 v13; // r2
  int v14; // r1
  const void *v15; // r10
  const void *v16; // r8
  const void *v17; // r8
  const void *v18; // r8
  const void *v19; // r8
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  const void *v25; // r8
  int v26; // r1
  int v27; // r2
  int v28; // r3
  const void *v29; // r8
  int v30; // r8
  unsigned int v31; // r8
  int v32; // r3
  int v33; // r2
  bool v34; // zf
  char v35; // r12
  int v36; // r10
  int v38; // [sp+14h] [bp-1C20h]
  char v39; // [sp+18h] [bp-1C1Ch]
  __int16 src; // [sp+2Ah] [bp-1C0Ah] BYREF
  __int16 v43; // [sp+2Ch] [bp-1C08h] BYREF
  __int16 v44; // [sp+2Eh] [bp-1C06h] BYREF
  char s[256]; // [sp+30h] [bp-1C04h] BYREF
  unsigned __int8 v46[256]; // [sp+130h] [bp-1B04h] BYREF
  _WORD v47[128]; // [sp+230h] [bp-1A04h] BYREF
  unsigned int dest[64]; // [sp+330h] [bp-1904h] BYREF
  char v49[2048]; // [sp+430h] [bp-1804h] BYREF
  char v50[4100]; // [sp+C30h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v46, 0, sizeof(v46));
  memset(v47, 0, sizeof(v47));
  v6 = *(_DWORD *)(a2 + 4 * a1);
  v7 = 3;
  while ( 1 )
  {
    v8 = eeprom_read(a1, 0, s, 256);
    if ( v8 )
    {
      snprintf(v49, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK();
      logfmt_raw(v50, 0x1000u, 0, v49);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_rewrite_one_chain",
        24,
        874,
        100,
        v50);
      return v8;
    }
    if ( !eeprom_decode_fixture_info_0((unsigned __int8 *)s, v46) )
      break;
    snprintf(v49, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw(v50, 0x1000u, v8, v49);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "eeprom_rewrite_one_chain",
      24,
      888,
      100,
      v50);
    usleep(0x7A120u);
    if ( !--v7 )
      goto LABEL_6;
  }
  if ( !sub_108760(v46, v6) || !sub_107668(v46, (unsigned __int8 *)v6) )
  {
LABEL_6:
    v8 = -1;
    *(_BYTE *)(a2 + a1 + 64) = 0;
    snprintf(v49, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw(v50, 0x1000u, 0, v49);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "eeprom_rewrite_one_chain",
      24,
      905,
      100,
      v50);
    return v8;
  }
  v38 = a2 + a1;
  *(_BYTE *)(v38 + 64) = 1;
  snprintf(
    v49,
    0x800u,
    "chain[%d], modify voltage from %d to %d, freq from %d to %d",
    a1,
    *(unsigned __int16 *)(v6 + 39),
    *(unsigned __int16 *)(v6 + 39) + a3,
    *(unsigned __int16 *)(v6 + 41),
    *(unsigned __int16 *)(v6 + 41) + a4);
  V_LOCK();
  logfmt_raw(v50, 0x1000u, 0, v49);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    186,
    "eeprom_rewrite_one_chain",
    24,
    911,
    100,
    v50);
  v10 = *(_BYTE *)(v6 + 2);
  v11 = *(_BYTE *)v6;
  v12 = *(_BYTE *)(v6 + 1);
  *(_WORD *)(v6 + 39) += a3;
  v13 = *(_WORD *)(v6 + 41);
  v46[2] = v10;
  v14 = *(unsigned __int8 *)(v6 + 2);
  *(_WORD *)(v6 + 41) = v13 + a4;
  v46[0] = v11;
  v46[1] = v12;
  if ( init_eeprom_fmt_info(dest, v14) )
  {
    v15 = *(const void **)(v6 + 3);
    if ( !v15 )
    {
      strcpy(v49, "encode serial_number OOM");
      V_LOCK();
      logfmt_raw(v50, 0x1000u, 0, v49);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_layout_to_buf",
        20,
        693,
        100,
        v50);
      v15 = *(const void **)(v6 + 3);
    }
    memcpy(&v46[HIBYTE(dest[0])], v15, BYTE1(dest[9]));
    v16 = *(const void **)(v6 + 7);
    if ( !v16 )
    {
      strcpy(v49, "encode chip_die OOM");
      V_LOCK();
      logfmt_raw(v50, 0x1000u, 0, v49);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_layout_to_buf",
        20,
        700,
        100,
        v50);
      v16 = *(const void **)(v6 + 7);
    }
    memcpy(&v46[LOBYTE(dest[1])], v16, BYTE2(dest[9]));
    v17 = *(const void **)(v6 + 11);
    if ( !v17 )
    {
      strcpy(v49, "encode chip_marking OOM");
      V_LOCK();
      logfmt_raw(v50, 0x1000u, 0, v49);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_layout_to_buf",
        20,
        707,
        100,
        v50);
      v17 = *(const void **)(v6 + 11);
    }
    memcpy(&v46[BYTE1(dest[1])], v17, HIBYTE(dest[9]));
    v46[BYTE2(dest[1])] = *(_BYTE *)(v6 + 15);
    v18 = *(const void **)(v6 + 16);
    if ( !v18 )
    {
      strcpy(v49, "encode Chip FT Program Version OOM");
      V_LOCK();
      logfmt_raw(v50, 0x1000u, 0, v49);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_layout_to_buf",
        20,
        717,
        100,
        v50);
      v18 = *(const void **)(v6 + 16);
    }
    if ( (unsigned int)*(unsigned __int8 *)(v6 + 2) - 1 <= 1 )
    {
      memset(v50, 0, 16);
      _isoc99_sscanf(v18, "F%dV%02dB%dC%d", v50, &v50[1], &v50[2], &v50[3]);
      memcpy(&v46[HIBYTE(dest[1])], v50, BYTE1(dest[10]));
    }
    else
    {
      memcpy(&v46[HIBYTE(dest[1])], v18, BYTE1(dest[10]));
    }
    v46[BYTE1(dest[2])] = *(_BYTE *)(v6 + 24);
    v19 = *(const void **)(v6 + 25);
    if ( !v19 )
    {
      strcpy(v49, "Decode asic_sensor_addr OOM");
      V_LOCK();
      logfmt_raw(v50, 0x1000u, 0, v49);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_layout_to_buf",
        20,
        737,
        100,
        v50);
      v19 = *(const void **)(v6 + 25);
    }
    memcpy(&v46[BYTE2(dest[2])], v19, LOBYTE(dest[11]));
    v20 = LOBYTE(dest[3]);
    v46[HIBYTE(dest[2])] = *(_BYTE *)(v6 + 29);
    v21 = BYTE1(dest[3]);
    v22 = BYTE2(dest[3]);
    v46[v20] = *(_BYTE *)(v6 + 30);
    v23 = HIBYTE(dest[3]);
    v46[v21] = *(_BYTE *)(v6 + 31);
    v24 = LOBYTE(dest[4]);
    v46[v22] = *(_BYTE *)(v6 + 32);
    v46[v23] = *(_BYTE *)(v6 + 33);
    v46[v24] = *(_BYTE *)(v6 + 34);
    v25 = *(const void **)(v6 + 35);
    if ( !v25 )
    {
      strcpy(v49, "Decode Chip Technology OOM");
      V_LOCK();
      logfmt_raw(v50, 0x1000u, 0, v49);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_layout_to_buf",
        20,
        759,
        100,
        v50);
      v25 = *(const void **)(v6 + 35);
    }
    memcpy(&v46[BYTE1(dest[4])], v25, HIBYTE(dest[12]));
    src = HIBYTE(*(_WORD *)(v6 + 39)) | (*(_WORD *)(v6 + 39) << 8);
    memcpy(&v46[BYTE2(dest[4])], &src, LOBYTE(dest[13]));
    v43 = HIBYTE(*(_WORD *)(v6 + 41)) | (*(_WORD *)(v6 + 41) << 8);
    memcpy(&v46[HIBYTE(dest[4])], &v43, BYTE1(dest[13]));
    v44 = (unsigned int)(float)(*(float *)(v6 + 43) * 100.0);
    memcpy(&v46[LOBYTE(dest[5])], &v44, BYTE2(dest[13]));
    v26 = BYTE2(dest[5]);
    v27 = HIBYTE(dest[5]);
    v46[BYTE1(dest[5])] = *(_BYTE *)(v6 + 47);
    v28 = LOBYTE(dest[6]);
    v46[v26] = *(_BYTE *)(v6 + 48);
    v46[v27] = *(_BYTE *)(v6 + 49);
    v46[v28] = *(_BYTE *)(v6 + 50);
    v29 = *(const void **)(v6 + 51);
    if ( !v29 )
    {
      strcpy(v49, "Decode miner_type OOM");
      V_LOCK();
      logfmt_raw(v50, 0x1000u, 0, v49);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_layout_to_buf",
        20,
        791,
        100,
        v50);
      v29 = *(const void **)(v6 + 51);
    }
    memcpy(&v46[BYTE1(dest[6])], v29, HIBYTE(dest[14]));
    v30 = LOBYTE(dest[7]);
    v46[BYTE2(dest[6])] = *(_BYTE *)(v6 + 55);
    v46[v30] = BM_CRC5(v46, 8 * (*(unsigned __int8 *)(v6 + 1) - 1));
  }
  memset(dest, 0, sizeof(dest));
  v31 = v46[1] - 2;
  v32 = v46[0] & 0xF;
  v33 = v46[0] >> 4;
  if ( (unsigned __int8)(v46[1] - 2) > 0xFDu )
  {
    v8 = -1;
    snprintf(
      v49,
      0x800u,
      "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
      v46[1],
      v46[1] - 2,
      v46[1]);
    V_LOCK();
    logfmt_raw(v50, 0x1000u, 0, v49);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "encode_eeprom_fixture_info",
      26,
      320,
      100,
      v50);
    return v8;
  }
  v34 = v33 == 1;
  if ( v33 == 1 )
    v34 = v32 == 1;
  v35 = !v34;
  if ( v34 )
  {
    v39 = v35;
    memcpy(dest, &v46[2], v46[1] - 2);
    data_enc(dest, v31, 1, 1);
    v47[0] = *(_WORD *)v46;
    v36 = 3;
    memcpy(&v47[1], dest, v31);
    while ( 1 )
    {
      eeprom_write(a1, 0, (char *)v47, *(unsigned __int8 *)(v6 + 1));
      memset(s, 0, sizeof(s));
      v8 = eeprom_read(a1, 0, s, 256);
      if ( v8 )
      {
        snprintf(v49, 0x800u, "Read configuration fail for chain %d.", a1);
        V_LOCK();
        logfmt_raw(v50, 0x1000u, 0, v49);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          186,
          "eeprom_rewrite_one_chain",
          24,
          929,
          100,
          v50);
      }
      else if ( eeprom_decode_fixture_info_0((unsigned __int8 *)s, v46) )
      {
        snprintf(v49, 0x800u, "Data decode fail for chain %d.", a1);
        V_LOCK();
        logfmt_raw(v50, 0x1000u, 0, v49);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          186,
          "eeprom_rewrite_one_chain",
          24,
          943,
          100,
          v50);
        usleep(0x7A120u);
      }
      else
      {
        if ( sub_108760(v46, v6) && sub_107668(v46, (unsigned __int8 *)v6) )
        {
          *(_BYTE *)(v38 + 64) = 1;
          return v8;
        }
        v8 = -1;
        *(_BYTE *)(v38 + 64) = v39;
        snprintf(v49, 0x800u, "Data load fail for chain %d.", a1);
        V_LOCK();
        logfmt_raw(v50, 0x1000u, 0, v49);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          186,
          "eeprom_rewrite_one_chain",
          24,
          958,
          100,
          v50);
      }
      if ( !--v36 )
        return v8;
    }
  }
  v8 = -1;
  snprintf(
    v49,
    0x800u,
    "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
    v32,
    v33);
  V_LOCK();
  logfmt_raw(v50, 0x1000u, 0, v49);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    186,
    "encode_eeprom_fixture_info",
    26,
    326,
    100,
    v50);
  return v8;
}
