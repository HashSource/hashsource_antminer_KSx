int __fastcall sub_109850(_BYTE *a1, int a2)
{
  char v4; // r3
  int v5; // r1
  int inited; // r6
  size_t v8; // r8
  void *v9; // r7
  size_t v10; // r8
  void *v11; // r7
  size_t v12; // r8
  void *v13; // r7
  int v14; // r3
  bool v15; // cf
  size_t v16; // r8
  void *v17; // r7
  int v18; // r3
  size_t v19; // r9
  char v20; // r2
  void *v21; // r7
  int v22; // r3
  size_t v23; // r9
  char v24; // r2
  int v25; // r0
  int v26; // r2
  int v27; // r3
  int v28; // r2
  int v29; // r3
  void *v30; // r7
  _BYTE *v31; // r1
  size_t v32; // r2
  size_t v33; // r2
  _BYTE *v34; // r1
  int v35; // r7
  int v36; // lr
  int v37; // r12
  int v38; // r2
  size_t v39; // r8
  size_t v40; // r0
  float v41; // s15
  void *v42; // r7
  int v43; // r3
  int v44; // r1
  size_t v45; // r9
  size_t v46; // r10
  char *v47; // r0
  char *v48; // r7
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  unsigned __int16 dest; // [sp+10h] [bp-1858h] BYREF
  unsigned __int16 v58; // [sp+12h] [bp-1856h] BYREF
  _WORD v59[8]; // [sp+14h] [bp-1854h] BYREF
  _BYTE v60[7]; // [sp+24h] [bp-1844h] BYREF
  unsigned __int8 v61; // [sp+2Bh] [bp-183Dh]
  unsigned __int8 v62; // [sp+2Dh] [bp-183Bh]
  unsigned __int8 v63; // [sp+2Eh] [bp-183Ah]
  unsigned __int8 v64; // [sp+2Fh] [bp-1839h]
  unsigned __int8 v65; // [sp+30h] [bp-1838h]
  unsigned __int8 v66; // [sp+31h] [bp-1837h]
  unsigned __int8 v67; // [sp+32h] [bp-1836h]
  unsigned __int8 v68; // [sp+33h] [bp-1835h]
  unsigned __int8 v69; // [sp+34h] [bp-1834h]
  unsigned __int8 v70; // [sp+35h] [bp-1833h]
  unsigned __int8 v71; // [sp+36h] [bp-1832h]
  unsigned __int8 v72; // [sp+37h] [bp-1831h]
  unsigned __int8 v73; // [sp+38h] [bp-1830h]
  unsigned __int8 v74; // [sp+39h] [bp-182Fh]
  unsigned __int8 v75; // [sp+3Ah] [bp-182Eh]
  unsigned __int8 v76; // [sp+3Bh] [bp-182Dh]
  unsigned __int8 v77; // [sp+3Ch] [bp-182Ch]
  unsigned __int8 v78; // [sp+3Dh] [bp-182Bh]
  unsigned __int8 v79; // [sp+3Eh] [bp-182Ah]
  unsigned __int8 v80; // [sp+40h] [bp-1828h]
  unsigned __int8 v81; // [sp+41h] [bp-1827h]
  unsigned __int8 v82; // [sp+42h] [bp-1826h]
  unsigned __int8 v83; // [sp+43h] [bp-1825h]
  unsigned __int8 v84; // [sp+45h] [bp-1823h]
  unsigned __int8 v85; // [sp+49h] [bp-181Fh]
  unsigned __int8 v86; // [sp+4Ah] [bp-181Eh]
  unsigned __int8 v87; // [sp+4Bh] [bp-181Dh]
  unsigned __int8 v88; // [sp+4Dh] [bp-181Bh]
  unsigned __int8 v89; // [sp+50h] [bp-1818h]
  unsigned __int8 v90; // [sp+57h] [bp-1811h]
  unsigned __int8 n; // [sp+58h] [bp-1810h]
  unsigned __int8 n_1; // [sp+59h] [bp-180Fh]
  unsigned __int8 n_2; // [sp+5Ah] [bp-180Eh]
  unsigned __int8 v94; // [sp+5Fh] [bp-1809h]
  unsigned __int8 v95; // [sp+61h] [bp-1807h]
  unsigned __int8 v96; // [sp+62h] [bp-1806h]
  unsigned __int8 v97; // [sp+63h] [bp-1805h]
  char v98[2040]; // [sp+68h] [bp-1800h] BYREF
  _BYTE v99[4096]; // [sp+868h] [bp-1000h] BYREF

  v4 = *(_BYTE *)a2 & 0xF | (16 * ((*a1 >> 4) & 0xF));
  *(_BYTE *)a2 = v4;
  *(_BYTE *)a2 = v4 & 0xF0 | *a1 & 0xF;
  *(_BYTE *)(a2 + 1) = a1[1];
  v5 = (unsigned __int8)a1[2];
  *(_BYTE *)(a2 + 2) = v5;
  inited = init_eeprom_fmt_info(v60, v5);
  if ( inited )
  {
    v8 = v85;
    v9 = calloc(v85 + 1, 1u);
    *(_DWORD *)(a2 + 3) = v9;
    if ( !v9 )
    {
      inited = 0;
      strcpy(v98, "Decode SN OOM");
      V_LOCK(*(_DWORD *)"Decode SN OOM");
      v54 = logfmt_raw((int)v99, 0x1000u);
      V_UNLOCK(v54);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_buf_to_layout",
        20,
        523,
        100,
        v99);
      v9 = *(void **)(a2 + 3);
      v8 = v85;
    }
    memcpy(v9, &a1[v60[3]], v8);
    v10 = v86;
    v11 = calloc(v86 + 1, 1u);
    *(_DWORD *)(a2 + 7) = v11;
    if ( !v11 )
    {
      inited = 0;
      strcpy(v98, "Decode Chip Die OOM");
      V_LOCK(*(_DWORD *)"Decode Chip Die OOM");
      v53 = logfmt_raw((int)v99, 0x1000u);
      V_UNLOCK(v53);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_buf_to_layout",
        20,
        532,
        100,
        v99);
      v11 = *(void **)(a2 + 7);
      v10 = v86;
    }
    memcpy(v11, &a1[v60[4]], v10);
    v12 = v87;
    v13 = calloc(v87 + 1, 1u);
    *(_DWORD *)(a2 + 11) = v13;
    if ( !v13 )
    {
      inited = 0;
      strcpy(v98, "Decode Chip Marking OOM");
      V_LOCK(*(_DWORD *)"ing OOM");
      v52 = logfmt_raw((int)v99, 0x1000u);
      V_UNLOCK(v52);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_buf_to_layout",
        20,
        541,
        100,
        v99);
      v13 = *(void **)(a2 + 11);
      v12 = v87;
    }
    memcpy(v13, &a1[v60[5]], v12);
    v14 = *(unsigned __int8 *)(a2 + 2) - 1;
    v15 = *(_BYTE *)(a2 + 2) != 1;
    *(_BYTE *)(a2 + 15) = a1[v60[6]];
    if ( v14 != 1 && v15 )
    {
      v16 = v88;
      v17 = calloc(v88 + 1, 1u);
      *(_DWORD *)(a2 + 16) = v17;
      if ( !v17 )
      {
        inited = 0;
        strcpy(v98, "Decode Chip FT Program Version OOM");
        V_LOCK(*(_DWORD *)"rogram Version OOM");
        v55 = logfmt_raw((int)v99, 0x1000u);
        V_UNLOCK(v55);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          186,
          "eeprom_buf_to_layout",
          20,
          567,
          100,
          v99);
        v17 = *(void **)(a2 + 16);
        v16 = v88;
      }
      memcpy(v17, &a1[v61], v16);
    }
    else
    {
      v45 = v88;
      v46 = v88 + 6;
      memset(v59, 0, sizeof(v59));
      v47 = (char *)calloc(v46, 1u);
      v48 = v47;
      *(_DWORD *)(a2 + 16) = v47;
      if ( !v47 )
      {
        inited = 0;
        strcpy(v98, "Decode Chip FT Program Version OOM");
        V_LOCK(*(_DWORD *)"rogram Version OOM");
        v56 = logfmt_raw((int)v99, 0x1000u);
        V_UNLOCK(v56);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          186,
          "eeprom_buf_to_layout",
          20,
          556,
          100,
          v99);
        v45 = v88;
        v48 = *(char **)(a2 + 16);
        v46 = v88 + 6;
      }
      memcpy(v59, &a1[v61], v45);
      snprintf(v48, v46, "F%dV%02dB%dC%d", LOBYTE(v59[0]), HIBYTE(v59[0]), LOBYTE(v59[1]), HIBYTE(v59[1]));
    }
    v18 = v62;
    v19 = v89;
    v20 = *(_BYTE *)(a2 + 24) & 0x80 | a1[v62] & 0x7F;
    *(_BYTE *)(a2 + 24) = v20;
    *(_BYTE *)(a2 + 24) = v20 & 0x7F | (a1[v18] >> 7 << 7);
    v21 = calloc(v19 + 1, 1u);
    *(_DWORD *)(a2 + 25) = v21;
    if ( !v21 )
    {
      inited = 0;
      strcpy(v98, "Decode Chip FT Program Version OOM");
      V_LOCK(*(_DWORD *)"rogram Version OOM");
      v51 = logfmt_raw((int)v99, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_buf_to_layout",
        20,
        581,
        100,
        v99);
      v21 = *(void **)(a2 + 25);
      v19 = v89;
    }
    memcpy(v21, &a1[v63], v19);
    v22 = v64;
    v23 = v90;
    v24 = *(_BYTE *)(a2 + 29) & 0x80 | a1[v64] & 0x7F;
    *(_BYTE *)(a2 + 29) = v24;
    v25 = v65;
    *(_BYTE *)(a2 + 29) = v24 & 0x7F | (a1[v22] >> 7 << 7);
    v26 = v66;
    v27 = v67;
    *(_BYTE *)(a2 + 30) = a1[v25];
    LOBYTE(v25) = a1[v26];
    v28 = v68;
    *(_BYTE *)(a2 + 31) = v25;
    LOBYTE(v25) = a1[v27];
    v29 = v69;
    *(_BYTE *)(a2 + 32) = v25;
    *(_BYTE *)(a2 + 33) = a1[v28];
    *(_BYTE *)(a2 + 34) = a1[v29];
    v30 = calloc(v23 + 1, 1u);
    *(_DWORD *)(a2 + 35) = v30;
    if ( !v30 )
    {
      inited = 0;
      strcpy(v98, "Decode Chip Technology OOM");
      V_LOCK(*(_DWORD *)"nology OOM");
      v50 = logfmt_raw((int)v99, 0x1000u);
      V_UNLOCK(v50);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_buf_to_layout",
        20,
        605,
        100,
        v99);
      v30 = *(void **)(a2 + 35);
      v23 = v90;
    }
    memcpy(v30, &a1[v70], v23);
    memcpy(&dest, &a1[v71], n);
    v31 = &a1[v72];
    v32 = n_1;
    *(_WORD *)(a2 + 39) = HIBYTE(dest) | (dest << 8);
    memcpy(&v58, v31, v32);
    v33 = n_2;
    v34 = &a1[v73];
    *(_WORD *)(a2 + 41) = HIBYTE(v58) | (v58 << 8);
    memcpy(v59, v34, v33);
    v35 = v74;
    v36 = v75;
    v37 = v76;
    v38 = v77;
    v39 = v94;
    v40 = v94 + 1;
    v41 = (double)(unsigned __int16)__rev16(v59[0]) / 100.0;
    *(float *)(a2 + 43) = v41;
    *(_BYTE *)(a2 + 47) = a1[v35];
    *(_BYTE *)(a2 + 48) = a1[v36];
    *(_BYTE *)(a2 + 49) = a1[v37];
    *(_BYTE *)(a2 + 50) = a1[v38];
    v42 = calloc(v40, 1u);
    *(_DWORD *)(a2 + 51) = v42;
    if ( !v42 )
    {
      inited = 0;
      strcpy(v98, "Decode miner_type OOM");
      V_LOCK(*(_DWORD *)"e OOM");
      v49 = logfmt_raw((int)v99, 0x1000u);
      V_UNLOCK(v49);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        186,
        "eeprom_buf_to_layout",
        20,
        641,
        100,
        v99);
      v42 = *(void **)(a2 + 51);
      v39 = v94;
    }
    memcpy(v42, &a1[v78], v39);
    v43 = v80;
    v44 = *(unsigned __int8 *)(a2 + 2);
    *(_BYTE *)(a2 + 55) = a1[v79];
    *(_BYTE *)(a2 + 60) = a1[v43];
    if ( v44 == 4 )
    {
      memcpy((void *)(a2 + 61), &a1[v81], v95);
      memcpy((void *)(a2 + 63), &a1[v82], v96);
      memcpy((void *)(a2 + 191), &a1[v83], v97);
      *(_BYTE *)(a2 + 196) = a1[v84];
    }
  }
  return inited;
}
