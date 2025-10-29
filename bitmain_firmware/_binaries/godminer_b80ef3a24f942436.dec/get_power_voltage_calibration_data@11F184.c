int __fastcall get_power_voltage_calibration_data(int a1)
{
  bool v1; // cc
  int v2; // r10
  unsigned __int16 v3; // r4
  int v4; // r0
  unsigned int v5; // r4
  int v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r2
  __int64 v10; // r10
  unsigned int v11; // r0
  _BYTE *v12; // r11
  int v13; // t1
  int v14; // r3
  int v15; // r9
  int v16; // r0
  double v18; // d0
  __int16 v19; // r2
  double v20; // d9
  int v21; // s16
  int v22; // r6
  int v23; // r10
  int v24; // r8
  unsigned int v25; // r1
  double *v26; // r8
  double v27; // d0
  int v28; // r0
  int v29; // r0
  _DWORD v30[5]; // [sp+2Ch] [bp-1038h] BYREF
  unsigned __int64 v31; // [sp+40h] [bp-1024h] BYREF
  unsigned int v32; // [sp+48h] [bp-101Ch]
  unsigned __int8 v33; // [sp+4Ch] [bp-1018h]
  _BYTE v34[15]; // [sp+4Dh] [bp-1017h] BYREF
  unsigned __int8 v35; // [sp+5Ch] [bp-1008h]
  unsigned __int8 v36; // [sp+5Dh] [bp-1007h]
  unsigned __int8 v37; // [sp+5Eh] [bp-1006h]
  unsigned __int8 v38; // [sp+5Fh] [bp-1005h]
  _BYTE v39[4100]; // [sp+60h] [bp-1004h] BYREF

  v1 = (unsigned int)dword_3114D0 > 0x62;
  if ( dword_3114D0 != 98 )
    v1 = (unsigned int)(dword_3114D0 - 100) > 2;
  v2 = !v1;
  if ( !v1 )
  {
    V_LOCK(a1);
    v28 = logfmt_raw((int)v39, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "get_power_voltage_calibration_data",
      34,
      1035,
      100,
      v39);
    return -1;
  }
  bitmain_power_read(64, (int)&v31, 32);
  v3 = v38 + (v37 << 8);
  v4 = POWER_CRC16((unsigned __int8 *)&v31, 30);
  if ( v4 != v3 )
  {
    V_LOCK(v4);
    v29 = logfmt_raw((int)v39, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "get_power_voltage_calibration_data",
      34,
      1056,
      100,
      v39);
    return -1;
  }
  v5 = bswap32(v32);
  memset(&v30[1], 0, 14);
  v30[0] = v2;
  sub_11D6C8((int)v30, 12, _byteswap_uint64(v31) & 0x1FFFFFFFFFFFFFFLL);
  v6 = sub_11D6C8((int)&v30[2] + 3, 7, __SPAIR64__(v2, v5));
  v7 = v2;
  V_LOCK(v6);
  v8 = logfmt_raw((int)v39, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    189,
    "get_power_voltage_calibration_data",
    34,
    1071,
    100,
    v39);
  v9 = (unsigned __int16)(v36 + (v35 << 8));
  v10 = 138547333LL * (unsigned __int16)(v36 + (v35 << 8));
  v11 = HIDWORD(v10) + ((unsigned int)(v9 - HIDWORD(v10)) >> 1);
  v12 = v34;
  unk_3114E0 = v30[0];
  qword_3114E4 = *(_QWORD *)&v30[1];
  unk_3114EC = v30[3];
  word_3114F0 = v30[4];
  dword_311598 = 100 * ((unsigned __int16)(v11 >> 4) % 0xCu)
               + 100
               + 10000 * ((unsigned __int16)(v36 + (v35 << 8)) / 0x174u)
               + (unsigned __int16)(v9 - 31 * (v11 >> 4))
               + 1;
  while ( 1 )
  {
    v13 = (char)*++v12;
    v14 = v7 + 1;
    if ( v13 == -128 )
      break;
    ++v7;
    if ( v14 == 14 )
    {
      v15 = 15;
      dword_3114F4 = 15;
      v18 = 0.0;
      v19 = v34[0] + (v33 << 8);
      v20 = 18.2142857;
      v21 = v19;
      v22 = v19;
      goto LABEL_16;
    }
  }
  dword_3114F4 = v7 + 1;
  v15 = v7 + 1;
  if ( (unsigned int)(v7 - 1) > 0xFE )
  {
    V_LOCK(v30[0]);
    v16 = logfmt_raw((int)v39, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "get_power_voltage_calibration_data",
      34,
      1095,
      100,
      v39);
    return -1;
  }
  v21 = (__int16)(v34[0] + (v33 << 8));
  v22 = v21;
  v20 = 255.0 / (double)v7;
  v18 = v20 * 0.0;
  round();
LABEL_16:
  v23 = 3216631;
  v24 = 0;
  while ( 1 )
  {
    ++v24;
    *(_BYTE *)++v23 = (unsigned int)v18;
    if ( v24 == v15 )
      break;
    v18 = (double)v24 * v20;
    round();
  }
  sub_11C978();
  v26 = (double *)&unk_311550;
  v27 = (double)v21 / 1000.0 + v18;
  dbl_311548 = v27;
  do
  {
    v22 += (char)v34[v25 + 1];
    sub_11C978();
    v27 = (double)v22 / 1000.0 + v27;
    *v26++ = v27;
  }
  while ( v25 < v7 );
  return 0;
}
