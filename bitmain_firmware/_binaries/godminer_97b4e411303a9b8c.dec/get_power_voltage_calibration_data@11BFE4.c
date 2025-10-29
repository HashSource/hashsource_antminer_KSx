int get_power_voltage_calibration_data()
{
  int v0; // r0
  bool v1; // cc
  unsigned __int64 *v2; // r4
  int v3; // r0
  int v4; // r12
  int v5; // r7
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r10
  unsigned __int16 v10; // r6
  unsigned int v11; // r11
  int v12; // r6
  unsigned __int64 v13; // r8
  char *v14; // r4
  int v15; // r2
  __int64 v16; // r0
  unsigned __int16 v17; // lr
  int v18; // r8
  int v19; // t1
  int v20; // r2
  int v21; // r4
  double v23; // d8
  double v24; // d0
  int v25; // r7
  int v26; // r5
  unsigned int v27; // r1
  double *v28; // r4
  double v29; // d0
  int v30; // r0
  int v31; // r0
  int v32; // [sp+4h] [bp-1838h]
  int v33; // [sp+10h] [bp-182Ch]
  int v34; // [sp+14h] [bp-1828h]
  unsigned __int64 v35; // [sp+18h] [bp-1824h] BYREF
  unsigned int v36; // [sp+20h] [bp-181Ch]
  unsigned __int8 v37; // [sp+24h] [bp-1818h]
  unsigned __int8 v38; // [sp+25h] [bp-1817h]
  _BYTE v39[14]; // [sp+26h] [bp-1816h]
  unsigned __int8 v40; // [sp+34h] [bp-1808h]
  unsigned __int8 v41; // [sp+35h] [bp-1807h]
  unsigned __int8 v42; // [sp+36h] [bp-1806h]
  unsigned __int8 v43; // [sp+37h] [bp-1805h]
  char v44[2040]; // [sp+38h] [bp-1804h] BYREF
  _DWORD v45[1025]; // [sp+838h] [bp-1004h] BYREF

  if ( (unsigned __int16)dword_30BCF8 != 106 )
  {
    if ( (unsigned __int16)dword_30BCF8 <= 0x6Au )
    {
      if ( (unsigned __int16)dword_30BCF8 != 98 )
      {
        if ( (unsigned __int16)dword_30BCF8 > 0x62u )
        {
          if ( (unsigned int)(unsigned __int16)dword_30BCF8 - 100 > 2 )
            return -1;
        }
        else if ( (unsigned __int16)dword_30BCF8 != 26 )
        {
          if ( (unsigned __int16)dword_30BCF8 != 65 )
            return -1;
          goto LABEL_7;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)dword_30BCF8 <= 0x78u )
      {
        if ( (unsigned __int16)dword_30BCF8 < 0x75u
          && (unsigned __int16)dword_30BCF8 != 113
          && (unsigned __int16)dword_30BCF8 != 115 )
        {
          return -1;
        }
LABEL_7:
        v0 = 64;
        goto LABEL_8;
      }
      if ( (unsigned int)(unsigned __int16)dword_30BCF8 - 193 > 1 )
        return -1;
    }
  }
  v0 = 0;
LABEL_8:
  v1 = (unsigned int)dword_30BCF8 > 0x62;
  if ( dword_30BCF8 != 98 )
    v1 = (unsigned int)(dword_30BCF8 - 100) > 2;
  if ( !v1 )
  {
    V_LOCK(v0);
    v33 = -1;
    v30 = logfmt_raw((int)v45, 0x1000u);
    V_UNLOCK(v30);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "get_power_voltage_calibration_data",
      34,
      1211,
      100,
      v45);
    return v33;
  }
  v33 = bitmain_power_read(v0, (int)&v35, 32);
  if ( v33 )
    return -1;
  v2 = &v35;
  strcpy(v44, "power calibration data:");
  V_LOCK(*(_DWORD *)"n data:");
  v3 = logfmt_raw((int)v45, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
    194,
    "get_power_voltage_calibration_data",
    34,
    1222,
    100,
    v45);
  v34 = (int)&dword_30BCF0;
  do
  {
    v4 = *((unsigned __int8 *)v2 + 1);
    v5 = *((unsigned __int8 *)v2 + 3);
    v6 = *(unsigned __int8 *)v2;
    v32 = *((unsigned __int8 *)v2 + 2);
    v2 = (unsigned __int64 *)((char *)v2 + 4);
    v7 = snprintf(v44, 0x800u, "%2X %2X %2X %2X  ", v6, v4, v32, v5);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v45, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "get_power_voltage_calibration_data",
      34,
      1224,
      100,
      v45);
  }
  while ( v2 != (unsigned __int64 *)v44 );
  v9 = v34;
  v10 = v43 + (v42 << 8);
  if ( v10 == POWER_CRC16(&v35, 30) )
  {
    v11 = bswap32(v36);
    v12 = 0;
    v45[0] = 0;
    v13 = _byteswap_uint64(v35);
    *v2 = v35;
    *v2 = v13;
    memset(&v45[1], 0, 14);
    sub_11A190((int)v45, 12, v13 & 0x1FFFFFFFFFFFFFFLL);
    sub_11A190((int)&v45[2] + 3, 7, v11);
    v14 = (char *)v2 - 19;
    v15 = (unsigned __int16)(v41 + (v40 << 8));
    v16 = 138547333LL * (unsigned __int16)(v41 + (v40 << 8));
    v17 = (HIDWORD(v16) + ((unsigned int)(v15 - HIDWORD(v16)) >> 1)) >> 4;
    v34 = (__int16)(v38 + (v37 << 8));
    v18 = v34;
    unk_30BD08 = v45[0];
    unk_30BD0C = v45[1];
    unk_30BD10 = v45[2];
    unk_30BD14 = v45[3];
    word_30BD18 = v45[4];
    *(_DWORD *)(v9 + 0xD0) = 100 * (v17 % 0xCu)
                           + 100
                           + 10000 * ((unsigned __int16)(v41 + (v40 << 8)) / 0x174u)
                           + (unsigned __int16)(v15 - 31 * v17)
                           + 1;
    while ( 1 )
    {
      v19 = *++v14;
      v20 = v12 + 1;
      if ( v19 == -128 )
        break;
      ++v12;
      if ( v20 == 14 )
      {
        v23 = 18.2142857;
        v24 = 0.0;
        *(_DWORD *)(v9 + 0x2C) = 15;
        v21 = 15;
        goto LABEL_30;
      }
    }
    v21 = v12 + 1;
    *(_DWORD *)(v9 + 0x2C) = v20;
    if ( (unsigned int)(v12 - 1) > 0xFE )
      return -1;
    v23 = 255.0 / (double)v12;
    v24 = v23 * 0.0;
    round();
LABEL_30:
    v25 = 3194143;
    v26 = 0;
    while ( 1 )
    {
      ++v26;
      *(_BYTE *)++v25 = (unsigned int)v24;
      if ( v26 == v21 )
        break;
      v24 = (double)v26 * v23;
      round();
    }
    sub_1192A0();
    v28 = (double *)&unk_30BD78;
    v29 = (double)v34 / 1000.0 + v24;
    *(double *)(v9 + 0x80) = v29;
    do
    {
      v18 += (char)v39[v27];
      sub_1192A0();
      v29 = (double)v18 / 1000.0 + v29;
      *v28++ = v29;
    }
    while ( v27 < v12 );
  }
  else
  {
    v33 = -1;
    strcpy((char *)v2, "calibration data crc err");
    V_LOCK(*(_DWORD *)" crc err");
    v31 = logfmt_raw((int)v45, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "get_power_voltage_calibration_data",
      34,
      1233,
      100,
      v45);
  }
  return v33;
}
