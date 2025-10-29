int __fastcall sub_C2AB8(unsigned int *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v8; // r3
  int v10; // [sp+34h] [bp-1030h]
  char v11[4]; // [sp+3Ch] [bp-1028h] BYREF
  _DWORD v12[7]; // [sp+40h] [bp-1024h] BYREF
  int v13; // [sp+5Ch] [bp-1008h]
  char v14[4100]; // [sp+60h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(
    v14,
    0x1000u,
    0,
    "%s chain[%d] iic_addr:%d",
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_DASH_1766",
    *a1,
    a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_DASH_1766",
    57,
    1108,
    20,
    v14);
  *a3 = 0;
  v10 = tsensor_read(*a1, a4, 0, v11, 2);
  if ( v10 == 2 )
  {
    v8 = v11[0];
    *a3 = 1;
    *a2 = v8;
    V_LOCK();
    V_INT((int)v12, "chain", (int)*a1);
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v13,
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v12[6],
      v13,
      "read ctrlboard temp, local[%02x] %d",
      a4,
      *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_DASH_1766",
      57,
      1120,
      20,
      v14);
  }
  else
  {
    *a2 = -64;
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "failed to read ctrlboard-temp for chain %d", *a1);
    v10 = -1;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_DASH_1766",
      57,
      1115,
      80,
      v14);
  }
  return v10;
}
