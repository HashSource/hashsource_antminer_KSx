int get_power_voltage_calibration_data()
{
  bool v0; // cc
  int v1; // r10
  unsigned __int16 v2; // r4
  unsigned int v3; // r4
  int v4; // r4
  int v5; // r2
  __int64 v6; // r10
  unsigned int v7; // r0
  _BYTE *v8; // r11
  int v9; // t1
  int v10; // r3
  int v11; // r9
  double v13; // d0
  __int16 v14; // r2
  double v15; // d9
  int v16; // s16
  int v17; // r6
  int v18; // r10
  int v19; // r8
  unsigned int v20; // r1
  double *v21; // r8
  double v22; // d0
  _DWORD v23[5]; // [sp+2Ch] [bp-1038h] BYREF
  unsigned __int64 v24; // [sp+40h] [bp-1024h] BYREF
  unsigned int v25; // [sp+48h] [bp-101Ch]
  unsigned __int8 v26; // [sp+4Ch] [bp-1018h]
  _BYTE v27[15]; // [sp+4Dh] [bp-1017h] BYREF
  unsigned __int8 v28; // [sp+5Ch] [bp-1008h]
  unsigned __int8 v29; // [sp+5Dh] [bp-1007h]
  unsigned __int8 v30; // [sp+5Eh] [bp-1006h]
  unsigned __int8 v31; // [sp+5Fh] [bp-1005h]
  char v32[4100]; // [sp+60h] [bp-1004h] BYREF

  v0 = (unsigned int)dword_2E8B60 > 0x62;
  if ( dword_2E8B60 != 98 )
    v0 = (unsigned int)(dword_2E8B60 - 100) > 2;
  v1 = !v0;
  if ( !v0 )
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "%s power protocal not support!", "get_power_voltage_calibration_data");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "get_power_voltage_calibration_data",
      34,
      1034,
      100,
      v32);
    return -1;
  }
  bitmain_power_read(64, (int)&v24, 32);
  v2 = v31 + (v30 << 8);
  if ( POWER_CRC16((unsigned __int8 *)&v24, 30) != v2 )
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, v1, "%s error!", "get_power_voltage_calibration_data");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "get_power_voltage_calibration_data",
      34,
      1055,
      100,
      v32);
    return -1;
  }
  v3 = bswap32(v25);
  memset(&v23[1], 0, 14);
  v23[0] = v1;
  sub_10C470((int)v23, 12, _byteswap_uint64(v24) & 0x1FFFFFFFFFFFFFFLL);
  sub_10C470((int)&v23[2] + 3, 7, __SPAIR64__(v1, v3));
  v4 = v1;
  V_LOCK();
  logfmt_raw(v32, 0x1000u, v1, "%s SN:%s", "get_power_voltage_calibration_data", v23);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    189,
    "get_power_voltage_calibration_data",
    34,
    1070,
    100,
    v32);
  v5 = (unsigned __int16)(v29 + (v28 << 8));
  v6 = 138547333LL * (unsigned __int16)(v29 + (v28 << 8));
  v7 = HIDWORD(v6) + ((unsigned int)(v5 - HIDWORD(v6)) >> 1);
  v8 = v27;
  unk_2E8B70 = v23[0];
  qword_2E8B74 = *(_QWORD *)&v23[1];
  unk_2E8B7C = v23[3];
  word_2E8B80 = v23[4];
  dword_2E8C28 = 100 * ((unsigned __int16)(v7 >> 4) % 0xCu)
               + 100
               + 10000 * ((unsigned __int16)(v29 + (v28 << 8)) / 0x174u)
               + (unsigned __int16)(v5 - 31 * (v7 >> 4))
               + 1;
  while ( 1 )
  {
    v9 = (char)*++v8;
    v10 = v4 + 1;
    if ( v9 == -128 )
      break;
    ++v4;
    if ( v10 == 14 )
    {
      v11 = 15;
      dword_2E8B84 = 15;
      v13 = 0.0;
      v14 = v27[0] + (v26 << 8);
      v15 = 18.2142857;
      v16 = v14;
      v17 = v14;
      goto LABEL_16;
    }
  }
  dword_2E8B84 = v4 + 1;
  v11 = v4 + 1;
  if ( (unsigned int)(v4 - 1) > 0xFE )
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "%s power eeprom list get error!", "get_power_voltage_calibration_data");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "get_power_voltage_calibration_data",
      34,
      1094,
      100,
      v32);
    return -1;
  }
  v16 = (__int16)(v27[0] + (v26 << 8));
  v17 = v16;
  v15 = 255.0 / (double)v4;
  v13 = v15 * 0.0;
  round();
LABEL_16:
  v18 = 3050375;
  v19 = 0;
  while ( 1 )
  {
    ++v19;
    *(_BYTE *)++v18 = (unsigned int)v13;
    if ( v19 == v11 )
      break;
    v13 = (double)v19 * v15;
    round();
  }
  sub_10B720();
  v21 = (double *)&unk_2E8BE0;
  v22 = (double)v16 / 1000.0 + v13;
  dbl_2E8BD8 = v22;
  do
  {
    v17 += (char)v27[v20 + 1];
    sub_10B720();
    v22 = (double)v17 / 1000.0 + v22;
    *v21++ = v22;
  }
  while ( v20 < v4 );
  return 0;
}
